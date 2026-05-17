/*
 * XREFs of RtlpHpLfhSubsegmentDelayFreeProcess @ 0x180095770
 * Callers:
 *     RtlpHpLfhOwnerFreeListProcess @ 0x1800952B0 (RtlpHpLfhOwnerFreeListProcess.c)
 *     RtlpHpLfhOwnerGetSubsegment @ 0x1800955E0 (RtlpHpLfhOwnerGetSubsegment.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentDelayFreeProcess(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)(a2 + 18);
  if ( (_WORD)result && (a3 || (unsigned __int16)result >= *(_WORD *)(a2 + 32)) )
    return RtlpHpLfhSubsegmentDelayFreeListProcess(
             a1,
             a2,
             (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 16), 0));
  return result;
}
