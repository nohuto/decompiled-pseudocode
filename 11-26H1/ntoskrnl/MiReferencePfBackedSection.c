/*
 * XREFs of MiReferencePfBackedSection @ 0x1404CB310
 * Callers:
 *     MiBuildReservationCluster @ 0x14033F334 (MiBuildReservationCluster.c)
 *     MiTrimSharedPage @ 0x1404723B4 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x1404CB260 (MiGetPageFileSectionForReservation.c)
 *     MiLocateSharedPageViews @ 0x1406FCFF0 (MiLocateSharedPageViews.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoBaseFromNode @ 0x140443F40 (MiObtainProtoBaseFromNode.c)
 *     MiIncrementModifiedWriteCount @ 0x1404EF980 (MiIncrementModifiedWriteCount.c)
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
    v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
    CycleTime = stru_140E2D2D0.CycleTime;
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
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
    else
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime, v6);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&stru_140E2D2D0.CurrentRunTime);
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
