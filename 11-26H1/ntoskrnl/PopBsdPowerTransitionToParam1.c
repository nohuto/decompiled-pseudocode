/*
 * XREFs of PopBsdPowerTransitionToParam1 @ 0x1407DE868
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopBsdPowerTransitionToParam1(unsigned int *a1)
{
  __int64 result; // rax
  unsigned int v2; // r9d
  bool v3; // zf

  result = LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue);
  v2 = stru_140E67200.ReservedPreviousReadyTimeValue & 0xF0 | ((*((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue
                                                                + 7) & 0x80) << 19) | (((HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) >> 2) | *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) & 0xCFu) >> 4) | ((*((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) & 0xF | (16 * (BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue) & 0x3F | ((BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue) ^ (HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) ^ BYTE2(stru_140E67200.ReservedPreviousReadyTimeValue)) & 0x3F) << 6)))) << 8);
  v3 = BYTE3(stru_140E67200.Spare35[0]) == 1;
  *a1 = v2;
  if ( v3 )
  {
    v2 |= 0x8000000u;
    *a1 = v2;
  }
  if ( BYTE4(stru_140E67200.Spare35[0]) == 1 )
    *a1 = v2 | 0x10000000;
  return result;
}
