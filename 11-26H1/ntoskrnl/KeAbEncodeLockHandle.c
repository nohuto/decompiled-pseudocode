/*
 * XREFs of KeAbEncodeLockHandle @ 0x140456960
 * Callers:
 *     ExpAcquireFastResourceSharedSlow @ 0x140276E40 (ExpAcquireFastResourceSharedSlow.c)
 *     KeWaitForMultipleObjects @ 0x140396440 (KeWaitForMultipleObjects.c)
 *     KiWaitForAllObjects @ 0x1403C0E68 (KiWaitForAllObjects.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140456410 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExInitializeFastResourceAcquired @ 0x1404567B0 (ExInitializeFastResourceAcquired.c)
 *     ExAcquireFastResourceWithFlags @ 0x1406CDB10 (ExAcquireFastResourceWithFlags.c)
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
