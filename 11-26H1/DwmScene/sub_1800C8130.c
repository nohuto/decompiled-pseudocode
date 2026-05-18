/*
 * XREFs of sub_1800C8130 @ 0x1800C8130
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_18004744C @ 0x18004744C (sub_18004744C.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_1800540C4 @ 0x1800540C4 (sub_1800540C4.c)
 *     sub_180054238 @ 0x180054238 (sub_180054238.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     sub_1800C52A0 @ 0x1800C52A0 (sub_1800C52A0.c)
 *     sub_1800C5318 @ 0x1800C5318 (sub_1800C5318.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800C8130(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 *v11; // rax
  char v12; // bl
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // r13
  int v16; // eax
  int v17; // edi
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r15d
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rbx
  int v30; // esi
  char *v31; // rdi
  char *v32; // rsi
  size_t v33; // r15
  __int64 v34; // r12
  __int64 v35; // rdi
  __int64 v36; // rsi
  void (__fastcall *v37)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *); // rdi
  __int64 *v38; // rax
  __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v41; // [rsp+58h] [rbp-A8h]
  unsigned int v42; // [rsp+5Ch] [rbp-A4h]
  unsigned int v43; // [rsp+60h] [rbp-A0h]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  int v45; // [rsp+70h] [rbp-90h]
  int v46; // [rsp+74h] [rbp-8Ch]
  int v47; // [rsp+78h] [rbp-88h]
  unsigned int v48; // [rsp+7Ch] [rbp-84h]
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h]
  __int128 v51; // [rsp+90h] [rbp-70h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-60h]
  _QWORD v53[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-40h]
  _OWORD v56[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h] BYREF
  int v60; // [rsp+110h] [rbp+10h]
  unsigned int v61; // [rsp+114h] [rbp+14h]
  unsigned int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  _QWORD pExceptionObject[7]; // [rsp+120h] [rbp+20h] BYREF

  v47 = a4;
  v48 = a3;
  v52 = a1;
  v43 = a6;
  v41 = a5;
  v40 = a7;
  v42 = a9;
  LODWORD(v44) = a10;
  v46 = a11;
  v45 = 0;
  if ( *a2 )
  {
    v11 = sub_180054068(*a2, v56, *(_DWORD *)(a1 + 88));
    v12 = 1;
    v13 = *v11;
  }
  else
  {
    v50 = 0LL;
    v11 = &v49;
    v12 = 2;
    v13 = 0LL;
  }
  v53[0] = v13;
  v14 = v11[1];
  v53[1] = v14;
  *v11 = 0LL;
  v11[1] = 0LL;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v50 )
      sub_180010EC8(v50);
  }
  if ( (v12 & 1) != 0 && *((_QWORD *)&v56[0] + 1) )
    sub_180010EC8(*((__int64 *)&v56[0] + 1));
  sub_1800C5318(&v49, v53);
  v15 = v49;
  v16 = sub_1800540C4(v49);
  v17 = sub_18004744C(v16);
  v45 = v17;
  if ( (unsigned int)sub_180054238(v15) != 1 )
  {
    sub_180011CC4(&v54, "UpdateTexture2D can only be used with 2D textures");
    v18 = sub_180011CC4(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v18, v19, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v20 = *sub_1800C4EEC(v15, &v54);
  sub_18000F938(&v54);
  if ( !v20 )
  {
    sub_180011CC4(&v54, "UpdateTexture2D can only be used with a valid ID3D11Texture2D interface pointer");
    v21 = sub_180011CC4(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v21, v22, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v23 = v17 * a10;
  if ( v42 * a11 + v17 * a10 >= a8 )
  {
    sub_180011CC4(&v54, "UpdateTexture2D: Src X/Y offset exceeds the size of the data buffer");
    v24 = sub_180011CC4(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v24, v25, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v17 * (v41 + (_DWORD)v44) + v42 * (a6 + v46 - 1) > a8 )
  {
    sub_180011CC4(&v54, "UpdateTexture2D: Src rectangle exceeds the size of the data buffer");
    v26 = sub_180011CC4(
            v56,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v26, v27, (__int64)&v54, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_1800C4B58(v15, &v44, v41, a6);
  v51 = 0LL;
  v28 = v52;
  v29 = v44;
  v30 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, __int128 *))(**(_QWORD **)(v52 + 144)
                                                                                        + 112LL))(
          *(_QWORD *)(v52 + 144),
          v44,
          0LL,
          4LL,
          0,
          &v51);
  sub_180012A94(v28 + 72, v56);
  sub_1800C52A0(&v54, v56);
  if ( *((_QWORD *)&v56[0] + 1) )
    sub_180010EC8(*((__int64 *)&v56[0] + 1));
  sub_1800BDDBC(v54, v30);
  if ( v30 >= 0 && (v31 = (char *)v51) != 0LL )
  {
    if ( !DWORD2(v51) )
    {
      memset(v56, 0, sizeof(v56));
      v57 = 0LL;
      v58 = 0;
      (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v29 + 80LL))(v29, v56);
      DWORD2(v51) = 4 * LODWORD(v56[0]);
      v31 = (char *)v51;
    }
    v32 = (char *)(v40 + v23 + v42 * a11);
    if ( v43 )
    {
      v33 = v45 * v41;
      v34 = v43;
      do
      {
        sub_1800114C0(v31, v33, v32, v33);
        v31 += DWORD2(v51);
        v32 += v42;
        --v34;
      }
      while ( v34 );
      v15 = v49;
    }
    v35 = v52;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v52 + 144) + 120LL))(
      *(_QWORD *)(v52 + 144),
      v29,
      0LL);
    v59 = 0LL;
    v61 = v41;
    v62 = v43;
    v60 = 0;
    v63 = 1;
    v36 = *(_QWORD *)(v35 + 144);
    v37 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v36 + 368LL);
    v38 = sub_1800C4EEC(v15, &v40);
    v37(v36, *v38, 0LL, v48, v47, 0, v29, 0, &v59);
    sub_18000F938(&v40);
    if ( v55 )
      sub_180010EC8(v55);
    sub_18000F938(&v44);
    if ( v50 )
      sub_180010EC8(v50);
    if ( v14 )
      sub_180010EC8(v14);
    return 1;
  }
  else
  {
    sub_18001DCFC(&qword_1801BD548, 3);
    if ( v55 )
      sub_180010EC8(v55);
    sub_18000F938(&v44);
    if ( v50 )
      sub_180010EC8(v50);
    if ( v14 )
      sub_180010EC8(v14);
    return 0;
  }
}
