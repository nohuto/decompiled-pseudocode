/*
 * XREFs of sub_180029674 @ 0x180029674
 * Callers:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     sub_180026F30 @ 0x180026F30 (sub_180026F30.c)
 *     sub_1800275DC @ 0x1800275DC (sub_1800275DC.c)
 *     sub_1800299DC @ 0x1800299DC (sub_1800299DC.c)
 *     sub_180032804 @ 0x180032804 (sub_180032804.c)
 *     sub_180097BF8 @ 0x180097BF8 (sub_180097BF8.c)
 *     sub_180097C94 @ 0x180097C94 (sub_180097C94.c)
 *     sub_180098584 @ 0x180098584 (sub_180098584.c)
 *     sub_180098664 @ 0x180098664 (sub_180098664.c)
 *     sub_1800987DC @ 0x1800987DC (sub_1800987DC.c)
 *     sub_18009888C @ 0x18009888C (sub_18009888C.c)
 *     sub_18009891C @ 0x18009891C (sub_18009891C.c)
 *     sub_180098A64 @ 0x180098A64 (sub_180098A64.c)
 *     sub_180098AFC @ 0x180098AFC (sub_180098AFC.c)
 *     sub_180098BB8 @ 0x180098BB8 (sub_180098BB8.c)
 *     sub_180098C90 @ 0x180098C90 (sub_180098C90.c)
 *     sub_180099D84 @ 0x180099D84 (sub_180099D84.c)
 *     sub_18009A580 @ 0x18009A580 (sub_18009A580.c)
 *     sub_18009AE9C @ 0x18009AE9C (sub_18009AE9C.c)
 *     sub_18009AF7C @ 0x18009AF7C (sub_18009AF7C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029994 @ 0x180029994 (sub_180029994.c)
 *     sub_180029A30 @ 0x180029A30 (sub_180029A30.c)
 *     sub_180029D50 @ 0x180029D50 (sub_180029D50.c)
 *     sub_18002A030 @ 0x18002A030 (sub_18002A030.c)
 *     sub_1800D543C @ 0x1800D543C (sub_1800D543C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029674(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  char v6[8]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v7; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  v6[0] = 1;
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
  sub_1800D543C(a1);
  v4 = sub_180029D50();
  v7 = a1;
  return sub_180029994(v4, &v7, v6);
}
