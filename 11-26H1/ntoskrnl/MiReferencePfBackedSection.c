/*
 * XREFs of MiReferencePfBackedSection @ 0x1404D1764
 * Callers:
 *     MiBuildReservationCluster @ 0x14033D2B4 (MiBuildReservationCluster.c)
 *     MiTrimSharedPage @ 0x140478A54 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x1404D16B4 (MiGetPageFileSectionForReservation.c)
 *     MiLocateSharedPageViews @ 0x1406F8320 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140416FD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoBaseFromNode @ 0x14044BE20 (MiObtainProtoBaseFromNode.c)
 *     MiIncrementModifiedWriteCount @ 0x1404F6374 (MiIncrementModifiedWriteCount.c)
 */

unsigned __int64 __fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  _QWORD *v1; // rsi
  unsigned __int64 v3; // rbp
  KIRQL v4; // al
  volatile unsigned __int64 CycleTime; // r10
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  volatile LONG *v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  while ( 1 )
  {
    v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime);
    CycleTime = stru_140E2D150.CycleTime;
    v6 = v4;
    while ( CycleTime )
    {
      v14 = 0LL;
      v7 = MiObtainProtoBaseFromNode((_QWORD *)CycleTime, &v14);
      if ( a1 < v7 )
      {
        CycleTime = *(_QWORD *)CycleTime;
      }
      else
      {
        if ( a1 < v7 + 8 * v14 )
          break;
        CycleTime = *(_QWORD *)(CycleTime + 8);
      }
    }
    v8 = 0LL;
    if ( !CycleTime || (*(_BYTE *)(CycleTime + 24) & 7) != 1 )
      break;
    v9 = CycleTime - 56;
    v8 = *(_QWORD *)(CycleTime - 56);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v8 + 72)) )
    {
      if ( (*(_DWORD *)(v8 + 56) & 3) == 0 )
      {
        v1 = (_QWORD *)MiIncrementModifiedWriteCount(v8);
        v3 = v9;
      }
      break;
    }
    if ( (_BYTE)v6 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime);
    else
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime, v6);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D150.CurrentRunTime);
  if ( v8 )
  {
    v12 = (volatile LONG *)(v8 + 72);
    if ( (_BYTE)v6 == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v12);
    else
      ExReleaseSpinLockExclusive(v12, v6);
  }
  else
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    __writecr8(v6);
  }
  if ( v1 )
    MiReleaseControlAreaWaiters(v1, v10, v11);
  return v3;
}
