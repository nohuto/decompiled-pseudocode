/*
 * XREFs of sub_18003F8DC @ 0x18003F8DC
 * Callers:
 *     sub_18003F5D0 @ 0x18003F5D0 (sub_18003F5D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029EF8 @ 0x180029EF8 (sub_180029EF8.c)
 *     sub_180038908 @ 0x180038908 (sub_180038908.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18003C964 @ 0x18003C964 (sub_18003C964.c)
 *     sub_18003E2DC @ 0x18003E2DC (sub_18003E2DC.c)
 *     sub_18003FF30 @ 0x18003FF30 (sub_18003FF30.c)
 *     sub_18004068C @ 0x18004068C (sub_18004068C.c)
 *     sub_180041D60 @ 0x180041D60 (sub_180041D60.c)
 */

// Hidden C++ exception states: #wind=5
__int64 **__fastcall sub_18003F8DC(__int64 a1, __int64 **a2, unsigned __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 v6; // rbx
  __int64 *v9; // rax
  volatile signed __int64 *v10; // rcx
  volatile __int64 *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r8
  volatile __int32 *v14; // rbx
  _QWORD *v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r8
  _QWORD v22[2]; // [rsp+30h] [rbp-91h] BYREF
  _QWORD v23[3]; // [rsp+40h] [rbp-81h] BYREF
  __int64 *v24; // [rsp+58h] [rbp-69h] BYREF
  __int64 *v25; // [rsp+60h] [rbp-61h]
  _QWORD v26[4]; // [rsp+78h] [rbp-49h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-29h] BYREF

  v6 = a3;
  v22[0] = a3;
  v23[2] = a4;
  sub_180029EF8(a1 + 16, (__int64)a2);
  if ( !*a4 )
  {
    v9 = (__int64 *)sub_18004068C(*a5, &v24);
    sub_180011F5C(a4, v9);
    if ( v25 )
      sub_180010EC8((__int64)v25);
  }
  v10 = (volatile signed __int64 *)(a1 + 72);
  if ( v6 == -1LL )
  {
    v6 = _InterlockedExchangeAdd64(v10, 1uLL);
    v22[0] = v6;
  }
  else if ( v6 >= sub_18003E2DC((__int64)v10) )
  {
    _InterlockedExchange64(v11, v6 + 1);
  }
  if ( v6 == -1LL )
  {
    sub_180011CC4(v26, "Run out of available IDs");
    v12 = sub_180011CC4(
            &v24,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v12, v13, (__int64)v26, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *(_QWORD *)sub_180041D60(a1 + 120, v23, v22) != *(_QWORD *)(a1 + 128) )
  {
    sub_180011CC4(&v24, "Node id already exists");
    v20 = sub_180011CC4(
            v26,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\scene.cpp");
    sub_18003A468(pExceptionObject, (__int64)v20, v21, (__int64)&v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  if ( *a4 )
  {
    v14 = (volatile __int32 *)(*a5 + 76LL);
    v23[0] = v14;
    while ( _InterlockedExchange(v14, 1) )
      ;
    sub_18003FF30(a1, &v24, v22);
    v15 = sub_180012C40(v22, a4);
    v16 = v24;
    sub_18003C964(v24, (_QWORD **)v15);
    *(_BYTE *)(*a5 + 72LL) = 1;
    *a2 = v16;
    a2[1] = v25;
    sub_180038908(v14, v17, 3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  v18 = a4[1];
  if ( v18 )
    sub_180010EC8(v18);
  return a2;
}
