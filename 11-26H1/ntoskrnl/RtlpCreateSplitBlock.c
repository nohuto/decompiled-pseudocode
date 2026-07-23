/*
 * XREFs of RtlpCreateSplitBlock @ 0x14061E464
 * Callers:
 *     RtlpAllocateHeap @ 0x1405238C8 (RtlpAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140398CE0 (DbgPrint.c)
 *     RtlpFindEntry @ 0x14052421C (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     RtlpInsertFreeBlock @ 0x14061FFC8 (RtlpInsertFreeBlock.c)
 *     RtlpAnalyzeHeapFailure @ 0x14062889C (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapAddListEntry @ 0x140629000 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x14062912C (RtlpHeapRemoveListEntry.c)
 *     RtlCompareMemoryUlong @ 0x1407359E0 (RtlCompareMemoryUlong.c)
 */

char __fastcall RtlpCreateSplitBlock(ULONG_PTR a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r14d
  ULONG_PTR v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // r12
  __int64 v14; // r13
  __int64 v15; // rax
  struct _KLOCK_ENTRIES *v16; // r9
  __int64 **v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  int v20; // ecx
  char v21; // al
  SIZE_T v22; // r14
  SIZE_T v23; // rax
  unsigned __int64 v24; // r15
  _QWORD **v25; // rdi
  _QWORD *v26; // r8
  int v27; // ecx
  int v28; // eax
  unsigned __int16 v29; // ax
  __int64 *v30; // rax
  _QWORD *v31; // rdi
  __int64 **v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  _DWORD *v35; // r8
  unsigned __int64 v36; // rdx
  _QWORD **v37; // rdi
  _QWORD *Entry; // r8
  int v39; // ecx
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 *v42; // rax
  _QWORD **v44; // rdi
  _QWORD *v45; // r8
  int v46; // ecx
  int v47; // eax
  unsigned __int16 v48; // ax
  __int64 *v49; // rax
  int v50; // r8d
  _DWORD *v51; // r8
  unsigned __int64 v52; // rdx
  _QWORD **v53; // rdi
  _QWORD *v54; // r8
  int v55; // ecx
  int v56; // eax
  unsigned __int16 v57; // ax
  __int64 *v58; // rax
  _QWORD *v59; // rdi
  __int64 **v60; // rdx
  unsigned __int64 v61; // r8
  int v62; // r8d
  int v63; // [rsp+38h] [rbp-60h]
  int v64; // [rsp+48h] [rbp-50h]
  int v65; // [rsp+58h] [rbp-40h]
  int v66; // [rsp+68h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3u, v10, a3, (struct _KLOCK_ENTRIES *)a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v11;
  v12 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v13 = *(__int64 **)(v12 + 24);
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *v13;
    v16 = *(struct _KLOCK_ENTRIES **)(v14 + 8);
    if ( (struct _KLOCK_ENTRIES *)*v13 == v16 && v15 == v12 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v12 + 8);
      v17 = *(__int64 ***)(a1 + 312);
      if ( v17 )
      {
        v18 = *(unsigned __int16 *)(v12 + 8);
        while ( 1 )
        {
          v19 = *((unsigned int *)v17 + 2);
          if ( v18 < v19 )
            break;
          if ( !*v17 )
          {
            v20 = v19 - 1;
            goto LABEL_21;
          }
          v17 = (__int64 **)*v17;
        }
        v20 = *(unsigned __int16 *)(v12 + 8);
LABEL_21:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v18, v12 + 16, v20, *(unsigned __int16 *)(v12 + 8));
      }
      *v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      if ( a5 )
      {
        v21 = *(_BYTE *)(v12 + 10);
        if ( (v21 & 4) != 0 )
        {
          v22 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
          if ( (v21 & 2) != 0 && v22 > 4 )
            v22 = 16LL * *(unsigned __int16 *)(v12 + 8) - 36;
          v23 = RtlCompareMemoryUlong((PVOID)(v12 + 32), v22, 0xFEEEFEEE);
          if ( v23 != v22 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(a3 + 16 * a7),
              (const void *)(v23 + v12 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(a3 + 10) = *(_BYTE *)(v12 + 10);
      v24 = *(unsigned __int16 *)(v12 + 8) + a7;
      if ( v24 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, a3, v24);
        return 1;
      }
      *(_WORD *)(a3 + 8) = v24;
      *(_WORD *)(a3 + 16 * v24 + 12) = *(_WORD *)(a1 + 140) ^ v24;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          v35 = (_DWORD *)(a3 + 32);
          v36 = (16 * (unsigned __int64)(unsigned __int16)v24 - 32) >> 2;
          if ( v36 )
          {
            if ( ((unsigned __int8)v35 & 4) != 0 )
            {
              --v36;
              *v35 = -17891602;
              v35 = (_DWORD *)(a3 + 36);
            }
            memset64(v35, 0xFEEEFEEEFEEEFEEEuLL, v36 >> 1);
            if ( (v36 & 1) != 0 )
              v35[v36 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v37 = (_QWORD **)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = RtlpFindEntry(a1, (unsigned __int16)v24);
        else
          Entry = *v37;
        if ( v37 != Entry )
        {
          v39 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v39 )
            {
              v40 = *((_DWORD *)Entry - 2);
              v39 = *(_DWORD *)(a1 + 124);
              LOWORD(v64) = v40;
              if ( (v40 & v39) != 0 )
                v64 = *(_DWORD *)(a1 + 136) ^ v40;
              v41 = v64;
            }
            else
            {
              v41 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v24 <= (unsigned __int64)v41 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v37 != Entry );
        }
        v42 = (__int64 *)Entry[1];
        v31 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v42 == Entry )
        {
          *v31 = Entry;
          *(_QWORD *)(a3 + 24) = v42;
          *v42 = (__int64)v31;
          Entry[1] = v31;
        }
        else
        {
          RtlpLogHeapFailure(0xDu, 0LL, (__int64)Entry, 0LL, *v42, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v32 = *(__int64 ***)(a1 + 312);
        if ( v32 )
        {
          v33 = *(unsigned __int16 *)(a3 + 8);
          while ( 1 )
          {
            v34 = *((unsigned int *)v32 + 2);
            if ( v33 < v34 )
              goto LABEL_103;
            if ( !*v32 )
              goto LABEL_102;
            v32 = (__int64 **)*v32;
          }
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v25 = (_QWORD **)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v26 = RtlpFindEntry(a1, (unsigned __int16)v24);
        else
          v26 = *v25;
        if ( v25 != v26 )
        {
          v27 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v27 )
            {
              v28 = *((_DWORD *)v26 - 2);
              v27 = *(_DWORD *)(a1 + 124);
              LOWORD(v63) = v28;
              if ( (v28 & v27) != 0 )
                v63 = *(_DWORD *)(a1 + 136) ^ v28;
              v29 = v63;
            }
            else
            {
              v29 = *((_WORD *)v26 - 4);
            }
            if ( (unsigned __int16)v24 <= (unsigned __int64)v29 )
              break;
            v26 = (_QWORD *)*v26;
          }
          while ( v25 != v26 );
        }
        v30 = (__int64 *)v26[1];
        v31 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v30 == v26 )
        {
          *v31 = v26;
          *(_QWORD *)(a3 + 24) = v30;
          *v30 = (__int64)v31;
          v26[1] = v31;
        }
        else
        {
          RtlpLogHeapFailure(0xDu, 0LL, (__int64)v26, 0LL, *v30, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v32 = *(__int64 ***)(a1 + 312);
        if ( v32 )
        {
          v33 = *(unsigned __int16 *)(a3 + 8);
          while ( 1 )
          {
            v34 = *((unsigned int *)v32 + 2);
            if ( v33 < v34 )
              goto LABEL_103;
            if ( !*v32 )
              goto LABEL_102;
            v32 = (__int64 **)*v32;
          }
        }
      }
      goto LABEL_105;
    }
    RtlpLogHeapFailure(0xDu, a1, v12 + 16, v16, v15, 0LL);
    if ( v7 )
      return 0;
    v7 = 1;
  }
  *(_WORD *)(v12 + 12) = *(_WORD *)(a1 + 140) ^ a7;
  *(_BYTE *)(a3 + 15) = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a3 + 10) = 0;
    v44 = (_QWORD **)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v45 = RtlpFindEntry(a1, (unsigned __int16)a7);
    else
      v45 = *v44;
    if ( v44 != v45 )
    {
      v46 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v46 )
        {
          v47 = *((_DWORD *)v45 - 2);
          v46 = *(_DWORD *)(a1 + 124);
          LOWORD(v65) = v47;
          if ( (v46 & v47) != 0 )
            v65 = *(_DWORD *)(a1 + 136) ^ v47;
          v48 = v65;
        }
        else
        {
          v48 = *((_WORD *)v45 - 4);
        }
        if ( (unsigned __int16)a7 <= (unsigned __int64)v48 )
          break;
        v45 = (_QWORD *)*v45;
      }
      while ( v44 != v45 );
    }
    v49 = (__int64 *)v45[1];
    v31 = (_QWORD *)(a3 + 16);
    if ( (_QWORD *)*v49 == v45 )
    {
      *v31 = v45;
      *(_QWORD *)(a3 + 24) = v49;
      *v49 = (__int64)v31;
      v45[1] = v31;
    }
    else
    {
      RtlpLogHeapFailure(0xDu, 0LL, (__int64)v45, 0LL, *v49, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
    v32 = *(__int64 ***)(a1 + 312);
    if ( v32 )
    {
      v33 = *(unsigned __int16 *)(a3 + 8);
      while ( 1 )
      {
        v34 = *((unsigned int *)v32 + 2);
        if ( v33 < v34 )
          break;
        if ( !*v32 )
        {
LABEL_102:
          v50 = v34 - 1;
          goto LABEL_104;
        }
        v32 = (__int64 **)*v32;
      }
LABEL_103:
      v50 = v33;
LABEL_104:
      RtlpHeapAddListEntry(a1, (_DWORD)v32, v50, (_DWORD)v31, v50, v33);
    }
LABEL_105:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 1;
  }
  *(_BYTE *)(a3 + 10) &= 0xF0u;
  if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
  {
    v51 = (_DWORD *)(a3 + 32);
    v52 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
    if ( v52 )
    {
      if ( ((unsigned __int8)v51 & 4) != 0 )
      {
        --v52;
        *v51 = -17891602;
        v51 = (_DWORD *)(a3 + 36);
      }
      memset64(v51, 0xFEEEFEEEFEEEFEEEuLL, v52 >> 1);
      if ( (v52 & 1) != 0 )
        v51[v52 - 1] = -17891602;
    }
    *(_BYTE *)(a3 + 10) |= 4u;
  }
  v53 = (_QWORD **)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v54 = RtlpFindEntry(a1, (unsigned __int16)a7);
  else
    v54 = *v53;
  if ( v53 != v54 )
  {
    v55 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v55 )
      {
        v56 = *((_DWORD *)v54 - 2);
        v55 = *(_DWORD *)(a1 + 124);
        LOWORD(v66) = v56;
        if ( (v56 & v55) != 0 )
          v66 = *(_DWORD *)(a1 + 136) ^ v56;
        v57 = v66;
      }
      else
      {
        v57 = *((_WORD *)v54 - 4);
      }
      if ( (unsigned __int16)a7 <= (unsigned __int64)v57 )
        break;
      v54 = (_QWORD *)*v54;
    }
    while ( v53 != v54 );
  }
  v58 = (__int64 *)v54[1];
  v59 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)*v58 == v54 )
  {
    *v59 = v54;
    *(_QWORD *)(a3 + 24) = v58;
    *v58 = (__int64)v59;
    v54[1] = v59;
  }
  else
  {
    RtlpLogHeapFailure(0xDu, 0LL, (__int64)v54, 0LL, *v58, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
  v60 = *(__int64 ***)(a1 + 312);
  if ( v60 )
  {
    while ( 1 )
    {
      v61 = *((unsigned int *)v60 + 2);
      if ( *(unsigned __int16 *)(a3 + 8) < v61 )
        break;
      if ( !*v60 )
      {
        v62 = v61 - 1;
        goto LABEL_135;
      }
      v60 = (__int64 **)*v60;
    }
    v62 = *(unsigned __int16 *)(a3 + 8);
LABEL_135:
    RtlpHeapAddListEntry(a1, (_DWORD)v60, v62, a3 + 16, v62, *(unsigned __int16 *)(a3 + 8));
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
    *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
