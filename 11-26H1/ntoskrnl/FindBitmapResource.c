/*
 * XREFs of FindBitmapResource @ 0x140CBA31C
 * Callers:
 *     BvgaDriverInitialize @ 0x140CBA110 (BvgaDriverInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     LdrAccessResource @ 0x140A86CB0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140A86CD0 (LdrFindResource_U.c)
 */

__int64 __fastcall FindBitmapResource(__int64 a1, __int64 a2)
{
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-28h] BYREF

  v6[1] = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6[0] = 2LL;
  v6[2] = 0LL;
  if ( (int)LdrFindResource_U(0x40000000, (int)v6, 3, (__int64)&v4) < 0
    || (int)LdrAccessResource(0x140000000LL, v4, (__int64)&v5, a2) < 0 )
  {
    return 0LL;
  }
  else
  {
    return v5;
  }
}
