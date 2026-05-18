/*
 * XREFs of sub_1800C72D0 @ 0x1800C72D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F938 @ 0x18000F938 (sub_18000F938.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180042544 @ 0x180042544 (sub_180042544.c)
 *     sub_180083D38 @ 0x180083D38 (sub_180083D38.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_1800C72D0(__int64 a1, __int64 *a2)
{
  int v3; // r15d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int128 *v6; // rax
  __int16 v7; // di
  _QWORD *v8; // rsi
  _QWORD *v9; // rcx
  __int64 *v10; // rax
  __int16 v11; // bx
  __int64 v12; // r12
  __int16 v13; // bx
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int16 v16; // di
  __int64 v17; // rcx
  __int16 v18; // di
  _QWORD *v19; // rcx
  __int64 *v20; // rax
  __int16 v21; // bx
  __int64 v22; // rcx
  __int16 v23; // bx
  _QWORD *v24; // rcx
  __int64 *v25; // rax
  __int16 v26; // di
  __int64 v27; // rcx
  __int16 v28; // di
  __int64 v29; // r14
  _QWORD *v30; // rcx
  __int64 v31; // rsi
  __int64 *v32; // rax
  __int16 v33; // bx
  __int64 v34; // r15
  __int16 v35; // bx
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // r14
  __int64 *v46; // rdi
  __int64 v47; // rax
  void (__fastcall *v48)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v49; // rbx
  __int64 *v50; // rdi
  __int64 v51; // r10
  void (__fastcall *v52)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v53; // rbx
  __int64 v54; // r12
  __int64 *v55; // rdi
  __int64 v56; // r10
  void (__fastcall *v57)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v58; // rbx
  __int64 *v59; // rdi
  __int64 v60; // r10
  void (__fastcall *v61)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v62; // rbx
  __int64 *v63; // rdi
  __int64 v64; // r10
  void (__fastcall *v65)(__int64 *, __int64, _QWORD, _QWORD); // rsi
  __int64 v66; // rbx
  __int64 result; // rax
  __int128 v68; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+40h] [rbp-C0h]
  __int64 v70; // [rsp+48h] [rbp-B8h]
  __int64 v71; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v72; // [rsp+58h] [rbp-A8h]
  __int128 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+70h] [rbp-90h]
  __int64 v75; // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h]
  __int64 v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int128 v79; // [rsp+98h] [rbp-68h]
  __int128 v80; // [rsp+A8h] [rbp-58h]
  __int128 v81; // [rsp+B8h] [rbp-48h]
  __int128 v82; // [rsp+C8h] [rbp-38h]
  __int64 v83; // [rsp+D8h] [rbp-28h]
  _QWORD *v84; // [rsp+E0h] [rbp-20h]
  __int64 v85; // [rsp+E8h] [rbp-18h]
  __int64 v86; // [rsp+F0h] [rbp-10h]
  __int64 v87; // [rsp+F8h] [rbp-8h]
  __int64 v88; // [rsp+100h] [rbp+0h]
  __int64 v89; // [rsp+108h] [rbp+8h]
  __int64 v90; // [rsp+110h] [rbp+10h]
  __int64 v91; // [rsp+118h] [rbp+18h]
  __int64 v92; // [rsp+120h] [rbp+20h]
  __int64 v93; // [rsp+128h] [rbp+28h]
  __int64 v94; // [rsp+130h] [rbp+30h] BYREF
  __int64 v95; // [rsp+138h] [rbp+38h]
  __int64 v96; // [rsp+140h] [rbp+40h] BYREF
  __int64 v97; // [rsp+148h] [rbp+48h]
  __int64 v98; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v99; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v100; // [rsp+1B0h] [rbp+B0h] BYREF

  v98 = a1;
  LODWORD(v99) = 0;
  v3 = *(_DWORD *)(a1 + 88);
  v4 = *a2;
  LODWORD(v99) = 1;
  if ( v4 )
  {
    LODWORD(v100) = v3;
    v5 = sub_180042544(v4 + 480, (__int64)&v100);
    if ( v5 == *(_QWORD *)(v4 + 480) )
      v68 = 0LL;
    else
      sub_180012C40(&v68, (_QWORD *)(v5 + 40));
    v6 = &v68;
    v7 = 1;
    v8 = (_QWORD *)v68;
  }
  else
  {
    *((_QWORD *)&v73 + 1) = 0LL;
    v6 = &v73;
    v7 = 2;
    v8 = 0LL;
  }
  v84 = v8;
  v83 = *((_QWORD *)v6 + 1);
  v85 = v83;
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    if ( *((_QWORD *)&v73 + 1) )
      sub_180010EC8(*((__int64 *)&v73 + 1));
  }
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    if ( *((_QWORD *)&v68 + 1) )
      sub_180010EC8(*((__int64 *)&v68 + 1));
  }
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v73 = 0LL;
  if ( !*a2 )
  {
    v71 = *((_QWORD *)&v79 + 1);
    v37 = v79;
    v70 = *((_QWORD *)&v80 + 1);
    v41 = v80;
    v69 = *((_QWORD *)&v81 + 1);
    v43 = v81;
    v45 = *((_QWORD *)&v82 + 1);
    v44 = v82;
    v100 = v73;
LABEL_94:
    LOBYTE(v99) = 0;
    goto LABEL_95;
  }
  v9 = (_QWORD *)v8[12];
  if ( v9 )
  {
    v10 = sub_180083D38(v9, &v77, v3);
    v11 = 4;
    v12 = *v10;
  }
  else
  {
    *((_QWORD *)&v68 + 1) = 0LL;
    v10 = (__int64 *)&v68;
    v11 = 8;
    v12 = 0LL;
  }
  v13 = v7 | v11;
  v86 = v12;
  v74 = v10[1];
  v87 = v74;
  *v10 = 0LL;
  v10[1] = 0LL;
  if ( (v13 & 8) != 0 )
  {
    v13 &= ~8u;
    if ( *((_QWORD *)&v68 + 1) )
      sub_180010EC8(*((__int64 *)&v68 + 1));
  }
  if ( (v13 & 4) != 0 )
  {
    v13 &= ~4u;
    if ( v78 )
      sub_180010EC8(v78);
  }
  v14 = (_QWORD *)v8[14];
  if ( v14 )
  {
    v15 = sub_180083D38(v14, &v75, v3);
    v16 = 16;
    v17 = *v15;
  }
  else
  {
    *((_QWORD *)&v68 + 1) = 0LL;
    v15 = (__int64 *)&v68;
    v16 = 32;
    v17 = 0LL;
  }
  *(_QWORD *)&v100 = v17;
  v18 = v13 | v16;
  v88 = v17;
  v77 = v15[1];
  v89 = v77;
  *v15 = 0LL;
  v15[1] = 0LL;
  if ( (v18 & 0x20) != 0 )
  {
    v18 &= ~0x20u;
    if ( *((_QWORD *)&v68 + 1) )
      sub_180010EC8(*((__int64 *)&v68 + 1));
  }
  if ( (v18 & 0x10) != 0 )
  {
    v18 &= ~0x10u;
    if ( v76 )
      sub_180010EC8(v76);
  }
  v19 = (_QWORD *)v8[16];
  if ( v19 )
  {
    v20 = sub_180083D38(v19, &v71, v3);
    v21 = 64;
    v22 = *v20;
  }
  else
  {
    *((_QWORD *)&v68 + 1) = 0LL;
    v20 = (__int64 *)&v68;
    v21 = 128;
    v22 = 0LL;
  }
  v70 = v22;
  v23 = v18 | v21;
  v90 = v22;
  v75 = v20[1];
  v91 = v75;
  *v20 = 0LL;
  v20[1] = 0LL;
  if ( (v23 & 0x80u) != 0 )
  {
    v23 &= ~0x80u;
    if ( *((_QWORD *)&v68 + 1) )
      sub_180010EC8(*((__int64 *)&v68 + 1));
  }
  if ( (v23 & 0x40) != 0 )
  {
    v23 &= ~0x40u;
    if ( v72 )
      sub_180010EC8(v72);
  }
  v24 = (_QWORD *)v8[18];
  if ( v24 )
  {
    v25 = sub_180083D38(v24, &v94, v3);
    v26 = 256;
    v27 = *v25;
  }
  else
  {
    v72 = 0LL;
    v25 = &v71;
    v26 = 512;
    v27 = 0LL;
  }
  v69 = v27;
  v28 = v23 | v26;
  v92 = v27;
  v29 = v25[1];
  *(_QWORD *)&v68 = v29;
  v93 = v29;
  *v25 = 0LL;
  v25[1] = 0LL;
  if ( (v28 & 0x200) != 0 )
  {
    v28 &= ~0x200u;
    if ( v72 )
      sub_180010EC8(v72);
  }
  if ( (v28 & 0x100) != 0 )
  {
    v28 &= ~0x100u;
    if ( v95 )
      sub_180010EC8(v95);
  }
  v30 = (_QWORD *)v8[20];
  v31 = 0LL;
  if ( v30 )
  {
    v32 = sub_180083D38(v30, &v96, v3);
    v33 = 1024;
    v34 = *v32;
  }
  else
  {
    v72 = 0LL;
    v32 = &v71;
    v33 = 2048;
    v34 = 0LL;
  }
  v35 = v28 | v33;
  v36 = v32[1];
  *v32 = 0LL;
  v32[1] = 0LL;
  if ( (v35 & 0x800) != 0 )
  {
    v35 &= ~0x800u;
    if ( v72 )
      sub_180010EC8(v72);
  }
  if ( (v35 & 0x400) != 0 && v97 )
    sub_180010EC8(v97);
  v37 = _RTDynamicCast(
          v12,
          0LL,
          &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::VertexShaderD3D11 `RTTI Type Descriptor',
          0);
  if ( v37 )
  {
    v38 = v74;
    if ( v74 )
      _InterlockedAdd((volatile signed __int32 *)(v74 + 8), 1u);
  }
  else
  {
    v38 = 0LL;
    v37 = 0LL;
  }
  v71 = v38;
  *(_QWORD *)&v79 = v37;
  *((_QWORD *)&v79 + 1) = v38;
  v39 = _RTDynamicCast(
          v100,
          0LL,
          &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::PixelShaderD3D11 `RTTI Type Descriptor',
          0);
  *(_QWORD *)&v100 = v39;
  if ( v39 )
  {
    v40 = v77;
    if ( v77 )
      _InterlockedAdd((volatile signed __int32 *)(v77 + 8), 1u);
  }
  else
  {
    v40 = 0LL;
    v39 = 0LL;
    *(_QWORD *)&v100 = 0LL;
  }
  *((_QWORD *)&v100 + 1) = v40;
  *(_QWORD *)&v73 = v39;
  *((_QWORD *)&v73 + 1) = v40;
  v41 = _RTDynamicCast(
          v70,
          0LL,
          &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::HullShaderD3D11 `RTTI Type Descriptor',
          0);
  if ( v41 )
  {
    v42 = v75;
    if ( v75 )
      _InterlockedAdd((volatile signed __int32 *)(v75 + 8), 1u);
  }
  else
  {
    v42 = 0LL;
    v41 = 0LL;
  }
  v70 = v42;
  *(_QWORD *)&v80 = v41;
  *((_QWORD *)&v80 + 1) = v42;
  v43 = _RTDynamicCast(
          v69,
          0LL,
          &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::DomainShaderD3D11 `RTTI Type Descriptor',
          0);
  if ( v43 )
  {
    if ( v29 )
      _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
    v31 = v29;
    v69 = v29;
  }
  else
  {
    v69 = 0LL;
    v43 = 0LL;
  }
  *(_QWORD *)&v81 = v43;
  *((_QWORD *)&v81 + 1) = v31;
  v44 = _RTDynamicCast(
          v34,
          0LL,
          &Spectre::Engine::DeviceShader `RTTI Type Descriptor',
          &Spectre::Engine::D3D11::GeometryShaderD3D11 `RTTI Type Descriptor',
          0);
  if ( v44 )
  {
    if ( v36 )
      _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
    v45 = v36;
  }
  else
  {
    v45 = 0LL;
    v44 = 0LL;
  }
  *(_QWORD *)&v82 = v44;
  *((_QWORD *)&v82 + 1) = v45;
  if ( v36 )
    sub_180010EC8(v36);
  if ( (_QWORD)v68 )
    sub_180010EC8(v68);
  if ( v75 )
    sub_180010EC8(v75);
  if ( v77 )
    sub_180010EC8(v77);
  if ( v74 )
    sub_180010EC8(v74);
  if ( !v37 )
    goto LABEL_94;
LABEL_95:
  v46 = *(__int64 **)(v98 + 144);
  v47 = *v46;
  if ( (_BYTE)v99 )
  {
    v48 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v47 + 88);
    v49 = *(_QWORD *)(v37 + 104);
    v99 = v49;
    if ( v49 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
    v48(v46, v49, 0LL, 0LL);
    sub_18000F938(&v99);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v47 + 88))(v46, 0LL, 0LL, 0LL);
  }
  v50 = *(__int64 **)(v98 + 144);
  v51 = *v50;
  if ( v41 )
  {
    v52 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v51 + 480);
    v53 = *(_QWORD *)(v41 + 104);
    v99 = v53;
    if ( v53 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
    v52(v50, v53, 0LL, 0LL);
    sub_18000F938(&v99);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v51 + 480))(*(_QWORD *)(v98 + 144), 0LL, 0LL, 0LL);
  }
  v54 = v98;
  v55 = *(__int64 **)(v98 + 144);
  v56 = *v55;
  if ( v43 )
  {
    v57 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v56 + 512);
    v58 = *(_QWORD *)(v43 + 104);
    v98 = v58;
    if ( v58 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 8LL))(v58);
    v57(v55, v58, 0LL, 0LL);
    sub_18000F938(&v98);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v56 + 512))(*(_QWORD *)(v98 + 144), 0LL, 0LL, 0LL);
  }
  v59 = *(__int64 **)(v54 + 144);
  v60 = *v59;
  if ( v44 )
  {
    v61 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v60 + 184);
    v62 = *(_QWORD *)(v44 + 104);
    v98 = v62;
    if ( v62 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 8LL))(v62);
    v61(v59, v62, 0LL, 0LL);
    sub_18000F938(&v98);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v60 + 184))(*(_QWORD *)(v54 + 144), 0LL, 0LL, 0LL);
  }
  v63 = *(__int64 **)(v54 + 144);
  v64 = *v63;
  if ( (_QWORD)v100 )
  {
    v65 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(v64 + 72);
    v66 = *(_QWORD *)(v100 + 104);
    v98 = v66;
    if ( v66 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
    v65(v63, v66, 0LL, 0LL);
    sub_18000F938(&v98);
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v64 + 72))(v63, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)&v100 + 1) )
    sub_180010EC8(*((__int64 *)&v100 + 1));
  if ( v45 )
    sub_180010EC8(v45);
  if ( v69 )
    sub_180010EC8(v69);
  if ( v70 )
    sub_180010EC8(v70);
  result = v71;
  if ( v71 )
    result = sub_180010EC8(v71);
  if ( v83 )
    return sub_180010EC8(v83);
  return result;
}
