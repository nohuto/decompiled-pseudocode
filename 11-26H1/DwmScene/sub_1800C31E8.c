/*
 * XREFs of sub_1800C31E8 @ 0x1800C31E8
 * Callers:
 *     sub_1800C3100 @ 0x1800C3100 (sub_1800C3100.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _o_pow @ 0x18000CE7C (_o_pow.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001DF88 @ 0x18001DF88 (sub_18001DF88.c)
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 *     sub_180028AE4 @ 0x180028AE4 (sub_180028AE4.c)
 *     sub_180029258 @ 0x180029258 (sub_180029258.c)
 *     sub_1800531D0 @ 0x1800531D0 (sub_1800531D0.c)
 *     sub_1800540E4 @ 0x1800540E4 (sub_1800540E4.c)
 *     sub_1800541C4 @ 0x1800541C4 (sub_1800541C4.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_18006A8B8 @ 0x18006A8B8 (sub_18006A8B8.c)
 *     sub_18007FA6C @ 0x18007FA6C (sub_18007FA6C.c)
 *     sub_18007FA94 @ 0x18007FA94 (sub_18007FA94.c)
 *     sub_1800BC108 @ 0x1800BC108 (sub_1800BC108.c)
 *     sub_1800BDDBC @ 0x1800BDDBC (sub_1800BDDBC.c)
 *     sub_1800C253C @ 0x1800C253C (sub_1800C253C.c)
 *     sub_1800C2850 @ 0x1800C2850 (sub_1800C2850.c)
 *     sub_1800C28E8 @ 0x1800C28E8 (sub_1800C28E8.c)
 *     sub_1800C2AD8 @ 0x1800C2AD8 (sub_1800C2AD8.c)
 *     sub_1800C2F2C @ 0x1800C2F2C (sub_1800C2F2C.c)
 *     sub_1800C3C1C @ 0x1800C3C1C (sub_1800C3C1C.c)
 *     sub_1800C4AB0 @ 0x1800C4AB0 (sub_1800C4AB0.c)
 *     sub_1800C4F18 @ 0x1800C4F18 (sub_1800C4F18.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C31E8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r12d
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  __m128i v10; // xmm2
  unsigned __int64 v11; // xmm2_8
  unsigned __int32 v12; // edx
  unsigned __int32 i; // r15d
  unsigned int j; // ebx
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rdx
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // r11d
  _QWORD *v23; // rax
  __int64 v24; // r8
  __m128i v25; // xmm6
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 k; // rcx
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, __m128i *, __int64, __int64 *); // rbx
  __int64 v34; // r8
  int v35; // edi
  void **v36; // rax
  void **v37; // rax
  void **v38; // rax
  void **v39; // rbx
  __int64 v40; // rax
  __int64 v41; // rax
  void **v42; // rbx
  _QWORD *v43; // rax
  _BYTE *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // r8
  _QWORD *v47; // rax
  __int64 **v48; // rax
  __int64 result; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v52; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v53; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v55; // [rsp+58h] [rbp-A8h]
  __m128i v56; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v57; // [rsp+70h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-80h]
  int v59; // [rsp+88h] [rbp-78h]
  __m128i v60; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v61[4]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v62[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v64[7]; // [rsp+128h] [rbp+28h] BYREF

  v53 = 0LL;
  v54 = 0LL;
  v6 = 1;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 && *(_DWORD *)(a2 + 16) == 17 )
  {
    sub_180011CC4(&v60, "Unsupported texture options: Format::UInt8_RGBA cannot be used with BindToShader");
    v7 = sub_180011CC4(
           v61,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v7, v8, (__int64)&v60, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v9 = sub_1800C2F2C((__int64)pExceptionObject, (_DWORD *)a2, *(_DWORD *)(a3 + 48));
  v10 = *(__m128i *)v9;
  v56 = *(__m128i *)v9;
  v57 = *(_OWORD *)(v9 + 16);
  v58 = *(_QWORD *)(v9 + 32);
  v59 = *(_DWORD *)(v9 + 40);
  if ( *(_QWORD *)(a3 + 8) )
  {
    v11 = _mm_srli_si128(v10, 8).m128i_u64[0];
    v12 = v11;
    v51 = (unsigned int)(v11 * HIDWORD(v11));
    if ( v51 > (v54 - (__int64)v53) >> 4 )
    {
      sub_1800C2850((void **)&v53, &v51);
      v12 = v56.m128i_u32[2];
    }
    for ( i = 0; i < v56.m128i_i32[3]; ++i )
    {
      for ( j = 0; j < v12; ++j )
      {
        v55 = __PAIR64__(j, i);
        v15 = sub_1800541C4(a3, __SPAIR64__(j, i));
        if ( v15 )
        {
          v16 = *(_QWORD *)(a3 + 8);
          if ( v16 )
            v17 = v16 + *(_QWORD *)v15;
          else
            v17 = 0LL;
          v60.m128i_i64[0] = v17;
          v60.m128i_i32[2] = *(_DWORD *)(v15 + 20);
          v18 = *(_DWORD *)(v15 + 24);
        }
        else
        {
          if ( !j )
          {
            sub_180011CC4(&v60, "Error, there is no top-level image available");
            v23 = sub_180011CC4(
                    v61,
                    "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
            sub_18006A84C(pExceptionObject, (__int64)v23, v24, (__int64)&v60, 0);
            throw (Spectre::Engine::EngineException *)pExceptionObject;
          }
          o_pow();
          if ( (unsigned int)(int)((double)*(int *)(a2 + 4) / 2.0) > 1 )
            v6 = (int)((double)*(int *)(a2 + 4) / 2.0);
          v51 = i;
          v19 = (_QWORD *)sub_1800541C4(a3, i);
          if ( v19 && (v20 = *(_QWORD *)(a3 + 8)) != 0 )
            v21 = *v19 + v20;
          else
            v21 = 0LL;
          v60.m128i_i64[0] = v21;
          v60.m128i_i32[2] = sub_1800540E4(*(_DWORD *)(a2 + 16));
          v18 = sub_1800C4AB0(*(unsigned int *)(a2 + 16), v22, v6, 0LL);
          v6 = 1;
        }
        v60.m128i_i32[3] = v18;
        if ( *((_QWORD *)&v53 + 1) == v54 )
          sub_18007FA94((void **)&v53, *((__int64 *)&v53 + 1), (__int128 *)v60.m128i_i8);
        else
          sub_18007FA6C((__int64)&v53, &v60);
        v12 = v56.m128i_u32[2];
      }
    }
  }
  sub_180012A94(a1 + 72, &v60);
  v25 = v60;
  v26 = v60.m128i_i64[0];
  if ( (*(_BYTE *)(a2 + 20) & 0x40) != 0 )
  {
    (*(void (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v60.m128i_i64[0] + 80LL))(
      v60.m128i_i64[0],
      (char *)&v57 + 4,
      (char *)&v57 + 8);
    v27 = DWORD1(v57);
  }
  else
  {
    v27 = 1LL;
    *(_QWORD *)((char *)&v57 + 4) = 1LL;
  }
  v28 = 0LL;
  for ( k = v53; k != *((_QWORD *)&v53 + 1); k += 16LL )
    v28 += *(unsigned int *)(k + 12);
  v30 = v28 * v27;
  *(_QWORD *)(a1 + 200) = v30;
  sub_180029258(a1, v30, (*(_DWORD *)(a2 + 20) & 6) != 0 ? 3 : 11);
  v52 = 0LL;
  v31 = sub_1800BC108(v26, &v51);
  v32 = *v31;
  v33 = *(__int64 (__fastcall **)(__int64, __m128i *, __int64, __int64 *))(*(_QWORD *)*v31 + 40LL);
  sub_18000F938(&v52);
  v34 = v53;
  if ( (_QWORD)v53 == *((_QWORD *)&v53 + 1) )
    v34 = 0LL;
  v35 = v33(v32, &v56, v34, &v52);
  sub_18000F938((__int64 *)&v51);
  sub_1800BDDBC(v26, v35);
  if ( v35 < 0 )
  {
    sub_180011CC4(v61, "THROW_IF_FAILED_DETAILED. ");
    v36 = sub_18001DFB0((__int64)v61, " File=", 6uLL);
    sub_18001DFB0(
      (__int64)v36,
      "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp",
      0x5CuLL);
    v37 = sub_18001DFB0((__int64)v61, " Line=", 6uLL);
    sub_18001DFB0((__int64)v37, "629", 3uLL);
    v38 = sub_18001DFB0((__int64)v61, " Message=", 9uLL);
    sub_18001DFB0((__int64)v38, "\"TextureD3D11::CreateRendererResources2D(): unable to create texture(2D)\"", 0x49uLL);
    v39 = sub_18001DFB0((__int64)v61, " Details=\"", 0xAuLL);
    v40 = sub_1800C4F18(v62, &v56, &v53);
    v41 = sub_18001DF88((__int64)v39, v40);
    sub_18001DFB0(v41, "\"", 1uLL);
    sub_1800129D0((__int64)v62);
    v42 = sub_18001DFB0((__int64)v61, " HRESULT=", 9uLL);
    v43 = sub_180028AE4(v62, v35);
    sub_18001DF88((__int64)v42, (__int64)v43);
    sub_1800129D0((__int64)v62);
    v44 = (_BYTE *)sub_1800148EC((__int64)v61);
    sub_180011CC4(pExceptionObject, v44);
    v45 = sub_180011CC4(
            v62,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\textured3d11.cpp");
    sub_18006A8B8(v64, (__int64)v45, v46, v35, (__int64)pExceptionObject, 0);
    throw (Spectre::Engine::EngineException *)v64;
  }
  v47 = (_QWORD *)sub_1800C3C1C(a1, (unsigned int)&v51, v52, *(_DWORD *)(a2 + 20), v56.m128i_i32[2]);
  sub_1800C2AD8((__int64 *)(a1 + 160), v47);
  sub_18000F938((__int64 *)&v51);
  sub_1800C2AD8((__int64 *)(a1 + 168), &v52);
  v48 = sub_1800C28E8((__int64 **)&v51, a2, &v56.m128i_i32[2], (int *)&v57 + 1);
  sub_1800C253C((void ***)(a1 + 112), (void ***)v48);
  sub_1800531D0(&v51);
  *(_BYTE *)(a1 + 208) = (*(_DWORD *)(a2 + 20) & 0x20) != 0;
  result = sub_18000F938(&v52);
  v50 = _mm_srli_si128(v25, 8).m128i_u64[0];
  if ( v50 )
    result = sub_180010EC8(v50);
  if ( (_QWORD)v53 )
    return sub_18000E26C((void *)v53, (v54 - v53) & 0xFFFFFFFFFFFFFFF0uLL);
  return result;
}
