/*
 * XREFs of sub_18004E420 @ 0x18004E420
 * Callers:
 *     sub_18007E840 @ 0x18007E840 (sub_18007E840.c)
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 *     sub_18007EE1C @ 0x18007EE1C (sub_18007EE1C.c)
 *     sub_18007F01C @ 0x18007F01C (sub_18007F01C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18004E420(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD v10[4]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v12[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v13[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v14[32]; // [rsp+D8h] [rbp-30h] BYREF

  if ( a3 == 511 || a3 >= *(int *)(a1 + 18488) )
  {
    v5 = sub_180028AE4(v12, a3);
    v6 = sub_18001C928((__int64)v13, (__int64)"ShaderManager::GetPropertyName() -- property id ", v5);
    v7 = sub_18001C87C((__int64)v14, v6, (__int64)" is not registered");
    v8 = sub_180011CC4(
           v10,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800181BC(a2, a1 + 2104 + 32LL * a3);
  return a2;
}
