/*
 * XREFs of sub_180029734 @ 0x180029734
 * Callers:
 *     sub_180029DAC @ 0x180029DAC (sub_180029DAC.c)
 *     sub_18005DEB0 @ 0x18005DEB0 (sub_18005DEB0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029994 @ 0x180029994 (sub_180029994.c)
 *     sub_180029A30 @ 0x180029A30 (sub_180029A30.c)
 *     sub_180029D50 @ 0x180029D50 (sub_180029D50.c)
 *     sub_18002A030 @ 0x18002A030 (sub_18002A030.c)
 *     sub_1800D54BC @ 0x1800D54BC (sub_1800D54BC.c)
 */

__int64 __fastcall sub_180029734(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  _BYTE v6[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v6[0] = 0;
  if ( (unsigned __int8)sub_18002A030() )
  {
    sub_180011CC4(
      v9,
      "Mutex::doLock() -- detected recursive lock attempt on non-recursive mutex -- throwing exception to avoid deadlock");
    v2 = sub_180011CC4(
           v8,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_180029A30(pExceptionObject, v2, v3, v9);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_1800D54BC(a1);
  v4 = sub_180029D50();
  v7 = a1;
  return sub_180029994(v4, &v7, v6);
}
