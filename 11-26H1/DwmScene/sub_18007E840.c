/*
 * XREFs of sub_18007E840 @ 0x18007E840
 * Callers:
 *     sub_1800438CC @ 0x1800438CC (sub_1800438CC.c)
 *     sub_18006DC9C @ 0x18006DC9C (sub_18006DC9C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004E420 @ 0x18004E420 (sub_18004E420.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007E840(__int64 a1, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v19[32]; // [rsp+B8h] [rbp+2Fh] BYREF

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(unsigned __int16 *)(v4 + 2LL * a3 + 128);
  if ( (_WORD)v5 == 0xFFFF )
  {
    v6 = sub_18004E420(*(_QWORD *)(v4 + 1152), v17, a3);
    v7 = sub_18001C928((__int64)v19, (__int64)"Property does not exist: ", v6);
    v8 = sub_180011CC4(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v10 = 56 * v5;
  v11 = *(_QWORD *)(v4 + 56);
  if ( *(_DWORD *)(v10 + v11 + 36) != 8 )
  {
    sub_180011CC4(v17, "ShaderPropertyBlock::GetTexture() -- Property is not of type Texture");
    v12 = sub_180011CC4(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertyblock.cpp");
    sub_18003A468(pExceptionObject, (__int64)v12, v13, (__int64)v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180012C40(a2, (_QWORD *)(*(_QWORD *)(a1 + 56) + 40LL * *(unsigned int *)(v10 + v11 + 40)));
  return v14;
}
