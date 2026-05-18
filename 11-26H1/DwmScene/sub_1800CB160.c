/*
 * XREFs of sub_1800CB160 @ 0x1800CB160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012384 @ 0x180012384 (sub_180012384.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013494 @ 0x180013494 (sub_180013494.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_180016FD4 @ 0x180016FD4 (sub_180016FD4.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18002912C @ 0x18002912C (sub_18002912C.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180029310 @ 0x180029310 (sub_180029310.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_180051C70 @ 0x180051C70 (sub_180051C70.c)
 *     sub_180051F28 @ 0x180051F28 (sub_180051F28.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C04E0 @ 0x1800C04E0 (sub_1800C04E0.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800CAA90 @ 0x1800CAA90 (sub_1800CAA90.c)
 *     sub_1800CAB48 @ 0x1800CAB48 (sub_1800CAB48.c)
 *     sub_1800CABBC @ 0x1800CABBC (sub_1800CABBC.c)
 *     sub_1800CB8A8 @ 0x1800CB8A8 (sub_1800CB8A8.c)
 *     sub_1800CBD3C @ 0x1800CBD3C (sub_1800CBD3C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800CB160(__int64 a1, int a2, int a3, int a4, unsigned int a5)
{
  __int16 v7; // cx
  __int128 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r15
  __int64 *v12; // rax
  __int64 *v13; // rsi
  __int64 v14; // rbx
  _QWORD *v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // ebx
  char v19; // r8
  __int64 v20; // rbx
  _QWORD *v21; // rax
  _DWORD *v22; // rax
  _QWORD *v23; // rax
  void (__fastcall *v24)(__int64, _QWORD *); // r8
  __int64 v25; // r9
  BOOL v26; // edx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 *v29; // rax
  __int64 v30; // rbx
  __int64 (__fastcall *v31)(__int64, __int64, int *, __int64); // rdi
  int v32; // eax
  _QWORD *v33; // rax
  const char *v34; // rax
  __int64 v35; // rdx
  __int64 result; // rax
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int128 v39; // [rsp+30h] [rbp-D0h] BYREF
  int v40; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v42; // [rsp+50h] [rbp-B0h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch]
  __int128 v45; // [rsp+68h] [rbp-98h]
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  int v50; // [rsp+D0h] [rbp-30h] BYREF
  char v51; // [rsp+D4h] [rbp-2Ch]
  bool v52; // [rsp+D5h] [rbp-2Bh]
  bool v53; // [rsp+D6h] [rbp-2Ah]
  _BYTE v54[56]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v55; // [rsp+110h] [rbp+10h]
  _QWORD pExceptionObject[9]; // [rsp+120h] [rbp+20h] BYREF

  v41 = a2;
  v40 = a3;
  sub_180012A94(a1 + 72, &v46);
  if ( v47 )
    sub_180010EC8(v47);
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    sub_180011CC4(&v46, "Invalid format for DepthBuffer");
    v37 = sub_180011CC4(
            pExceptionObject,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18006A84C(&v48, (__int64)v37, v38, (__int64)&v46, 0);
    throw (Spectre::Engine::EngineException *)&v48;
  }
  sub_180012A94(a1 + 72, &v39);
  v42 = v39;
  v7 = a5;
  *(_BYTE *)(a1 + 256) = (a5 & 0x40) != 0;
  v55 = 0LL;
  v50 = a4;
  v51 = HIBYTE(v7) & 1;
  v52 = (v7 & 0x400) != 0;
  v53 = (v7 & 0x200) != 0;
  v8 = (__int128 *)sub_1800CAB48(pExceptionObject, a1, (__int64)&v41, (__int64)&v40, (__int64)&a5, (__int64)&v42);
  sub_1800CAA90((__int64)v54, v8);
  a5 = a5 & 0xFFFFF8BA | 1;
  if ( v52 && a4 != 1 )
  {
    sub_180011CC4(&v48, "Readable stencil requested for stencil-buffer format that does not support stencil");
    v9 = sub_180011CC4(
           &v46,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\depthbufferd3d11.cpp");
    sub_18003A468(pExceptionObject, (__int64)v9, v10, (__int64)&v48, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v11 = v46;
  v12 = sub_180016FD4(*(_QWORD *)(v46 + 3984), &v39);
  v13 = (__int64 *)(a1 + 128);
  sub_180011F5C((_QWORD *)(a1 + 128), v12);
  if ( *((_QWORD *)&v39 + 1) )
    sub_180010EC8(*((__int64 *)&v39 + 1));
  v14 = *v13;
  v15 = sub_18002912C(a1, &v48);
  v16 = sub_18001C87C((__int64)&v46, (__int64)v15, (__int64)"Shared Texture");
  sub_1800292C4(v14, v16);
  sub_1800129D0((__int64)&v48);
  sub_180029310(*v13, 1, 0);
  v18 = v17 + 2;
  sub_180029310(*v13, v17 + 2, v17);
  sub_180029310(*v13, v18 + 2, v19);
  if ( v51 || v52 || v53 )
  {
    sub_180051C70(v11, &v48);
    v20 = v48;
    v21 = sub_180011CC4(&v46, "DepthBuffer Readable Sampler");
    sub_1800292C4(v20, (__int64)v21);
    if ( v51 )
      sub_180013540((__int64 *)(a1 + 208), &v48);
    if ( v52 )
      sub_180013540((__int64 *)(a1 + 240), &v48);
    if ( v53 )
      sub_180013540((__int64 *)(a1 + 224), &v48);
    sub_180051F28(&v46);
    v22 = (_DWORD *)v46;
    *(_DWORD *)v46 = 0;
    v18 = 2;
    v22[1] = 2;
    v22[2] = 2;
    v22[3] = 2;
    v23 = sub_180012C40(&v39, &v46);
    v24(v25, v23);
    if ( v47 )
      sub_180010EC8(v47);
    if ( v49 )
      sub_180010EC8(v49);
  }
  v45 = 0LL;
  if ( (unsigned int)(a4 - 23) <= 1 )
    v26 = v18;
  else
    v26 = (a5 & 8) != 0;
  v43 = sub_1800C04E0(a4, v26);
  if ( *(_BYTE *)(a1 + 256) )
  {
    v44 = 5;
    v27 = sub_1800CABBC((__int64)pExceptionObject, (__int64)&v50);
    sub_1800CBD3C(a1, v27);
  }
  else
  {
    v44 = 3;
    v28 = sub_1800CABBC((__int64)pExceptionObject, (__int64)&v50);
    sub_1800CB8A8(a1, v28);
  }
  sub_1800BC108(v42, &v39);
  v29 = sub_180012C40(&v48, (_QWORD *)(a1 + 96));
  sub_18001818C(&v46, v29);
  sub_1800C4EEC(v46, &v48);
  v30 = v39;
  v31 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64))(*(_QWORD *)v39 + 80LL);
  sub_18000F938((__int64 *)(a1 + 112));
  v32 = v31(v30, v48, &v43, a1 + 112);
  sub_1800BDDBC(v42, v32);
  v33 = sub_18002912C(a1, pExceptionObject);
  v34 = (const char *)sub_1800148EC((__int64)v33);
  sub_180012384(*(_QWORD *)(a1 + 112), v34);
  sub_1800129D0((__int64)pExceptionObject);
  sub_18000F938(&v48);
  if ( v47 )
    sub_180010EC8(v47);
  sub_18000F938((__int64 *)&v39);
  result = sub_180013494((__int64)v54, v35);
  if ( *((_QWORD *)&v42 + 1) )
    return sub_180010EC8(*((__int64 *)&v42 + 1));
  return result;
}
