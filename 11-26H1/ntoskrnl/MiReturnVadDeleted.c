/*
 * XREFs of MiReturnVadDeleted @ 0x1404A3690
 * Callers:
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiDeleteVad @ 0x14095BF10 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x14095FF68 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B05F14 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReturnVadDeleted(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 1040);
  _InterlockedDecrement64((volatile signed __int64 *)(result + 1600));
  return result;
}
