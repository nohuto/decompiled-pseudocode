/*
 * XREFs of RtlpHpLfhSubsegmentReserveBlock @ 0x14046E800
 * Callers:
 *     RtlpHpLfhSlotActiveSubsegmentReset @ 0x140348850 (RtlpHpLfhSlotActiveSubsegmentReset.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpHpLfhSubsegmentReserveBlock(__int64 a1, __int16 a2)
{
  unsigned int v2; // eax

  if ( a2 <= 0 )
  {
    *(_WORD *)(a1 + 32) -= a2;
    LOWORD(v2) = a2;
  }
  else
  {
    v2 = *(unsigned __int16 *)(a1 + 32);
    if ( a2 < v2 )
      LOWORD(v2) = a2;
    *(_WORD *)(a1 + 32) -= v2;
  }
  return v2;
}
