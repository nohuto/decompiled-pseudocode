/*
 * XREFs of sub_14008C3E8 @ 0x14008C3E8
 * Callers:
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 *     sub_14008AE74 @ 0x14008AE74 (sub_14008AE74.c)
 *     sub_14008B1CC @ 0x14008B1CC (sub_14008B1CC.c)
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008C144 @ 0x14008C144 (sub_14008C144.c)
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 *     sub_14008E060 @ 0x14008E060 (sub_14008E060.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1 @ 0x14008E3B0 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_1.c)
 *     sub_14008E63C @ 0x14008E63C (sub_14008E63C.c)
 *     sub_14008E83C @ 0x14008E83C (sub_14008E83C.c)
 *     sub_14008EAAC @ 0x14008EAAC (sub_14008EAAC.c)
 * Callees:
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_140134A98 @ 0x140134A98 (sub_140134A98.c)
 *     sub_1401351D4 @ 0x1401351D4 (sub_1401351D4.c)
 *     sub_140135288 @ 0x140135288 (sub_140135288.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14008C3E8(__int64 a1, char a2, unsigned int a3, const void *a4, unsigned int *a5, _BYTE *a6)
{
  int v6; // ebx
  _OWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+50h] [rbp-28h]

  v6 = 0;
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( a3 && a4 )
  {
    *a5 = a3;
    memmove(a5 + 1, a4, a3);
  }
  else if ( a2 )
  {
    v6 = sub_140135288(a1, 1LL, v9);
    if ( v6 >= 0 )
    {
      v6 = sub_1401351D4(a1, v9, a5);
      if ( v6 < 0 )
        sub_14006FED8(a6, 32LL, (__int64)"TcglibGetMsid");
      sub_140134A98(a1, v9);
    }
    else
    {
      sub_14006FED8(a6, 32LL, (__int64)"TcglibOpenSession");
    }
  }
  return (unsigned int)v6;
}
