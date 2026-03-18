/*
 * XREFs of sub_14001A0DC @ 0x14001A0DC
 * Callers:
 *     sub_140019450 @ 0x140019450 (sub_140019450.c)
 *     sub_140019D70 @ 0x140019D70 (sub_140019D70.c)
 * Callees:
 *     sub_140019070 @ 0x140019070 (sub_140019070.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

_OWORD *__fastcall sub_14001A0DC(__int64 a1)
{
  _OWORD *result; // rax
  _BYTE v3[688]; // [rsp+D0h] [rbp-2C8h] BYREF

  sub_140032C80(v3, 0LL, 688LL);
  result = sub_140019070(a1, (__int64)v3);
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    result = (_OWORD *)StorPortExtendedFunction(105LL, a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 3752) )
  {
    if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
      return (_OWORD *)StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  }
  return result;
}
