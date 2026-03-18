/*
 * XREFs of CleanupGDI @ 0x1400805CC
 * Callers:
 *     CleanupResources @ 0x1401DFE50 (CleanupResources.c)
 * Callees:
 *     GreSetBitmapOwner @ 0x140026C00 (GreSetBitmapOwner.c)
 *     DestroyCacheDCEntries @ 0x14003B704 (DestroyCacheDCEntries.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x140080BF8 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x140080C24 (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140080C68 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     GreDeleteObject @ 0x140082330 (GreDeleteObject.c)
 *     GreGetStockObject @ 0x140084170 (GreGetStockObject.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     DestroyMonitor @ 0x1401181C0 (DestroyMonitor.c)
 *     DelayedDestroyCacheDC @ 0x1401867E4 (DelayedDestroyCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1401948E0 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall CleanupGDI(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rbx
  int (*v25)(void); // rax
  __int64 v26; // rcx
  void (*v27)(void); // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rbx
  HDC *v32; // rdi
  __int64 StockObject; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  struct tagTHREADINFO *v36; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rbx
  HSURF v41; // rcx
  int v42; // edx
  __int64 v43; // rcx
  int v44; // r8d
  int (*v45)(void); // rax
  void (*v46)(void); // rax
  __int64 v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  __int64 v51; // rax
  int v52; // edx
  int v53; // ecx
  int v54; // r8d
  __int64 v55; // rax
  int v56; // edx
  int v57; // ecx
  int v58; // r8d
  __int64 v59; // rax
  int v60; // edx
  int v61; // ecx
  int v62; // r8d
  __int64 v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  __int64 v70; // rax
  int v71; // edx
  int v72; // ecx
  int v73; // r8d
  __int64 v74; // rax
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  __int64 v78; // rax
  int v79; // edx
  int v80; // ecx
  int v81; // r8d
  __int64 v82; // rax
  int v83; // edx
  int v84; // ecx
  int v85; // r8d
  __int64 v86; // rax
  int v87; // edx
  int v88; // ecx
  int v89; // r8d
  __int64 v90; // rax
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  __int64 v94; // rax
  int v95; // edx
  int v96; // ecx
  int v97; // r8d
  __int64 v98; // rax
  int v99; // edx
  int v100; // ecx
  int v101; // r8d
  __int64 v102; // rax
  int v103; // edx
  int v104; // ecx
  int v105; // r8d
  __int64 v106; // rax
  int v107; // edx
  int v108; // ecx
  int v109; // r8d
  __int64 v110; // rax
  int v111; // edx
  int v112; // ecx
  int v113; // r8d
  __int64 v114; // rax
  int v115; // edx
  int v116; // ecx
  int v117; // r8d
  __int64 v118; // rax
  int v119; // edx
  int v120; // ecx
  int v121; // r8d
  __int64 v122; // rax
  int v123; // edx
  int v124; // ecx
  int v125; // r8d
  __int64 v126; // rax
  int v127; // edx
  int v128; // ecx
  int v129; // r8d
  __int64 v130; // rax
  int v131; // edx
  int v132; // ecx
  int v133; // r8d
  __int64 v134; // rax
  int v135; // edx
  int v136; // ecx
  int v137; // r8d
  __int64 v138; // rax
  int v139; // edx
  int v140; // ecx
  int v141; // r8d
  __int64 v142; // rax
  int v143; // edx
  int v144; // ecx
  int v145; // r8d
  int v146; // edx
  __int64 v147; // rcx
  int v148; // r8d
  __int64 v149; // rdx
  __int64 v150; // rcx
  int v151; // r8d
  int (*v152)(void); // rax
  __int64 v153; // rbx
  __int64 v154; // rcx
  void (__fastcall *v155)(__int64); // rax
  int v156; // edx
  int v157; // ecx
  int v158; // r8d
  __int64 v159; // rax
  int v160; // edx
  int v161; // ecx
  int v162; // r8d
  int v163; // edx
  __int64 v164; // rcx
  int v165; // r8d
  __int64 v166; // rax
  int v167; // edx
  int v168; // ecx
  int v169; // r8d
  __int64 v170; // rax
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  int v174; // edx
  int v175; // ecx
  int v176; // r8d
  __int64 v177; // rcx
  int v178; // edx
  int v179; // r8d
  int v180; // edx
  __int64 v181; // rcx
  int v182; // r8d
  __int64 v183; // rbx
  __int64 v184; // rdx
  __int64 v185; // rbx
  __int64 v186; // r8
  __int64 v187; // r9
  struct _HEAD *v188; // rcx
  char *v189; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  DestroyDC((HDC *)(*(_QWORD *)(UserSessionState + 56968) + 56LL));
  v7 = W32GetUserSessionState(v5, v4, v6);
  DestroyDC((HDC *)(*(_QWORD *)(v7 + 56968) + 64LL));
  v11 = W32GetUserSessionState(v9, v8, v10);
  DestroyDC((HDC *)(*(_QWORD *)(v11 + 56968) + 72LL));
  v15 = W32GetUserSessionState(v13, v12, v14);
  DestroyDC((HDC *)(v15 + 43248));
  v19 = W32GetUserSessionState(v17, v16, v18);
  DestroyDC((HDC *)(v19 + 43256));
  v24 = W32GetUserSessionState(v21, v20, v22);
  if ( *(_QWORD *)(v24 + 43008) )
  {
    v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23) + 48) + 216LL);
    if ( v25 )
    {
      if ( v25() >= 0 )
      {
        v27 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26) + 48) + 224LL);
        if ( v27 )
          v27();
      }
    }
  }
  DestroyDC((HDC *)(v24 + 43016));
  v31 = W32GetUserSessionState(v29, v28, v30);
  v32 = (HDC *)(v31 + 66016);
  if ( *(_QWORD *)(v31 + 66008) )
  {
    StockObject = GreGetStockObject(21LL);
    GreSelectBitmap(*v32, StockObject);
    GreDeleteObject(*(HRGN *)(v31 + 66008));
    *(_QWORD *)(v31 + 66008) = 0LL;
  }
  DestroyDC(v32);
  v36 = PtiCurrent(v35, v34);
  DestroyCacheDCEntries((__int64)v36);
  DestroyCacheDCEntries(0LL);
  DelayedDestroyCacheDC(1LL);
  v40 = *(_QWORD *)(W32GetUserSessionState(v38, v37, v39) + 56968);
  v41 = *(HSURF *)(v40 + 80);
  if ( v41 )
  {
    GreSetBitmapOwner(v41, 2147483650LL);
    GreDeleteObject(*(HRGN *)(v40 + 80));
    *(_QWORD *)(v40 + 80) = 0LL;
  }
  v43 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v41) + 48);
  v45 = *(int (**)(void))(v43 + 264);
  if ( v45 )
  {
    if ( v45() >= 0 )
    {
      v43 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v43) + 48);
      v46 = *(void (**)(void))(v43 + 272);
      if ( v46 )
        v46();
    }
  }
  v47 = W32GetUserSessionState(v43, v42, v44);
  DestroyFont((HFONT *)(v47 + 43064));
  v51 = W32GetUserSessionState(v49, v48, v50);
  DestroyFont((HFONT *)(*(_QWORD *)(v51 + 19904) + 4944LL));
  v55 = W32GetUserSessionState(v53, v52, v54);
  DestroyFont((HFONT *)(v55 + 43072));
  v59 = W32GetUserSessionState(v57, v56, v58);
  DestroyFont((HFONT *)(v59 + 43080));
  v63 = 0LL;
  v64 = 31LL;
  do
  {
    v65 = W32GetUserSessionState(v61, v60, v62);
    DestroyFont((HFONT *)(v63 + *(_QWORD *)(v65 + 19904) + 4696LL));
    v63 += 8LL;
    --v64;
  }
  while ( v64 );
  v66 = W32GetUserSessionState(v61, v60, v62);
  DestroyRegion((HRGN *)(*(_QWORD *)(v66 + 56968) + 120LL));
  v70 = W32GetUserSessionState(v68, v67, v69);
  DestroyRegion((HRGN *)(v70 + 63296));
  v74 = W32GetUserSessionState(v72, v71, v73);
  DestroyRegion((HRGN *)(v74 + 63304));
  v78 = W32GetUserSessionState(v76, v75, v77);
  DestroyRegion((HRGN *)(v78 + 63312));
  v82 = W32GetUserSessionState(v80, v79, v81);
  DestroyRegion((HRGN *)(v82 + 63320));
  v86 = W32GetUserSessionState(v84, v83, v85);
  DestroyRegion((HRGN *)(v86 + 63328));
  v90 = W32GetUserSessionState(v88, v87, v89);
  DestroyRegion((HRGN *)(v90 + 63336));
  v94 = W32GetUserSessionState(v92, v91, v93);
  DestroyRegion((HRGN *)(v94 + 63344));
  v98 = W32GetUserSessionState(v96, v95, v97);
  DestroyRegion((HRGN *)(v98 + 63352));
  v102 = W32GetUserSessionState(v100, v99, v101);
  DestroyRegion((HRGN *)(v102 + 63360));
  v106 = W32GetUserSessionState(v104, v103, v105);
  DestroyRegion((HRGN *)(v106 + 43088));
  v110 = W32GetUserSessionState(v108, v107, v109);
  DestroyRegion((HRGN *)(v110 + 43104));
  v114 = W32GetUserSessionState(v112, v111, v113);
  DestroyRegion((HRGN *)(v114 + 43112));
  v118 = W32GetUserSessionState(v116, v115, v117);
  DestroyRegion((HRGN *)(v118 + 43120));
  v122 = W32GetUserSessionState(v120, v119, v121);
  DestroyRegion((HRGN *)(v122 + 43128));
  v126 = W32GetUserSessionState(v124, v123, v125);
  DestroyRegion((HRGN *)(v126 + 43136));
  v130 = W32GetUserSessionState(v128, v127, v129);
  DestroyRegion((HRGN *)(v130 + 43144));
  v134 = W32GetUserSessionState(v132, v131, v133);
  DestroyRegion((HRGN *)(v134 + 43152));
  v138 = W32GetUserSessionState(v136, v135, v137);
  DestroyAllDPIMETRICSFonts((HFONT *)(v138 + 66168));
  v142 = W32GetUserSessionState(v140, v139, v141);
  DestroyAllDPIMETRICSFonts((HFONT *)(v142 + 66096));
  if ( *(_QWORD *)(W32GetUserSessionState(v144, v143, v145) + 62784) )
  {
    v150 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v147) + 48);
    v152 = *(int (**)(void))(v150 + 232);
    if ( v152 )
    {
      if ( v152() >= 0 )
      {
        v153 = *(_QWORD *)(W32GetUserSessionState(v150, v149, v151) + 62784);
        v149 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v154) + 48);
        v155 = *(void (__fastcall **)(__int64))(v149 + 240);
        if ( v155 )
          v155(v153);
      }
    }
    *(_QWORD *)(W32GetUserSessionState(v150, v149, v151) + 62784) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v147, v146, v148) + 62792) )
  {
    v159 = W32GetUserSessionState(v157, v156, v158);
    GreDeleteObject(*(HRGN *)(v159 + 62792));
    *(_QWORD *)(W32GetUserSessionState(v161, v160, v162) + 62792) = 0LL;
  }
  v164 = *(_QWORD *)(W32GetUserSessionState(v157, v156, v158) + 56968);
  if ( *(_QWORD *)(v164 + 16) )
  {
    v166 = W32GetUserSessionState(v164, v163, v165);
    DrvCleanupAndDestroyMDEV(*(_QWORD *)(*(_QWORD *)(v166 + 56968) + 16LL));
    v170 = W32GetUserSessionState(v168, v167, v169);
    GreDeleteFastMutex(*(char **)(*(_QWORD *)(v170 + 56968) + 16LL), v171, v172, v173);
    v177 = *(_QWORD *)(W32GetUserSessionState(v175, v174, v176) + 56968);
    *(_QWORD *)(v177 + 16) = 0LL;
    v164 = *(_QWORD *)(W32GetUserSessionState(v177, v178, v179) + 56968);
    *(_QWORD *)(v164 + 40) = 0LL;
  }
  v181 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v164, v163, v165) + 56968) + 104LL);
  if ( v181 )
  {
    do
    {
      v183 = *(_QWORD *)(v181 + 56);
      DestroyMonitor((struct _HEAD *)v181);
      v181 = v183;
    }
    while ( v183 );
  }
  v185 = W32GetUserSessionState(v181, v180, v182);
  v188 = *(struct _HEAD **)(v185 + 71192);
  if ( v188 )
    DestroyMonitor(v188);
  v189 = *(char **)(v185 + 71200);
  if ( v189 )
    GreDeleteFastMutex(v189, v184, v186, v187);
}
