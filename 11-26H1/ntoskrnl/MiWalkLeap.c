/*
 * XREFs of MiWalkLeap @ 0x1403280E0
 * Callers:
 *     MiComputePxeWalkAction @ 0x14032A400 (MiComputePxeWalkAction.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiPeriodicGoodCitizen @ 0x140315E70 (MiPeriodicGoodCitizen.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiUnlockVadTree @ 0x140328470 (MiUnlockVadTree.c)
 */

__int64 __fastcall MiWalkLeap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned __int64 i; // rsi
  unsigned __int64 j; // rdi
  int v8; // r15d
  _DWORD *v9; // rcx
  signed __int32 v10; // eax
  unsigned __int64 v11; // rdx
  signed __int32 v12; // ett
  _KPROCESS *Process; // r9
  unsigned __int64 Flink; // rbx
  unsigned __int64 v15; // r8
  int v16; // eax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned int v20; // r10d
  unsigned __int64 *v21; // r8
  __int64 v23; // rcx

  v4 = (int)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 184LL) & 0xF) != 0 )
    return 2LL;
  for ( i = a2; i >= 0xFFFFF68000000000uLL; i = (__int64)(i << 25) >> 16 )
  {
    if ( i > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  for ( j = a2; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
  {
    if ( j > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  v8 = 0;
  v9 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v9);
    v10 = *v9 & 0x7FFFFFFF;
    while ( 1 )
    {
      v11 = (unsigned int)(v10 + 1);
      v12 = v10;
      v10 = _InterlockedCompareExchange(v9, v11, v10);
      if ( v12 == v10 )
        break;
      if ( v10 < 0 )
      {
        LOBYTE(v11) = -1;
        ExpWaitForSpinLockSharedAndAcquire(v9, v11, a3);
        break;
      }
    }
  }
  else
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, 0xFFu);
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  Flink = (unsigned __int64)Process[3].Header.WaitListHead.Flink;
  if ( !Flink )
    goto LABEL_27;
  v11 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
  v15 = j >> 12;
  if ( j >> 12 >= v11 )
  {
    v11 = *(unsigned int *)(Flink + 28);
    if ( v15 <= (v11 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
      goto LABEL_21;
  }
  Flink = *(_QWORD *)&Process[3].Header.Lock;
  if ( Flink )
  {
    do
    {
      v11 = *(unsigned int *)(Flink + 28);
      if ( v15 > (v11 | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) )
      {
        Flink = *(_QWORD *)(Flink + 8);
      }
      else
      {
        v11 = *(unsigned int *)(Flink + 24) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 32) << 32);
        if ( v15 >= v11 )
          break;
        Flink = *(_QWORD *)Flink;
      }
    }
    while ( Flink );
    if ( Flink )
    {
      Process[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)Flink;
      do
      {
LABEL_21:
        v16 = *(_DWORD *)(Flink + 48);
        if ( (*(_BYTE *)(Flink + 48) & 0x1C) != 0xC
          && (v16 & 0x1C) != 4
          && ((v16 & 0x80000) == 0 || (v16 & 0x200000) == 0 && (v16 & 0x60000u) < 0x40000)
          && (v16 & 0x1C) != 0x14 )
        {
          break;
        }
        ++v8;
        j = ((*(unsigned int *)(Flink + 28) | ((unsigned __int64)*(unsigned __int8 *)(Flink + 33) << 32)) << 12) | 0xFFF;
        if ( !(_BYTE)v8 && MiPeriodicGoodCitizen((int *)a1, a2, 0) )
          break;
        Flink = MiGetNextVad(Flink);
      }
      while ( Flink );
    }
  }
LABEL_27:
  LOBYTE(v11) = 17;
  MiUnlockVadTree(1LL, v11);
  if ( i == j )
    return 2LL;
  v17 = ((j >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (int)v4 > 0 )
  {
    v23 = (unsigned int)v4;
    do
    {
      v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v23;
    }
    while ( v23 );
  }
  v18 = v17 + 8;
  v19 = v4;
  v20 = *(_QWORD *)(a1 + 8 * v4 + 128) < v17 + 8 ? 4 : 0;
  if ( ((a2 ^ v17) & 0xFFFFFFFFF000LL) != 0 )
  {
    for ( ; v18 >= 0xFFFFF68000000000uLL; v18 = (__int64)(v18 << 25) >> 16 )
    {
      if ( v18 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
    }
    *(_QWORD *)(a1 + 80) = v18;
    v18 = (a2 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) + 8;
  }
  *(_QWORD *)(a1 + 96 + 8 * v4) = v18;
  v21 = (unsigned __int64 *)(a1 + 96 + 8 * v4);
  if ( (_DWORD)v4 )
  {
    do
    {
      --v21;
      v18 = (__int64)(v18 << 25) >> 16;
      *v21 = v18;
      --v19;
    }
    while ( v19 );
  }
  *(_DWORD *)(a1 + 12) = 0;
  return v20;
}
