/*
 * XREFs of EtwpCovSampCaptureBufferIsEmpty @ 0x1404A0958
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x140A23970 (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall EtwpCovSampCaptureBufferIsEmpty(__int64 a1)
{
  return *(_WORD *)(a1 + 62) == 0;
}
