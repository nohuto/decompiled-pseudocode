/*
 * XREFs of KeAbEncodeLockHandle @ 0x14025FF70
 * Callers:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14025FA20 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExInitializeFastResourceAcquired @ 0x14025FDC0 (ExInitializeFastResourceAcquired.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x1402763B0 (ExpAcquireFastResourceSharedSlow.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403CAD68 (KiWaitForAllObjects.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406D1B40 (ExAcquireFastResourceWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAbEncodeLockHandle(__int64 a1)
{
  __int64 result; // rax

  if ( (KiAbpGlobalState & 1) != 0 )
  {
    result = *(unsigned __int8 *)(a1 - 48LL * (*(_BYTE *)(a1 + 36) & 0x7F) - 1);
    LOBYTE(result) = (4 * ((4 * *(_BYTE *)(a1 + 36)) | result & 3)) | 3;
  }
  else
  {
    result = *(unsigned __int8 *)(a1 + 8);
    LOBYTE(result) = (2 * (result & 0x3F)) | 1;
  }
  return result;
}
