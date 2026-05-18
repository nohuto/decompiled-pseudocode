/*
 * XREFs of sub_1800C4B58 @ 0x1800C4B58
 * Callers:
 *     sub_1800C8130 @ 0x1800C8130 (sub_1800C8130.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_180054028 @ 0x180054028 (sub_180054028.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C2B14 @ 0x1800C2B14 (sub_1800C2B14.c)
 *     sub_1800C48B0 @ 0x1800C48B0 (sub_1800C48B0.c)
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 *__fastcall sub_1800C4B58(__int64 a1, __int64 *a2, unsigned int a3, unsigned int a4)
{
  int v8; // eax
  char v9; // dl
  int v10; // esi
  __int64 *v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int128 v15; // kr00_16
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int128 *, _QWORD, __int64 *); // rdi
  int v18; // edi
  void **v19; // rax
  void **v20; // rax
  void **v21; // rax
  void **v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rax
  void **v25; // rbx
  _QWORD *v26; // rax
  _BYTE *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v32; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int128 v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-90h] BYREF
  __int128 v37; // [rsp+80h] [rbp-80h]
  _QWORD v38[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v39[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v40[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v41[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+100h] [rbp+0h] BYREF

  v32 = a2;
  sub_180054028(a1);
  v8 = sub_1800540C4(a1);
  v10 = sub_1800C48B0(v8, v9);
  v11 = (__int64 *)(a1 + 184);
  v12 = *(_QWORD *)(a1 + 184);
  if ( v12 )
  {
    v36 = 0LL;
    v37 = 0LL;
    memset(v38, 0, 12);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 80LL))(v12, &v36);
    if ( (_QWORD)v36 != __PAIR64__(a4, a3) || (_DWORD)v37 != v10 )
      sub_18000F938((__int64 *)(a1 + 184));
  }
  if ( !*v11 )
  {
    *(_QWORD *)((char *)v38 + 4) = 0x10000LL;
    *(_QWORD *)&v36 = __PAIR64__(a4, a3);
    *((_QWORD *)&v36 + 1) = 0x100000001LL;
    HIDWORD(v37) = 2;
    LODWORD(v37) = v10;
    *(_QWORD *)((char *)&v37 + 4) = 1LL;
    LODWORD(v38[0]) = 8;
    sub_180012A94(a1 + 72, &v33);
    v15 = v33;
    v14 = v15 >> 64;
    v13 = v15;
    v35 = v33;
    sub_1800BC108(v33, &v32);
    v31 = 0LL;
    v16 = (__int64)v32;
    v17 = *(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, __int64 *))(*v32 + 40);
    sub_18000F938(&v31);
    v18 = v17(v16, &v36, 0LL, &v31);
    sub_1800BDDBC(v13, v18);
    if ( v18 < 0 )
    {
      sub_180011CC4(v39, "THROW_IF_FAILED_DETAILED. ");
      v19 = sub_18001DFB0((__int64)v39, " File=", 6uLL);
      sub_18001DFB0(
        (__int64)v19,
        "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
        0x5CuLL);
      v20 = sub_18001DFB0((__int64)v39, " Line=", 6uLL);
      sub_18001DFB0((__int64)v20, "932", 3uLL);
      v21 = sub_18001DFB0((__int64)v39, " Message=", 9uLL);
      sub_18001DFB0(
        (__int64)v21,
        "\"TextureD3D11::GetOrCreateCPUStagingTexture(): unable to create texture (2D)\"",
        0x4DuLL);
      v22 = sub_18001DFB0((__int64)v39, " Details=\"", 0xAuLL);
      v33 = 0LL;
      v34 = 0LL;
      v23 = sub_1800C4F18(v40, &v36, &v33);
      v24 = sub_18001DF88((__int64)v22, v23);
      sub_18001DFB0(v24, "\"", 1uLL);
      sub_1800129D0((__int64)v40);
      if ( (_QWORD)v33 )
        sub_18000E26C((void *)v33, (v34 - v33) & 0xFFFFFFFFFFFFFFF0uLL);
      v25 = sub_18001DFB0((__int64)v39, " HRESULT=", 9uLL);
      v26 = sub_180028AE4(v40, v18);
      sub_18001DF88((__int64)v25, (__int64)v26);
      sub_1800129D0((__int64)v40);
      v27 = (_BYTE *)sub_1800148EC((__int64)v39);
      sub_180011CC4(v41, v27);
      v28 = sub_180011CC4(
              v40,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
      sub_18006A8B8(pExceptionObject, (__int64)v28, v29, v18, (__int64)v41, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_1800C2B14(v11, &v31);
    sub_18000F938(&v31);
    sub_18000F938((__int64 *)&v32);
    if ( v14 )
      sub_180010EC8(v14);
  }
  *a2 = *v11;
  sub_180012440(a2);
  return a2;
}
