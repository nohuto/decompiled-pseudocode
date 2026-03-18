/*
 * XREFs of CleanupGDI @ 0x140136A50
 * Callers:
 *     CleanupResources @ 0x1401B9768 (CleanupResources.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     GreGetStockObject @ 0x140041950 (GreGetStockObject.c)
 *     GreSelectBitmap @ 0x140042CE0 (GreSelectBitmap.c)
 *     DestroyCacheDCEntries @ 0x140046CF0 (DestroyCacheDCEntries.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14006E3D0 (DrvCleanupAndDestroyMDEV.c)
 *     GreDeleteObject @ 0x14008B860 (GreDeleteObject.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyMonitor @ 0x1400F63A0 (DestroyMonitor.c)
 *     ?DestroyFont@@YAXPEAPEAUHFONT__@@@Z @ 0x1401370F4 (-DestroyFont@@YAXPEAPEAUHFONT__@@@Z.c)
 *     ?DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z @ 0x14013711C (-DestroyAllDPIMETRICSFonts@@YAXPEAUtagDPIMETRICS@@@Z.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x140137160 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     DelayedDestroyCacheDC @ 0x1401371E0 (DelayedDestroyCacheDC.c)
 *     ?DestroyRegion@@YAXPEAPEAUHRGN__@@@Z @ 0x140137318 (-DestroyRegion@@YAXPEAPEAUHRGN__@@@Z.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x14013734C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall CleanupGDI(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  HDC *v23; // rdi
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int (*v34)(void); // rax
  void (*v35)(void); // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rbx
  struct tagMONITOR *v130; // rcx
  char *v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  int (*v134)(void); // rax
  __int64 v135; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  void (__fastcall *v138)(__int64); // rax
  __int64 v139; // rax
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rdx
  int (*v147)(void); // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  void (*v150)(void); // rax
  __int64 StockObject; // rax
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rbx

  UserSessionState = W32GetUserSessionState(a1, a2);
  DestroyDC((HDC *)(*(_QWORD *)(UserSessionState + 56968) + 64LL));
  v5 = W32GetUserSessionState(v4, v3);
  DestroyDC((HDC *)(*(_QWORD *)(v5 + 56968) + 72LL));
  v8 = W32GetUserSessionState(v7, v6);
  DestroyDC((HDC *)(*(_QWORD *)(v8 + 56968) + 80LL));
  v11 = W32GetUserSessionState(v10, v9);
  DestroyDC((HDC *)(v11 + 43248));
  v14 = W32GetUserSessionState(v13, v12);
  DestroyDC((HDC *)(v14 + 43256));
  v19 = W32GetUserSessionState(v16, v15);
  if ( *(_QWORD *)(v19 + 42984) )
  {
    v147 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 216LL);
    if ( v147 )
    {
      if ( v147() >= 0 )
      {
        v150 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v149, v148) + 48) + 224LL);
        if ( v150 )
          v150();
      }
    }
  }
  DestroyDC((HDC *)(v19 + 42992));
  v22 = W32GetUserSessionState(v21, v20);
  v23 = (HDC *)(v22 + 66024);
  if ( *(_QWORD *)(v22 + 66016) )
  {
    StockObject = GreGetStockObject(21);
    GreSelectBitmap(*v23, StockObject);
    GreDeleteObject(*(struct HOBJ__ **)(v22 + 66016));
    *(_QWORD *)(v22 + 66016) = 0LL;
  }
  DestroyDC(v23);
  v24 = PtiCurrent();
  DestroyCacheDCEntries((__int64)v24, v25);
  DestroyCacheDCEntries(0LL, v26);
  DelayedDestroyCacheDC(1LL);
  v29 = W32GetUserSessionState(v28, v27);
  DestroyBitmap((HBITMAP *)(*(_QWORD *)(v29 + 56968) + 88LL));
  v33 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v31, v30) + 48);
  v34 = *(int (**)(void))(v33 + 264);
  if ( v34 )
  {
    if ( v34() >= 0 )
    {
      v33 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v33, v32) + 48);
      v35 = *(void (**)(void))(v33 + 272);
      if ( v35 )
        v35();
    }
  }
  v36 = W32GetUserSessionState(v33, v32);
  DestroyFont((HFONT *)(v36 + 43040));
  v39 = W32GetUserSessionState(v38, v37);
  DestroyFont((HFONT *)(*(_QWORD *)(v39 + 19872) + 4944LL));
  v42 = W32GetUserSessionState(v41, v40);
  DestroyFont((HFONT *)(v42 + 43048));
  v45 = W32GetUserSessionState(v44, v43);
  DestroyFont((HFONT *)(v45 + 43056));
  v48 = 0LL;
  v49 = 31LL;
  do
  {
    v50 = W32GetUserSessionState(v47, v46);
    DestroyFont((HFONT *)(v48 + *(_QWORD *)(v50 + 19872) + 4696LL));
    v48 += 8LL;
    --v49;
  }
  while ( v49 );
  v51 = W32GetUserSessionState(v47, v46);
  DestroyRegion((HRGN *)(*(_QWORD *)(v51 + 56968) + 128LL));
  v54 = W32GetUserSessionState(v53, v52);
  DestroyRegion((HRGN *)(v54 + 63312));
  v57 = W32GetUserSessionState(v56, v55);
  DestroyRegion((HRGN *)(v57 + 63320));
  v60 = W32GetUserSessionState(v59, v58);
  DestroyRegion((HRGN *)(v60 + 63328));
  v63 = W32GetUserSessionState(v62, v61);
  DestroyRegion((HRGN *)(v63 + 63336));
  v66 = W32GetUserSessionState(v65, v64);
  DestroyRegion((HRGN *)(v66 + 63344));
  v69 = W32GetUserSessionState(v68, v67);
  DestroyRegion((HRGN *)(v69 + 63352));
  v72 = W32GetUserSessionState(v71, v70);
  DestroyRegion((HRGN *)(v72 + 63360));
  v75 = W32GetUserSessionState(v74, v73);
  DestroyRegion((HRGN *)(v75 + 63368));
  v78 = W32GetUserSessionState(v77, v76);
  DestroyRegion((HRGN *)(v78 + 63376));
  v81 = W32GetUserSessionState(v80, v79);
  DestroyRegion((HRGN *)(v81 + 43064));
  v84 = W32GetUserSessionState(v83, v82);
  DestroyRegion((HRGN *)(v84 + 43080));
  v87 = W32GetUserSessionState(v86, v85);
  DestroyRegion((HRGN *)(v87 + 43088));
  v90 = W32GetUserSessionState(v89, v88);
  DestroyRegion((HRGN *)(v90 + 43096));
  v93 = W32GetUserSessionState(v92, v91);
  DestroyRegion((HRGN *)(v93 + 43104));
  v96 = W32GetUserSessionState(v95, v94);
  DestroyRegion((HRGN *)(v96 + 43112));
  v99 = W32GetUserSessionState(v98, v97);
  DestroyRegion((HRGN *)(v99 + 43120));
  v102 = W32GetUserSessionState(v101, v100);
  DestroyRegion((HRGN *)(v102 + 43128));
  v105 = W32GetUserSessionState(v104, v103);
  DestroyRegion((HRGN *)(v105 + 43136));
  v108 = W32GetUserSessionState(v107, v106);
  DestroyRegion((HRGN *)(v108 + 43144));
  v111 = W32GetUserSessionState(v110, v109);
  DestroyRegion((HRGN *)(v111 + 43152));
  v114 = W32GetUserSessionState(v113, v112);
  DestroyAllDPIMETRICSFonts((HFONT *)(v114 + 66176));
  v117 = W32GetUserSessionState(v116, v115);
  DestroyAllDPIMETRICSFonts((HFONT *)(v117 + 66104));
  if ( *(_QWORD *)(W32GetUserSessionState(v119, v118) + 62792) )
  {
    v133 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v121, v120) + 48);
    v134 = *(int (**)(void))(v133 + 232);
    if ( v134 )
    {
      if ( v134() >= 0 )
      {
        v135 = *(_QWORD *)(W32GetUserSessionState(v133, v132) + 62792);
        v132 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v137, v136) + 48);
        v138 = *(void (__fastcall **)(__int64))(v132 + 240);
        if ( v138 )
          v138(v135);
      }
    }
    *(_QWORD *)(W32GetUserSessionState(v133, v132) + 62792) = 0LL;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v121, v120) + 62800) )
  {
    v152 = W32GetUserSessionState(v123, v122);
    GreDeleteObject(*(struct HOBJ__ **)(v152 + 62800));
    *(_QWORD *)(W32GetUserSessionState(v154, v153) + 62800) = 0LL;
  }
  v125 = *(_QWORD *)(W32GetUserSessionState(v123, v122) + 56968);
  if ( *(_QWORD *)(v125 + 16) )
  {
    v139 = W32GetUserSessionState(v125, v124);
    DrvCleanupAndDestroyMDEV(*(__int64 **)(*(_QWORD *)(v139 + 56968) + 16LL));
    v142 = W32GetUserSessionState(v141, v140);
    GreDeleteFastMutex(*(char **)(*(_QWORD *)(v142 + 56968) + 16LL));
    v145 = *(_QWORD *)(W32GetUserSessionState(v144, v143) + 56968);
    *(_QWORD *)(v145 + 16) = 0LL;
    v125 = *(_QWORD *)(W32GetUserSessionState(v145, v146) + 56968);
    *(_QWORD *)(v125 + 48) = 0LL;
  }
  v127 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v125, v124) + 56968) + 112LL);
  if ( v127 )
  {
    do
    {
      v155 = *(_QWORD *)(v127 + 56);
      DestroyMonitor((struct tagMONITOR *)v127, v126);
      v127 = v155;
    }
    while ( v155 );
  }
  v129 = W32GetUserSessionState(v127, v126);
  v130 = *(struct tagMONITOR **)(v129 + 71208);
  if ( v130 )
    DestroyMonitor(v130, v128);
  v131 = *(char **)(v129 + 71216);
  if ( v131 )
    GreDeleteFastMutex(v131);
}
