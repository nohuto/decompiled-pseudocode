/*
 * XREFs of ExGetPreviousMode @ 0x140470680
 * Callers:
 *     AhcCacheQueryHwId @ 0x140776338 (AhcCacheQueryHwId.c)
 *     NtApphelpCacheControl @ 0x140908630 (NtApphelpCacheControl.c)
 *     VrpPostEnumerateKey @ 0x140976950 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140976F10 (VrpPostQueryKey.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     VrpPreLoadKey @ 0x140B1B118 (VrpPreLoadKey.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
