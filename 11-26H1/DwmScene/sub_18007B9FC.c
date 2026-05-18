/*
 * XREFs of sub_18007B9FC @ 0x18007B9FC
 * Callers:
 *     sub_1800451CC @ 0x1800451CC (sub_1800451CC.c)
 *     sub_1800456D0 @ 0x1800456D0 (sub_1800456D0.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004DB04 @ 0x18004DB04 (sub_18004DB04.c)
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_18007B264 @ 0x18007B264 (sub_18007B264.c)
 *     sub_18007B2B0 @ 0x18007B2B0 (sub_18007B2B0.c)
 *     sub_18007C314 @ 0x18007C314 (sub_18007C314.c)
 *     sub_18007CA38 @ 0x18007CA38 (sub_18007CA38.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18007B9FC(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r8
  _QWORD *v16; // rax
  __int64 v17; // r8
  int v18; // eax
  int v19; // edx
  _QWORD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 *v29; // rax
  __int64 v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rax
  __int64 v34; // r8
  __int64 v35; // [rsp+30h] [rbp-D0h]
  unsigned int v36; // [rsp+38h] [rbp-C8h]
  _QWORD v37[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v38[4]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v40[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v41; // [rsp+D8h] [rbp-28h]
  __int16 v42; // [rsp+DAh] [rbp-26h]
  unsigned int v43; // [rsp+DCh] [rbp-24h]
  int v44; // [rsp+E0h] [rbp-20h]
  unsigned int v45; // [rsp+E4h] [rbp-1Ch]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  _QWORD v47[7]; // [rsp+F0h] [rbp-10h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180011CC4(
      v37,
      "ShaderPropertyLayout::AddArrayProperty() -- properties can only be added during declaration phase before EndDeclaration()");
    v8 = sub_180011CC4(
           v38,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v8, v9, (__int64)v37, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_180011CC4(v38, "ShaderPropertyLayout::AddArrayProperty() -- property cannot have an empty name");
    v33 = sub_180011CC4(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(v47, (__int64)v33, v34, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  v10 = (_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    sub_180011CC4(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- property block already has maximum number of properties");
    v11 = sub_180011CC4(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v11, v12, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v13 = (unsigned __int16)sub_18004DB04(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v13 + 128) != 0xFFFF )
  {
    v29 = sub_18001C968(v38, (__int64)"ShaderPropertyLayout::AddArrayProperty() -- variable '", a2);
    v30 = sub_18001C87C((__int64)pExceptionObject, (__int64)v29, (__int64)"' is already defined");
    v31 = sub_180011CC4(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(v47, (__int64)v31, v32, v30, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v47;
  }
  if ( a3 != 5 && a3 != 7 )
  {
    sub_180011CC4(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- Only Vector4 and Matrix arrays are currently supported");
    v14 = sub_180011CC4(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v14, v15, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( a4 <= 1 )
  {
    sub_180011CC4(
      v38,
      "ShaderPropertyLayout::AddArrayProperty() -- Array size must be more than 1. For arrays of size 1 use AddProperty instead");
    v16 = sub_180011CC4(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v16, v17, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18007C314(a1);
  v35 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  v18 = sub_18007CA38(a3);
  v36 = v19 + a4 * v18;
  if ( v36 > 0x4064 )
  {
    sub_180011CC4(v38, "ShaderPropertyLayout::AddArrayProperty() -- Array extends property block past maximum capacity");
    v20 = sub_180011CC4(
            v37,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v20, v21, (__int64)v38, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_1800181BC(v40, a2);
  v41 = v13;
  v42 = 0;
  v43 = a3;
  v44 = v35;
  v45 = a4;
  v46 = 0LL;
  v23 = v10[1];
  v24 = 0x6DB6DB6DB6DB6DB7LL * ((v23 - *v10) >> 3);
  if ( v23 == v10[2] )
  {
    sub_18007AD40(v10, v23, (__int64)v40);
  }
  else
  {
    sub_18007B2B0(v22, v23, (__int64)v40);
    v10[1] += 56LL;
  }
  *(_WORD *)(a1 + 2 * v13 + 128) = v24;
  v25 = *(_QWORD *)(a1 + 80);
  v26 = (*(_QWORD *)(a1 + 88) - v25) >> 2;
  if ( v36 < v26 )
  {
    v27 = v25 + 4LL * v36;
LABEL_23:
    *(_QWORD *)(a1 + 88) = v27;
    goto LABEL_24;
  }
  if ( v36 > v26 )
  {
    if ( v36 <= (unsigned __int64)((*(_QWORD *)(a1 + 96) - v25) >> 2) )
    {
      v27 = sub_18007B264(*(_QWORD *)(a1 + 88), v36 - v26, a1 + 80);
      goto LABEL_23;
    }
    sub_18007B100((const void **)(a1 + 80), v36);
  }
LABEL_24:
  sub_1800129D0((__int64)v40);
  return (unsigned __int16)v13;
}
