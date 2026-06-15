/*
 * XREFs of sub_140039ADC @ 0x140039ADC
 * Callers:
 *     sub_140039950 @ 0x140039950 (sub_140039950.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140039B20 @ 0x140039B20 (sub_140039B20.c)
 */

__int64 __fastcall sub_140039ADC(__int64 a1)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned __int8)sub_140039B20(a1 + 12) )
    return 0LL;
  sub_14000C2A8((int)retaddr, 240, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rtthreadmanager.cpp", -2147467259);
  return 2147500037LL;
}
