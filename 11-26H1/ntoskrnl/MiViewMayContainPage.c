/*
 * XREFs of MiViewMayContainPage @ 0x1404C09A8
 * Callers:
 *     MiTrimSection @ 0x14045E1A0 (MiTrimSection.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x14036EDA0 (MiEndingOffsetWithLock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiViewMayContainPage(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // r15
  _QWORD *v8; // r12
  __int64 v9; // rax
  __int64 v12; // rbx
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // r14
  __int64 PoolMm; // rax
  void *v26; // rdi
  __int64 v27; // r12
  unsigned __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // [rsp+68h] [rbp+20h]

  v7 = 0LL;
  v8 = a7;
  v9 = *(_QWORD *)(a4 + 16) & 3LL;
  *a7 = 0LL;
  if ( v9 == 1 )
  {
LABEL_2:
    v12 = a4 - 104;
    v7 = *(_QWORD *)(a4 - 104 + 120) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a2 && (*(_DWORD *)a2 && *(_DWORD *)a2 != *(_DWORD *)(v7 + 464) || *(_QWORD *)(a2 + 8) == v12) )
      return 0LL;
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    {
      if ( (a3 & 0x20) != 0 )
        return 0LL;
      v13 = 0LL;
      v14 = 0LL;
    }
    else
    {
      if ( (a3 & 0x20) != 0 && (*(_DWORD *)(v12 + 48) & 0xA0) != 0x80 )
        return 0LL;
      v13 = MiStartingOffset(*(__int64 **)(v12 + 80), *(_QWORD *)(v12 + 88), 0xFFFFFFFF);
      v14 = v13
          + (((*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
            - (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32))
            + 1) << 12);
    }
    v21 = (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12;
    goto LABEL_17;
  }
  if ( a2 && *(_DWORD *)a2 )
    return 0LL;
  if ( v9 )
  {
    v15 = v9 - 1;
    if ( !v15 )
      goto LABEL_2;
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v27 = a1 + 128;
        v28 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        v29 = a1 + 128;
        v14 = 0LL;
        while ( v29 )
        {
          v36 = MiStartingOffset((__int64 *)v29, *(_QWORD *)(v29 + 8), 0xFFFFFFFF);
          v32 = MiEndingOffsetWithLock((_DWORD *)v29, v30, v31);
          if ( a5 >= v36 && a5 < v32 )
          {
            v33 = *(_QWORD *)(v29 + 8);
            v34 = v33 + 8 * ((a5 - v36) >> 12);
            if ( v34 < v33 + 8 * (unsigned __int64)*(unsigned int *)(v29 + 44)
              && ((*(_DWORD *)(v29 + 32) & 0x20000) == 0
               || (*(_DWORD *)(a1 + 56) & 8) == 0
               || (*(_DWORD *)(a1 + 56) & 0x20) == 0) )
            {
              v35 = v34 - *(_QWORD *)(v27 + 8);
              v8 = a7;
              v21 = (v35 >> 3 << 12) + v28;
              v13 = 0LL;
              goto LABEL_17;
            }
            return 0LL;
          }
          v29 = *(_QWORD *)(v29 + 16);
        }
      }
      return 0LL;
    }
    v21 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFDuLL;
    v13 = *(_QWORD *)(a4 - 48) << 12;
    v14 = v13 + *(_QWORD *)(a4 - 40);
  }
  else
  {
    v18 = *(_QWORD *)(a4 + 32);
    v13 = 4 * (v18 & 0xFFFFFFFFFFFF0000uLL);
    if ( v18 >> 62 != 3 )
      return 0LL;
    v19 = v18 & 0x3F;
    if ( v19 )
      v20 = (unsigned __int64)v19 << 12;
    else
      v20 = 0x40000LL;
    v21 = *(_QWORD *)(a4 + 16);
    v14 = v13 + v20;
  }
LABEL_17:
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
  {
    v23 = 0LL;
    v24 = v21 + 4096;
    goto LABEL_25;
  }
  if ( a5 >= v14 )
    return 0LL;
  v22 = a6;
  if ( a6 <= v13 )
    return 0LL;
  v23 = v13;
  if ( a5 >= v13 )
  {
    v23 = a5;
    v21 += a5 - v13;
  }
  if ( a6 > v14 )
    v22 = v14;
  v24 = v21 + v22 - v23;
LABEL_25:
  PoolMm = ExAllocatePoolMm(
             64LL,
             0x30uLL,
             1633053005,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  v26 = (void *)PoolMm;
  if ( PoolMm )
  {
    *(_QWORD *)(PoolMm + 16) = v21;
    *(_QWORD *)(PoolMm + 24) = v24;
    *(_QWORD *)(PoolMm + 8) = v7;
    *(_QWORD *)(PoolMm + 32) = v23;
    *(_DWORD *)(PoolMm + 40) = *(_DWORD *)(a4 + 16) & 3;
    if ( !v7 || ObReferenceObjectSafeWithTag(v7, 0x77566D4Du) )
      *v8 = v26;
    else
      ExFreePoolWithTag(v26, 0);
    return 0LL;
  }
  return 3221225626LL;
}
