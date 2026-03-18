/*
 * XREFs of bDynamicModeChange @ 0x140030E68
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     PALLOCNOZ @ 0x14000E6AC (PALLOCNOZ.c)
 *     ?HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x140019830 (-HmgShareLock@@YAPEAU_BASEOBJECT@@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@EW4HandleLockOptions.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     PushThreadGuardedObject @ 0x140030350 (PushThreadGuardedObject.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x140030690 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x140030748 (-SETFLAG@@YAXHAECKK@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x140030BE0 (bDynamicProcessAllDriverRealizations.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x140032100 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     HmgSafeNextObjt @ 0x140032210 (HmgSafeNextObjt.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x140032B00 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1400392A4 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z @ 0x14003A980 (-DEC_SHARE_REF_CNT_LAZY0@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVBRUSH@@@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     vEnableSynchronize @ 0x1400C98B4 (vEnableSynchronize.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1400C9EC4 (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x14010E4D0 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1401805B0 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     vDisableSynchronize @ 0x140185E78 (vDisableSynchronize.c)
 *     IsvDisableSynchronizeSupported @ 0x140187324 (IsvDisableSynchronizeSupported.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1401F1028 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, int a3)
{
  unsigned int v6; // esi
  _QWORD *v7; // r14
  int v8; // eax
  int v9; // eax
  int v10; // r15d
  int v11; // eax
  __int64 v12; // rcx
  struct SURFACE *v13; // r12
  struct tagSIZE v14; // r9
  int v15; // eax
  int v16; // eax
  struct BRUSH *v17; // rdx
  struct SURFACE *v18; // r13
  struct tagSIZE v19; // r8
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  __int64 v21; // rdx
  unsigned int v22; // r9d
  struct tagSIZE v23; // r14
  DC *v24; // r15
  struct SURFACE *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // r15d
  struct SURFACE *v31; // rcx
  HDEV v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // r15d
  struct Gre::Base::SESSION_GLOBALS *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // ecx
  int v40; // eax
  HDEV v41; // r8
  HDEV v42; // rdx
  HDEV v43; // rdx
  __int64 v44; // r8
  _OWORD *v45; // rcx
  __int64 v46; // r9
  __int64 v47; // r11
  HDEV v48; // rax
  __int128 v49; // xmm1
  __int64 v50; // r9
  HDEV v51; // rcx
  HDEV v52; // rax
  __int128 v53; // xmm1
  _OWORD *v54; // rax
  __int64 v55; // rdx
  __int128 v56; // xmm1
  __int64 v57; // r9
  HDEV v58; // rax
  HDEV v59; // rdx
  _OWORD *v60; // rcx
  __int128 v61; // xmm1
  __int64 v62; // r9
  __int128 v63; // xmm1
  HDEV v64; // rdx
  HDEV v65; // rcx
  __int128 v66; // xmm1
  _OWORD *v67; // rax
  __int128 v68; // xmm1
  int v69; // ecx
  __int64 v70; // rax
  int v71; // ecx
  int v72; // ecx
  int v73; // ecx
  int v74; // ecx
  int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  signed __int32 v78; // ett
  signed __int32 v79; // ett
  __int64 v80; // r8
  _OWORD *v81; // rcx
  __int64 v82; // r9
  HDEV v83; // rax
  HDEV v84; // rdx
  __int128 v85; // xmm1
  __int64 v86; // r9
  __int128 v87; // xmm1
  HDEV v88; // rdx
  HDEV v89; // rcx
  __int128 v90; // xmm1
  _OWORD *v91; // rax
  __int128 v92; // xmm1
  __int64 v93; // rcx
  int (*v94)(void); // rax
  __int64 v95; // rcx
  void (__fastcall *v96)(HDEV, HDEV); // rax
  char v98; // al
  struct Gre::Base::SESSION_GLOBALS *v99; // r14
  HDEV v100; // rcx
  HDEV *v101; // rcx
  __int64 SessionState; // rax
  int v103; // r8d
  int v104; // r10d
  int v105; // r8d
  int v106; // r10d
  int v107; // r8d
  int v108; // r10d
  int v109; // r8d
  int v110; // r10d
  int v111; // r8d
  int v112; // r10d
  int v113; // r8d
  int v114; // r10d
  int v115; // r8d
  int v116; // r10d
  int v117; // [rsp+48h] [rbp-89h]
  __int64 v118; // [rsp+50h] [rbp-81h]
  int v119; // [rsp+58h] [rbp-79h]
  int v120; // [rsp+5Ch] [rbp-75h]
  int v121; // [rsp+60h] [rbp-71h]
  DC *v122; // [rsp+68h] [rbp-69h] BYREF
  struct SURFACE *v123; // [rsp+70h] [rbp-61h] BYREF
  __int64 v124; // [rsp+78h] [rbp-59h] BYREF
  __int64 v125; // [rsp+80h] [rbp-51h]
  __int64 v126; // [rsp+88h] [rbp-49h]
  HDEV v127; // [rsp+90h] [rbp-41h] BYREF
  HDEV v128; // [rsp+98h] [rbp-39h] BYREF
  __int64 v129; // [rsp+A0h] [rbp-31h]
  struct BRUSH *v130; // [rsp+A8h] [rbp-29h]
  __int64 v131; // [rsp+B0h] [rbp-21h]
  struct tagSIZE v132; // [rsp+B8h] [rbp-19h]
  struct Gre::Base::SESSION_GLOBALS *v133; // [rsp+C0h] [rbp-11h]
  __int64 v134; // [rsp+C8h] [rbp-9h]
  __int64 v135; // [rsp+D0h] [rbp-1h]
  struct tagSIZE v136; // [rsp+D8h] [rbp+7h]
  __int64 v137; // [rsp+E0h] [rbp+Fh] BYREF
  _OWORD v138[2]; // [rsp+E8h] [rbp+17h] BYREF
  struct BRUSH *v139; // [rsp+150h] [rbp+7Fh]
  unsigned int v140; // [rsp+150h] [rbp+7Fh]
  struct BRUSH *v141; // [rsp+150h] [rbp+7Fh]

  v6 = 0;
  v123 = 0LL;
  v122 = 0LL;
  v133 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  v124 = 0LL;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
    return v6;
  v125 = PALLOCNOZ(0x880u, 0x706D7447u);
  v7 = (_QWORD *)v125;
  if ( !v125 )
    return v6;
  v8 = (_DWORD)a2[10] & 0x400;
  v127 = a1;
  v120 = v8;
  v9 = (_DWORD)a1[10] & 0x400;
  v128 = a2;
  v121 = v9;
  if ( (int)IsvDisableSynchronizeSupported() >= 0 )
  {
    vDisableSynchronize(a2);
    vDisableSynchronize(a1);
  }
  v119 = *((_DWORD *)a2 + 536) * *((_DWORD *)a2 + 537);
  v117 = *((_DWORD *)a1 + 536) * *((_DWORD *)a1 + 537);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations((__int64)a2, 0LL, 1)
    || !(unsigned int)bDynamicProcessAllDriverRealizations((__int64)a1, (__int64)a2, a3) )
  {
    goto LABEL_107;
  }
  v10 = 1;
  v11 = (_DWORD)a1[10] & 0x20000;
  if ( v11 )
    v12 = *(_QWORD *)(a1 + 425);
  else
    v12 = *((_QWORD *)a1 + 267);
  v13 = (struct SURFACE *)*((_QWORD *)a1 + 318);
  v131 = v12;
  v129 = v12;
  v14 = *(struct tagSIZE *)((char *)a1 + (-(__int64)(v11 != 0) & 0xFFFFFFFFFFFFFE4CuLL) + 2136);
  v134 = *((_QWORD *)a1 + 224);
  v126 = *((_QWORD *)a1 + 223);
  v15 = *((_DWORD *)a2 + 10);
  v132 = v14;
  v16 = v15 & 0x20000;
  if ( v16 )
    v17 = *(struct BRUSH **)(a2 + 425);
  else
    v17 = (struct BRUSH *)*((_QWORD *)a2 + 267);
  v18 = (struct SURFACE *)*((_QWORD *)a2 + 318);
  v130 = v17;
  v139 = v17;
  v19 = *(struct tagSIZE *)((char *)a2 + (-(__int64)(v16 != 0) & 0xFFFFFFFFFFFFFE4CuLL) + 2136);
  v135 = *((_QWORD *)a2 + 224);
  v118 = *((_QWORD *)a2 + 223);
  v136 = v19;
  if ( (int)v17 < (int)v12 || v19.cy < v14.cy )
  {
    v98 = bDynamicIntersectVisRect(v13, v19);
    v17 = v139;
    v14 = v132;
    v10 = v98 & 1;
  }
  if ( (int)v129 < (int)v17 || SHIDWORD(v131) < SHIDWORD(v130) )
    v10 &= bDynamicIntersectVisRect(v18, v14);
  v20 = (__int64 (__fastcall *)(__int64, __int64))*((_QWORD *)a2 + 342);
  if ( v20
    && v20 == *((__int64 (__fastcall **)(__int64, __int64))a1 + 342)
    && *((_QWORD *)a2 + 222) == *((_QWORD *)a1 + 222) )
  {
    if ( !v10 )
      goto LABEL_107;
    v10 = v20(v126, v118);
  }
  if ( !v10 )
    goto LABEL_107;
  LOBYTE(v17) = 1;
  v140 = HmgSafeNextObjt(0LL, v17, &v122);
  v22 = v140;
  if ( !v140 )
    goto LABEL_29;
  v23 = v136;
  do
  {
    v24 = v122;
    if ( (*((_DWORD *)v122 + 9) & 0x2000) != 0 )
      goto LABEL_27;
    v25 = (struct SURFACE *)*((_QWORD *)v122 + 62);
    if ( v25 == v13 )
    {
      DC::pSurface(v122, v18);
      *((struct tagSIZE *)v24 + 64) = v23;
LABEL_62:
      v22 = v140;
      *((_DWORD *)v24 + 79) |= 0xFu;
      goto LABEL_22;
    }
    if ( v25 == v18 )
    {
      DC::pSurface(v122, v13);
      *((struct tagSIZE *)v24 + 64) = v132;
      goto LABEL_62;
    }
LABEL_22:
    v21 = *((unsigned int *)v24 + 9);
    if ( (v21 & 0x200) != 0 && _bittest((const signed __int32 *)(*((_QWORD *)v24 + 62) + 112LL), 9u) )
      LODWORD(v21) = v21 | 0x8000;
    else
      LODWORD(v21) = v21 & 0xFFFF7FFF;
    v26 = v126;
    *((_DWORD *)v24 + 9) = v21;
    v27 = *((_QWORD *)v24 + 3);
    if ( v27 == v26 )
    {
      *((_QWORD *)v24 + 3) = v118;
      *(_DWORD *)((struct HDEV__ *)v24 + 18) = a2[452];
      v28 = *((_DWORD *)a2 + 528);
LABEL_26:
      *((_DWORD *)v24 + 19) = v28;
      goto LABEL_27;
    }
    if ( v27 == v118 )
    {
      *((_QWORD *)v24 + 3) = v26;
      *(_DWORD *)((struct HDEV__ *)v24 + 18) = a1[452];
      v28 = *((_DWORD *)a1 + 528);
      goto LABEL_26;
    }
LABEL_27:
    LOBYTE(v21) = 1;
    v140 = HmgSafeNextObjt(v22, v21, &v122);
    v22 = v140;
  }
  while ( v140 );
  v7 = (_QWORD *)v125;
LABEL_29:
  LOBYTE(v21) = 5;
  v30 = HmgSafeNextObjt(0LL, v21, &v123);
  if ( !v30 )
    goto LABEL_34;
  while ( 2 )
  {
    v31 = v123;
    v32 = (HDEV)*((_QWORD *)v123 + 6);
    if ( v32 == a1 )
    {
      if ( (*((_DWORD *)v123 + 29) & 1) != 0 || (*((_DWORD *)v123 + 28) & 0x300000) == 0x200000 )
        *((_QWORD *)v123 + 6) = a2;
      if ( (*((_DWORD *)v31 + 28) & 0x4000000) != 0 && v117 != v119 && *((_DWORD *)v31 + 24) == *((_DWORD *)v13 + 24) )
      {
        v41 = a2;
        v42 = a1;
        goto LABEL_50;
      }
    }
    else if ( v32 == a2 )
    {
      if ( (*((_DWORD *)v123 + 29) & 1) != 0 || (*((_DWORD *)v123 + 28) & 0x300000) == 0x200000 )
        *((_QWORD *)v123 + 6) = a1;
      if ( (*((_DWORD *)v31 + 28) & 0x4000000) != 0 && v117 != v119 && *((_DWORD *)v31 + 24) == *((_DWORD *)v18 + 24) )
      {
        v41 = a1;
        v42 = a2;
LABEL_50:
        vDynamicSwitchPalettes(v31, (struct PDEV *)v42, (struct PDEV *)v41);
      }
    }
    LOBYTE(v29) = 5;
    v30 = HmgSafeNextObjt(v30, v29, &v123);
    if ( v30 )
      continue;
    break;
  }
  v7 = (_QWORD *)v125;
LABEL_34:
  LOBYTE(v29) = 28;
  v34 = HmgSafeNextObjt(0LL, v29, &v124);
  if ( !v34 )
    goto LABEL_35;
  v99 = v133;
  while ( 2 )
  {
    v100 = *(HDEV *)(v124 + 40);
    if ( v100 == a1 )
    {
      *(_QWORD *)(v124 + 40) = a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v128, v99);
      v101 = &v127;
      goto LABEL_124;
    }
    if ( v100 == a2 )
    {
      *(_QWORD *)(v124 + 40) = a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v127, v99);
      v101 = &v128;
LABEL_124:
      PDEVOBJ::vUnreferencePdev((PDEVOBJ *)v101, v99);
    }
    LOBYTE(v33) = 28;
    v34 = HmgSafeNextObjt(v34, v33, &v124);
    if ( v34 )
      continue;
    break;
  }
  v7 = (_QWORD *)v125;
LABEL_35:
  vChangeWndObjs(v13, a1, v18, a2);
  v35 = v133;
  v137 = HmgShareLock((__int64)v133, *((_QWORD *)v133 + 18), 16, 1);
  memset(v138, 0, sizeof(v138));
  PushThreadGuardedObject(
    v138,
    (__int64)&v137,
    (__int64)UnexpectedThreadTerminationHandler<HmgShareLockResult<BRUSH>>::OnUnexpectedThreadTerminationStatic);
  v7[122] = v7 + 68;
  *((_DWORD *)v7 + 182) = 0;
  *((_DWORD *)v7 + 180) = 0xFFFFFF;
  v36 = v7[122];
  *((_DWORD *)v7 + 30) = 0;
  *(_QWORD *)(v36 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush(a1 + 390, v7, v137, *((_QWORD *)v35 + 484), v135, v18, 1);
  EBRUSHOBJ::vInitBrush(a2 + 390, v7, v137, *((_QWORD *)v35 + 484), v134, v13, 1);
  v141 = (struct BRUSH *)v137;
  if ( v137 )
  {
    SessionState = W32GetSessionState(v37);
    DEC_SHARE_REF_CNT_LAZY0(*(struct Gre::Base::SESSION_GLOBALS **)(SessionState + 88), v141);
    v137 = 0LL;
  }
  PopThreadGuardedObject(v138);
  *((_QWORD *)a2 + 224) = v134;
  *((_QWORD *)a2 + 223) = v126;
  v38 = v135;
  *((_QWORD *)a2 + 318) = v13;
  *((_QWORD *)a1 + 224) = v38;
  *((_QWORD *)a1 + 223) = v118;
  *((_QWORD *)a1 + 318) = v18;
  v39 = *((_DWORD *)v13 + 28);
  v40 = *((_DWORD *)v18 + 28);
  if ( (v39 & 0x10000000) != 0 )
  {
    *((_DWORD *)v18 + 28) = v40 | 0x10000000;
    if ( a1 != (HDEV)-80LL
      && (((_DWORD)a1[43] & 0x10000000) != 0 || ((_DWORD)a1[45] & 0x10000000) != 0)
      && a2 != (HDEV)-80LL )
    {
      *((_DWORD *)a2 + 43) |= 0x10000000u;
      *((_DWORD *)a2 + 45) |= 0x10000000u;
    }
  }
  else if ( (v40 & 0x10000000) != 0 )
  {
    *((_DWORD *)v13 + 28) = v39 | 0x10000000;
    if ( a2 != (HDEV)-80LL
      && (((_DWORD)a2[43] & 0x10000000) != 0 || ((_DWORD)a2[45] & 0x10000000) != 0)
      && a1 != (HDEV)-80LL )
    {
      *((_DWORD *)a1 + 43) |= 0x10000000u;
      *((_DWORD *)a1 + 45) |= 0x10000000u;
    }
  }
  v43 = a2 + 452;
  *v7 = *((_QWORD *)a2 + 222);
  v44 = 2LL;
  v45 = v7;
  *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
  v46 = 2LL;
  *((_QWORD *)a1 + 222) = *v7;
  v47 = 128LL;
  v48 = a2 + 452;
  do
  {
    *v45 = *(_OWORD *)v48;
    v45[1] = *((_OWORD *)v48 + 1);
    v45[2] = *((_OWORD *)v48 + 2);
    v45[3] = *((_OWORD *)v48 + 3);
    v45[4] = *((_OWORD *)v48 + 4);
    v45[5] = *((_OWORD *)v48 + 5);
    v45[6] = *((_OWORD *)v48 + 6);
    v45 += 8;
    v49 = *((_OWORD *)v48 + 7);
    v48 += 32;
    *(v45 - 1) = v49;
    --v46;
  }
  while ( v46 );
  v50 = 2LL;
  *v45 = *(_OWORD *)v48;
  v45[1] = *((_OWORD *)v48 + 1);
  v45[2] = *((_OWORD *)v48 + 2);
  *((_QWORD *)v45 + 6) = *((_QWORD *)v48 + 6);
  v51 = a1 + 452;
  v52 = a1 + 452;
  do
  {
    *(_OWORD *)v43 = *(_OWORD *)v52;
    *((_OWORD *)v43 + 1) = *((_OWORD *)v52 + 1);
    *((_OWORD *)v43 + 2) = *((_OWORD *)v52 + 2);
    *((_OWORD *)v43 + 3) = *((_OWORD *)v52 + 3);
    *((_OWORD *)v43 + 4) = *((_OWORD *)v52 + 4);
    *((_OWORD *)v43 + 5) = *((_OWORD *)v52 + 5);
    *((_OWORD *)v43 + 6) = *((_OWORD *)v52 + 6);
    v43 += 32;
    v53 = *((_OWORD *)v52 + 7);
    v52 += 32;
    *((_OWORD *)v43 - 1) = v53;
    --v50;
  }
  while ( v50 );
  *(_OWORD *)v43 = *(_OWORD *)v52;
  *((_OWORD *)v43 + 1) = *((_OWORD *)v52 + 1);
  *((_OWORD *)v43 + 2) = *((_OWORD *)v52 + 2);
  *((_QWORD *)v43 + 6) = *((_QWORD *)v52 + 6);
  v54 = v7;
  v55 = 2LL;
  do
  {
    *(_OWORD *)v51 = *v54;
    *((_OWORD *)v51 + 1) = v54[1];
    *((_OWORD *)v51 + 2) = v54[2];
    *((_OWORD *)v51 + 3) = v54[3];
    *((_OWORD *)v51 + 4) = v54[4];
    *((_OWORD *)v51 + 5) = v54[5];
    *((_OWORD *)v51 + 6) = v54[6];
    v51 += 32;
    v56 = v54[7];
    v54 += 8;
    *((_OWORD *)v51 - 1) = v56;
    --v55;
  }
  while ( v55 );
  v57 = 2LL;
  *(_OWORD *)v51 = *v54;
  *((_OWORD *)v51 + 1) = v54[1];
  *((_OWORD *)v51 + 2) = v54[2];
  *((_QWORD *)v51 + 6) = *((_QWORD *)v54 + 6);
  v58 = a2 + 530;
  v59 = a2 + 530;
  v60 = v7;
  do
  {
    *v60 = *(_OWORD *)v59;
    v60[1] = *((_OWORD *)v59 + 1);
    v60[2] = *((_OWORD *)v59 + 2);
    v60[3] = *((_OWORD *)v59 + 3);
    v60[4] = *((_OWORD *)v59 + 4);
    v60[5] = *((_OWORD *)v59 + 5);
    v60[6] = *((_OWORD *)v59 + 6);
    v60 += 8;
    v61 = *((_OWORD *)v59 + 7);
    v59 += 32;
    *(v60 - 1) = v61;
    --v57;
  }
  while ( v57 );
  v62 = 2LL;
  *v60 = *(_OWORD *)v59;
  v60[1] = *((_OWORD *)v59 + 1);
  v60[2] = *((_OWORD *)v59 + 2);
  v63 = *((_OWORD *)v59 + 3);
  v64 = a1 + 530;
  v60[3] = v63;
  v65 = a1 + 530;
  do
  {
    *(_OWORD *)v58 = *(_OWORD *)v65;
    *((_OWORD *)v58 + 1) = *((_OWORD *)v65 + 1);
    *((_OWORD *)v58 + 2) = *((_OWORD *)v65 + 2);
    *((_OWORD *)v58 + 3) = *((_OWORD *)v65 + 3);
    *((_OWORD *)v58 + 4) = *((_OWORD *)v65 + 4);
    *((_OWORD *)v58 + 5) = *((_OWORD *)v65 + 5);
    *((_OWORD *)v58 + 6) = *((_OWORD *)v65 + 6);
    v58 += 32;
    v66 = *((_OWORD *)v65 + 7);
    v65 += 32;
    *((_OWORD *)v58 - 1) = v66;
    --v62;
  }
  while ( v62 );
  *(_OWORD *)v58 = *(_OWORD *)v65;
  *((_OWORD *)v58 + 1) = *((_OWORD *)v65 + 1);
  *((_OWORD *)v58 + 2) = *((_OWORD *)v65 + 2);
  *((_OWORD *)v58 + 3) = *((_OWORD *)v65 + 3);
  v67 = v7;
  do
  {
    *(_OWORD *)v64 = *v67;
    *((_OWORD *)v64 + 1) = v67[1];
    *((_OWORD *)v64 + 2) = v67[2];
    *((_OWORD *)v64 + 3) = v67[3];
    *((_OWORD *)v64 + 4) = v67[4];
    *((_OWORD *)v64 + 5) = v67[5];
    *((_OWORD *)v64 + 6) = v67[6];
    v64 += 32;
    v68 = v67[7];
    v67 += 8;
    *((_OWORD *)v64 - 1) = v68;
    --v44;
  }
  while ( v44 );
  *(_OWORD *)v64 = *v67;
  *((_OWORD *)v64 + 1) = v67[1];
  *((_OWORD *)v64 + 2) = v67[2];
  *((_OWORD *)v64 + 3) = v67[3];
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 610);
  *((_OWORD *)v7 + 1) = *(_OWORD *)(a2 + 614);
  *((_OWORD *)v7 + 2) = *(_OWORD *)(a2 + 618);
  *((_OWORD *)v7 + 3) = *(_OWORD *)(a2 + 622);
  *((_OWORD *)v7 + 4) = *(_OWORD *)(a2 + 626);
  *((_OWORD *)v7 + 5) = *(_OWORD *)(a2 + 630);
  *(_OWORD *)(a2 + 610) = *(_OWORD *)(a1 + 610);
  *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
  *(_OWORD *)(a2 + 630) = *(_OWORD *)(a1 + 630);
  *(_OWORD *)(a1 + 610) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 614) = *((_OWORD *)v7 + 1);
  *(_OWORD *)(a1 + 618) = *((_OWORD *)v7 + 2);
  *(_OWORD *)(a1 + 622) = *((_OWORD *)v7 + 3);
  *(_OWORD *)(a1 + 626) = *((_OWORD *)v7 + 4);
  *(_OWORD *)(a1 + 630) = *((_OWORD *)v7 + 5);
  *v7 = *((_QWORD *)a2 + 319);
  *((_QWORD *)a2 + 319) = *((_QWORD *)a1 + 319);
  *((_QWORD *)a1 + 319) = *v7;
  *v7 = *((_QWORD *)a2 + 320);
  *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
  *((_QWORD *)a1 + 320) = *v7;
  *v7 = *((_QWORD *)a2 + 321);
  *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
  *((_QWORD *)a1 + 321) = *v7;
  *v7 = *((_QWORD *)a2 + 322);
  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
  *((_QWORD *)a1 + 322) = *v7;
  *v7 = *((_QWORD *)a2 + 323);
  *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
  *((_QWORD *)a1 + 323) = *v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[886];
  a2[886] = a1[886];
  *(_DWORD *)(a1 + 886) = *(_DWORD *)(HDEV)v7;
  v69 = *((_DWORD *)a1 + 887);
  a1[887] = a2[887];
  v70 = *((_QWORD *)a2 + 324);
  *((_DWORD *)a2 + 887) = v69;
  *v7 = v70;
  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
  *((_QWORD *)a1 + 324) = *v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[650];
  a2[650] = a1[650];
  *(_DWORD *)(a1 + 650) = *(_DWORD *)(HDEV)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[651];
  a2[651] = a1[651];
  *(_DWORD *)(a1 + 651) = *(_DWORD *)(HDEV)v7;
  v71 = (_DWORD)a2[10] & 0x20000;
  if ( ((_DWORD)a1[10] & 0x20000) != v71 )
  {
    SETFLAG(v71, (volatile unsigned int *)a1 + 10, 0x20000);
    SETFLAG(v104, (volatile unsigned int *)a2 + 10, v103);
  }
  v72 = (_DWORD)a2[10] & 0x1000000;
  if ( ((_DWORD)a1[10] & 0x1000000) != v72 )
  {
    SETFLAG(v72, (volatile unsigned int *)a1 + 10, 0x1000000);
    SETFLAG(v106, (volatile unsigned int *)a2 + 10, v105);
  }
  v73 = (_DWORD)a2[10] & 0x20000000;
  if ( ((_DWORD)a1[10] & 0x20000000) != v73 )
  {
    SETFLAG(v73, (volatile unsigned int *)a1 + 10, 0x20000000);
    SETFLAG(v108, (volatile unsigned int *)a2 + 10, v107);
  }
  v74 = (_DWORD)a2[10] & 0x2000000;
  if ( ((_DWORD)a1[10] & 0x2000000) != v74 )
  {
    SETFLAG(v74, (volatile unsigned int *)a1 + 10, 0x2000000);
    SETFLAG(v110, (volatile unsigned int *)a2 + 10, v109);
  }
  v75 = (_DWORD)a2[10] & 0x8000000;
  if ( ((_DWORD)a1[10] & 0x8000000) != v75 )
  {
    SETFLAG(v75, (volatile unsigned int *)a1 + 10, 0x8000000);
    SETFLAG(v112, (volatile unsigned int *)a2 + 10, v111);
  }
  v76 = (_DWORD)a2[10] & 0x4000000;
  if ( ((_DWORD)a1[10] & 0x4000000) != v76 )
  {
    SETFLAG(v76, (volatile unsigned int *)a1 + 10, 0x4000000);
    SETFLAG(v114, (volatile unsigned int *)a2 + 10, v113);
  }
  v77 = (_DWORD)a2[10] & 0x40000000;
  if ( ((_DWORD)a1[10] & 0x40000000) != v77 )
  {
    SETFLAG(v77, (volatile unsigned int *)a1 + 10, 0x40000000);
    SETFLAG(v116, (volatile unsigned int *)a2 + 10, v115);
  }
  _m_prefetchw(a1 + 10);
  do
    v78 = *((_DWORD *)a1 + 10);
  while ( v78 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v78 & 0xEFFFFFFF, v78) );
  _m_prefetchw(a2 + 10);
  do
    v79 = *((_DWORD *)a2 + 10);
  while ( v79 != _InterlockedCompareExchange((volatile signed __int32 *)a2 + 10, v79 & 0xEFFFFFFF, v79) );
  *((_QWORD *)a1 + 4) = 0LL;
  v80 = 6LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v81 = v7;
  v82 = 6LL;
  *v7 = *(_QWORD *)(a2 + 425);
  *(_QWORD *)(a2 + 425) = *(_QWORD *)(a1 + 425);
  *(_QWORD *)(a1 + 425) = *v7;
  *(_OWORD *)v7 = *((_OWORD *)a2 + 91);
  *((_OWORD *)v7 + 1) = *((_OWORD *)a2 + 92);
  *((_OWORD *)v7 + 2) = *((_OWORD *)a2 + 93);
  *((_OWORD *)a2 + 91) = *((_OWORD *)a1 + 91);
  *((_OWORD *)a2 + 92) = *((_OWORD *)a1 + 92);
  *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
  *((_OWORD *)a1 + 91) = *(_OWORD *)v7;
  *((_OWORD *)a1 + 92) = *((_OWORD *)v7 + 1);
  *((_OWORD *)a1 + 93) = *((_OWORD *)v7 + 2);
  *v7 = *((_QWORD *)a2 + 179);
  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
  *((_QWORD *)a1 + 179) = *v7;
  *v7 = *((_QWORD *)a2 + 180);
  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
  *((_QWORD *)a1 + 180) = *v7;
  *v7 = *((_QWORD *)a2 + 181);
  *((_QWORD *)a2 + 181) = *((_QWORD *)a1 + 181);
  *((_QWORD *)a1 + 181) = *v7;
  v83 = a2 + 670;
  v84 = a2 + 670;
  do
  {
    *v81 = *(_OWORD *)v84;
    v81[1] = *((_OWORD *)v84 + 1);
    v81[2] = *((_OWORD *)v84 + 2);
    v81[3] = *((_OWORD *)v84 + 3);
    v81[4] = *((_OWORD *)v84 + 4);
    v81[5] = *((_OWORD *)v84 + 5);
    v81[6] = *((_OWORD *)v84 + 6);
    v81 = (_OWORD *)((char *)v81 + v47);
    v85 = *((_OWORD *)v84 + 7);
    v84 = (HDEV)((char *)v84 + v47);
    *(v81 - 1) = v85;
    --v82;
  }
  while ( v82 );
  v86 = 6LL;
  *v81 = *(_OWORD *)v84;
  v81[1] = *((_OWORD *)v84 + 1);
  v81[2] = *((_OWORD *)v84 + 2);
  v87 = *((_OWORD *)v84 + 3);
  v88 = a1 + 670;
  v81[3] = v87;
  v89 = a1 + 670;
  do
  {
    *(_OWORD *)v83 = *(_OWORD *)v89;
    *((_OWORD *)v83 + 1) = *((_OWORD *)v89 + 1);
    *((_OWORD *)v83 + 2) = *((_OWORD *)v89 + 2);
    *((_OWORD *)v83 + 3) = *((_OWORD *)v89 + 3);
    *((_OWORD *)v83 + 4) = *((_OWORD *)v89 + 4);
    *((_OWORD *)v83 + 5) = *((_OWORD *)v89 + 5);
    *((_OWORD *)v83 + 6) = *((_OWORD *)v89 + 6);
    v83 = (HDEV)((char *)v83 + v47);
    v90 = *((_OWORD *)v89 + 7);
    v89 = (HDEV)((char *)v89 + v47);
    *((_OWORD *)v83 - 1) = v90;
    --v86;
  }
  while ( v86 );
  *(_OWORD *)v83 = *(_OWORD *)v89;
  *((_OWORD *)v83 + 1) = *((_OWORD *)v89 + 1);
  *((_OWORD *)v83 + 2) = *((_OWORD *)v89 + 2);
  *((_OWORD *)v83 + 3) = *((_OWORD *)v89 + 3);
  v91 = v7;
  do
  {
    *(_OWORD *)v88 = *v91;
    *((_OWORD *)v88 + 1) = v91[1];
    *((_OWORD *)v88 + 2) = v91[2];
    *((_OWORD *)v88 + 3) = v91[3];
    *((_OWORD *)v88 + 4) = v91[4];
    *((_OWORD *)v88 + 5) = v91[5];
    *((_OWORD *)v88 + 6) = v91[6];
    v88 = (HDEV)((char *)v88 + v47);
    v92 = v91[7];
    v91 = (_OWORD *)((char *)v91 + v47);
    *((_OWORD *)v88 - 1) = v92;
    --v80;
  }
  while ( v80 );
  *(_OWORD *)v88 = *v91;
  *((_OWORD *)v88 + 1) = v91[1];
  *((_OWORD *)v88 + 2) = v91[2];
  *((_OWORD *)v88 + 3) = v91[3];
  *v7 = *((_QWORD *)a2 + 214);
  *((_QWORD *)a2 + 214) = *((_QWORD *)a1 + 214);
  *((_QWORD *)a1 + 214) = *v7;
  *v7 = *((_QWORD *)a2 + 215);
  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
  *((_QWORD *)a1 + 215) = *v7;
  *v7 = *((_QWORD *)a2 + 217);
  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
  *((_QWORD *)a1 + 217) = *v7;
  *v7 = *((_QWORD *)a2 + 218);
  *((_QWORD *)a2 + 218) = *((_QWORD *)a1 + 218);
  *((_QWORD *)a1 + 218) = *v7;
  *v7 = *((_QWORD *)a2 + 219);
  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
  *((_QWORD *)a1 + 219) = *v7;
  *v7 = *((_QWORD *)a2 + 220);
  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
  *((_QWORD *)a1 + 220) = *v7;
  *v7 = *((_QWORD *)a2 + 330);
  *((_QWORD *)a2 + 330) = *((_QWORD *)a1 + 330);
  *((_QWORD *)a1 + 330) = *v7;
  *v7 = *((_QWORD *)a2 + 331);
  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
  *((_QWORD *)a1 + 331) = *v7;
  *v7 = *((_QWORD *)a2 + 333);
  *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
  *((_QWORD *)a1 + 333) = *v7;
  *v7 = *((_QWORD *)a2 + 334);
  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
  *((_QWORD *)a1 + 334) = *v7;
  *v7 = *((_QWORD *)a2 + 332);
  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
  *((_QWORD *)a1 + 332) = *v7;
  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 336))(*((_QWORD *)a2 + 223), a2);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 336))(*((_QWORD *)a1 + 223), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v127, v120);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v128, v121);
  vResetSurfacePalette(a1);
  vResetSurfacePalette(a2);
  v94 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v93) + 24) + 1568LL);
  if ( v94 )
  {
    if ( v94() >= 0 )
    {
      v96 = *(void (__fastcall **)(HDEV, HDEV))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v95) + 24) + 1576LL);
      if ( v96 )
        v96(a1, a2);
    }
  }
  ++*((_DWORD *)v35 + 930);
  v6 = 1;
LABEL_107:
  GreDeleteFastMutex(v7);
  vEnableSynchronize(a2);
  vEnableSynchronize(a1);
  return v6;
}
