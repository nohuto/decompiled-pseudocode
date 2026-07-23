/*
 * XREFs of MiInsertCachedPte @ 0x140281740
 * Callers:
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x1402519A0 (MiIssueFlushTbEntire.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     MiEmptyPteBins @ 0x140360F30 (MiEmptyPteBins.c)
 *     MiMakeLinkedListPte @ 0x1403675E4 (MiMakeLinkedListPte.c)
 */

__int64 __fastcall MiInsertCachedPte(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v5; // rbx
  unsigned int v6; // r15d
  __int64 v7; // r11
  signed __int64 v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  unsigned int v12; // edi
  volatile signed __int64 *v13; // r9
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rbx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  volatile signed __int32 *MmInternal; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned int v28; // r8d
  unsigned __int64 v29; // rax
  __int64 v30; // r10
  __int64 v31; // r11
  struct _KTHREAD *CurrentThread; // rcx
  signed __int32 v33[8]; // [rsp+0h] [rbp-78h] BYREF
  volatile signed __int64 *v34; // [rsp+20h] [rbp-58h]
  struct _KTHREAD *v35; // [rsp+28h] [rbp-50h]
  unsigned __int64 v36; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-40h]
  unsigned __int64 v39; // [rsp+98h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned int)a3;
  a3 = (unsigned int)a3;
  v37 = (unsigned int)a3;
  v39 = v3;
  v6 = (unsigned int)a3 >= 0x200;
  v7 = a1;
  LOWORD(v8) = 0;
  v9 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v6 = 2;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v39 = v3;
    if ( (unsigned int)a3 > (4096 - ((unsigned __int16)a2 & 0xFFFu)) >> 3 )
      return 0LL;
  }
  if ( a2 == (unsigned __int64 *)v3 )
    return 0LL;
  if ( (_DWORD)a3 == 1 )
  {
    v10 = 4LL;
  }
  else
  {
    v23 = (unsigned int)CLFS_LSN_NULL_EXT | ((unsigned __int64)(unsigned int)a3 << 32);
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v23) != 0 )
        v23 |= 0x10uLL;
      else
        v23 |= qword_140E2D8C0;
    }
    if ( v6 == 2 )
      v23 = v23 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
    a2[1] = v23;
    v10 = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 80)
      + 72
      * (KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]
       + (unsigned __int64)(v6 * (unsigned __int16)KeNumberNodes));
  _InterlockedOr(v33, 0);
  v12 = (unsigned __int16)KiTbFlushTimeStamp;
  if ( !(_WORD)KiTbFlushTimeStamp )
  {
    do
    {
      MiIssueFlushTbEntire(0LL, (volatile _KAFFINITY_EX *)1, a3);
      _InterlockedOr(v33, 0);
      v12 = (unsigned __int16)KiTbFlushTimeStamp;
    }
    while ( !(_WORD)KiTbFlushTimeStamp );
    v3 = v39;
    a3 = v5;
    v7 = a1;
  }
  v13 = (volatile signed __int64 *)(v11 + 8LL * (v12 & 7));
  v34 = v13;
  if ( v6 != 2 )
    goto LABEL_7;
  v26 = *(_QWORD *)(v11 + 64);
  v27 = v26 + a3;
  if ( v26 <= 0 )
    v27 = a3;
  if ( v27 >= 0x80 )
  {
    MiEmptyPteBins(v7, 0LL, 5LL);
    if ( (_DWORD)v5 != 1 )
    {
      v24 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
      if ( qword_140E2D8C0 )
      {
        v25 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC0FuLL | 0x210;
        if ( (qword_140E2D8C0 & v24) == 0 )
          v25 = qword_140E2D8C0 | *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFE1FuLL | 0x200;
        v24 = v25;
      }
      a2[1] = v24;
    }
    return 0LL;
  }
  if ( v27 >= 0x40 )
  {
    MiEmptyPteBins(v7, 0LL, 4LL);
    v13 = v34;
    v3 = v39;
    v7 = a1;
  }
LABEL_7:
  v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0x8000000000FFFFFFuLL | ((unsigned __int64)v12 << 24);
  v15 = v12;
  if ( qword_140E2D8C0 )
  {
    if ( (qword_140E2D8C0 & v14) != 0 )
      v14 |= 0x10uLL;
    else
      v14 |= qword_140E2D8C0;
  }
  v16 = *a2;
  if ( v6 == 2 )
    v14 = v14 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
  *a2 = v10 | v14 & 0xFFFFFFFFFFFFFFFBuLL;
LABEL_13:
  v17 = *v13;
  do
  {
    while ( 1 )
    {
      v18 = v17;
      v36 = v17;
      if ( (unsigned __int16)v17 == v15 || v17 < 0x10000 )
        break;
      if ( !(_WORD)v17 )
        goto LABEL_13;
      _InterlockedOr(v33, 0);
      v28 = (unsigned __int16)(KiTbFlushTimeStamp - v17);
      if ( v28 <= 2 && ((v17 & 1) != 0 || v28 < 2) )
      {
        v29 = v10 | MiMakeLinkedListPte(0LL) & 0xFFFFFFFFFFFFFFFBuLL;
        if ( (v16 & 0x3E0) == 0x200 )
          v29 = v29 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
        *a2 = v29;
        v39 = (unsigned __int16)v8 | (unsigned __int64)(((__int64)a2 - v30) >> 3 << 16);
        MiReleasePteMappings(v31, &v39, 0LL, v6);
        return 1LL;
      }
      if ( KeGetCurrentIrql() )
      {
        CurrentThread = 0LL;
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
      }
      v35 = CurrentThread;
      v17 = _InterlockedCompareExchange64(v13, 0LL, v17);
      if ( v17 == v18 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(v11 + 64), -MiReleasePteMappings(v7, &v36, 0LL, v6));
        CurrentThread = v35;
        v13 = v34;
        v17 = 0LL;
        v3 = v39;
        v7 = a1;
      }
      if ( CurrentThread )
      {
        KeLeaveCriticalRegionThread(CurrentThread);
        v13 = v34;
        v3 = v39;
        v7 = a1;
      }
    }
    v19 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0x8000000000FFFFFFuLL | ((v17 & 0x7FFFFFFFFF0000LL) << 8);
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & v19) != 0 )
        v19 |= 0x10uLL;
      else
        v19 |= qword_140E2D8C0;
    }
    v20 = v10 | v19 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v16 & 0x3E0) == 0x200 )
      v20 = v20 & 0xFFFFFFFFFFFFFC1FuLL | 0x200;
    *a2 = v20;
    v8 = v15 | ((__int64)((__int64)a2 - v3) >> 3 << 16);
    v17 = _InterlockedCompareExchange64(v13, v8, v17);
  }
  while ( v17 != v18 );
  _InterlockedAdd64((volatile signed __int64 *)(v11 + 64), v37);
  MmInternal = (volatile signed __int32 *)KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    if ( !(unsigned __int8)_InterlockedIncrement(MmInternal + 84) )
      MiEmptyPteBins(v7, 0LL, 2LL);
  }
  return 1LL;
}
