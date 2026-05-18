/*
 * XREFs of sub_18007E978 @ 0x18007E978
 * Callers:
 *     sub_18007EB24 @ 0x18007EB24 (sub_18007EB24.c)
 *     sub_18007EB5C @ 0x18007EB5C (sub_18007EB5C.c)
 *     sub_18007EBF0 @ 0x18007EBF0 (sub_18007EBF0.c)
 *     sub_18007EC28 @ 0x18007EC28 (sub_18007EC28.c)
 *     sub_18007ECA8 @ 0x18007ECA8 (sub_18007ECA8.c)
 *     sub_18007ED6C @ 0x18007ED6C (sub_18007ED6C.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 *     sub_18007F20C @ 0x18007F20C (sub_18007F20C.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18007E978(__int64 a1, unsigned __int16 a2, int a3)
{
  __int64 v3; // r10
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  _QWORD v18[4]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v19[4]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+78h] [rbp-11h] BYREF
  _BYTE v21[32]; // [rsp+B0h] [rbp+27h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(unsigned __int16 *)(v5 + 2 * v3 + 128);
  if ( (_WORD)v6 == 0xFFFF )
  {
    v7 = sub_18004E420(*(_QWORD *)(v5 + 1152), v19, v3);
    v8 = sub_18001C928((__int64)v21, (__int64)"Property not found in block: ", v7);
    v9 = sub_180011CC4(
           v18,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v9, v10, v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = 56 * v6;
  v12 = *(_QWORD *)(v5 + 56);
  if ( *(_DWORD *)(v11 + v12 + 36) != a3 )
  {
    sub_180011CC4(v19, "Property is not of type the correct type");
    v13 = sub_180011CC4(
            v18,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v13, v14, (__int64)v19, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_DWORD *)(v11 + v12 + 48) == 2 )
  {
    sub_180011CC4(v18, "Property is imported so cannot be modified");
    v15 = sub_180011CC4(
            v19,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v15, v16, (__int64)v18, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 32) + 4LL * *(unsigned int *)(v11 + v12 + 40);
}
