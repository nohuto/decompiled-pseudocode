/*
 * XREFs of sub_14001E180 @ 0x14001E180
 * Callers:
 *     sub_14001DEFC @ 0x14001DEFC (sub_14001DEFC.c)
 *     sub_14004BFF8 @ 0x14004BFF8 (sub_14004BFF8.c)
 * Callees:
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14004F4AC @ 0x14004F4AC (sub_14004F4AC.c)
 *     __alloca_probe @ 0x1400ADEB0 (__alloca_probe.c)
 */

__int64 __fastcall sub_14001E180(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v7[4096]; // [rsp+20h] [rbp-1018h] BYREF

  result = 0LL;
  if ( a3 )
  {
    if ( a4 )
    {
      sub_14001EB30(v7, 2048LL, L"%hs", a3);
      return sub_14004F4AC(a1, 2048LL, v7, a4);
    }
    else
    {
      return sub_14001EB30(a1, 2048LL, L"%hs", a3);
    }
  }
  else
  {
    *a1 = 0;
  }
  return result;
}
