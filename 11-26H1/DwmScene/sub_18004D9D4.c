/*
 * XREFs of sub_18004D9D4 @ 0x18004D9D4
 * Callers:
 *     sub_18005D05C @ 0x18005D05C (sub_18005D05C.c)
 *     sub_180061A20 @ 0x180061A20 (sub_180061A20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 *     sub_18004E0D4 @ 0x18004E0D4 (sub_18004E0D4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004D9D4(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _BYTE v10[16]; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-39h] BYREF
  _QWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp+7h] BYREF

  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_180011CC4(v12, "ShaderManager::AddOption() -- shader option name cannot be empty");
    v4 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LODWORD(v6) = sub_18004E0D4(a1, a2);
  if ( (_DWORD)v6 == -1 )
  {
    v6 = *(int *)(a1 + 2080);
    if ( (int)v6 >= 64 )
    {
      sub_180011CC4(
        v11,
        "ShaderManager::AddOption() -- option could not be added because the maximum number of options has been reached");
      v8 = sub_180011CC4(
             v12,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)v11, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 2080) = v6 + 1;
    *(_DWORD *)(*(_QWORD *)sub_18004C514((__int64 *)(a1 + 16), (__int64)v10, a2) + 64LL) = v6;
    sub_1800143E4(a1 + 32 * (v6 + 1), a2);
  }
  return (unsigned int)v6;
}
