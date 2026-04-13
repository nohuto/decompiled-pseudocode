/*
 * XREFs of ?_Donarrow@?$ctype@_W@std@@IEBAD_WD@Z @ 0x18005A780
 * Callers:
 *     ?do_narrow@?$ctype@G@std@@MEBADGD@Z @ 0x18005DC60 (-do_narrow@-$ctype@G@std@@MEBADGD@Z.c)
 *     ?do_narrow@?$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z @ 0x18005DC70 (-do_narrow@-$ctype@_W@std@@MEBAPEB_WPEB_W0DPEAD@Z.c)
 * Callees:
 *     _Wcrtomb @ 0x180005F7C (_Wcrtomb.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

char __fastcall std::ctype<wchar_t>::_Donarrow(__int64 a1, wchar_t a2, char a3)
{
  int v4; // eax
  char Byte; // dl
  mbstate_t v7; // [rsp+20h] [rbp-28h] BYREF

  v7._Wchar = 0;
  v4 = Wcrtomb((char *)&v7._Byte, a2, &v7, (const _Cvtvec *)(a1 + 48));
  Byte = v7._Byte;
  if ( v4 != 1 )
    return a3;
  return Byte;
}
