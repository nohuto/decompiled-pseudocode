/*
 * XREFs of sub_14000BEE0 @ 0x14000BEE0
 * Callers:
 *     sub_140014D70 @ 0x140014D70 (sub_140014D70.c)
 * Callees:
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14000BEE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v5; // di
  unsigned int v7; // esi
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 3728) & 3) != 3 || *(unsigned __int8 *)(a1 + 3729) != a4 || !*(_WORD *)(a1 + 3732) )
    return 0;
  v5 = 0;
  v7 = 0;
  if ( a2 )
  {
    v9 = 0LL;
    memset(v8, 0, sizeof(v8));
    LOWORD(v8[0]) = 1;
    if ( !(unsigned int)StorPortExtendedFunction(28LL, a1, a2, v8) && (WORD4(v8[0]) & 0x100) != 0 )
      v7 = HIDWORD(v8[0]);
  }
  else
  {
    if ( !a3 || (*(_DWORD *)(a3 + 56) & 0x80u) == 0 )
      return v5;
    v7 = *(_DWORD *)(a3 + 20);
  }
  if ( v7 - 1 <= 0xFFFE && v7 <= *(unsigned __int16 *)(a1 + 3732) )
    return (unsigned __int16)v7;
  return v5;
}
