/*
 * XREFs of MiProcessCrcList @ 0x140A67C40
 * Callers:
 *     MiCombineWorkingSet @ 0x140709248 (MiCombineWorkingSet.c)
 *     MiCombineWorkingSetTail @ 0x140709450 (MiCombineWorkingSetTail.c)
 *     MiCombineAllPhysicalMemory @ 0x140880C48 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiSharePages @ 0x1402E9008 (MiSharePages.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiValidCombineProtection @ 0x1404480D0 (MiValidCombineProtection.c)
 *     MiCompareActiveCrcEntries @ 0x14045A770 (MiCompareActiveCrcEntries.c)
 *     MiLocateCombineBlock @ 0x140463060 (MiLocateCombineBlock.c)
 *     MiCapturePfnVm @ 0x14050D140 (MiCapturePfnVm.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiProcessCrcList(__int64 a1, void *a2, size_t a3, int a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r15
  int v7; // edi
  __int64 v8; // r13
  struct _KTHREAD *CurrentThread; // rcx
  __int64 *v10; // r10
  size_t v11; // r8
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  const __m128i *v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r11
  int v21; // r12d
  unsigned __int64 v22; // rsi
  int v23; // ecx
  _QWORD *v24; // rbx
  int CurrentProcessorColor; // eax
  __int64 PoolMm; // rax
  bool v27; // r8
  _QWORD *v28; // rdx
  _QWORD *v29; // rax
  size_t v30; // r8
  __int64 *v31; // r14
  int v32; // eax
  __int64 v33; // r8
  _QWORD *v34; // rax
  __int64 v35; // rdx
  _QWORD *j; // rcx
  _QWORD *i; // rax
  _QWORD **v38; // rax
  _QWORD *v39; // r8
  _QWORD *v40; // r8
  size_t v41; // r13
  size_t v42; // rbx
  __int64 *v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // rdx
  _QWORD *k; // rbx
  _QWORD *v47; // rax
  size_t m; // rsi
  size_t n; // rdx
  _QWORD *v50; // r8
  void *v51; // rcx
  PVOID P; // [rsp+30h] [rbp-98h] BYREF
  size_t NumOfElements; // [rsp+38h] [rbp-90h]
  __int64 v54; // [rsp+40h] [rbp-88h]
  struct _KTHREAD *v55; // [rsp+50h] [rbp-78h]
  PVOID Object[2]; // [rsp+58h] [rbp-70h] BYREF
  __int128 v57; // [rsp+68h] [rbp-60h]
  unsigned int v60; // [rsp+E0h] [rbp+18h]

  if ( a3 )
  {
    v5 = (unsigned __int64)a2;
    v6 = *(_QWORD *)a1;
    v7 = a4;
    v8 = *(_QWORD *)(a1 + 8);
    v60 = *(_DWORD *)(a1 + 140);
    v54 = *(_QWORD *)a1;
    *(_OWORD *)Object = 0LL;
    v57 = 0LL;
    P = 0LL;
    qsort(a2, a3, 0x28uLL, (int (__cdecl *)(const void *, const void *))MiCombinePageSortByHash);
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    v55 = CurrentThread;
    NumOfElements = 0LL;
    v11 = 0LL;
    if ( v5 > v5 + 40 * (a3 - 1) )
      goto LABEL_42;
    v12 = v5 + 8;
    v13 = v5 + 40 * (a3 - 1);
    do
    {
      if ( v8 && *(_DWORD *)(v8 + 4) || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
        break;
      v14 = (const __m128i *)(48LL * *(_QWORD *)(v12 + 8) - 0x220000000000LL);
      v15 = (unsigned __int64)v14[1].m128i_i64[0] >> 5;
      v16 = v14->m128i_i64[1] | 0x8000000000000000uLL;
      v17 = v15 & 0x1F;
      if ( !MiValidCombineProtection(v17) || v16 < v19 || v16 > v20 )
      {
        *(_QWORD *)v12 = v10;
        goto LABEL_40;
      }
      if ( (v12 - 8 == v13 || *(_QWORD *)v12 != *(_QWORD *)(v12 + 40)) && (v12 - 8 == v5 || *(_QWORD *)v12 != v18) )
      {
        if ( !MiLocateCombineBlock(v54, *(_QWORD *)v12, v17, 0, v10) )
        {
          v11 = NumOfElements;
          v10 = 0LL;
          *(_QWORD *)v12 = 0LL;
          goto LABEL_40;
        }
        v21 = 2;
      }
      else
      {
        v21 = 1;
        if ( (v14[2].m128i_i32[0] & 0xC00000) == 0xC00000 )
        {
          *(_QWORD *)v12 = v10;
          goto LABEL_39;
        }
      }
      v22 = MiCapturePfnVm(a1, v14, v60, *(_QWORD *)v12, (__int64)Object);
      if ( !v22 || Object[1] != (PVOID)v16 || (_DWORD)v57 != v17 )
        goto LABEL_95;
      v23 = v15 & 0x1F ^ *(_DWORD *)(v12 + 24) & 0xFFFFFFC0;
      *(_QWORD *)(v12 + 16) = *((_QWORD *)&v57 + 1);
      v24 = P;
      *(_DWORD *)(v12 + 24) = v23;
      while ( v24 )
      {
        if ( v22 < v24[4] )
        {
          v24 = (_QWORD *)*v24;
        }
        else
        {
          if ( v22 <= v24[4] )
          {
            if ( Object[0] )
              ObfDereferenceObjectWithTag(Object[0], 0x62436D4Du);
            goto LABEL_36;
          }
          v24 = (_QWORD *)v24[1];
        }
      }
      CurrentProcessorColor = MmGetCurrentProcessorColor();
      PoolMm = ExAllocatePoolMm(64LL, 0x38uLL, 1834379597, CurrentProcessorColor | 0x80000000);
      v24 = (_QWORD *)PoolMm;
      if ( !PoolMm )
      {
LABEL_95:
        if ( Object[0] )
          ObfDereferenceObjectWithTag(Object[0], 0x62436D4Du);
        v11 = NumOfElements;
        v10 = 0LL;
        *(_QWORD *)v12 = 0LL;
        goto LABEL_39;
      }
      *(_QWORD *)(PoolMm + 32) = v22;
      v27 = 0;
      *(PVOID *)(PoolMm + 40) = Object[0];
      v28 = P;
      if ( !P )
        goto LABEL_35;
      while ( v22 < (unsigned __int64)(v28 + 4) )
      {
        v29 = (_QWORD *)*v28;
        if ( !*v28 )
          goto LABEL_35;
LABEL_29:
        v28 = v29;
      }
      v29 = (_QWORD *)v28[1];
      if ( v29 )
        goto LABEL_29;
      v27 = 1;
LABEL_35:
      RtlAvlInsertNodeEx((unsigned __int64 *)&P, (unsigned __int64)v28, v27, v24);
LABEL_36:
      v30 = NumOfElements;
      *(_QWORD *)(v12 - 8) = v24[6];
      v11 = v30 + 1;
      ++v24[3];
      v24[6] = v12 - 8;
      NumOfElements = v11;
      *(_QWORD *)(v12 + 8) = (__int64)(v16 << 25) >> 16;
      if ( v21 == 2 )
        *(_DWORD *)(v12 + 24) |= 0x20u;
      v10 = 0LL;
LABEL_39:
      v5 = (unsigned __int64)a2;
LABEL_40:
      v12 += 40LL;
      CurrentThread = v55;
    }
    while ( v12 - 8 <= v13 );
    v7 = a4;
    v6 = v54;
LABEL_42:
    v31 = v10;
    if ( v11 )
    {
      v32 = MmGetCurrentProcessorColor();
      v31 = (__int64 *)ExAllocatePoolMm(256LL, 8 * v33, 1834379597, v32 | 0x80000000);
      if ( v31 )
      {
        v34 = P;
        v35 = 0LL;
        j = 0LL;
        if ( P )
        {
          do
          {
            j = v34;
            v34 = (_QWORD *)*v34;
          }
          while ( v34 );
        }
        while ( j )
        {
          for ( i = (_QWORD *)j[6]; i; ++v35 )
          {
            if ( i[1] )
              v31[v35] = (__int64)i;
            i = (_QWORD *)*i;
          }
          v38 = (_QWORD **)j[1];
          v39 = j;
          if ( v38 )
          {
            v40 = *v38;
            for ( j = (_QWORD *)j[1]; v40; v40 = (_QWORD *)*v40 )
              j = v40;
          }
          else
          {
            for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*j == v39 )
                break;
              v39 = j;
            }
          }
        }
        v41 = NumOfElements;
        qsort(v31, NumOfElements, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByHash);
        v42 = 0LL;
        if ( v41 )
        {
          v43 = v31 + 1;
          while ( 1 )
          {
            v44 = *(v43 - 1);
            if ( (*(_DWORD *)(v44 + 32) & 0x20) == 0 )
              break;
            if ( !MiLocateCombineBlock(v6, *(_QWORD *)(v44 + 8), *(_DWORD *)(v44 + 32) & 0x1F, 0, (_QWORD *)(v44 + 24)) )
              goto LABEL_92;
LABEL_66:
            ++v42;
            ++v43;
            if ( v42 >= v41 )
              goto LABEL_67;
          }
          if ( v42 )
          {
            v45 = *(v43 - 2);
            if ( *(_QWORD *)(v45 + 16) != -1LL && !(unsigned int)MiCompareActiveCrcEntries(*(v43 - 1), v45) )
              goto LABEL_66;
          }
          if ( v42 != v41 - 1 && *(_QWORD *)(*v43 + 16) != -1LL && !(unsigned int)MiCompareActiveCrcEntries(v44, *v43) )
            goto LABEL_66;
LABEL_92:
          *(_QWORD *)(v44 + 16) = -1LL;
          goto LABEL_66;
        }
      }
    }
LABEL_67:
    for ( k = P; P; k = P )
    {
      RtlAvlRemoveNode((unsigned __int64 *)&P, (__int64)k);
      if ( v31 )
      {
        v47 = (_QWORD *)k[6];
        for ( m = 0LL; v47; v47 = (_QWORD *)*v47 )
        {
          if ( v47[2] == -1LL )
            --k[3];
          else
            v31[m++] = (__int64)v47;
        }
        qsort(v31, m, 8uLL, (int (__cdecl *)(const void *, const void *))MiCombineActiveCrcSortByVa);
        k[6] = 0LL;
        for ( n = 0LL; n < m; ++n )
        {
          v50 = (_QWORD *)v31[n];
          if ( n && v50[2] == *(_QWORD *)(v31[n - 1] + 16) )
          {
            --k[3];
          }
          else
          {
            *v50 = k[6];
            k[6] = v50;
          }
        }
        if ( k[3] )
        {
          *(_QWORD *)(a1 + 112) = k[4];
          MiSharePages(a1, (__int64)k, v7);
        }
      }
      v51 = (void *)k[5];
      if ( v51 )
        ObfDereferenceObjectWithTag(v51, 0x62436D4Du);
      ExFreePoolWithTag(k, 0);
    }
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
  }
}
