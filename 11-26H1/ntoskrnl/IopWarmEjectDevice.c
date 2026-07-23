/*
 * XREFs of IopWarmEjectDevice @ 0x1407B7CB0
 * Callers:
 *     PnpProcessCompletedEject @ 0x1407A7890 (PnpProcessCompletedEject.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1407B0CA8 (PnpSetPowerVetoEvent.c)
 *     NtInitiatePowerAction @ 0x1409F2FC0 (NtInitiatePowerAction.c)
 *     PpDevNodeLockTree @ 0x140A8F554 (PpDevNodeLockTree.c)
 *     PpDevNodeUnlockTree @ 0x140A96CF4 (PpDevNodeUnlockTree.c)
 */

__int64 __fastcall IopWarmEjectDevice(_QWORD *a1, SYSTEM_POWER_STATE a2)
{
  __int64 v4; // rdx
  NTSTATUS v5; // ebx
  __int64 v6; // r8

  KeWaitForSingleObject(&IopWarmEjectLock, Executive, 0, 0, 0LL);
  PpDevNodeLockTree(1LL);
  IopWarmEjectPdo = (__int64)a1;
  PpDevNodeUnlockTree(1LL);
  v5 = NtInitiatePowerAction(PowerActionWarmEject, a2, 3u, 0);
  if ( v5 == -1073741727 )
    PnpSetPowerVetoEvent(7, v4, v6, a1, 12, 0LL);
  PpDevNodeLockTree(1LL);
  if ( IopWarmEjectPdo )
  {
    IopWarmEjectPdo = 0LL;
    if ( v5 >= 0 )
      v5 = -1073741823;
  }
  PpDevNodeUnlockTree(1LL);
  KeSetEvent(&IopWarmEjectLock, 0, 0);
  return (unsigned int)v5;
}
