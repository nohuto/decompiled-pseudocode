/*
 * XREFs of sub_180061A20 @ 0x180061A20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000BFA4 @ 0x18000BFA4 (sub_18000BFA4.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011E54 @ 0x180011E54 (sub_180011E54.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013440 @ 0x180013440 (sub_180013440.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_180016EFC @ 0x180016EFC (sub_180016EFC.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001E58C @ 0x18001E58C (sub_18001E58C.c)
 *     sub_18001F05C @ 0x18001F05C (sub_18001F05C.c)
 *     sub_18001F8FC @ 0x18001F8FC (sub_18001F8FC.c)
 *     sub_18001FC54 @ 0x18001FC54 (sub_18001FC54.c)
 *     sub_1800252C4 @ 0x1800252C4 (sub_1800252C4.c)
 *     sub_1800292C4 @ 0x1800292C4 (sub_1800292C4.c)
 *     sub_180029C10 @ 0x180029C10 (sub_180029C10.c)
 *     sub_180029C50 @ 0x180029C50 (sub_180029C50.c)
 *     sub_180032574 @ 0x180032574 (sub_180032574.c)
 *     sub_180033D14 @ 0x180033D14 (sub_180033D14.c)
 *     sub_18003B55C @ 0x18003B55C (sub_18003B55C.c)
 *     sub_18003F830 @ 0x18003F830 (sub_18003F830.c)
 *     sub_1800403B8 @ 0x1800403B8 (sub_1800403B8.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004D9D4 @ 0x18004D9D4 (sub_18004D9D4.c)
 *     sub_18004E254 @ 0x18004E254 (sub_18004E254.c)
 *     sub_180052460 @ 0x180052460 (sub_180052460.c)
 *     sub_180057650 @ 0x180057650 (sub_180057650.c)
 *     sub_1800576C8 @ 0x1800576C8 (sub_1800576C8.c)
 *     sub_18005A95C @ 0x18005A95C (sub_18005A95C.c)
 *     sub_18005BBE8 @ 0x18005BBE8 (sub_18005BBE8.c)
 *     sub_18005EB9C @ 0x18005EB9C (sub_18005EB9C.c)
 *     sub_18005ECC0 @ 0x18005ECC0 (sub_18005ECC0.c)
 *     sub_180060454 @ 0x180060454 (sub_180060454.c)
 *     sub_1800605E4 @ 0x1800605E4 (sub_1800605E4.c)
 *     sub_1800608B8 @ 0x1800608B8 (sub_1800608B8.c)
 *     sub_18006092C @ 0x18006092C (sub_18006092C.c)
 *     sub_180060C28 @ 0x180060C28 (sub_180060C28.c)
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 *     sub_180065618 @ 0x180065618 (sub_180065618.c)
 *     sub_1800675A0 @ 0x1800675A0 (sub_1800675A0.c)
 *     sub_180069C74 @ 0x180069C74 (sub_180069C74.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=31
__int64 __fastcall sub_180061A20(_QWORD *a1, __int64 *a2)
{
  int v4; // esi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r13
  __int64 v10; // rcx
  char v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r12
  __m128 v19; // xmm2
  __int64 v20; // rbx
  _QWORD *v21; // rax
  __int64 v22; // rbx
  _QWORD *v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // r12
  __int64 v35; // rbx
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r10
  bool v48; // di
  __m128i v50; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h]
  __int64 v53; // [rsp+50h] [rbp-B0h]
  __int64 v54; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-A0h]
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  __int64 v57; // [rsp+70h] [rbp-90h]
  __int64 v58; // [rsp+78h] [rbp-88h] BYREF
  __int64 v59; // [rsp+80h] [rbp-80h]
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  __int64 v61; // [rsp+90h] [rbp-70h]
  void *v62[2]; // [rsp+98h] [rbp-68h] BYREF
  void *v63[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v64; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C0h] [rbp-40h]
  __int64 v66; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v67; // [rsp+D0h] [rbp-30h]
  _QWORD v68[3]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v69[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v70[8]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v71[2]; // [rsp+140h] [rbp+40h] BYREF
  unsigned __int64 v72; // [rsp+150h] [rbp+50h]
  _QWORD v73[2]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v74; // [rsp+170h] [rbp+70h]
  __m128i si128; // [rsp+180h] [rbp+80h] BYREF
  int v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+194h] [rbp+94h]
  __m128i v78; // [rsp+19Ch] [rbp+9Ch]
  int v79; // [rsp+1ACh] [rbp+ACh]
  int v80; // [rsp+1B0h] [rbp+B0h]
  _BYTE v81[32]; // [rsp+1B8h] [rbp+B8h] BYREF

  v4 = 0;
  LODWORD(v53) = 0;
  sub_180029C10(*a2 + 16, (__int64)v69);
  v53 = sub_18005ECC0(*a2);
  v5 = *a2;
  v51 = v73;
  v6 = sub_180013440(v73, (__int64)&unk_1801C90D8);
  sub_180011CC4(v71, "MainCamera");
  v7 = sub_18003B55C((__int64)v71);
  sub_18003F830(v5, (__int64)&v66, v7, (__int64)v6);
  sub_1800129D0((__int64)v71);
  sub_18005EB9C(v66, &v64);
  v8 = sub_180012C40(&v60, &v64);
  sub_180032574((__int64)a1, v8);
  sub_180011CC4(v71, "MainCamera");
  v9 = v64;
  sub_1800143E4(v64 + 24, (__int64)v71);
  sub_1800129D0((__int64)v71);
  if ( *(_BYTE *)(v9 + 336) != 1 )
  {
    *(_BYTE *)(v9 + 336) = 1;
    *(_BYTE *)(v9 + 1612) = 1;
  }
  sub_18005A95C(v9, 256, 1);
  sub_18005A95C(v10, 0x2000000, v11);
  sub_180057650(v12, (__int64)&unk_1801C9058);
  sub_180057650(v9, (__int64)&unk_1801C9038);
  sub_180057650(v9, (__int64)&unk_1801C9078);
  sub_180057650(v9, (__int64)&unk_1801C90B8);
  *(_BYTE *)(v9 + 465) |= 7u;
  v13 = *a2;
  v51 = v73;
  v14 = sub_180013440(v73, (__int64)&unk_1801C90D8);
  sub_180011CC4(v71, "ReflectionCamera");
  v15 = sub_18003B55C((__int64)v71);
  sub_18003F830(v13, (__int64)&v60, v15, (__int64)v14);
  sub_1800129D0((__int64)v71);
  sub_18005EB9C(v60, &v58);
  v16 = sub_180012C40(&v56, &v58);
  sub_180032574((__int64)a1, v16);
  v17 = v53;
  sub_180013540((__int64 *)(v53 + 184), &v58);
  v18 = v58;
  sub_18005A95C(v58, 512, 1);
  sub_180011CC4(v71, "PlanarReflectionCamera");
  sub_1800143E4(v18 + 24, (__int64)v71);
  sub_1800129D0((__int64)v71);
  *(_QWORD *)(v18 + 296) = 0LL;
  *(_DWORD *)(v18 + 304) = 0;
  *(_DWORD *)(v18 + 308) = 1065353216;
  *(_DWORD *)(v18 + 128) = 0;
  sub_180057650(v18, (__int64)&unk_1801C9058);
  sub_180057650(v18, (__int64)&unk_1801C9038);
  *(_DWORD *)(v18 + 292) = 100;
  sub_180029C50((__int64)(a1 + 1), (__int64)&v56);
  sub_180016EFC(a1, &v50);
  v76 = 0;
  v77 = 1LL;
  v80 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191480);
  v19 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1801916B0);
  v78.m128i_i32[0] = v19.m128_i32[0];
  v78.m128i_i32[1] = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
  v78.m128i_i32[2] = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
  v78.m128i_i32[3] = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
  v79 = -8388609;
  sub_180052460(v50.m128i_i64[0], &si128, 0LL);
  v20 = v50.m128i_i64[0];
  v21 = sub_180011CC4(v71, "ColorTransformSampler");
  sub_1800292C4(v20, (__int64)v21);
  sub_180011F5C((_QWORD *)(v17 + 232), v50.m128i_i64);
  if ( v50.m128i_i64[1] )
    sub_180010EC8(v50.m128i_i64[1]);
  sub_180016EFC(a1, &v50);
  v76 = 0;
  v77 = 0x700000001LL;
  v78 = _mm_load_si128((const __m128i *)&xmmword_180191660);
  v79 = 0;
  v80 = 2139095039;
  si128 = _mm_load_si128((const __m128i *)&xmmword_180191400);
  sub_180052460(v50.m128i_i64[0], &si128, 0LL);
  v22 = v50.m128i_i64[0];
  v23 = sub_180011CC4(v71, "EnvironmentMapSampler");
  sub_1800292C4(v22, (__int64)v23);
  sub_180011F5C((_QWORD *)(v17 + 248), v50.m128i_i64);
  if ( v50.m128i_i64[1] )
    sub_180010EC8(v50.m128i_i64[1]);
  sub_180011E54((__int64)&v56);
  v53 = a1[64];
  v24 = v53;
  sub_1800181BC(v71, (__int64)&unk_1801CCE38);
  v50.m128i_i64[0] = (__int64)v71;
  v50.m128i_i64[1] = (__int64)v73;
  sub_1800608B8((__int64 *)v63, &v50);
  sub_18000BFA4((__int64)v71, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v50.m128i_i64, v63);
  v25 = sub_18004E254(v24, (void **)&v50);
  sub_1800181BC(v73, (__int64)&unk_1801CCE78);
  v50.m128i_i64[0] = (__int64)v73;
  v50.m128i_i64[1] = (__int64)&si128;
  sub_1800608B8((__int64 *)v62, &v50);
  sub_18000BFA4((__int64)v73, 32LL, 1LL, (void (__fastcall *)(__int64))sub_180011E30);
  sub_18005BBE8(v50.m128i_i64, v62);
  v26 = sub_18004E254(v24, (void **)&v50);
  sub_1800252C4(&v50);
  sub_1800605E4(&v56);
  v27 = sub_180012C40(&v54, &v50);
  sub_1800576C8((__int64 *)v9, 0LL, 256LL, v27, v25);
  v28 = sub_180012C40(&v54, &v50);
  sub_1800576C8((__int64 *)v9, 0LL, 768LL, v28, 0LL);
  v29 = sub_180012C40(&v54, &v50);
  sub_1800576C8((__int64 *)v9, 512LL, 0LL, v29, 0LL);
  v30 = sub_180012C40(&v54, &v56);
  sub_1800576C8((__int64 *)v9, 256LL, 0LL, v30, v26);
  sub_1800605E4(&v54);
  v31 = sub_180012C40(&v51, &v50);
  sub_1800576C8((__int64 *)v18, 512LL, 0LL, v31, 0LL);
  v32 = sub_180012C40(&v51, &v50);
  sub_1800576C8((__int64 *)v18, 512LL, 768LL, v32, 0LL);
  v33 = sub_180012C40(&v51, &v54);
  sub_1800576C8((__int64 *)v18, 256LL, 0LL, v33, v26);
  sub_180011CC4(v71, "Background");
  v34 = v53;
  LOBYTE(v26) = sub_18004D9D4(v53, (__int64)v71);
  sub_1800129D0((__int64)v71);
  v35 = *a2;
  v36 = sub_180013440(v71, (__int64)&unk_1801C9058);
  *(_QWORD *)(*sub_1800403B8(v35, &v51, (__int64)v36) + 96LL) = 1LL << v26;
  if ( v52 )
    sub_180010EC8(v52);
  (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))(*a1 + 168LL))(a1, v34, a2);
  sub_1800627F8(a1, a2);
  sub_18006092C((__int64)v70);
  v37 = sub_180033D14((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v37 + 208LL))(v37, v68);
  v38 = v68[0];
  v39 = v68[1];
  while ( v38 != v39 )
  {
    sub_18001E58C((__int64)v71, (__int64)L"Camera.");
    sub_18001E58C((__int64)v73, (__int64)L"/Internal/Camera.");
    v40 = sub_18001FC54(v38, (__int64)&si128, 0LL, v72);
    v4 |= 1u;
    LODWORD(v53) = v4;
    sub_1800141BC(v40);
    v41 = sub_1800141BC((__int64)v71);
    v48 = 1;
    if ( !sub_18001F05C(v43, v42, v41, v72) )
    {
      v44 = sub_18001FC54(v38, (__int64)v81, 0LL, v74);
      v4 |= 2u;
      sub_1800141BC(v44);
      v45 = sub_1800141BC((__int64)v73);
      if ( !sub_18001F05C(v47, v46, v45, v74) )
        v48 = 0;
    }
    if ( (v4 & 2) != 0 )
    {
      v4 &= ~2u;
      sub_180014244((__int64)v81);
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      sub_180014244((__int64)&si128);
    }
    if ( v48 )
      sub_180060454(v70, (__int64)&v51, v38);
    sub_180014244((__int64)v73);
    sub_180014244((__int64)v71);
    v38 += 32LL;
  }
  sub_18001F8FC((__int64)v68);
  sub_1800675A0(a1, a2);
  sub_180069C74(a1, a2);
  sub_180065618(a1, a2, v70);
  sub_180060C28(v70);
  if ( v55 )
    sub_180010EC8(v55);
  if ( v57 )
    sub_180010EC8(v57);
  if ( v50.m128i_i64[1] )
    sub_180010EC8(v50.m128i_i64[1]);
  sub_18004C0E0(v62, (__int64)v62);
  sub_18004C0E0(v63, (__int64)v63);
  if ( v59 )
    sub_180010EC8(v59);
  if ( v61 )
    sub_180010EC8(v61);
  if ( v65 )
    sub_180010EC8(v65);
  if ( v67 )
    sub_180010EC8(v67);
  return sub_180011E54((__int64)v69);
}
