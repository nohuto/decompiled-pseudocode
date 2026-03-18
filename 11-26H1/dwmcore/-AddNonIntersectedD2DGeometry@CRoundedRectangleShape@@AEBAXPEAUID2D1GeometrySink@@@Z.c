/*
 * XREFs of ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180051CD0
 * Callers:
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x180050DB0 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1800510B0 (-GetOutline@CRoundedRectangleShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ @ 0x180052740 (-AsPrincipal@BamoPrincipalImpl@BamoImpl@Microsoft@@UEAAPEAV123@XZ.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x180052750 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ??$_Insert_counted_range@PEAVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VCMilPoint2F@@@std@@@std@@@1@PEAVCMilPoint2F@@_K@Z @ 0x180052A20 (--$_Insert_counted_range@PEAVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@st.c)
 *     ??$_Emplace_reallocate@AEBVCMilPoint2F@@@?$vector@VCMilPoint2F@@V?$allocator@VCMilPoint2F@@@std@@@std@@AEAAPEAVCMilPoint2F@@QEAV2@AEBV2@@Z @ 0x180052D1C (--$_Emplace_reallocate@AEBVCMilPoint2F@@@-$vector@VCMilPoint2F@@V-$allocator@VCMilPoint2F@@@std@.c)
 *     ?HalveTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ @ 0x1800543D4 (-HalveTheStep@-$CBezierFlattener@MVCMilPoint2F@@@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRoundedRectangleShape::AddNonIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1GeometrySink *a2)
{
  __int64 v2; // rsi
  struct ID2D1GeometrySink *v3; // r12
  CRoundedRectangleShape *v4; // r14
  Microsoft::BamoImpl::BamoPrincipalImpl *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r13
  int *v8; // rbx
  int *v9; // r15
  __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r14
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128 v21; // xmm4
  void (__fastcall *v22)(struct ID2D1GeometrySink *, __m128 *); // rax
  __m128 v23; // xmm4
  __m128 v24; // xmm4
  __int64 v25; // rax
  __int64 v26; // r14
  Microsoft::BamoImpl::BamoPrincipalImpl *v27; // rdi
  __int64 v28; // rbx
  CRoundedRectangleShape *v29; // rdi
  unsigned __int32 v30; // xmm14_4
  float v31; // xmm2_4
  int *v32; // r12
  float v33; // xmm7_4
  float v34; // xmm6_4
  int *v35; // rbx
  float v36; // xmm15_4
  unsigned int v37; // r15d
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // r9
  float *v41; // rax
  float *v42; // r8
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rsi
  __int64 v47; // r14
  float *v48; // rbx
  float v49; // xmm0_4
  float v50; // xmm9_4
  float v51; // xmm3_4
  float v52; // xmm5_4
  float v53; // xmm1_4
  float v54; // xmm2_4
  float v55; // xmm4_4
  float v56; // xmm11_4
  float v57; // xmm12_4
  float v58; // xmm13_4
  float v59; // xmm10_4
  float v60; // xmm0_4
  float v61; // xmm11_4
  int v62; // eax
  float v63; // xmm9_4
  float v64; // xmm6_4
  float v65; // xmm12_4
  float v66; // xmm7_4
  float v67; // xmm13_4
  float v68; // xmm8_4
  __m128 v69; // xmm2
  float v70; // xmm8_4
  __m128d v71; // xmm1
  float v72; // xmm0_4
  float v73; // xmm0_4
  __int64 v74; // rdx
  int v75; // r11d
  Microsoft::BamoImpl::BamoPrincipalImpl *v76; // rbx
  __int64 v77; // rdi
  double v78; // xmm13_8
  int v79; // xmm1_4
  int v80; // ecx
  unsigned int v81; // r9d
  char v82; // bl
  __int64 v83; // r8
  _DWORD *v84; // r10
  float v85; // xmm12_4
  float v86; // xmm8_4
  float v87; // xmm9_4
  __int128 v88; // xmm2
  __int128 v89; // xmm3
  __int128 v90; // xmm4
  __int128 v91; // xmm5
  float v92; // xmm6_4
  float v93; // xmm7_4
  float v94; // xmm11_4
  float v95; // xmm0_4
  __int64 v96; // rax
  float v97; // xmm1_4
  float v98; // xmm1_4
  __int64 v99; // rax
  __int128 v100; // xmm1
  __int128 v101; // xmm10
  float *v102; // r8
  _QWORD *v103; // rdx
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  __int128 v106; // xmm0
  __int128 v107; // xmm0
  char v108; // [rsp+20h] [rbp-E0h]
  _DWORD v109[2]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v110[2]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v111[2]; // [rsp+40h] [rbp-C0h] BYREF
  float v112; // [rsp+48h] [rbp-B8h] BYREF
  float v113; // [rsp+4Ch] [rbp-B4h]
  float v114; // [rsp+50h] [rbp-B0h]
  float v115; // [rsp+58h] [rbp-A8h]
  float v116; // [rsp+5Ch] [rbp-A4h]
  float v117; // [rsp+60h] [rbp-A0h] BYREF
  float v118; // [rsp+64h] [rbp-9Ch]
  float v119; // [rsp+68h] [rbp-98h] BYREF
  float v120; // [rsp+6Ch] [rbp-94h]
  float v121; // [rsp+70h] [rbp-90h] BYREF
  float v122; // [rsp+74h] [rbp-8Ch]
  float v123; // [rsp+78h] [rbp-88h] BYREF
  float v124; // [rsp+7Ch] [rbp-84h]
  __int64 v125; // [rsp+80h] [rbp-80h]
  float v126; // [rsp+88h] [rbp-78h]
  CRoundedRectangleShape *v127; // [rsp+90h] [rbp-70h]
  __int64 v128; // [rsp+98h] [rbp-68h]
  int *v129; // [rsp+A0h] [rbp-60h]
  __int64 v130; // [rsp+A8h] [rbp-58h]
  __int64 v131; // [rsp+B0h] [rbp-50h]
  struct ID2D1GeometrySink *v132; // [rsp+B8h] [rbp-48h]
  __m128 v133; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v134; // [rsp+E8h] [rbp-18h]
  _DWORD v135[40]; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v136[20]; // [rsp+190h] [rbp+90h] BYREF

  v2 = *((_QWORD *)this + 2);
  v3 = a2;
  v132 = a2;
  v4 = this;
  v127 = this;
  v130 = v2;
  if ( *(float *)(v2 + 64) <= 0.0 )
  {
    v5 = (Microsoft::BamoImpl::BamoPrincipalImpl *)v135;
    v6 = 20LL;
    do
    {
      Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v5);
      v5 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v5 + 8);
      --v6;
    }
    while ( v6 );
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v4, (struct CMilPoint2F *)v135);
    v7 = 0LL;
    v8 = (int *)&unk_1802F2A68;
    v9 = dword_1802F2AA8;
    while ( 1 )
    {
      v10 = *((_QWORD *)v4 + 2);
      if ( !*(_BYTE *)(v10 + 68) )
        v10 += 8 * v7;
      v11 = *(float *)(v10 + 32);
      v12 = v10 + 32;
      if ( v11 > 0.0 && *(float *)(v12 + 4) > 0.0 )
        break;
      v104 = *(_QWORD *)v3;
      v105 = _mm_unpacklo_ps((__m128)(unsigned int)v135[2 * *v9], (__m128)(unsigned int)v135[2 * *v9 + 1]).m128_u64[0];
      if ( (_DWORD)v7 )
      {
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v104 + 80))(v3, v105);
LABEL_12:
        v7 = (unsigned int)(v7 + 1);
        ++v9;
        v8 += 4;
        if ( (unsigned int)v7 >= 4 )
          goto LABEL_41;
      }
      else
      {
        (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v104 + 40))(v3, v105, 0LL);
        v7 = 1LL;
        ++v9;
        v8 += 4;
      }
    }
    v13 = *(v8 - 2);
    v14 = *(v8 - 1);
    v15 = *v8;
    v16 = v8[1];
    v17 = (__m128)(unsigned int)v135[2 * v13];
    v18 = (__m128)(unsigned int)v135[2 * v13 + 1];
    v19 = *(_QWORD *)v3;
    v20 = _mm_unpacklo_ps(v17, v18).m128_u64[0];
    if ( (_DWORD)v7 )
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64))(v19 + 80))(v3, v20);
    else
      (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(v19 + 40))(v3, v20, 0LL);
    v21 = _mm_shuffle_ps((__m128)(unsigned int)v135[2 * v14], (__m128)(unsigned int)v135[2 * v14], 225);
    v21.m128_f32[0] = *(float *)&v135[2 * v14 + 1];
    v22 = *(void (__fastcall **)(struct ID2D1GeometrySink *, __m128 *))(*(_QWORD *)v3 + 88LL);
    v23 = _mm_shuffle_ps(v21, v21, 198);
    v23.m128_f32[0] = *(float *)&v135[2 * v15];
    v24 = _mm_shuffle_ps(v23, v23, 39);
    v24.m128_f32[0] = *(float *)&v135[2 * v15 + 1];
    v134 = _mm_unpacklo_ps((__m128)(unsigned int)v135[2 * v16], (__m128)(unsigned int)v135[2 * v16 + 1]).m128_u64[0];
    v133 = _mm_shuffle_ps(v24, v24, 57);
    v22(v3, &v133);
    v4 = v127;
    goto LABEL_12;
  }
  v25 = *(_QWORD *)(v2 + 88);
  v26 = v2 + 80;
  v131 = v2 + 80;
  if ( *(_QWORD *)(v2 + 80) == v25 )
  {
    v27 = (Microsoft::BamoImpl::BamoPrincipalImpl *)v135;
    v28 = 20LL;
    do
    {
      Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v27);
      v27 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v27 + 8);
      --v28;
    }
    while ( v28 );
    v29 = v127;
    CRoundedRectangleShape::CalcEdgesAndControlPoints(v127, (struct CMilPoint2F *)v135);
    v30 = _mm_load_si128((const __m128i *)&_xmm).m128i_u32[0];
    v31 = FLOAT_0_0000011920929;
    v32 = (int *)&unk_1802F2A68;
    v33 = FLOAT_0_000099999997;
    v34 = FLOAT_6_0;
    v35 = dword_1802F2AA8;
    v36 = FLOAT_0_25;
    v129 = dword_1802F2AA8;
    v37 = 0;
    while ( 1 )
    {
      v38 = *((_QWORD *)v29 + 2);
      v39 = ((_BYTE)v37 + 1) & 3;
      v40 = *(_BYTE *)(v38 + 68);
      v41 = (float *)(v38 + 32);
      if ( v40 )
        v42 = (float *)(v38 + 32);
      else
        v42 = (float *)(v38 + 8 * (v39 + 4));
      if ( *v42 > 0.0 && v42[1] > 0.0 )
        v43 = *((_DWORD *)&unk_1802F2A60 + 4 * v39);
      else
        v43 = dword_1802F2AA8[v39];
      v44 = v43;
      if ( !v40 )
        v41 = (float *)(v38 + 8 * (v37 + 4LL));
      if ( *v41 <= 0.0 || v41[1] <= 0.0 )
      {
        v102 = (float *)&v135[2 * *v35];
        if ( v31 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*v102 - *(float *)&v135[2 * v44]) & v30)
          && v31 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v102[1] - *(float *)&v135[2 * v44 + 1]) & v30) )
        {
          goto LABEL_38;
        }
        v103 = *(_QWORD **)(v26 + 8);
        if ( v103 != *(_QWORD **)(v26 + 16) )
        {
          *v103 = *(_QWORD *)v102;
          *(_QWORD *)(v26 + 8) += 8LL;
          goto LABEL_38;
        }
        std::vector<CMilPoint2F>::_Emplace_reallocate<CMilPoint2F const &>(v26, v103, v102);
      }
      else
      {
        v45 = v32[1];
        v46 = *(v32 - 1);
        v47 = *v32;
        v48 = (float *)&v135[2 * v45 + 1];
        v49 = *(float *)&v135[2 * v45] - *(float *)&v135[2 * v43];
        v128 = *(v32 - 2);
        if ( v31 < COERCE_FLOAT(LODWORD(v49) & v30)
          || (v108 = 1, v31 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*v48 - *(float *)&v135[2 * v43 + 1]) & v30)) )
        {
          v108 = 0;
        }
        v50 = *(float *)(v38 + 64);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)v109);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)v110);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)v111);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)&v112);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)&v117);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)&v119);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)&v121);
        Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal((Microsoft::BamoImpl::BamoPrincipalImpl *)&v123);
        v51 = *(float *)&v135[2 * v47];
        v52 = *(float *)&v135[2 * v47 + 1];
        v53 = *(float *)&v135[2 * v45];
        v54 = *v48;
        v55 = *(float *)&v135[2 * v46];
        v56 = *v48;
        v125 = 1LL;
        *(float *)v110 = v55;
        v57 = *(float *)&v135[2 * v128];
        v58 = *(float *)&v135[2 * v128 + 1];
        v59 = v53 - v57;
        v60 = (float)(v50 * v50) * v33;
        v61 = v56 - v58;
        v62 = 1;
        v63 = fmaxf(v50, 0.0) * v34;
        v64 = *(float *)&v135[2 * v46 + 1];
        v116 = v60;
        *(float *)v109 = v57;
        *(float *)&v109[1] = v58;
        v117 = v57;
        v115 = v63 * v36;
        v118 = v58;
        *(float *)&v110[1] = v64;
        v112 = v53;
        v113 = v54;
        v114 = v63;
        *(float *)v111 = v51;
        *(float *)&v111[1] = v52;
        v65 = (float)((float)(v57 - (float)(v55 + v55)) + v51) * 6.0;
        v66 = (float)((float)(v55 - (float)(v51 + v51)) + v53) * 6.0;
        v67 = (float)((float)(v58 - (float)(v64 + v64)) + v52) * 6.0;
        v68 = (float)(v64 - (float)(v52 + v52)) + v54;
        v69 = (__m128)LODWORD(FLOAT_1_0);
        v70 = v68 * 6.0;
        while ( 1 )
        {
          v119 = v59;
          v126 = v69.m128_f32[0];
          v124 = v67;
          v123 = v65;
          v122 = v70;
          v121 = v66;
          v120 = v61;
          if ( fmaxf(COERCE_FLOAT(LODWORD(v66) & v30), COERCE_FLOAT(LODWORD(v70) & v30)) <= v63
            && fmaxf(COERCE_FLOAT(LODWORD(v65) & v30), COERCE_FLOAT(LODWORD(v67) & v30)) <= v63 )
          {
            break;
          }
          v71 = _mm_cvtps_pd(v69);
          if ( v71.m128d_f64[0] <= 0.001 )
            break;
          v71.m128d_f64[0] = v71.m128d_f64[0] * 0.5;
          v62 *= 2;
          v72 = v65 + v66;
          v65 = v65 * v36;
          v69 = _mm_cvtpd_ps(v71);
          v66 = v72 * 0.125;
          v73 = v67 + v70;
          v67 = v67 * v36;
          v70 = v73 * 0.125;
          v59 = (float)(v59 - v66) * 0.5;
          v61 = (float)(v61 - (float)(v73 * 0.125)) * 0.5;
        }
        LODWORD(v125) = v62;
        v76 = (Microsoft::BamoImpl::BamoPrincipalImpl *)v136;
        v77 = 10LL;
        do
        {
          Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal(v76);
          v76 = (Microsoft::BamoImpl::BamoPrincipalImpl *)((char *)v76 + 8);
          --v77;
        }
        while ( v77 );
        v75 = 1;
        v78 = DOUBLE_0_001;
        v2 = v130;
        v79 = v135[2 * v128 + 1];
        v26 = v131;
        v136[0] = v135[2 * v128];
        v136[1] = v79;
        do
        {
          v80 = v125;
          v81 = 10 - v75;
          v82 = 1;
          LODWORD(v83) = 0;
          v84 = &v136[2 * v75];
          if ( (int)v125 <= 1 )
          {
LABEL_52:
            if ( (unsigned int)v83 < v81 )
            {
              if ( !v108 )
              {
                v98 = v113;
                v99 = (unsigned int)v83;
                LODWORD(v83) = v83 + 1;
                *(float *)&v84[2 * v99] = v112;
                *(float *)&v84[2 * v99 + 1] = v98;
              }
              v82 = 0;
            }
          }
          else
          {
            v85 = v126;
            v86 = v124;
            v87 = v123;
            v88 = LODWORD(v122);
            v89 = LODWORD(v121);
            v90 = LODWORD(v120);
            v91 = LODWORD(v119);
            v92 = v118;
            v93 = v117;
            v94 = v115;
            while ( (unsigned int)v83 < v81 )
            {
              v95 = *(float *)&v89;
              v96 = (unsigned int)v83;
              v123 = *(float *)&v89;
              v97 = *(float *)&v88;
              v93 = v93 + *(float *)&v91;
              v124 = *(float *)&v88;
              *(float *)&v91 = *(float *)&v91 + *(float *)&v89;
              --v80;
              v92 = v92 + *(float *)&v90;
              LODWORD(v125) = v80;
              *(float *)&v90 = *(float *)&v90 + *(float *)&v88;
              v83 = (unsigned int)(v83 + 1);
              *(float *)&v89 = (float)(*(float *)&v89 + *(float *)&v89) - v87;
              v117 = v93;
              v87 = v95;
              *(float *)&v84[2 * v96] = v93;
              *(float *)&v88 = (float)(*(float *)&v88 + *(float *)&v88) - v86;
              v118 = v92;
              v86 = v97;
              v119 = *(float *)&v91;
              v120 = *(float *)&v90;
              v121 = *(float *)&v89;
              v122 = *(float *)&v88;
              *((float *)&v125 + 1) = *((float *)&v125 + 1) + v85;
              *(float *)&v84[2 * v96 + 1] = v92;
              if ( fmaxf(COERCE_FLOAT(v89 & v30), COERCE_FLOAT(v88 & v30)) <= v114 || v85 <= v78 )
              {
                while ( (v80 & 1) == 0 )
                {
                  v100 = v89;
                  v101 = v88;
                  *(float *)&v100 = (float)(*(float *)&v89 + *(float *)&v89) - v87;
                  *(float *)&v101 = (float)(*(float *)&v88 + *(float *)&v88) - v86;
                  if ( v94 < COERCE_FLOAT(LODWORD(v87) & v30)
                    || v94 < COERCE_FLOAT(LODWORD(v86) & v30)
                    || v94 < COERCE_FLOAT(v100 & v30)
                    || v94 < COERCE_FLOAT(v101 & v30) )
                  {
                    break;
                  }
                  v106 = v91;
                  v87 = v87 * 4.0;
                  *(float *)&v106 = *(float *)&v91 + *(float *)&v91;
                  v86 = v86 * 4.0;
                  v74 = (unsigned int)(v80 >> 31);
                  v85 = v85 * 2.0;
                  v80 /= 2;
                  v91 = v106;
                  v107 = v90;
                  *(float *)&v91 = *(float *)&v91 + *(float *)&v89;
                  v89 = v100;
                  *(float *)&v107 = *(float *)&v90 + *(float *)&v90;
                  *(float *)&v89 = *(float *)&v100 * 4.0;
                  v119 = *(float *)&v91;
                  v90 = v107;
                  v121 = *(float *)&v100 * 4.0;
                  *(float *)&v90 = *(float *)&v107 + *(float *)&v88;
                  v88 = v101;
                  *(float *)&v88 = *(float *)&v101 * 4.0;
                  v122 = *(float *)&v101 * 4.0;
                  v120 = *(float *)&v90;
                }
                v36 = FLOAT_0_25;
                v78 = DOUBLE_0_001;
                v124 = v86;
                v123 = v87;
                v126 = v85;
                LODWORD(v125) = v80;
              }
              else
              {
                CBezierFlattener<float,CMilPoint2F>::HalveTheStep(v109, v74, v83);
                v88 = LODWORD(v122);
                v89 = LODWORD(v121);
                v85 = v126;
                v80 = v125;
                v86 = v124;
                v87 = v123;
                v90 = LODWORD(v120);
                v91 = LODWORD(v119);
                v92 = v118;
                v93 = v117;
                v94 = v115;
              }
              if ( v80 <= 1 )
                goto LABEL_52;
            }
          }
          std::vector<CMilPoint2F>::_Insert_counted_range<CMilPoint2F *>(
            v26,
            *(_QWORD *)(v2 + 88),
            v136,
            (unsigned int)(v83 + v75));
          v75 = 0;
        }
        while ( v82 );
        v34 = FLOAT_6_0;
        v33 = FLOAT_0_000099999997;
        v35 = v129;
        v29 = v127;
      }
      v31 = FLOAT_0_0000011920929;
LABEL_38:
      ++v35;
      ++v37;
      v32 += 4;
      v129 = v35;
      if ( v37 >= 4 )
      {
        v3 = v132;
        break;
      }
    }
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, unsigned __int64, _QWORD))(*(_QWORD *)v3 + 40LL))(
    v3,
    _mm_unpacklo_ps((__m128)**(unsigned int **)(v2 + 80), (__m128)*(unsigned int *)(*(_QWORD *)(v2 + 80) + 4LL)).m128_u64[0],
    0LL);
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64, _QWORD))(*(_QWORD *)v3 + 48LL))(
    v3,
    *(_QWORD *)(v2 + 80) + 8LL,
    (unsigned int)((__int64)(*(_QWORD *)(v2 + 88) - *(_QWORD *)(v2 + 80)) >> 3) - 1);
LABEL_41:
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
}
