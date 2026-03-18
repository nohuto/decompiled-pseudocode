/*
 * XREFs of ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x140162A18
 * Callers:
 *     DoPrediction @ 0x1401626C0 (DoPrediction.c)
 * Callees:
 *     ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x140163504 (-Smooth@tagExpoSmoother@Prediction@@QEAA-AVCFixPred@2@V32@@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x140163590 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?FastMul64by64@@YA_J_J0@Z @ 0x140163C14 (-FastMul64by64@@YA_J_J0@Z.c)
 *     ?Div128by64@@YA_J_J_K0AEA_J@Z @ 0x1401644A8 (-Div128by64@@YA_J_J_K0AEA_J@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YA_J_J0@Z @ 0x140164828 (-DeltaOvershootCompensation@Prediction@@YA_J_J0@Z.c)
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
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 UserSessionState; // rax
  struct tagHPD_PREDICTION_INFO *v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 *v26; // rax
  __int64 v27; // rdx
  struct tagPOINT *v28; // r14
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbx
  LONG *p_y; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  char *v38; // rax
  char *v39; // rdi
  char *v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 *v46; // rax
  __int64 v47; // rcx
  LONG v48; // eax
  LONG x; // edx
  LONG *v50; // r8
  LONG v51; // eax
  LONG v52; // edx
  LONG v53; // eax
  int v54; // eax
  LONG v55; // eax
  LONG v56; // ecx
  LONG v57; // ecx
  LONG v58; // eax
  LONG v59; // ecx
  LONG v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  char *v63; // rax
  char *v64; // r14
  char *v65; // rax
  __int64 v66; // r8
  __int64 v67; // rax
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  unsigned __int64 v71; // rdi
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // r8
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rcx
  struct tagHPD_PREDICTION_INFO *v78; // rax
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // rax
  __int64 v82; // rax
  char *v83; // rax
  char *v84; // r14
  char *v85; // rax
  __int64 v86; // r8
  __int64 v87; // rax
  __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rcx
  unsigned __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // r8
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  struct tagHPD_PREDICTION_INFO *v98; // rax
  __int64 v99; // rax
  __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // rax
  char *v103; // rax
  char *v104; // rax
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // r9
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // [rsp+38h] [rbp-99h] BYREF
  int v111; // [rsp+40h] [rbp-91h] BYREF
  __int64 v112; // [rsp+48h] [rbp-89h] BYREF
  __int64 v113; // [rsp+50h] [rbp-81h] BYREF
  char v114; // [rsp+58h] [rbp-79h] BYREF
  __int64 v115; // [rsp+60h] [rbp-71h]
  __int64 v116; // [rsp+68h] [rbp-69h]
  __int64 v117; // [rsp+70h] [rbp-61h]
  __int64 v118; // [rsp+78h] [rbp-59h]
  char v119; // [rsp+80h] [rbp-51h] BYREF
  char v120; // [rsp+88h] [rbp-49h] BYREF
  char v121; // [rsp+90h] [rbp-41h] BYREF
  char v122; // [rsp+98h] [rbp-39h] BYREF
  char v123; // [rsp+A0h] [rbp-31h] BYREF
  char v124; // [rsp+A8h] [rbp-29h] BYREF
  char v125; // [rsp+B0h] [rbp-21h] BYREF
  char v126; // [rsp+B8h] [rbp-19h] BYREF
  char v127; // [rsp+C0h] [rbp-11h] BYREF
  char v128; // [rsp+C8h] [rbp-9h] BYREF
  char v129; // [rsp+D0h] [rbp-1h] BYREF
  LONG v131; // [rsp+134h] [rbp+63h]
  LONG y; // [rsp+13Ch] [rbp+6Bh]

  y = a3.y;
  v131 = a2.y;
  v7 = *((_DWORD *)a1 + 211) - *((_DWORD *)a1 + 212);
  if ( *(_DWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(a1, a2) + 18936) != 1 || !v7 )
  {
    v7 = *(_DWORD *)(W32GetUserSessionState(v10, v9) + 18932);
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
  v111 = 0;
  v113 = (__int64)*(int *)(UserSessionState + 18928) << 32;
  v116 = (__int64)a3.x << 32;
  v117 = (__int64)y << 32;
  v18 = (__int64)v131 << 32;
  v118 = (__int64)a2.x << 32;
  v115 = v18;
  v19 = v118 - *((_QWORD *)a4 + 270);
  if ( v19 )
  {
    v71 = (Div128by64(v19 >> 32, v19 << 32, v12, &v110) + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v72 = Div128by64((__int64)(v71 - *((_QWORD *)a4 + 262)) >> 32, (v71 - *((_QWORD *)a4 + 262)) << 32, v12, &v110);
    v73 = v72;
    if ( v72 < 0 )
      v72 = -v72;
    v17 = a4;
    v74 = *((_QWORD *)a4 + 266);
    if ( v72 > v74 )
    {
      v74 = v73;
      if ( v73 < 0 )
        v74 = -v73;
      *((_QWORD *)a4 + 266) = v74;
    }
    if ( v74 )
    {
      v75 = v73;
      if ( v73 < 0 )
        v75 = -v73;
      v76 = Div128by64(v75 >> 32, v75 << 32, v74, &v110);
      v17 = a4;
      v77 = v76;
      v78 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1888);
      if ( (char *)a4 + 1888 != &v120 )
        *(_QWORD *)v78 = v77;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1856) != v78 )
        *((_QWORD *)a4 + 232) = *(_QWORD *)v78;
    }
    v79 = *((_QWORD *)v17 + 264);
    v80 = v73;
    if ( v73 < 0 )
      v80 = -v73;
    if ( v79 < 0 )
      v79 = -v79;
    v14 = v80 - v79;
    *((_QWORD *)v17 + 262) = v71;
    v18 = v115;
    *((_QWORD *)v17 + 264) = v73;
  }
  if ( v18 != *((_QWORD *)v17 + 271) )
  {
    v91 = (Div128by64((v18 - *((_QWORD *)v17 + 271)) >> 32, (v18 - *((_QWORD *)v17 + 271)) << 32, v12, &v110)
         + 0x80000000LL) & 0xFFFFFFFF00000000uLL;
    v92 = Div128by64((__int64)(v91 - *((_QWORD *)a4 + 263)) >> 32, (v91 - *((_QWORD *)a4 + 263)) << 32, v12, &v110);
    v93 = v92;
    if ( v92 < 0 )
      v92 = -v92;
    v17 = a4;
    v94 = *((_QWORD *)a4 + 267);
    if ( v92 > v94 )
    {
      v94 = v93;
      if ( v93 < 0 )
        v94 = -v93;
      *((_QWORD *)a4 + 267) = v94;
    }
    if ( v94 )
    {
      v95 = v93;
      if ( v93 < 0 )
        v95 = -v93;
      v96 = Div128by64(v95 >> 32, v95 << 32, v94, &v110);
      v17 = a4;
      v97 = v96;
      v98 = (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1904);
      if ( (char *)a4 + 1904 != &v121 )
        *(_QWORD *)v98 = v97;
      if ( (struct tagHPD_PREDICTION_INFO *)((char *)a4 + 1872) != v98 )
        *((_QWORD *)a4 + 234) = *(_QWORD *)v98;
    }
    v99 = *((_QWORD *)v17 + 265);
    v100 = v93;
    if ( v93 < 0 )
      v100 = -v93;
    if ( v99 < 0 )
      v99 = -v99;
    v15 = v100 - v99;
    *((_QWORD *)v17 + 263) = v91;
    *((_QWORD *)v17 + 265) = v93;
  }
  v20 = v116 - *((_QWORD *)v17 + 268);
  if ( v116 == *((_QWORD *)v17 + 268) )
  {
    v21 = v113;
    v22 = (__int64 *)((char *)v17 + 2176);
    v23 = *((_QWORD *)v17 + 272);
  }
  else
  {
    v101 = Div128by64(v20 >> 32, v20 << 32, v12, &v110);
    v21 = v113;
    v102 = FastMul64by64(v101, v113);
    if ( v14 < 0 )
      v102 = FastMul64by64(v102, 0x100000000LL - *((_QWORD *)a4 + 232));
    v113 = v102;
    v110 = v20;
    v103 = (char *)Prediction::tagRlsFilter::Filter(a4, &v112, &v110, &v113, &v111);
    if ( &v119 != v103 )
      v11 = *(_QWORD *)v103;
    v110 = v11;
    v104 = (char *)Prediction::tagExpoSmoother::Smooth((char *)a4 + 1856, &v112, &v110);
    if ( v111 )
    {
      if ( &v114 != v104 )
        v13 = *(_QWORD *)v104;
      v17 = a4;
      *((_QWORD *)a4 + 276) += v13;
      v22 = (__int64 *)((char *)a4 + 2176);
      v23 = v116 + *((_QWORD *)a4 + 276);
      *((_QWORD *)a4 + 272) = v23;
      if ( (char *)a4 + 1856 != &v122 )
        *((_QWORD *)a4 + 232) = 0LL;
      if ( (char *)a4 + 1864 != &v123 )
        *((_QWORD *)a4 + 233) = 0LL;
    }
    else
    {
      if ( &v114 != v104 )
        v13 = *(_QWORD *)v104;
      v106 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 276), v20, v105);
      v108 = v106 + v107 + v116;
      *((_QWORD *)v17 + 276) = v106 + v107;
      v23 = v13 + v108;
      v22 = (__int64 *)((char *)v17 + 2176);
    }
    v109 = *v22;
    if ( v20 >= 0 )
    {
      if ( v23 <= v109 )
      {
        v23 = *v22;
        v22 = (__int64 *)((char *)v17 + 2176);
      }
    }
    else if ( v23 >= v109 )
    {
      v23 = *v22;
    }
  }
  v24 = v118;
  *v22 = v23;
  a6->x = (unsigned __int64)(v23 + 0x80000000LL) >> 32;
  v25 = v24 - *((_QWORD *)v17 + 270);
  if ( v25 )
  {
    v81 = Div128by64(v25 >> 32, v25 << 32, v12, &v112);
    v82 = FastMul64by64(v81, v21);
    if ( v14 < 0 )
      v82 = FastMul64by64(v82, 0x100000000LL - *((_QWORD *)a4 + 236));
    v110 = v82;
    v113 = v25;
    v83 = (char *)Prediction::tagRlsFilter::Filter((char *)a4 + 864, &v112, &v113, &v110, &v111);
    if ( &v119 != v83 )
      v11 = *(_QWORD *)v83;
    v84 = (char *)a4 + 1888;
    v110 = v11;
    v85 = (char *)Prediction::tagExpoSmoother::Smooth((char *)a4 + 1888, &v112, &v110);
    if ( v111 )
    {
      if ( &v114 != v85 )
        v13 = *(_QWORD *)v85;
      v17 = a4;
      *((_QWORD *)a4 + 278) += v13;
      v26 = (__int64 *)((char *)a4 + 2192);
      v27 = v118 + *((_QWORD *)a4 + 278);
      *((_QWORD *)a4 + 274) = v27;
      if ( v84 != &v124 )
        *(_QWORD *)v84 = 0LL;
      if ( (char *)a4 + 1896 != &v125 )
        *((_QWORD *)a4 + 237) = 0LL;
    }
    else
    {
      if ( &v114 != v85 )
        v13 = *(_QWORD *)v85;
      v87 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 278), v25, v86);
      v89 = v87 + v88 + v118;
      *((_QWORD *)v17 + 278) = v87 + v88;
      v27 = v13 + v89;
      v26 = (__int64 *)((char *)v17 + 2192);
    }
    v90 = *v26;
    if ( v25 < 0 )
    {
      if ( v27 >= v90 )
        v27 = *v26;
    }
    else if ( v27 <= v90 )
    {
      v27 = *v26;
      v26 = (__int64 *)((char *)v17 + 2192);
    }
  }
  else
  {
    v26 = (__int64 *)((char *)v17 + 2192);
    v27 = *((_QWORD *)v17 + 274);
  }
  v28 = a5;
  v29 = v117;
  *v26 = v27;
  a5->x = (unsigned __int64)(v27 + 0x80000000LL) >> 32;
  v30 = v29 - *((_QWORD *)v17 + 269);
  if ( !v30 )
  {
    v31 = (__int64 *)((char *)v17 + 2184);
    v32 = *((_QWORD *)v17 + 273);
    goto LABEL_11;
  }
  v61 = Div128by64(v30 >> 32, v30 << 32, v12, &v112);
  v62 = FastMul64by64(v61, v21);
  if ( v15 < 0 )
    v62 = FastMul64by64(v62, 0x100000000LL - *((_QWORD *)a4 + 234));
  v110 = v62;
  v113 = v30;
  v63 = (char *)Prediction::tagRlsFilter::Filter((char *)a4 + 432, &v112, &v113, &v110, &v111);
  if ( &v119 != v63 )
    v11 = *(_QWORD *)v63;
  v64 = (char *)a4 + 1872;
  v110 = v11;
  v65 = (char *)Prediction::tagExpoSmoother::Smooth((char *)a4 + 1872, &v112, &v110);
  if ( v111 )
  {
    if ( &v114 != v65 )
      v13 = *(_QWORD *)v65;
    v17 = a4;
    *((_QWORD *)a4 + 277) += v13;
    v31 = (__int64 *)((char *)a4 + 2184);
    v32 = v117 + *((_QWORD *)a4 + 277);
    *((_QWORD *)a4 + 273) = v32;
    if ( v64 != &v126 )
      *(_QWORD *)v64 = 0LL;
    if ( (char *)a4 + 1880 != &v127 )
      *((_QWORD *)a4 + 235) = 0LL;
  }
  else
  {
    if ( &v114 != v65 )
      v13 = *(_QWORD *)v65;
    v67 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 277), v30, v66);
    v69 = v67 + v68 + v117;
    *((_QWORD *)v17 + 277) = v67 + v68;
    v32 = v13 + v69;
    v31 = (__int64 *)((char *)v17 + 2184);
  }
  v70 = *v31;
  if ( v30 >= 0 )
  {
    if ( v32 > v70 )
      goto LABEL_117;
    v31 = (__int64 *)((char *)v17 + 2184);
  }
  else if ( v32 < v70 )
  {
    goto LABEL_117;
  }
  v32 = v70;
LABEL_117:
  v28 = a5;
LABEL_11:
  v33 = v115;
  p_y = &a6->y;
  *v31 = v32;
  a6->y = (unsigned __int64)(v32 + 0x80000000LL) >> 32;
  v35 = v33 - *((_QWORD *)v17 + 271);
  if ( !v35 )
  {
    v46 = (__int64 *)((char *)v17 + 2200);
    v45 = *((_QWORD *)v17 + 275);
    goto LABEL_25;
  }
  v36 = Div128by64(v35 >> 32, v35 << 32, v12, &v112);
  v37 = FastMul64by64(v36, v21);
  if ( v15 < 0 )
    v37 = FastMul64by64(v37, 0x100000000LL - *((_QWORD *)a4 + 238));
  v110 = v37;
  v113 = v35;
  v38 = (char *)Prediction::tagRlsFilter::Filter((char *)a4 + 1296, &v112, &v113, &v110, &v111);
  if ( &v119 != v38 )
    v11 = *(_QWORD *)v38;
  v39 = (char *)a4 + 1904;
  v110 = v11;
  v40 = (char *)Prediction::tagExpoSmoother::Smooth((char *)a4 + 1904, &v112, &v110);
  if ( v111 )
  {
    if ( &v114 != v40 )
      v13 = *(_QWORD *)v40;
    v17 = a4;
    *((_QWORD *)a4 + 279) += v13;
    v46 = (__int64 *)((char *)a4 + 2200);
    v45 = v115 + *((_QWORD *)a4 + 279);
    *((_QWORD *)a4 + 275) = v45;
    if ( v39 != &v128 )
      *(_QWORD *)v39 = 0LL;
    if ( (char *)a4 + 1912 != &v129 )
      *((_QWORD *)a4 + 239) = 0LL;
  }
  else
  {
    if ( &v114 != v40 )
      v13 = *(_QWORD *)v40;
    v42 = Prediction::DeltaOvershootCompensation(*((Prediction **)a4 + 279), v35, v41);
    v44 = v42 + v43 + v115;
    *((_QWORD *)v17 + 279) = v42 + v43;
    v45 = v13 + v44;
    v46 = (__int64 *)((char *)v17 + 2200);
  }
  v47 = *v46;
  if ( v35 < 0 )
  {
    if ( v45 < v47 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( v45 <= v47 )
  {
    v46 = (__int64 *)((char *)v17 + 2200);
LABEL_23:
    v45 = v47;
  }
LABEL_24:
  p_y = &a6->y;
LABEL_25:
  *v46 = v45;
  v28->y = (unsigned __int64)(v45 + 0x80000000LL) >> 32;
  *((_QWORD *)v17 + 268) = v116;
  *((_QWORD *)v17 + 269) = v117;
  *((_QWORD *)v17 + 270) = v118;
  *((_QWORD *)v17 + 271) = v115;
  v48 = *((_DWORD *)a1 + 40);
  x = a6->x;
  if ( a6->x < v48 )
  {
    a6->x = v48;
    x = v48;
  }
  v50 = p_y;
  v51 = *((_DWORD *)a1 + 42) - 1;
  if ( x > v51 )
  {
    a6->x = v51;
    v50 = &a6->y;
  }
  v52 = a6->y;
  v53 = *((_DWORD *)a1 + 41);
  if ( v52 < v53 )
  {
    *p_y = v53;
    v52 = v53;
    p_y = v50;
  }
  v54 = *((_DWORD *)a1 + 43) - 1;
  if ( v52 > v54 )
    *p_y = v54;
  v55 = v28->x;
  v56 = *((_DWORD *)a1 + 44);
  if ( v28->x < v56 )
  {
    v28->x = v56;
    v55 = v56;
  }
  v57 = *((_DWORD *)a1 + 46);
  if ( v55 > v57 )
    v28->x = v57;
  v58 = v28->y;
  v59 = *((_DWORD *)a1 + 45);
  if ( v58 < v59 )
  {
    v28->y = v59;
    v58 = v59;
  }
  v60 = *((_DWORD *)a1 + 47);
  if ( v58 > v60 )
    v28->y = v60;
}
