/*
 * XREFs of sub_18005D05C @ 0x18005D05C
 * Callers:
 *     sub_180076B50 @ 0x180076B50 (sub_180076B50.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_1800792A0 @ 0x1800792A0 (sub_1800792A0.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 *     sub_18004C840 @ 0x18004C840 (sub_18004C840.c)
 *     sub_18004D9D4 @ 0x18004D9D4 (sub_18004D9D4.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005D05C(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // esi
  __int64 v7; // rbx
  void *v9[2]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v10[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_180011CC4(v11, "ShaderFamily::AddOption() -- Cannot add option after the shader family has ended declaration");
    v4 = sub_180011CC4(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6 = sub_18004D9D4(*(_QWORD *)(a1 + 440), a2);
  sub_18004C840((__int64 *)(a1 + 48), (__int64)v9, a2);
  v7 = *(_QWORD *)(a1 + 440);
  sub_18005BBE8((__int64 *)v9, (_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = sub_18004E254(v7, v9);
  *(_DWORD *)(*(_QWORD *)sub_18004C514((__int64 *)(a1 + 80), (__int64)v9, a2) + 64LL) = v6;
  return v6;
}
