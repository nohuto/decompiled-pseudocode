/*
 * XREFs of sub_18004D70C @ 0x18004D70C
 * Callers:
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C968 @ 0x18001C968 (sub_18001C968.c)
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004C408 @ 0x18004C408 (sub_18004C408.c)
 *     sub_18004E8E8 @ 0x18004E8E8 (sub_18004E8E8.c)
 *     sub_18005D174 @ 0x18005D174 (sub_18005D174.c)
 *     sub_18005DDC8 @ 0x18005DDC8 (sub_18005DDC8.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18004D70C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  bool v10; // di
  __int64 *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 result; // rax
  __int64 v25; // rcx
  _QWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h]
  _QWORD *v32; // [rsp+80h] [rbp-80h]
  __int64 v33[4]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v34[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 pExceptionObject; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-30h]
  _QWORD v37[7]; // [rsp+100h] [rbp+0h] BYREF

  v32 = a2;
  v4 = *a2;
  if ( !v4 )
  {
    sub_180011CC4(v33, "ShaderManager::AddExtension() -- Extension passed to function cannot be null");
    v5 = sub_180011CC4(
           v26,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(&pExceptionObject, (__int64)v5, v6, (__int64)v33, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)&pExceptionObject;
  }
  sub_1800181BC(v34, v4 + 24);
  v7 = sub_1800181BC(v33, (__int64)v34);
  sub_18001CC6C(a1 + 18592, v26, (__int64)v7);
  v8 = v27;
  v10 = !sub_18001CD34(v9, v27) || v8 == *(_QWORD *)(a1 + 18592);
  sub_1800129D0((__int64)v7);
  if ( !v10 )
  {
    v11 = sub_18001C968(v33, (__int64)"ShaderManager::AddExtension() -- Extension with name '", (__int64)v34);
    v12 = sub_18001C87C((__int64)&pExceptionObject, (__int64)v11, (__int64)"' is already installed");
    v13 = sub_180011CC4(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shadermanager.cpp");
    sub_18003A468(v37, (__int64)v13, v14, v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v37;
  }
  sub_18005DDC8(*a2, *(_QWORD *)(a1 + 18688), a1, a1 + 18664);
  v15 = *(_QWORD *)sub_18004C408((__int64 *)(a1 + 18592), (__int64)v26, (__int64)v34);
  v16 = *a2;
  v17 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_QWORD *)(v15 + 64) = v16;
  v18 = *(_QWORD *)(v15 + 72);
  *(_QWORD *)(v15 + 72) = v17;
  if ( v18 )
    sub_180010EC8(v18);
  v19 = sub_1800181BC(v26, (__int64)v34);
  sub_18004E8E8(a1, &pExceptionObject, v19);
  sub_180036040(*(_QWORD *)(a1 + 18688), &v30);
  v20 = 0;
  v21 = v30;
  if ( (v31 - v30) >> 4 )
  {
    v22 = 0LL;
    do
    {
      sub_180012C40(&v28, (_QWORD *)(v21 + 16 * v22));
      if ( *(_DWORD *)(v28 + 244) )
      {
        sub_180029C10(v28 + 24, (__int64)v26);
        v23 = sub_180012C40(v33, &v28);
        sub_18005D174(pExceptionObject, v23);
        sub_180011E54((__int64)v26);
      }
      if ( v29 )
        sub_180010EC8(v29);
      v22 = ++v20;
      v21 = v30;
    }
    while ( v20 < (unsigned __int64)((v31 - v30) >> 4) );
  }
  sub_1800141F0((__int64)&v30);
  if ( v36 )
    sub_180010EC8(v36);
  result = sub_1800129D0((__int64)v34);
  v25 = a2[1];
  if ( v25 )
    return sub_180010EC8(v25);
  return result;
}
