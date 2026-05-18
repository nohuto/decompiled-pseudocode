/*
 * XREFs of sub_1800597B4 @ 0x1800597B4
 * Callers:
 *     sub_180059718 @ 0x180059718 (sub_180059718.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800130CC @ 0x1800130CC (sub_1800130CC.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180030C74 @ 0x180030C74 (sub_180030C74.c)
 *     sub_18003197C @ 0x18003197C (sub_18003197C.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_1800469BC @ 0x1800469BC (sub_1800469BC.c)
 *     sub_18006D8E8 @ 0x18006D8E8 (sub_18006D8E8.c)
 *     sub_18006E99C @ 0x18006E99C (sub_18006E99C.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 *     sub_18009993C @ 0x18009993C (sub_18009993C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=12
char __fastcall sub_1800597B4(_QWORD *a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  char result; // al
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int128 v12; // kr00_16
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rcx
  __int128 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h]
  _BYTE v22[8]; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v23; // [rsp+58h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  __int64 v29; // [rsp+88h] [rbp-78h]
  _QWORD v30[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v31[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v33[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v34[4]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+118h] [rbp+18h] BYREF

  v6 = a1 + 212;
  result = sub_1800469BC(a1[212], (__int64)&off_1801BE6A0);
  if ( !result )
  {
    sub_18001C8C0(v34, (__int64)(a1 + 3), (__int64)" effect");
    v8 = *a2;
    sub_180029EF8(v8 + 24, v9);
    sub_180012C40(&v28, (_QWORD *)(v8 + 272));
    sub_180099888(v31, &v28, v34);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a3 + 200LL))(*a3, v22);
    sub_180030C74(v32, v10);
    if ( v23 )
      sub_180010F00(v23);
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 152LL))(*a3);
    sub_180012C40(&v24, v11);
    sub_18006E99C(v24, &v20, v6);
    v12 = v20;
    if ( (_QWORD)v20 != *((_QWORD *)&v20 + 1) )
    {
      if ( (unsigned __int64)((__int64)(*((_QWORD *)&v20 + 1) - v20) >> 4) > 1 )
      {
        sub_180011CC4(v33, "Camera::RenderEffects() -- only one effect per output is currently supported");
        v13 = sub_180011CC4(
                v30,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
        sub_18003A468(pExceptionObject, (__int64)v13, v14, (__int64)v33, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_DWORD *)(*(_QWORD *)v20 + 176LL) != 1 )
      {
        sub_180011CC4(v33, "Camera::RenderEffects() -- effect must have local scope to be rendered by a camera");
        v15 = sub_180011CC4(
                v30,
                "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\camera.cpp");
        sub_18003A468(pExceptionObject, (__int64)v15, v16, (__int64)v33, 0);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      if ( *(_BYTE *)(*(_QWORD *)v20 + 136LL) )
      {
        sub_180012C40(&v26, a1 + 17);
        sub_180026A6C(v26, v33);
        v17 = (unsigned int)sub_180012C40(v30, (_QWORD *)v12);
        sub_18006D8E8(v24, (unsigned int)v22, (_DWORD)a3, v17, v18);
        if ( v27 )
          sub_180010EC8(v27);
        v19 = a1[220];
        if ( v19 )
          (*(void (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v19 + 16LL))(v19, *(_QWORD *)v12, v22);
        if ( v23 )
          sub_180010EC8((__int64)v23);
        v12 = v20;
      }
    }
    if ( (_QWORD)v12 )
    {
      sub_1800130CC(v12, *((__int64 *)&v12 + 1));
      sub_18000E26C((void *)v20, (v21 - v20) & 0xFFFFFFFFFFFFFFF0uLL);
      v20 = 0LL;
      v21 = 0LL;
    }
    if ( v25 )
      sub_180010EC8(v25);
    sub_18003197C((__int64)v32);
    sub_18009993C(v31);
    if ( v29 )
      sub_180010EC8(v29);
    return sub_1800129D0((__int64)v34);
  }
  return result;
}
