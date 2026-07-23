/*
 * XREFs of HvlCrashdumpCallbackRoutine @ 0x1405C2D00
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HvlpSnapshotCrashArea @ 0x1405C3764 (HvlpSnapshotCrashArea.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HvlCrashdumpCallbackRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  ULONG_PTR *Flink; // rbx

  HvlpSnapshotCrashArea(a1, a2, a3, a4);
  Flink = (ULONG_PTR *)VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink;
  if ( VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink
    && (HIDWORD(VslpReservedTransferLock.WaitBlock[3].WaitListEntry.Flink->Flink) & 1) != 0 )
  {
    guard_dispatch_icall_no_overrides(1LL, v4);
    KiHypervisorInitiatedCrashDump = 1;
    KeBugCheckEx(0x20001u, Flink[23], Flink[24], Flink[25], Flink[26]);
  }
  return 0;
}
