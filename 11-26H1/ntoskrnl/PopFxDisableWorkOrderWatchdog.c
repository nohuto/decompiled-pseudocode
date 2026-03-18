/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x1403AE6F0
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1403AE3C4 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x140604AB8 (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     PopFxBugCheck @ 0x1403B0E54 (PopFxBugCheck.c)
 */

void __fastcall PopFxDisableWorkOrderWatchdog(__int64 *BugCheckParameter2)
{
  KIRQL v2; // al
  unsigned __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 **v5; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( BugCheckParameter2 )
  {
    if ( !KeCancelTimer((PKTIMER)(BugCheckParameter2 + 2)) )
      PopFxBugCheck(0x618uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[21], 0LL);
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_140F12420.PriorityFloorCounts[24]);
    BugCheckParameter2[21] = 0LL;
    BugCheckParameter2[19] = 0LL;
    v3 = v2;
    v4 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v5 = (__int64 **)BugCheckParameter2[1], *v5 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    v4[1] = (__int64)v5;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      _InterlockedAnd64((volatile signed __int64 *)&stru_140F12420.PriorityFloorCounts[24], 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&stru_140F12420.PriorityFloorCounts[24], retaddr);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    __writecr8(v3);
  }
}
