/*
 * XREFs of sub_18004DB04 @ 0x18004DB04
 * Callers:
 *     sub_18007B9FC @ 0x18007B9FC (sub_18007B9FC.c)
 *     sub_18007BE98 @ 0x18007BE98 (sub_18007BE98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004C620 @ 0x18004C620 (sub_18004C620.c)
 *     sub_18004E128 @ 0x18004E128 (sub_18004E128.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004DB04(__int64 a1, __int64 a2)
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
    sub_180011CC4(v12, "ShaderManager::RegisterShaderProperty() -- shader property name cannot be empty");
    v4 = sub_180011CC4(
           v11,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  LOWORD(v6) = sub_18004E128();
  if ( (_WORD)v6 == 511 )
  {
    v6 = *(int *)(a1 + 18488);
    if ( (int)v6 >= 512 )
    {
      sub_180011CC4(
        v11,
        "ShaderManager::RegisterProperty() -- property could not be registered because the maximum number of properties has been reached");
      v8 = sub_180011CC4(
             v12,
             "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
      sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)v11, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    *(_DWORD *)(a1 + 18488) = v6 + 1;
    *(_WORD *)(*(_QWORD *)sub_18004C620((__int64 *)(a1 + 2088), (__int64)v10, a2) + 64LL) = v6;
    sub_1800143E4(a1 + 32 * v6 + 2104, a2);
  }
  return (unsigned __int16)v6;
}
