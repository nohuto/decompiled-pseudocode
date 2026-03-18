/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1401950B8
 * Callers:
 *     DoPrediction @ 0x140194FF0 (DoPrediction.c)
 * Callees:
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x14019502C (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140195BE8 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x140196550 (-FastMul64by64@@YA_J_J0@Z.c)
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1401967F8 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x140196F14 (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
 */

void __fastcall UpdateContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  int v7; // r13d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 UserSessionState; // rax
  struct tagHPD_PREDICTION_INFO *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rdi
  __int64 *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  LONG *p_y; // rcx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // rsi
  char *v38; // rax
  __int64 *v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 *v45; // rax
  __int64 v46; // rcx
  LONG v47; // eax
  LONG x; // edx
  LONG *v49; // r8
  LONG v50; // eax
  LONG v51; // eax
  LONG v52; // edx
  int v53; // eax
  LONG v54; // eax
  LONG v55; // ecx
  LONG v56; // eax
  LONG v57; // eax
  LONG v58; // ecx
  LONG v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  bool v62; // sf
  char *v63; // r14
  char *v64; // rax
  __int64 *v65; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rax
  char *v73; // rax
  __int64 *v74; // rax
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // rsi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rcx
  struct tagHPD_PREDICTION_INFO *v89; // rax
  __int64 v90; // rax
  __int64 v91; // r12
  unsigned __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rdi
  __int64 v96; // rax
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  struct tagHPD_PREDICTION_INFO *v101; // rax
  __int64 v102; // rax
  __int64 v103; // r14
  __int64 v104; // rax
  __int64 v105; // rax
  char *v106; // rax
  __int64 *v107; // rax
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // r9
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rdx
  __int64 v117; // [rsp+38h] [rbp-A9h] BYREF
  int v118; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v119; // [rsp+48h] [rbp-99h] BYREF
  __int64 v120; // [rsp+50h] [rbp-91h]
  __int64 v121; // [rsp+58h] [rbp-89h] BYREF
  __int64 v122; // [rsp+60h] [rbp-81h] BYREF
  __int64 v123; // [rsp+68h] [rbp-79h]
  __int64 v124; // [rsp+70h] [rbp-71h]
  __int64 v125; // [rsp+78h] [rbp-69h]
  __int64 v126; // [rsp+80h] [rbp-61h]
  char v127; // [rsp+88h] [rbp-59h] BYREF
  char v128; // [rsp+90h] [rbp-51h] BYREF
  char v129; // [rsp+98h] [rbp-49h] BYREF
  char v130; // [rsp+A0h] [rbp-41h] BYREF
  char v131; // [rsp+A8h] [rbp-39h] BYREF
  char v132; // [rsp+B0h] [rbp-31h] BYREF
  char v133; // [rsp+B8h] [rbp-29h] BYREF
  char v134; // [rsp+C0h] [rbp-21h] BYREF
  char v135; // [rsp+C8h] [rbp-19h] BYREF
  char v136; // [rsp+D0h] [rbp-11h] BYREF
  char v137; // [rsp+D8h] [rbp-9h] BYREF
  LONG v139; // [rsp+144h] [rbp+63h]
  LONG y; // [rsp+14Ch] [rbp+6Bh]

  y = a3.y;
  v139 = a2.y;
  v7 = *((_DWORD *)a1 + 211) - *((_DWORD *)a1 + 212);
  if ( *(_DWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2) + 18976) != 1 || !v7 )
  {
    v7 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 18972);
    if ( !v7 )
    {
      *a5 = a2;
      *a6 = a3;
      return;
    }
  }
  v11 = 0LL;
  v12 = (__int64)v7 << 32;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  UserSessionState = W32GetUserSessionState(v10, v9);
  v17 = a4;
  v120 = (__int64)*(int *)(UserSessionState + 18968) << 32;
  v124 = (__int64)a3.x << 32;
  v125 = (__int64)y << 32;
  v18 = (__int64)v139 << 32;
  v126 = (__int64)a2.x << 32;
  v123 = v18;
  v118 = 0;
  v19 = v126 - *((_QWORD *)a4 + 270);
  if ( v19 )
  {
    v92 = (Div128by64(v19 >> 32, v19 << 32, v12, &v117) + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v93 = Div128by64((__int64)(v92 - *((_QWORD *)a4 + 262)) >> 32, (v92 - *((_QWORD *)a4 + 262)) << 32, v12, &v117);
    v17 = a4;
    v94 = -v93;
    v95 = v93;
    v62 = v93 < 0;
    v96 = -v93;
    v97 = *((_QWORD *)a4 + 266);
    if ( !v62 )
      v96 = v95;
    if ( v96 > v97 )
    {
      v97 = v95;
      if ( v95 < 0 )
        v97 = v94;
      *((_QWORD *)a4 + 266) = v97;
    }
    if ( v97 )
    {
      v98 = v95;
      if ( v95 < 0 )
        v98 = v94;
      v99 = Div128by64(v98 >> 32, v98 << 32, v97, &v117);
      v17 = a4;
      v100 = v99;
      v101 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888);
      if ( (char *)a4 + 1888 != &v128 )
        *(_QWORD *)v101 = v100;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1856) != v101 )
        *((_QWORD *)a4 + 232) = *(_QWORD *)v101;
    }
    v102 = *((_QWORD *)v17 + 264);
    v103 = v95;
    if ( v95 < 0 )
      v103 = -v95;
    if ( v102 < 0 )
      v102 = -v102;
    v14 = v103 - v102;
    *((_QWORD *)v17 + 262) = v92;
    v18 = v123;
    *((_QWORD *)v17 + 264) = v95;
  }
  if ( v18 != *((_QWORD *)v17 + 271) )
  {
    v80 = (Div128by64((v18 - *((_QWORD *)v17 + 271)) >> 32, (v18 - *((_QWORD *)v17 + 271)) << 32, v12, &v117)
         + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v81 = Div128by64((__int64)(v80 - *((_QWORD *)a4 + 263)) >> 32, (v80 - *((_QWORD *)a4 + 263)) << 32, v12, &v117);
    v17 = a4;
    v82 = -v81;
    v83 = v81;
    v62 = v81 < 0;
    v84 = -v81;
    v85 = *((_QWORD *)a4 + 267);
    if ( !v62 )
      v84 = v83;
    if ( v84 > v85 )
    {
      v85 = v83;
      if ( v83 < 0 )
        v85 = v82;
      *((_QWORD *)a4 + 267) = v85;
    }
    if ( v85 )
    {
      v86 = v83;
      if ( v83 < 0 )
        v86 = v82;
      v87 = Div128by64(v86 >> 32, v86 << 32, v85, &v117);
      v17 = a4;
      v88 = v87;
      v89 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904);
      if ( (char *)a4 + 1904 != &v129 )
        *(_QWORD *)v89 = v88;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1872) != v89 )
        *((_QWORD *)a4 + 234) = *(_QWORD *)v89;
    }
    v90 = *((_QWORD *)v17 + 265);
    v91 = v83;
    if ( v83 < 0 )
      v91 = -v83;
    if ( v90 < 0 )
      v90 = -v90;
    *((_QWORD *)v17 + 263) = v80;
    v15 = v91 - v90;
    *((_QWORD *)v17 + 265) = v83;
  }
  v20 = v124 - *((_QWORD *)v17 + 268);
  if ( v124 == *((_QWORD *)v17 + 268) )
  {
    v21 = v120;
    v22 = (__int64 *)((char *)v17 + 2176);
    v23 = *((_QWORD *)v17 + 272);
  }
  else
  {
    v104 = Div128by64(v20 >> 32, v20 << 32, v12, &v117);
    v21 = v120;
    v105 = FastMul64by64(v104, v120);
    v120 = (__int64)a4 + 1856;
    if ( v14 < 0 )
      v105 = FastMul64by64(v105, 0x100000000LL - *((_QWORD *)a4 + 232));
    v122 = v105;
    v117 = v20;
    v106 = (char *)Prediction::tagRlsFilter::Filter(a4, &v119, &v117, &v122, &v118);
    if ( &v127 != v106 )
      v11 = *(_QWORD *)v106;
    v117 = v11;
    v107 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v120, &v119, (__int64)&v117);
    if ( v118 )
    {
      if ( &v121 != v107 )
        v13 = *v107;
      v17 = a4;
      v116 = v124;
      *((_QWORD *)a4 + 276) += v13;
      v23 = *((_QWORD *)a4 + 276) + v116;
      v22 = (__int64 *)((char *)a4 + 2176);
      *((_QWORD *)a4 + 272) = v23;
      if ( (char *)a4 + 1856 != &v130 )
        *((_QWORD *)a4 + 232) = 0LL;
      if ( (char *)a4 + 1864 != &v131 )
        *((_QWORD *)a4 + 233) = 0LL;
    }
    else
    {
      if ( &v121 != v107 )
        v13 = *v107;
      v109 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 276), v20, v108);
      v111 = v109 + v110 + v124;
      *((_QWORD *)v17 + 276) = v109 + v110;
      v23 = v13 + v111;
      v22 = (__int64 *)((char *)v17 + 2176);
    }
    v112 = *v22;
    if ( v20 >= 0 )
    {
      if ( v23 <= v112 )
      {
        v23 = *v22;
        v22 = (__int64 *)((char *)v17 + 2176);
      }
    }
    else if ( v23 >= v112 )
    {
      v23 = *v22;
    }
  }
  v24 = v126;
  *v22 = v23;
  a6->x = (unsigned __int64)(v23 + 0x80000000LL) >> 32;
  v25 = v24 - *((_QWORD *)v17 + 270);
  if ( v25 )
  {
    v60 = Div128by64(v25 >> 32, v25 << 32, v12, &v119);
    v61 = FastMul64by64(v60, v21);
    v62 = v14 < 0;
    v63 = (char *)a4 + 1888;
    if ( v62 )
      v61 = FastMul64by64(v61, 0x100000000LL - *((_QWORD *)a4 + 236));
    v117 = v61;
    v122 = v25;
    v64 = (char *)Prediction::tagRlsFilter::Filter((char *)a4 + 864, &v119, &v122, &v117, &v118);
    if ( &v127 != v64 )
      v11 = *(_QWORD *)v64;
    v117 = v11;
    v65 = Prediction::tagExpoSmoother::Smooth(v63, &v119, (__int64)&v117);
    if ( v118 )
    {
      if ( &v121 != v65 )
        v13 = *v65;
      v17 = a4;
      v113 = v126;
      *((_QWORD *)a4 + 278) += v13;
      v26 = (__int64 *)((char *)a4 + 2192);
      v27 = *((_QWORD *)a4 + 278) + v113;
      *((_QWORD *)a4 + 274) = v27;
      if ( v63 != &v132 )
        *(_QWORD *)v63 = 0LL;
      if ( (char *)a4 + 1896 != &v133 )
        *((_QWORD *)a4 + 237) = 0LL;
    }
    else
    {
      if ( &v121 != v65 )
        v13 = *v65;
      v67 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 278), v25, v66);
      v69 = v67 + v68 + v126;
      *((_QWORD *)v17 + 278) = v67 + v68;
      v27 = v13 + v69;
      v26 = (__int64 *)((char *)v17 + 2192);
    }
    v70 = *v26;
    if ( v25 >= 0 )
    {
      if ( v27 <= v70 )
      {
        v27 = *v26;
        v26 = (__int64 *)((char *)v17 + 2192);
      }
    }
    else if ( v27 >= v70 )
    {
      v27 = *v26;
    }
  }
  else
  {
    v26 = (__int64 *)((char *)v17 + 2192);
    v27 = *((_QWORD *)v17 + 274);
  }
  v28 = v125;
  *v26 = v27;
  a5->x = (unsigned __int64)(v27 + 0x80000000LL) >> 32;
  v29 = v28 - *((_QWORD *)v17 + 269);
  if ( v29 )
  {
    v71 = Div128by64(v29 >> 32, v29 << 32, v12, &v119);
    v72 = FastMul64by64(v71, v21);
    v120 = (__int64)a4 + 1872;
    if ( v15 < 0 )
      v72 = FastMul64by64(v72, 0x100000000LL - *((_QWORD *)a4 + 234));
    v117 = v72;
    v122 = v29;
    v73 = (char *)Prediction::tagRlsFilter::Filter((char *)a4 + 432, &v119, &v122, &v117, &v118);
    if ( &v127 != v73 )
      v11 = *(_QWORD *)v73;
    v117 = v11;
    v74 = Prediction::tagExpoSmoother::Smooth((_QWORD *)v120, &v119, (__int64)&v117);
    if ( v118 )
    {
      if ( &v121 != v74 )
        v13 = *v74;
      v17 = a4;
      v115 = v125;
      *((_QWORD *)a4 + 277) += v13;
      v31 = *((_QWORD *)a4 + 277) + v115;
      v30 = (__int64 *)((char *)a4 + 2184);
      *((_QWORD *)a4 + 273) = v31;
      if ( (char *)a4 + 1872 != &v134 )
        *((_QWORD *)a4 + 234) = 0LL;
      if ( (char *)a4 + 1880 != &v135 )
        *((_QWORD *)a4 + 235) = 0LL;
    }
    else
    {
      if ( &v121 != v74 )
        v13 = *v74;
      v76 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 277), v29, v75);
      v78 = v76 + v77 + v125;
      *((_QWORD *)v17 + 277) = v76 + v77;
      v31 = v13 + v78;
      v30 = (__int64 *)((char *)v17 + 2184);
    }
    v79 = *v30;
    if ( v29 >= 0 )
    {
      if ( v31 <= v79 )
      {
        v31 = *v30;
        v30 = (__int64 *)((char *)v17 + 2184);
      }
    }
    else if ( v31 >= v79 )
    {
      v31 = *v30;
    }
  }
  else
  {
    v30 = (__int64 *)((char *)v17 + 2184);
    v31 = *((_QWORD *)v17 + 273);
  }
  v32 = v123;
  p_y = &a6->y;
  *v30 = v31;
  a6->y = (unsigned __int64)(v31 + 0x80000000LL) >> 32;
  v34 = v32 - *((_QWORD *)v17 + 271);
  if ( v34 )
  {
    v35 = Div128by64(v34 >> 32, v34 << 32, v12, &v119);
    v36 = FastMul64by64(v35, v21);
    v37 = (char *)a4 + 1904;
    if ( v15 < 0 )
      v36 = FastMul64by64(v36, 0x100000000LL - *(_QWORD *)v37);
    v117 = v36;
    v122 = v34;
    v38 = (char *)Prediction::tagRlsFilter::Filter((char *)a4 + 1296, &v119, &v122, &v117, &v118);
    if ( &v127 != v38 )
      v11 = *(_QWORD *)v38;
    v117 = v11;
    v39 = Prediction::tagExpoSmoother::Smooth(v37, &v119, (__int64)&v117);
    if ( v118 )
    {
      if ( &v121 != v39 )
        v13 = *v39;
      v17 = a4;
      v114 = v123;
      *((_QWORD *)a4 + 279) += v13;
      v45 = (__int64 *)((char *)a4 + 2200);
      v44 = *((_QWORD *)a4 + 279) + v114;
      *((_QWORD *)a4 + 275) = v44;
      if ( v37 != &v136 )
        *(_QWORD *)v37 = 0LL;
      if ( (char *)a4 + 1912 != &v137 )
        *((_QWORD *)a4 + 239) = 0LL;
    }
    else
    {
      if ( &v121 != v39 )
        v13 = *v39;
      v41 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 279), v34, v40);
      v43 = v41 + v42 + v123;
      *((_QWORD *)v17 + 279) = v41 + v42;
      v44 = v13 + v43;
      v45 = (__int64 *)((char *)v17 + 2200);
    }
    v46 = *v45;
    if ( v34 >= 0 )
    {
      if ( v44 > v46 )
        goto LABEL_27;
      v45 = (__int64 *)((char *)v17 + 2200);
    }
    else if ( v44 < v46 )
    {
LABEL_27:
      p_y = &a6->y;
      goto LABEL_28;
    }
    v44 = v46;
    goto LABEL_27;
  }
  v45 = (__int64 *)((char *)v17 + 2200);
  v44 = *((_QWORD *)v17 + 275);
LABEL_28:
  *v45 = v44;
  a5->y = (unsigned __int64)(v44 + 0x80000000LL) >> 32;
  *((_QWORD *)v17 + 268) = v124;
  *((_QWORD *)v17 + 269) = v125;
  *((_QWORD *)v17 + 270) = v126;
  *((_QWORD *)v17 + 271) = v123;
  v47 = *((_DWORD *)a1 + 40);
  x = a6->x;
  if ( a6->x < v47 )
  {
    a6->x = v47;
    x = v47;
  }
  v49 = p_y;
  v50 = *((_DWORD *)a1 + 42) - 1;
  if ( x > v50 )
  {
    a6->x = v50;
    v49 = &a6->y;
  }
  v51 = *((_DWORD *)a1 + 41);
  v52 = a6->y;
  if ( v52 < v51 )
  {
    *p_y = v51;
    v52 = v51;
    p_y = v49;
  }
  v53 = *((_DWORD *)a1 + 43) - 1;
  if ( v52 > v53 )
    *p_y = v53;
  v54 = *((_DWORD *)a1 + 44);
  v55 = a5->x;
  if ( a5->x < v54 )
  {
    a5->x = v54;
    v55 = v54;
  }
  v56 = *((_DWORD *)a1 + 46);
  if ( v55 > v56 )
    a5->x = v56;
  v57 = *((_DWORD *)a1 + 45);
  v58 = a5->y;
  if ( v58 < v57 )
  {
    a5->y = v57;
    v58 = v57;
  }
  v59 = *((_DWORD *)a1 + 47);
  if ( v58 > v59 )
    a5->y = v59;
}
