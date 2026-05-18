/*
 * XREFs of sub_180054E00 @ 0x180054E00
 * Callers:
 *     sub_180054DA8 @ 0x180054DA8 (sub_180054DA8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_180013084 @ 0x180013084 (sub_180013084.c)
 *     sub_18001367C @ 0x18001367C (sub_18001367C.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_180054534 @ 0x180054534 (sub_180054534.c)
 *     sub_180054910 @ 0x180054910 (sub_180054910.c)
 *     sub_18005526C @ 0x18005526C (sub_18005526C.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_180054E00(__int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // di
  struct _Mtx_internal_imp_t *v8; // rbx
  char v9; // si
  bool v10; // r14
  unsigned int v11; // eax
  int v12; // r8d
  _QWORD *v13; // rax
  __int64 v14; // r11
  unsigned int v15; // eax
  int v16; // r8d
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  volatile signed __int32 *v21; // [rsp+38h] [rbp-C8h]
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 *v26; // [rsp+60h] [rbp-A0h]
  _QWORD v27[4]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[56]; // [rsp+E0h] [rbp-20h] BYREF

  v23 = a4;
  v22 = a3;
  v7 = 0;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 16);
  v26 = a1 + 16;
  sub_180012AC4((__int64)(a1 + 16));
  sub_180012A94(*a2 + 56LL, &v24);
  v9 = 1;
  v10 = 1;
  if ( v24 )
  {
    v7 = 1;
    if ( *(_QWORD *)sub_18001367C(v24, &v28) )
      v10 = 0;
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( v29 )
      sub_180010EC8(v29);
  }
  if ( v10 )
  {
    sub_180011CC4(&v28, "Cameras added to Displays must be attached to a scene.");
    v11 = (unsigned int)sub_180011CC4(
                          v27,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v11, v12, (unsigned int)&v28, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18005526C(a1, &v28);
  if ( !v28 || (v13 = (_QWORD *)sub_18001367C(v24, &v20), v7 |= 2u, *v13 == v14) )
    v9 = 0;
  if ( (v7 & 2) != 0 && v21 )
    sub_180010EC8((__int64)v21);
  if ( v9 )
  {
    sub_180011CC4(pExceptionObject, "Displays require that all cameras be in the same scene.");
    v15 = (unsigned int)sub_180011CC4(
                          v27,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_18006A84C((unsigned int)v31, v15, v16, (unsigned int)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v31;
  }
  v17 = (_QWORD *)a1[6];
  if ( v17 == (_QWORD *)a1[7] )
  {
    sub_180054534(a1 + 5, a1[6], a2);
  }
  else
  {
    sub_180013084(v17, a2);
    a1[6] += 16LL;
  }
  sub_1800162D0(&v20, a2);
  v18 = *(_QWORD *)sub_180054910(a1 + 11, (__int64)v27, (__int64)&v20);
  *(_QWORD *)(v18 + 48) = v22;
  *(_QWORD *)(v18 + 56) = v23;
  *(_DWORD *)(v18 + 64) = a5;
  if ( v21 )
    sub_180010F00(v21);
  if ( v29 )
    sub_180010EC8(v29);
  if ( v25 )
    sub_180010EC8(v25);
  return Mtx_unlock(v8);
}
