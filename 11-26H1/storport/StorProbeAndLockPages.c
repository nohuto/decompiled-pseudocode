/*
 * XREFs of StorProbeAndLockPages @ 0x140008824
 * Callers:
 *     StorBuildSynchronousScsiRequest @ 0x140007A30 (StorBuildSynchronousScsiRequest.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorProbeAndLockPages(struct _MDL *a1, __int64 a2, LOCK_OPERATION a3)
{
  MmProbeAndLockPages(a1, 0, a3);
  return 0LL;
}
