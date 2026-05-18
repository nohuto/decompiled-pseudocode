/*
 * XREFs of sub_18005E0AC @ 0x18005E0AC
 * Callers:
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 *     sub_18006541C @ 0x18006541C (sub_18006541C.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18005DA34 @ 0x18005DA34 (sub_18005DA34.c)
 *     sub_18005E188 @ 0x18005E188 (sub_18005E188.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005E0AC(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  _QWORD v13[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+58h] [rbp-90h] BYREF
  __int64 v15[4]; // [rsp+90h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+B0h] [rbp-38h] BYREF

  v6 = sub_18005DA34(a1);
  if ( v6 == -1 )
  {
    v8 = sub_18001C968(v15, (__int64)"ShaderFamily::SetOption() -- The option '", a2);
    v9 = sub_18001C87C((__int64)v16, (__int64)v8, (__int64)"' cannot be set.");
    v10 = sub_180011CC4(
            v13,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v10, v11, v9, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOBYTE(v7) = a3;
  return sub_18005E188(a1, v6, v7);
}
