/*
 * XREFs of sub_1800298C4 @ 0x1800298C4
 * Callers:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029A30 @ 0x180029A30 (sub_180029A30.c)
 *     sub_180029BAC @ 0x180029BAC (sub_180029BAC.c)
 *     sub_180029D50 @ 0x180029D50 (sub_180029D50.c)
 *     sub_180029FF8 @ 0x180029FF8 (sub_180029FF8.c)
 *     sub_18002A030 @ 0x18002A030 (sub_18002A030.c)
 *     sub_1800D5568 @ 0x1800D5568 (sub_1800D5568.c)
 */

__int64 __fastcall sub_1800298C4(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  __int64 v4; // rbx
  _QWORD *v5; // rax
  _BYTE v7[8]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v8[8]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v9[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(unsigned __int8)sub_18002A030() )
  {
    sub_180011CC4(v10, "Mutex::doUnlock() -- detected attempt to unlock a mutex that is not owned by this thread");
    v2 = sub_180011CC4(
           v9,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\concurrency.cpp");
    sub_180029A30(pExceptionObject, v2, v3, v10);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  v4 = sub_180029D50();
  v5 = (_QWORD *)sub_180029BAC(a1, v7, 0LL);
  sub_180029FF8(v4, v8, *v5);
  return sub_1800D5568(a1);
}
