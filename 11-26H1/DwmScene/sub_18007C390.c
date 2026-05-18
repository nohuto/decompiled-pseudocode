/*
 * XREFs of sub_18007C390 @ 0x18007C390
 * Callers:
 *     sub_180043070 @ 0x180043070 (sub_180043070.c)
 *     sub_180049B60 @ 0x180049B60 (sub_180049B60.c)
 *     sub_18004EF74 @ 0x18004EF74 (sub_18004EF74.c)
 *     sub_18005D8B8 @ 0x18005D8B8 (sub_18005D8B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18007ACA4 @ 0x18007ACA4 (sub_18007ACA4.c)
 *     sub_18007E644 @ 0x18007E644 (sub_18007E644.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18007C390(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  _QWORD *v11; // [rsp+38h] [rbp-61h]
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+48h] [rbp-51h]
  _QWORD *v14; // [rsp+50h] [rbp-49h]
  _QWORD v15[4]; // [rsp+58h] [rbp-41h] BYREF
  _QWORD v16[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v14 = a2;
  if ( *(_DWORD *)(a1 + 1168) != 1 )
  {
    sub_180011CC4(
      v16,
      "ShaderPropertyLayout::CreateBlock() -- layout declaration must be complete before a property block can be created.");
    v4 = sub_180011CC4(
           v15,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderp"
           "ropertylayout.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)v16, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18004232C(a1, &v12);
  v6 = sub_18001C514(168LL);
  v7 = v6;
  if ( v6 )
  {
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 8) = 1;
    *(_DWORD *)(v6 + 12) = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    sub_18007ACA4();
  }
  else
  {
    v7 = 0LL;
  }
  *a2 = v7 + 16;
  a2[1] = v7;
  if ( v13 )
    sub_180010EC8(v13);
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v8 = *a2;
    v11 = (_QWORD *)sub_18004E184(*(_QWORD *)(a1 + 1152), &v12);
    sub_180013540((__int64 *)(v8 + 112), v11);
    *(_DWORD *)(v8 + 104) = *(_DWORD *)(*v11 + 80LL) - 1;
    sub_18007E644(v8);
    v9 = v11[1];
    if ( v9 )
      sub_180010EC8(v9);
  }
  return a2;
}
