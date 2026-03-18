/*
 * XREFs of CmpBlockTwoHiveWrites @ 0x1408B2110
 * Callers:
 *     CmpVirtualPathPresent @ 0x1407734E0 (CmpVirtualPathPresent.c)
 *     CmSaveMergedKeys @ 0x14084D378 (CmSaveMergedKeys.c)
 *     CmpVirtualBranchIsReplicated @ 0x1408B1674 (CmpVirtualBranchIsReplicated.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     CmpGetNextActiveHive @ 0x1408B3048 (CmpGetNextActiveHive.c)
 *     CmpLockHiveListShared @ 0x1408B31AC (CmpLockHiveListShared.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 *     CmpUnlockHiveList @ 0x1408C8634 (CmpUnlockHiveList.c)
 *     CmpReferenceHive @ 0x1408C8740 (CmpReferenceHive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140C58D14 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140C58D30 (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBlockTwoHiveWrites(
        struct _EX_RUNDOWN_REF *a1,
        struct _EX_RUNDOWN_REF *a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // r15
  char v5; // bp
  struct _KTHREAD *v6; // r14
  char v7; // r12
  struct _EX_RUNDOWN_REF *PriorityFloorCounts; // rbx
  struct _EX_RUNDOWN_REF *v12; // rcx

  v4 = 0;
  v5 = 0;
  v6 = (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112];
  v7 = a3;
  CmpLockHiveListShared(a1, a2, a3, a4);
  do
  {
    v6 = *(struct _KTHREAD **)&v6->Header.Lock;
    PriorityFloorCounts = 0LL;
    if ( v6 == (struct _KTHREAD *)&PspSiloMonitorLock.WaitBlockFill11[112] )
      break;
    PriorityFloorCounts = (struct _EX_RUNDOWN_REF *)v6[-2].PriorityFloorCounts;
  }
  while ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v6->QuantumTarget) );
  CmpUnlockHiveList();
  while ( PriorityFloorCounts )
  {
    if ( a1 == PriorityFloorCounts || a2 == PriorityFloorCounts )
    {
      if ( v7 )
        CmpReferenceHive(PriorityFloorCounts);
      HvLockHiveFlusherExclusive(PriorityFloorCounts);
      if ( a1 == PriorityFloorCounts )
        v4 = 1;
      else
        v5 = 1;
      if ( (!a1 || v4 == 1) && (!a2 || v5 == 1) )
      {
        ExReleaseRundownProtection_0(PriorityFloorCounts + 205);
        break;
      }
    }
    PriorityFloorCounts = (struct _EX_RUNDOWN_REF *)CmpGetNextActiveHive(PriorityFloorCounts);
  }
  if ( a1 && !v4 )
  {
    if ( v5 != 1 )
      return 3221225524LL;
    HvUnlockHiveFlusherExclusive(a2);
    if ( !v7 )
      return 3221225524LL;
    v12 = a2;
    goto LABEL_30;
  }
  if ( !a2 || v5 )
    return 0LL;
  if ( v4 == 1 )
  {
    HvUnlockHiveFlusherExclusive(a1);
    if ( v7 )
    {
      v12 = a1;
LABEL_30:
      CmpDereferenceHive(v12);
    }
  }
  return 3221225524LL;
}
