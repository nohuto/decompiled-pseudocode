/*
 * XREFs of sub_18004E254 @ 0x18004E254
 * Callers:
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 *     sub_18007661C @ 0x18007661C (sub_18007661C.c)
 *     sub_180076C20 @ 0x180076C20 (sub_180076C20.c)
 *     sub_180076D44 @ 0x180076D44 (sub_180076D44.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_1800908AC @ 0x1800908AC (sub_1800908AC.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E0D4 @ 0x18004E0D4 (sub_18004E0D4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18004E254(__int64 a1, void **a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v14[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v15[4]; // [rsp+40h] [rbp-B8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v17[4]; // [rsp+98h] [rbp-60h] BYREF
  _BYTE v18[32]; // [rsp+B8h] [rbp-40h] BYREF

  v14[1] = (__int64)a2;
  v4 = 0LL;
  v5 = *(_QWORD *)*a2;
  v14[0] = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = v5 + 32;
    v7 = sub_18004E0D4(a1, v5 + 32);
    if ( v7 == -1 )
    {
      v9 = sub_18001C968(
             v17,
             (__int64)"ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
             v6);
      v10 = sub_18001C87C((__int64)v18, (__int64)v9, (__int64)"'. ShaderManager::AddOption() must be called first.");
      v11 = sub_180011CC4(
              v15,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_18003A468(pExceptionObject, (__int64)v11, v12, v10, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    _bittestandset64(&v4, v7);
    sub_18001D6F4(v14, v8);
    v5 = v14[0];
  }
  sub_18004C0E0(a2, (__int64)a2);
  return v4;
}
