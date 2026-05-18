/*
 * XREFs of sub_1800C6D50 @ 0x1800C6D50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800C1AD4 @ 0x1800C1AD4 (sub_1800C1AD4.c)
 *     sub_1800C2504 @ 0x1800C2504 (sub_1800C2504.c)
 *     sub_1800C5D1C @ 0x1800C5D1C (sub_1800C5D1C.c)
 *     sub_1800C5D7C @ 0x1800C5D7C (sub_1800C5D7C.c)
 *     sub_1800C5DBC @ 0x1800C5DBC (sub_1800C5DBC.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C6D50(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  int v5; // ebx
  __int64 *v6; // r12
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 *v9; // rax
  int v10; // ebx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 *v14; // rax
  int v15; // ecx
  __int64 v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rdi
  char v19; // cl
  char v20; // bl
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 *v23; // rax
  char v24; // di
  char v25; // di
  __int64 v26; // rbx
  __int64 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 v36; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int128 v38; // [rsp+88h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-68h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  char v41; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-50h]
  _QWORD v43[8]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v44[8]; // [rsp+100h] [rbp+0h] BYREF

  v31 = a3;
  v4 = a1;
  v29 = a1;
  v5 = 0;
  LODWORD(v28) = 0;
  memset(v43, 0, sizeof(v43));
  sub_18000D81C((__int64)v44, 8LL, 8LL, (__int64 (__fastcall *)(__int64))unknown_libname_2);
  v6 = v44;
  v7 = 0LL;
  v8 = 8LL;
  do
  {
    sub_180012C40(&v36, a2);
    if ( v36 )
    {
      v9 = sub_1800C5D7C(v36, &v39, *(_DWORD *)(v4 + 88));
      v10 = v5 | 1;
      v11 = *v9;
    }
    else
    {
      v42 = 0LL;
      v9 = (__int64 *)&v41;
      v10 = v5 | 2;
      v11 = 0LL;
    }
    v34 = v11;
    v12 = v9[1];
    v35 = v12;
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( (v10 & 2) != 0 )
    {
      v10 &= ~2u;
      if ( v42 )
        sub_180010EC8(v42);
    }
    if ( (v10 & 1) != 0 )
    {
      v10 &= ~1u;
      if ( v40 )
        sub_180010EC8(v40);
    }
    v13 = _RTDynamicCast(
            v11,
            0LL,
            &Spectre::Engine::DeviceFrameBuffer `RTTI Type Descriptor',
            &Spectre::Engine::D3D11::RenderTargetD3D11 `RTTI Type Descriptor',
            0);
    if ( v13 )
      sub_1800160E4(&v38, (__int64)&v34, v13);
    else
      v38 = 0LL;
    if ( (_QWORD)v38 )
    {
      v14 = sub_1800C2504(v38, &v32);
      v15 = 4;
    }
    else
    {
      v28 = 0LL;
      v14 = &v28;
      v15 = 8;
    }
    v5 = v15 | v10;
    sub_1800C1AD4(v6, v14);
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      sub_18000F938(&v28);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      sub_18000F938((__int64 *)&v32);
    }
    v43[v7] = v44[v7];
    if ( *((_QWORD *)&v38 + 1) )
      sub_180010EC8(*((__int64 *)&v38 + 1));
    if ( v12 )
      sub_180010EC8(v12);
    if ( v37 )
      sub_180010EC8(v37);
    a2 += 2;
    ++v6;
    ++v7;
    --v8;
    v4 = v29;
  }
  while ( v8 );
  if ( *v31 )
  {
    v16 = v29;
    v17 = sub_1800C5D1C(*v31, &v39, *(_DWORD *)(v29 + 88));
    v18 = *v17;
    v19 = 16;
  }
  else
  {
    v37 = 0LL;
    v17 = &v36;
    v18 = 0LL;
    v19 = 32;
    v16 = v29;
  }
  v20 = v19 | v5;
  v34 = v18;
  v21 = v17[1];
  v35 = v21;
  *v17 = 0LL;
  v17[1] = 0LL;
  if ( (v20 & 0x20) != 0 )
  {
    v20 &= ~0x20u;
    if ( v37 )
      sub_180010EC8(v37);
  }
  if ( (v20 & 0x10) != 0 )
  {
    v20 &= ~0x10u;
    if ( v40 )
      sub_180010EC8(v40);
  }
  v22 = _RTDynamicCast(
          v18,
          0LL,
          &Spectre::Engine::DeviceDepthBuffer `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::DepthBufferD3D11 `RTTI Type Descriptor',
          0);
  if ( v22 )
    sub_1800160E4(&v32, (__int64)&v34, v22);
  else
    v32 = 0LL;
  if ( (_QWORD)v32 )
  {
    v23 = sub_1800C5DBC(v32, &v31);
    v24 = 64;
  }
  else
  {
    v33 = 0LL;
    v23 = &v33;
    v24 = 0x80;
  }
  v25 = v20 | v24;
  v26 = 0LL;
  v30 = 0LL;
  if ( &v30 != v23 )
  {
    v26 = *v23;
    v30 = *v23;
    *v23 = 0LL;
  }
  if ( v25 < 0 )
  {
    v25 &= ~0x80u;
    sub_18000F938(&v33);
  }
  if ( (v25 & 0x40) != 0 )
    sub_18000F938((__int64 *)&v31);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(v16 + 144) + 264LL))(
    *(_QWORD *)(v16 + 144),
    8LL,
    v43,
    v26);
  sub_18000F938(&v30);
  if ( *((_QWORD *)&v32 + 1) )
    sub_180010EC8(*((__int64 *)&v32 + 1));
  if ( v21 )
    sub_180010EC8(v21);
  return sub_18000BFA4((__int64)v44, 8LL, 8LL, (void (__fastcall *)(__int64))sub_18000E4E0);
}
