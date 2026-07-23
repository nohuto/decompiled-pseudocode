/*
 * XREFs of MiReturnVadDeleted @ 0x14049D1A0
 * Callers:
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 *     MiDeleteVad @ 0x140A017D0 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A05828 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140B08044 (MiFinishPlaceholderVadReplacement.c)
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
