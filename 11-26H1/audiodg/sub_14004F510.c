/*
 * XREFs of sub_14004F510 @ 0x14004F510
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x14004A6E8 (_CxxThrowException.c)
 *     sub_14004F12C @ 0x14004F12C (sub_14004F12C.c)
 */

void __fastcall __noreturn sub_14004F510(__int64 a1)
{
  __int64 (__fastcall **pExceptionObject)(); // [rsp+20h] [rbp-D8h] BYREF
  __int128 v2; // [rsp+28h] [rbp-D0h]
  _BYTE v3[152]; // [rsp+38h] [rbp-C0h] BYREF
  __int128 v4; // [rsp+D0h] [rbp-28h]
  __int128 v5; // [rsp+E0h] [rbp-18h]

  pExceptionObject = off_1400BB698;
  v2 = 0LL;
  v4 = 0LL;
  sub_14004F12C((__int64)v3, a1);
  v5 = 0LL;
  throw (wil::ResultException *)&pExceptionObject;
}
