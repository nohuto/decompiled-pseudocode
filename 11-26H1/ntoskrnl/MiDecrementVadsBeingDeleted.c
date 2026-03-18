/*
 * XREFs of MiDecrementVadsBeingDeleted @ 0x140442E60
 * Callers:
 *     MiFinishVadDeletion @ 0x140442CA8 (MiFinishVadDeletion.c)
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 */

LONG __fastcall MiDecrementVadsBeingDeleted(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 232), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 256), 0, 0);
  return result;
}
