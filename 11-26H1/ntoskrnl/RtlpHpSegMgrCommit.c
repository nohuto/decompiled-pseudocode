/*
 * XREFs of RtlpHpSegMgrCommit @ 0x140350BD0
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140350500 (RtlpHpSegMgrRelease.c)
 *     RtlpHpSegPageRangeCommit @ 0x140350650 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegMgrAllocate @ 0x1403519C8 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403527A0 (RtlCSparseBitmapFindBitSetCapped.c)
 *     RtlpHpSegHeapCheckCommitLimit @ 0x140354258 (RtlpHpSegHeapCheckCommitLimit.c)
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140468900 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpLogHeapFailure @ 0x140524308 (RtlpLogHeapFailure.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpSegMgrCommit(int *a1, unsigned __int64 a2, unsigned int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r13d
  unsigned __int64 v9; // rsi
  int v10; // r14d
  volatile signed __int16 *v12; // rdx
  unsigned int v13; // r14d
  unsigned __int64 v16; // rbx
  char *v17; // rcx
  char *v18; // rcx
  int v19; // r8d
  unsigned int v20; // r14d
  void *v21; // rbx
  size_t v22; // rsi
  unsigned __int64 v23; // rdi
  volatile signed __int16 *v24; // r15
  size_t i; // rdi
  int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // eax
  bool v30; // zf
  int v31; // ebx
  unsigned __int64 v32; // rax
  int v33; // eax
  unsigned __int64 v34; // rbx
  char *v35; // rbx
  __int64 v36; // rax
  __int64 j; // rdx
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 v40; // rcx
  size_t v41; // rax
  unsigned __int64 v42; // r14
  size_t v43; // rdi
  char *v44; // r15
  __int64 v45; // rsi
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rbx
  int v48; // r11d
  size_t v49; // r10
  unsigned __int64 v50; // r9
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rdx
  unsigned __int16 v54; // r9
  signed __int16 v55; // ax
  signed __int16 v56; // tt
  unsigned __int64 v57; // rcx
  signed __int16 v58; // ax
  signed __int16 v59; // cx
  signed __int16 v60; // r9
  __int16 v61; // dx
  signed __int16 v62; // tt
  unsigned __int8 v63; // [rsp+30h] [rbp-51h] BYREF
  int v64; // [rsp+34h] [rbp-4Dh]
  unsigned int v65; // [rsp+38h] [rbp-49h]
  unsigned __int64 v66; // [rsp+40h] [rbp-41h] BYREF
  __int64 v67; // [rsp+48h] [rbp-39h] BYREF
  size_t Size; // [rsp+50h] [rbp-31h]
  int v69; // [rsp+58h] [rbp-29h]
  volatile signed __int16 *v70; // [rsp+60h] [rbp-21h]
  LONG SpinLock[2]; // [rsp+68h] [rbp-19h] BYREF
  void *v72; // [rsp+70h] [rbp-11h]
  unsigned __int64 v73; // [rsp+80h] [rbp-1h] BYREF
  size_t v74; // [rsp+88h] [rbp+7h] BYREF
  __int128 v75; // [rsp+90h] [rbp+Fh] BYREF

  v8 = a5;
  v9 = a3;
  v63 = 0;
  v10 = *a1;
  v12 = 0LL;
  v69 = a6 & 0x40000000;
  v13 = -v10;
  *(_QWORD *)SpinLock = 0LL;
  v65 = a6 & 0xBFFFFFFF;
  if ( a5 > 0 )
  {
    if ( !(unsigned int)RtlpHpSegHeapCheckCommitLimit(a5 << 12, *((_QWORD *)a1 + 7)) )
      return 3221225773LL;
    v12 = 0LL;
  }
  if ( (*((_BYTE *)a1 + 13) & 7) == 0 )
  {
    v19 = a7;
    v64 = a7;
    goto LABEL_19;
  }
  v16 = ((a2 & 0xFFFFFFFFFFE00000uLL) - (unsigned __int64)ExpUuidLock.ApcState.ApcListHead[0].Flink) >> 20;
  v66 = a2 & 0xFFFFFFFFFFE00000uLL;
  if ( RtlCSparseBitmapFindBitSetCapped(
         &ExpUuidLock.ApcStateFill[24],
         8 * (v16 << ExpUuidLock.ApcStateFill[16]),
         8 * (1LL << ExpUuidLock.ApcStateFill[16])) == -1
    || (v17 = (char *)ExpUuidLock.ApcState.Process + (v16 << ExpUuidLock.ApcStateFill[16])) == 0LL )
  {
    RtlpLogHeapFailure(22, a2 & 0xFFE00000, 0, 0, 0LL, 0LL);
    v18 = 0LL;
  }
  else
  {
    v18 = v17 + 8;
  }
  if ( a5 <= 0 || (_DWORD)v9 || v13 >= 0x200000 || a2 <= v66 )
  {
    v19 = a7;
    v64 = a7;
    goto LABEL_17;
  }
  v19 = a7;
  v64 = a7;
  if ( (a7 & 2) != 0 )
  {
LABEL_17:
    v12 = (volatile signed __int16 *)&v18[2 * (v9 >> 9)];
    goto LABEL_19;
  }
  v19 = a7 | 1;
  v64 = a7 | 1;
  v12 = (volatile signed __int16 *)&v18[2 * (v9 >> 9)];
LABEL_19:
  v20 = v65;
  v21 = (void *)(a2 + (unsigned int)((_DWORD)v9 << 12));
  v22 = (unsigned int)(a4 << 12);
  v23 = (unsigned __int64)v21;
  v70 = v12;
  v24 = v12;
  v72 = v21;
  Size = v22;
  v66 = (unsigned __int64)v21;
  v67 = v22;
  if ( !v12 )
    goto LABEL_26;
  for ( i = (unsigned int)v22; ; v67 = i )
  {
    v26 = RtlpHpSegMgrCommitInitiate((int)a1, (int)v24, v8, v19, SpinLock, (__int64)&v63);
    if ( v26 == -1073741568 )
      break;
    v23 = v66;
    if ( v26 == -1073741566 )
    {
      v23 = v66 & 0xFFFFFFFFFFE00000uLL;
      v22 = 0x200000LL;
      v66 &= 0xFFFFFFFFFFE00000uLL;
      v67 = 0x200000LL;
      if ( v8 <= 0 )
        goto LABEL_36;
      v20 |= 0x20000000u;
    }
    else
    {
      v22 = v67;
LABEL_26:
      if ( v8 <= 0 )
      {
LABEL_36:
        v75 = *(_OWORD *)(a1 + 10);
        if ( v20 == 0x8000 )
        {
          v32 = (v23 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
          v66 = v32;
          v67 = v22 + v23 - v32;
          if ( v22 + v23 != v32 )
            RtlpHpVaMgrCtxFree(&ExpUuidLock.TrapFrame, &v66, &v67);
          v33 = 0;
        }
        else if ( (unsigned __int8)(BYTE1(v75) - 2) > 2u )
        {
          v33 = MmFreePoolMemory(&v66, &v67, v20);
        }
        else
        {
          v34 = (v23 - (unsigned __int64)ExpUuidLock.ApcState.ApcListHead[0].Flink) >> 20;
          if ( RtlCSparseBitmapFindBitSetCapped(
                 &ExpUuidLock.ApcStateFill[24],
                 8 * (v34 << ExpUuidLock.ApcStateFill[16]),
                 8 * (1LL << ExpUuidLock.ApcStateFill[16])) == -1 )
            v35 = 0LL;
          else
            v35 = (char *)ExpUuidLock.ApcState.Process + (v34 << ExpUuidLock.ApcStateFill[16]);
          v36 = (unsigned __int8)v35[1];
          v73 = v23;
          v74 = v22;
          for ( j = 48 * v36; (*v35 & 2) != 0; v35 -= 32 )
            ;
          v38 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)byte_140E68F76[j] >> 1) & 7];
          if ( (unsigned int)v38 <= 0x100000 )
          {
            if ( (unsigned int)v38 < 0x10000 )
              v38 = 0x10000LL;
            v39 = (unsigned int)v38;
            v40 = ~(v38 - 1);
            v41 = v40 & (v22 + v23);
            v42 = v40 & (v23 + v39 - 1);
            v43 = v41 - v42;
            v73 = v42;
            if ( v41 <= v42 )
              v43 = 0LL;
            v74 = v43;
            if ( v43 )
            {
              if ( (*v35 & 4) != 0 )
                goto LABEL_71;
              v44 = (char *)&unk_140E68F60 + j;
              v45 = *(_QWORD *)((char *)&unk_140E68F60 + j);
              v46 = (v42 - *(_QWORD *)(v45 + 8)) >> 20;
              v47 = RtlCSparseBitmapFindBitSetCapped(
                      v45 + 32,
                      8 * (v46 << *(_DWORD *)(v45 + 24)),
                      8 * (1LL << *(_DWORD *)(v45 + 24))) == -1
                  ? 0LL
                  : *(_QWORD *)(v45 + 40) + (v46 << *(_DWORD *)(v45 + 24));
              v48 = 0;
              v49 = v43;
              v50 = v42;
              do
              {
                v51 = *(_QWORD *)(*(_QWORD *)v44 + 8LL)
                    + ((v47 - *(_QWORD *)(*(_QWORD *)v44 + 40LL)) >> *(_DWORD *)(*(_QWORD *)v44 + 24LL) << 20);
                v52 = v51 + 0x100000;
                if ( v50 + v49 <= v51 || v52 <= v50 )
                {
                  BYTE2(v51) = 0;
                  v53 = 0LL;
                }
                else
                {
                  if ( v50 > v51 )
                    v51 = v50;
                  if ( v50 + v49 < v52 )
                    v52 = v50 + v49;
                  v53 = v52 - v51;
                }
                v54 = ((1 << SBYTE2(v53)) - 1) << (BYTE2(v51) & 0xF);
                _m_prefetchw((const void *)(v47 + 2));
                v55 = *(_WORD *)(v47 + 2);
                do
                {
                  v56 = v55;
                  v55 = _InterlockedCompareExchange16((volatile signed __int16 *)(v47 + 2), ~v54 & v55, v55);
                }
                while ( v56 != v55 );
                if ( ((unsigned __int16)v55 & v54) != 0 )
                  v48 = 2;
                v42 += v53;
                v43 -= v53;
                v47 += 32LL;
                v49 = v43;
                v50 = v42;
              }
              while ( v43 );
              v8 = a5;
              if ( v48 == 2 )
LABEL_71:
                MmFreePoolMemory(&v73, &v74, 0x4000LL);
            }
            v20 = v65;
          }
          v24 = v70;
          v33 = 0;
        }
        v31 = v33;
        i = Size;
        goto LABEL_76;
      }
    }
    v27 = v69;
    if ( v69 && (v20 & 0x20000000) == 0 )
      v20 |= 0x40000000u;
    v75 = *(_OWORD *)(a1 + 10);
    v28 = 64;
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 7) + 20LL) & 0x40000000) == 0 )
      v28 = 4;
    v29 = RtlpHpAllocVA((unsigned int)&v66, (unsigned int)&v67, 0, v20, v28, (__int64)&v75);
    v30 = v27 == 0;
    v31 = v29;
    i = Size;
    if ( !v30 && v29 >= 0 && (v20 & 0x40000000) == 0 )
      memset_0(v72, 0, Size);
LABEL_76:
    if ( !v24 )
      return (unsigned int)v31;
    if ( (*v24 & 0x4000) != 0 && v31 >= 0 )
    {
      v57 = 1LL;
      if ( v8 <= 0 )
        v57 = -1LL;
      _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10) + 8), v57);
      _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v8);
    }
    v58 = *v24;
    while ( 1 )
    {
      v59 = v58;
      v60 = v58;
      if ( (v58 & 0x4000) != 0 )
      {
        if ( v31 < 0 || v8 <= 0 )
          v61 = 0;
        else
          v61 = 0x8000;
        v59 = v61 | v58 & 0x3FFF;
      }
      if ( v8 <= 0 )
      {
        v59 += v8;
      }
      else if ( v31 < 0 )
      {
        v59 -= v8;
      }
      if ( v59 == v58 )
        break;
      v62 = v58;
      v58 = _InterlockedCompareExchange16(v24, v59, v58);
      if ( v62 == v58 )
      {
        if ( (v60 & 0x4000) != 0 )
          RtlpHpReleaseLockExclusive((struct _KTHREAD *)SpinLock, a1[10] & 1, v63);
        break;
      }
    }
    if ( (v20 & 0x20000000) == 0 || v31 >= 0 || (v64 & 2) != 0 )
      return (unsigned int)v31;
    v21 = v72;
    v19 = v64 | 1;
    v20 &= ~0x20000000u;
    v64 |= 1u;
    v65 = v20;
    v66 = (unsigned __int64)v72;
  }
  _InterlockedAdd64((volatile signed __int64 *)((char *)a1 + *((__int16 *)a1 + 10)), v8);
  if ( v69 )
    memset_0(v21, 0, i);
  return 0LL;
}
