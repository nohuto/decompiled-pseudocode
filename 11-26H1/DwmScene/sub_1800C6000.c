/*
 * XREFs of sub_1800C6000 @ 0x1800C6000
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001818C @ 0x18001818C (sub_18001818C.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_180054208 @ 0x180054208 (sub_180054208.c)
 *     sub_180054220 @ 0x180054220 (sub_180054220.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_1800C2AD8 @ 0x1800C2AD8 (sub_1800C2AD8.c)
 *     sub_1800C4EEC @ 0x1800C4EEC (sub_1800C4EEC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C6000(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 *a7,
        int a8,
        int a9)
{
  __int64 *v13; // rax
  char v14; // bl
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *v20; // rax
  char v21; // di
  char v22; // di
  __int64 *v23; // rax
  char v24; // bl
  __int64 v25; // rcx
  char v26; // bl
  __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  char v32; // di
  char v33; // di
  _QWORD *v35; // rax
  __int64 v36; // r8
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v47[6]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v48[4]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v49[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+E8h] [rbp-18h] BYREF

  LODWORD(v39) = 0;
  v46 = 0LL;
  if ( *a7 )
  {
    v13 = sub_180054068(*a7, &v44, *(_DWORD *)(a1 + 88));
    v14 = 1;
    v15 = *v13;
  }
  else
  {
    v41 = 0LL;
    v13 = &v40;
    v14 = 2;
    v15 = 0LL;
  }
  v42 = v15;
  v16 = v13[1];
  v43 = v16;
  *v13 = 0LL;
  v13[1] = 0LL;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( v41 )
      sub_180010EC8(v41);
  }
  if ( (v14 & 1) != 0 )
  {
    v14 &= ~1u;
    if ( v45 )
      sub_180010EC8(v45);
  }
  v17 = sub_180012C40(&v40, &v42);
  sub_18001818C(&v44, v17);
  if ( (unsigned int)sub_180054208(v44) > 1 || (unsigned int)sub_180054220(v18) > 1 )
  {
    sub_180011CC4(v48, "CopyTexture2D does not support mipmapped or MSAA textures");
    v37 = sub_180011CC4(
            v49,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v37, v38, (__int64)v48, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v19 )
  {
    v20 = sub_1800C4EEC(v19, &v42);
    v21 = 4;
  }
  else
  {
    v39 = 0LL;
    v20 = &v39;
    v21 = 8;
  }
  v22 = v14 | v21;
  sub_1800C2AD8(&v46, v20);
  if ( (v22 & 8) != 0 )
  {
    v22 &= ~8u;
    sub_18000F938(&v39);
  }
  if ( (v22 & 4) != 0 )
  {
    v22 &= ~4u;
    sub_18000F938(&v42);
  }
  if ( v45 )
    sub_180010EC8(v45);
  if ( v16 )
    sub_180010EC8(v16);
  v39 = 0LL;
  if ( *a2 )
  {
    v23 = sub_180054068(*a2, &v40, *(_DWORD *)(a1 + 88));
    v24 = 16;
    v25 = *v23;
  }
  else
  {
    v45 = 0LL;
    v23 = &v44;
    v24 = 32;
    v25 = 0LL;
  }
  v26 = v22 | v24;
  v42 = v25;
  v27 = v23[1];
  v43 = v27;
  *v23 = 0LL;
  v23[1] = 0LL;
  if ( (v26 & 0x20) != 0 )
  {
    v26 &= ~0x20u;
    if ( v45 )
      sub_180010EC8(v45);
  }
  if ( (v26 & 0x10) != 0 )
  {
    v26 &= ~0x10u;
    if ( v41 )
      sub_180010EC8(v41);
  }
  v28 = sub_180012C40(&v40, &v42);
  sub_18001818C(&v44, v28);
  if ( (unsigned int)sub_180054208(v44) > 1 || (unsigned int)sub_180054220(v29) > 1 )
  {
    sub_180011CC4(v49, "CopyTexture2D does not support mipmapped or MSAA textures");
    v35 = sub_180011CC4(
            v48,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\shared\\nativerendererd3d11\\cpp\\source\\commandlistd3d11.cpp");
    sub_18006A84C(pExceptionObject, (__int64)v35, v36, (__int64)v49, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v30 )
  {
    v31 = sub_1800C4EEC(v30, &v40);
    v32 = 64;
  }
  else
  {
    v42 = 0LL;
    v31 = &v42;
    v32 = 0x80;
  }
  v33 = v26 | v32;
  sub_1800C2AD8(&v39, v31);
  if ( v33 < 0 )
  {
    v33 &= ~0x80u;
    sub_18000F938(&v42);
  }
  if ( (v33 & 0x40) != 0 )
    sub_18000F938(&v40);
  if ( v45 )
    sub_180010EC8(v45);
  if ( v27 )
    sub_180010EC8(v27);
  v47[2] = 0;
  v47[0] = a8;
  v47[1] = a9;
  v47[3] = a5 + a8;
  v47[4] = a9 + a6;
  v47[5] = 1;
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144)
                                                                                                  + 368LL))(
    *(_QWORD *)(a1 + 144),
    v39,
    0LL,
    a3,
    a4,
    0,
    v46,
    0,
    v47);
  sub_18000F938(&v39);
  return sub_18000F938(&v46);
}
