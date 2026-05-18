/*
 * XREFs of sub_180010AC0 @ 0x180010AC0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_1800104EC @ 0x1800104EC (sub_1800104EC.c)
 */

void __fastcall __noreturn sub_180010AC0(__int64 a1)
{
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v2[152]; // [rsp+30h] [rbp-C8h] BYREF
  __int128 v3; // [rsp+C8h] [rbp-30h]
  __int128 v4; // [rsp+D8h] [rbp-20h]

  pExceptionObject[1] = "unknown";
  pExceptionObject[0] = &wil::ResultException::`vftable';
  v3 = 0LL;
  sub_1800104EC((__int64)v2, a1);
  v4 = 0LL;
  throw (wil::ResultException *)pExceptionObject;
}
