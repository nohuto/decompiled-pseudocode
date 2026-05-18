/*
 * XREFs of sub_18005D23C @ 0x18005D23C
 * Callers:
 *     sub_180018EE0 @ 0x180018EE0 (sub_180018EE0.c)
 *     sub_180063230 @ 0x180063230 (sub_180063230.c)
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 *     sub_18008E2D0 @ 0x18008E2D0 (sub_18008E2D0.c)
 *     sub_1800946C4 @ 0x1800946C4 (sub_1800946C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800299DC @ 0x1800299DC (sub_1800299DC.c)
 *     sub_18002A0A4 @ 0x18002A0A4 (sub_18002A0A4.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004232C @ 0x18004232C (sub_18004232C.c)
 *     sub_180043070 @ 0x180043070 (sub_180043070.c)
 *     sub_18005BE04 @ 0x18005BE04 (sub_18005BE04.c)
 *     sub_18005C26C @ 0x18005C26C (sub_18005C26C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_18005D23C(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // [rsp+38h] [rbp-61h] BYREF
  volatile signed __int32 *v13; // [rsp+40h] [rbp-59h]
  __int64 v14; // [rsp+48h] [rbp-51h] BYREF
  __int64 v15; // [rsp+50h] [rbp-49h]
  _QWORD v16[5]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v17; // [rsp+80h] [rbp-19h] BYREF
  __int64 v18; // [rsp+88h] [rbp-11h]
  _QWORD pExceptionObject[7]; // [rsp+A0h] [rbp+7h] BYREF

  v16[4] = a2;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180011CC4(
      &v17,
      "ShaderFamily::CreateMaterial() -- materials cannot be created until shader family declaration is complete");
    v4 = sub_180011CC4(
           v16,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v4, v5, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180012C40(&v14, (_QWORD *)(a1 + 128));
  if ( !v14 || *(_DWORD *)(v14 + 1168) != 1 )
  {
    sub_180011CC4(
      &v17,
      "ShaderFamily::CreateMaterial() -- materials cannot be created until valid material layout is specified (non-null and complete)");
    v10 = sub_180011CC4(
            v16,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v10, v11, (__int64)&v17, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18005BE04(*(_QWORD *)(*(_QWORD *)(a1 + 440) + 18688LL), a2);
  v6 = (_QWORD *)*a2;
  if ( *a2 )
  {
    v7 = sub_18004232C(a1, &v12);
    sub_180043070(v6, v7);
    sub_1800299DC((__int64)&v17, a1 + 472);
    sub_1800162D0(&v12, a2);
    sub_18005C26C((__int64 *)(a1 + 480), (__int64)v16, &v12);
    if ( v13 )
      sub_180010F00(v13);
    sub_180011E54((__int64)&v17);
  }
  v8 = (_QWORD *)sub_180012BF8(*a2 + 96, &v17);
  sub_18002A0A4((__int64 *)(*a2 + 216), v8);
  if ( v18 )
    sub_180010EC8(v18);
  if ( v15 )
    sub_180010EC8(v15);
  return a2;
}
