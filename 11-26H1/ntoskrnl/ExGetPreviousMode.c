/*
 * XREFs of ExGetPreviousMode @ 0x140469E00
 * Callers:
 *     AhcCacheQueryHwId @ 0x1407791E0 (AhcCacheQueryHwId.c)
 *     VrpPostEnumerateKey @ 0x140938960 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x140938F20 (VrpPostQueryKey.c)
 *     NtApphelpCacheControl @ 0x140A30790 (NtApphelpCacheControl.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     VrpPreLoadKey @ 0x140B1D3C8 (VrpPreLoadKey.c)
 * Callees:
 *     <none>
 */

KPROCESSOR_MODE ExGetPreviousMode(void)
{
  return KeGetCurrentThread()->PreviousMode;
}
