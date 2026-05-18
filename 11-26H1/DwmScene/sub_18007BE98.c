/*
 * XREFs of sub_18007BE98 @ 0x18007BE98
 * Callers:
 *     sub_180043E08 @ 0x180043E08 (sub_180043E08.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180079644 @ 0x180079644 (sub_180079644.c)
 *     sub_18007BDCC @ 0x18007BDCC (sub_18007BDCC.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004DB04 @ 0x18004DB04 (sub_18004DB04.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18006D610 @ 0x18006D610 (sub_18006D610.c)
 *     sub_18007AC98 @ 0x18007AC98 (sub_18007AC98.c)
 *     sub_18007AD40 @ 0x18007AD40 (sub_18007AD40.c)
 *     sub_18007AEA8 @ 0x18007AEA8 (sub_18007AEA8.c)
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_18007B264 @ 0x18007B264 (sub_18007B264.c)
 *     sub_18007B2B0 @ 0x18007B2B0 (sub_18007B2B0.c)
 *     sub_18007C314 @ 0x18007C314 (sub_18007C314.c)
 *     sub_18007C6B8 @ 0x18007C6B8 (sub_18007C6B8.c)
 *     sub_18007CA38 @ 0x18007CA38 (sub_18007CA38.c)
 *     sub_18007CDA4 @ 0x18007CDA4 (sub_18007CDA4.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18007BE98(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r13d
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // r8
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r12
  __int64 *v15; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+38h] [rbp-C8h]
  _OWORD pExceptionObject[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+60h] [rbp-A0h]
  unsigned int v37; // [rsp+64h] [rbp-9Ch]
  int v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+6Ch] [rbp-94h]
  int v40; // [rsp+70h] [rbp-90h]
  int v41; // [rsp+74h] [rbp-8Ch]
  _QWORD v42[4]; // [rsp+78h] [rbp-88h] BYREF
  __int16 v43; // [rsp+98h] [rbp-68h]
  __int16 v44; // [rsp+9Ah] [rbp-66h]
  int v45; // [rsp+9Ch] [rbp-64h]
  int v46; // [rsp+A0h] [rbp-60h]
  int v47; // [rsp+A4h] [rbp-5Ch]
  int v48; // [rsp+A8h] [rbp-58h]
  int v49; // [rsp+ACh] [rbp-54h]
  __int64 v50; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-48h]
  _QWORD v52[7]; // [rsp+D0h] [rbp-30h] BYREF

  v6 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_180011CC4(
      v42,
      "ShaderPropertyLayout::AddProperty() -- property can only be added while the layout is in declaration phase");
    v7 = sub_180011CC4(
           &v50,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v7, v8, (__int64)v42, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( !*(_QWORD *)(a2 + 16) )
  {
    sub_180011CC4(&v50, "ShaderPropertyLayout::AddProperty() -- property cannot have an empty name");
    v9 = sub_180011CC4(
           v42,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v9, v10, (__int64)&v50, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = (_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56) == 28672LL )
  {
    sub_180011CC4(
      &v50,
      "ShaderPropertyLayout::AddProperty() -- property block already has maximum number of properties");
    v12 = sub_180011CC4(
            v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v12, v13, (__int64)&v50, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v14 = (unsigned __int16)sub_18004DB04(*(_QWORD *)(a1 + 1152), a2);
  if ( *(_WORD *)(a1 + 2 * v14 + 128) != 0xFFFF )
  {
    v15 = sub_18001C968(&v50, (__int64)"ShaderPropertyLayout::AddProperty() -- variable '", a2);
    v16 = sub_18001C87C((__int64)pExceptionObject, (__int64)v15, (__int64)"' is already defined");
    v17 = sub_180011CC4(
            v42,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shader"
            "propertylayout.cpp");
    sub_18003A468(v52, (__int64)v17, v18, v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v52;
  }
  if ( a3 == 1 )
  {
    v19 = (_QWORD *)sub_18004E184(*(_QWORD *)(a1 + 1152), &v50);
    sub_18007E81C(*v19, &v33);
    if ( v51 )
      sub_180010EC8(v51);
    v20 = v33;
    if ( v33 != a1 )
    {
      if ( *(_WORD *)(v20 + 2LL * (unsigned __int16)sub_18007C6B8(v33, a2) + 128) == 0xFFFF )
        sub_18007E4C4(*(_QWORD *)(*(_QWORD *)(a1 + 1152) + 18648LL), a2);
      *(_BYTE *)(a1 + 1241) = 1;
      a3 = 2;
    }
    if ( v34 )
      sub_180010EC8(v34);
  }
  if ( v6 == 8 )
  {
    v21 = *(_QWORD *)(a1 + 112);
    v22 = 0xCCCCCCCCCCCCCCCDuLL * ((v21 - *(_QWORD *)(a1 + 104)) >> 3);
    memset(pExceptionObject, 0, sizeof(pExceptionObject));
    v36 = v22;
    v37 = 0;
    if ( v21 == *(_QWORD *)(a1 + 120) )
    {
      sub_18007AEA8((__int64 *)(a1 + 104), v21, (__int64)pExceptionObject);
    }
    else
    {
      sub_18007AC98();
      *(_QWORD *)(a1 + 112) += 40LL;
    }
    *(_WORD *)(a1 + 2 * v14 + 128) = 28087 * ((__int64)(v11[1] - *v11) >> 3);
    sub_1800181BC(v42, a2);
    v43 = v14;
    v44 = 0;
    v45 = 8;
    v46 = v22;
    v47 = 0;
    v48 = a3;
    v49 = 0;
    v24 = v11[1];
    if ( v24 == v11[2] )
    {
      sub_18007AD40(v11, v24, (__int64)v42);
    }
    else
    {
      sub_18007B2B0(v23, v24, (__int64)v42);
      v11[1] += 56LL;
    }
    sub_1800129D0((__int64)v42);
    sub_18006D610((__int64)pExceptionObject);
    goto LABEL_37;
  }
  sub_18007C314(a1);
  v25 = (__int64)(*(_QWORD *)(a1 + 88) - *(_QWORD *)(a1 + 80)) >> 2;
  v26 = (unsigned int)v25 + (unsigned int)sub_18007CA38(v6);
  if ( (unsigned int)v26 < v25 )
  {
    v29 = v28 + 4 * v26;
LABEL_32:
    *(_QWORD *)(v27 + 8) = v29;
    goto LABEL_33;
  }
  if ( (unsigned int)v26 > v25 )
  {
    if ( (unsigned int)v26 <= (unsigned __int64)((*(_QWORD *)(v27 + 16) - v28) >> 2) )
    {
      v29 = sub_18007B264(*(_QWORD *)(v27 + 8), (unsigned int)v26 - v25, v27);
      goto LABEL_32;
    }
    sub_18007B100((const void **)v27, (unsigned int)v26);
  }
LABEL_33:
  *(_WORD *)(a1 + 2 * v14 + 128) = 28087 * ((__int64)(v11[1] - *v11) >> 3);
  sub_1800181BC(pExceptionObject, a2);
  v36 = (unsigned __int16)v14;
  v37 = v6;
  v38 = v25;
  v39 = 1;
  v40 = a3;
  v41 = 0;
  v31 = v11[1];
  if ( v31 == v11[2] )
  {
    sub_18007AD40(v11, v31, (__int64)pExceptionObject);
  }
  else
  {
    sub_18007B2B0(v30, v31, (__int64)pExceptionObject);
    v11[1] += 56LL;
  }
  sub_1800129D0((__int64)pExceptionObject);
LABEL_37:
  *(_BYTE *)(a1 + 1240) |= a3 == 2;
  sub_18007CDA4(a1, (unsigned __int16)v14, a2);
  return (unsigned __int16)v14;
}
