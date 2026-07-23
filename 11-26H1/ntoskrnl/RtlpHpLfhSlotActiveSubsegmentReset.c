/*
 * XREFs of RtlpHpLfhSlotActiveSubsegmentReset @ 0x140348850
 * Callers:
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 * Callees:
 *     RtlpHpLfhSubsegmentReserveBlock @ 0x14046E800 (RtlpHpLfhSubsegmentReserveBlock.c)
 */

__int64 __fastcall RtlpHpLfhSlotActiveSubsegmentReset(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = _InterlockedExchange64((volatile __int64 *)(a1 + 56), 0LL);
  v2 = result & 0xFFF;
  if ( (result & 0xFFF) != 0 )
  {
    LOWORD(v2) = -(result & 0xFFF);
    return RtlpHpLfhSubsegmentReserveBlock(result & 0xFFFFFFFFFFFFF000uLL & -(__int64)((result & 0xFFF) != 0), v2);
  }
  return result;
}
