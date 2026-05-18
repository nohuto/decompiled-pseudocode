/*
 * XREFs of sub_18005D174 @ 0x18005D174
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_18005D174(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  sub_180029EF8(*a2 + 24LL, (__int64)a2);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180011CC4(
      v8,
      "ShaderFamily::AttachDevice() -- The family must have finished declaration before attaching a device");
    v4 = sub_180011CC4(
           v7,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = a2[1];
  if ( v6 )
    sub_180010EC8(v6);
}
