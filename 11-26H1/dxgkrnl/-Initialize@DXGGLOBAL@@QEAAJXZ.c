/*
 * XREFs of ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1401DD97C
 * Callers:
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1401DC798 (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x140077CC0 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z @ 0x14007B964 (--0DXGDIAGNOSTICS@@QEAA@IIW4DXGK_POOL_FLAGS@@I@Z.c)
 *     ?InitializeBootSettings@DXGVALIDATION@@QEAAXXZ @ 0x14008352C (-InitializeBootSettings@DXGVALIDATION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ @ 0x1401C18A4 (-SubscribeWNFForCSAccounting@DXGGLOBAL@@QEAAXXZ.c)
 *     ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1401DC894 (-CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ.c)
 *     ?InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ @ 0x1401DEE5C (-InitializeResourceManagerSid@DXGGLOBAL@@AEAAXXZ.c)
 *     ?SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ @ 0x1401DFD08 (-SetNodeUsageTelemetryTimer@DXGGLOBAL@@AEAAXXZ.c)
 *     ?ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z @ 0x1401E5F30 (-ReadRegistryDwordKeyValue@@YAJQEAU_UNICODE_STRING@@0PEAK@Z.c)
 *     CreateDxgkSharedObjectTypes @ 0x1401EA928 (CreateDxgkSharedObjectTypes.c)
 *     ?RegisterDxgKernelProcessExtensions@@YAJXZ @ 0x1401F6E30 (-RegisterDxgKernelProcessExtensions@@YAJXZ.c)
 *     ??0DXGSESSIONMGR@@QEAA@XZ @ 0x140201AE8 (--0DXGSESSIONMGR@@QEAA@XZ.c)
 *     ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x140395968 (-ExpandTable@HMGRTABLE@@QEAAEXZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::Initialize(DXGGLOBAL *this)
{
  __int64 v1; // rdi
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  NTSTATUS v6; // eax
  __int64 v7; // r14
  const wchar_t *v8; // r9
  NTSTATUS v10; // eax
  struct _ERESOURCE *v11; // rax
  NTSTATUS v12; // eax
  unsigned int DxgkSharedObjectTypes; // ebx
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  unsigned __int8 v16; // r9
  int v17; // ecx
  int v18; // r8d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  DXGSESSIONMGR *v36; // rax
  DXGSESSIONMGR *v37; // rax
  int v38; // ecx
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  ULONG *v41; // rax
  __int64 v42; // rax
  _BYTE *v43; // rbx
  NTSTATUS v44; // eax
  __int64 v45; // rbx
  NTSTATUS v46; // eax
  NTSTATUS v47; // eax
  __int64 v48; // rdi
  int OutputBuffer; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v51; // [rsp+60h] [rbp-A8h] BYREF
  int v52; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v53; // [rsp+68h] [rbp-A0h] BYREF
  int v54; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v55; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v56; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v57; // [rsp+78h] [rbp-90h] BYREF
  int v58; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v59; // [rsp+80h] [rbp-88h] BYREF
  int v60; // [rsp+84h] [rbp-84h] BYREF
  int v61; // [rsp+88h] [rbp-80h] BYREF
  int v62; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v63; // [rsp+90h] [rbp-78h] BYREF
  int v64; // [rsp+94h] [rbp-74h] BYREF
  int v65; // [rsp+98h] [rbp-70h] BYREF
  int v66; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v67; // [rsp+A0h] [rbp-68h] BYREF
  int v68; // [rsp+A4h] [rbp-64h] BYREF
  int v69; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v70; // [rsp+ACh] [rbp-5Ch] BYREF
  int v71; // [rsp+B0h] [rbp-58h] BYREF
  int v72; // [rsp+B4h] [rbp-54h] BYREF
  int v73; // [rsp+B8h] [rbp-50h] BYREF
  int v74; // [rsp+BCh] [rbp-4Ch] BYREF
  int v75; // [rsp+C0h] [rbp-48h] BYREF
  int v76; // [rsp+C4h] [rbp-44h] BYREF
  int v77; // [rsp+C8h] [rbp-40h] BYREF
  int v78; // [rsp+CCh] [rbp-3Ch] BYREF
  int v79; // [rsp+D0h] [rbp-38h] BYREF
  int v80; // [rsp+D4h] [rbp-34h] BYREF
  int v81; // [rsp+D8h] [rbp-30h] BYREF
  int v82; // [rsp+DCh] [rbp-2Ch] BYREF
  int v83; // [rsp+E0h] [rbp-28h] BYREF
  int v84; // [rsp+E4h] [rbp-24h] BYREF
  int v85; // [rsp+E8h] [rbp-20h] BYREF
  int v86; // [rsp+ECh] [rbp-1Ch] BYREF
  struct _UNICODE_STRING v87; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v88; // [rsp+100h] [rbp-8h] BYREF
  __int64 v89; // [rsp+110h] [rbp+8h] BYREF
  __int64 v90; // [rsp+118h] [rbp+10h] BYREF
  int v91; // [rsp+120h] [rbp+18h]
  const wchar_t *v92; // [rsp+128h] [rbp+20h]
  unsigned int *v93; // [rsp+130h] [rbp+28h]
  int v94; // [rsp+138h] [rbp+30h]
  __int64 *v95; // [rsp+140h] [rbp+38h]
  int v96; // [rsp+148h] [rbp+40h]
  __int64 v97; // [rsp+150h] [rbp+48h]
  int v98; // [rsp+158h] [rbp+50h]
  const wchar_t *v99; // [rsp+160h] [rbp+58h]
  int *v100; // [rsp+168h] [rbp+60h]
  int v101; // [rsp+170h] [rbp+68h]
  int *v102; // [rsp+178h] [rbp+70h]
  int v103; // [rsp+180h] [rbp+78h]
  __int64 v104; // [rsp+188h] [rbp+80h]
  int v105; // [rsp+190h] [rbp+88h]
  const wchar_t *v106; // [rsp+198h] [rbp+90h]
  unsigned int *v107; // [rsp+1A0h] [rbp+98h]
  int v108; // [rsp+1A8h] [rbp+A0h]
  int *v109; // [rsp+1B0h] [rbp+A8h]
  int v110; // [rsp+1B8h] [rbp+B0h]
  __int64 v111; // [rsp+1C0h] [rbp+B8h]
  int v112; // [rsp+1C8h] [rbp+C0h]
  const wchar_t *v113; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v114; // [rsp+1D8h] [rbp+D0h]
  int v115; // [rsp+1E0h] [rbp+D8h]
  int *v116; // [rsp+1E8h] [rbp+E0h]
  int v117; // [rsp+1F0h] [rbp+E8h]
  __int64 v118; // [rsp+1F8h] [rbp+F0h]
  int v119; // [rsp+200h] [rbp+F8h]
  const wchar_t *v120; // [rsp+208h] [rbp+100h]
  int *v121; // [rsp+210h] [rbp+108h]
  int v122; // [rsp+218h] [rbp+110h]
  int *v123; // [rsp+220h] [rbp+118h]
  int v124; // [rsp+228h] [rbp+120h]
  __int64 v125; // [rsp+230h] [rbp+128h]
  int v126; // [rsp+238h] [rbp+130h]
  const wchar_t *v127; // [rsp+240h] [rbp+138h]
  int *v128; // [rsp+248h] [rbp+140h]
  int v129; // [rsp+250h] [rbp+148h]
  int *v130; // [rsp+258h] [rbp+150h]
  int v131; // [rsp+260h] [rbp+158h]
  __int64 v132; // [rsp+268h] [rbp+160h]
  int v133; // [rsp+270h] [rbp+168h]
  const wchar_t *v134; // [rsp+278h] [rbp+170h]
  int *v135; // [rsp+280h] [rbp+178h]
  int v136; // [rsp+288h] [rbp+180h]
  int *v137; // [rsp+290h] [rbp+188h]
  int v138; // [rsp+298h] [rbp+190h]
  __int64 v139; // [rsp+2A0h] [rbp+198h]
  int v140; // [rsp+2A8h] [rbp+1A0h]
  const wchar_t *v141; // [rsp+2B0h] [rbp+1A8h]
  int *v142; // [rsp+2B8h] [rbp+1B0h]
  int v143; // [rsp+2C0h] [rbp+1B8h]
  int *v144; // [rsp+2C8h] [rbp+1C0h]
  int v145; // [rsp+2D0h] [rbp+1C8h]
  __int64 v146; // [rsp+2D8h] [rbp+1D0h]
  int v147; // [rsp+2E0h] [rbp+1D8h]
  const wchar_t *v148; // [rsp+2E8h] [rbp+1E0h]
  int *v149; // [rsp+2F0h] [rbp+1E8h]
  int v150; // [rsp+2F8h] [rbp+1F0h]
  int *v151; // [rsp+300h] [rbp+1F8h]
  int v152; // [rsp+308h] [rbp+200h]
  __int64 v153; // [rsp+310h] [rbp+208h]
  int v154; // [rsp+318h] [rbp+210h]
  const wchar_t *v155; // [rsp+320h] [rbp+218h]
  int *v156; // [rsp+328h] [rbp+220h]
  int v157; // [rsp+330h] [rbp+228h]
  int *v158; // [rsp+338h] [rbp+230h]
  int v159; // [rsp+340h] [rbp+238h]
  __int64 v160; // [rsp+348h] [rbp+240h]
  int v161; // [rsp+350h] [rbp+248h]
  const wchar_t *v162; // [rsp+358h] [rbp+250h]
  unsigned int *v163; // [rsp+360h] [rbp+258h]
  int v164; // [rsp+368h] [rbp+260h]
  int *v165; // [rsp+370h] [rbp+268h]
  int v166; // [rsp+378h] [rbp+270h]
  __int64 v167; // [rsp+380h] [rbp+278h]
  int v168; // [rsp+388h] [rbp+280h]
  const wchar_t *v169; // [rsp+390h] [rbp+288h]
  int *v170; // [rsp+398h] [rbp+290h]
  int v171; // [rsp+3A0h] [rbp+298h]
  int *v172; // [rsp+3A8h] [rbp+2A0h]
  int v173; // [rsp+3B0h] [rbp+2A8h]
  __int64 v174; // [rsp+3B8h] [rbp+2B0h]
  int v175; // [rsp+3C0h] [rbp+2B8h]
  const wchar_t *v176; // [rsp+3C8h] [rbp+2C0h]
  unsigned int *v177; // [rsp+3D0h] [rbp+2C8h]
  int v178; // [rsp+3D8h] [rbp+2D0h]
  int *v179; // [rsp+3E0h] [rbp+2D8h]
  int v180; // [rsp+3E8h] [rbp+2E0h]
  __int64 v181; // [rsp+3F0h] [rbp+2E8h]
  int v182; // [rsp+3F8h] [rbp+2F0h]
  const wchar_t *v183; // [rsp+400h] [rbp+2F8h]
  int *v184; // [rsp+408h] [rbp+300h]
  int v185; // [rsp+410h] [rbp+308h]
  int *v186; // [rsp+418h] [rbp+310h]
  int v187; // [rsp+420h] [rbp+318h]
  __int64 v188; // [rsp+428h] [rbp+320h]
  int v189; // [rsp+430h] [rbp+328h]
  const wchar_t *v190; // [rsp+438h] [rbp+330h]
  unsigned int *v191; // [rsp+440h] [rbp+338h]
  int v192; // [rsp+448h] [rbp+340h]
  int *v193; // [rsp+450h] [rbp+348h]
  int v194; // [rsp+458h] [rbp+350h]
  __int64 v195; // [rsp+460h] [rbp+358h]
  int v196; // [rsp+468h] [rbp+360h]
  const wchar_t *v197; // [rsp+470h] [rbp+368h]
  int *v198; // [rsp+478h] [rbp+370h]
  int v199; // [rsp+480h] [rbp+378h]
  int *v200; // [rsp+488h] [rbp+380h]
  int v201; // [rsp+490h] [rbp+388h]
  __int64 v202; // [rsp+498h] [rbp+390h]
  int v203; // [rsp+4A0h] [rbp+398h]
  const wchar_t *v204; // [rsp+4A8h] [rbp+3A0h]
  int *v205; // [rsp+4B0h] [rbp+3A8h]
  int v206; // [rsp+4B8h] [rbp+3B0h]
  int *v207; // [rsp+4C0h] [rbp+3B8h]
  int v208; // [rsp+4C8h] [rbp+3C0h]
  __int64 v209; // [rsp+4D0h] [rbp+3C8h]
  int v210; // [rsp+4D8h] [rbp+3D0h]
  const wchar_t *v211; // [rsp+4E0h] [rbp+3D8h]
  unsigned int *v212; // [rsp+4E8h] [rbp+3E0h]
  int v213; // [rsp+4F0h] [rbp+3E8h]
  __int64 v214; // [rsp+4F8h] [rbp+3F0h]
  int v215; // [rsp+500h] [rbp+3F8h]
  __int64 v216; // [rsp+508h] [rbp+400h]
  int v217; // [rsp+510h] [rbp+408h]
  const wchar_t *v218; // [rsp+518h] [rbp+410h]
  unsigned int *v219; // [rsp+520h] [rbp+418h]
  int v220; // [rsp+528h] [rbp+420h]
  __int64 v221; // [rsp+530h] [rbp+428h]
  int v222; // [rsp+538h] [rbp+430h]
  __int64 v223; // [rsp+540h] [rbp+438h]
  int v224; // [rsp+548h] [rbp+440h]
  const wchar_t *v225; // [rsp+550h] [rbp+448h]
  unsigned int *v226; // [rsp+558h] [rbp+450h]
  int v227; // [rsp+560h] [rbp+458h]
  __int64 v228; // [rsp+568h] [rbp+460h]
  int v229; // [rsp+570h] [rbp+468h]
  __int64 v230; // [rsp+578h] [rbp+470h]
  int v231; // [rsp+580h] [rbp+478h]
  const wchar_t *v232; // [rsp+588h] [rbp+480h]
  unsigned int *v233; // [rsp+590h] [rbp+488h]
  int v234; // [rsp+598h] [rbp+490h]
  __int64 v235; // [rsp+5A0h] [rbp+498h]
  int v236; // [rsp+5A8h] [rbp+4A0h]
  __int64 v237; // [rsp+5B0h] [rbp+4A8h]
  int v238; // [rsp+5B8h] [rbp+4B0h]
  const wchar_t *v239; // [rsp+5C0h] [rbp+4B8h]
  unsigned int *v240; // [rsp+5C8h] [rbp+4C0h]
  int v241; // [rsp+5D0h] [rbp+4C8h]
  __int64 v242; // [rsp+5D8h] [rbp+4D0h]
  int v243; // [rsp+5E0h] [rbp+4D8h]
  __int64 v244; // [rsp+5E8h] [rbp+4E0h]
  int v245; // [rsp+5F0h] [rbp+4E8h]
  const wchar_t *v246; // [rsp+5F8h] [rbp+4F0h]
  unsigned int *v247; // [rsp+600h] [rbp+4F8h]
  int v248; // [rsp+608h] [rbp+500h]
  __int64 v249; // [rsp+610h] [rbp+508h]
  int v250; // [rsp+618h] [rbp+510h]
  __int64 v251; // [rsp+620h] [rbp+518h]
  int v252; // [rsp+628h] [rbp+520h]
  const wchar_t *v253; // [rsp+630h] [rbp+528h]
  int *v254; // [rsp+638h] [rbp+530h]
  int v255; // [rsp+640h] [rbp+538h]
  __int64 v256; // [rsp+648h] [rbp+540h]
  int v257; // [rsp+650h] [rbp+548h]
  __int64 v258; // [rsp+658h] [rbp+550h]
  int v259; // [rsp+660h] [rbp+558h]
  const wchar_t *v260; // [rsp+668h] [rbp+560h]
  int *v261; // [rsp+670h] [rbp+568h]
  int v262; // [rsp+678h] [rbp+570h]
  __int64 v263; // [rsp+680h] [rbp+578h]
  int v264; // [rsp+688h] [rbp+580h]
  __int64 v265; // [rsp+690h] [rbp+588h]
  int v266; // [rsp+698h] [rbp+590h]
  const wchar_t *v267; // [rsp+6A0h] [rbp+598h]
  int *v268; // [rsp+6A8h] [rbp+5A0h]
  int v269; // [rsp+6B0h] [rbp+5A8h]
  __int64 v270; // [rsp+6B8h] [rbp+5B0h]
  int v271; // [rsp+6C0h] [rbp+5B8h]
  __int64 v272; // [rsp+6C8h] [rbp+5C0h]
  int v273; // [rsp+6D0h] [rbp+5C8h]
  __int64 v274; // [rsp+6D8h] [rbp+5D0h]
  __int128 v275; // [rsp+6E0h] [rbp+5D8h]
  __int128 v276; // [rsp+6F0h] [rbp+5E8h]
  _OWORD v277[2]; // [rsp+708h] [rbp+600h] BYREF
  wchar_t v278; // [rsp+728h] [rbp+620h]
  _BYTE v279[96]; // [rsp+738h] [rbp+630h] BYREF
  __int128 v280; // [rsp+798h] [rbp+690h]
  __int128 v281; // [rsp+7A8h] [rbp+6A0h]
  __int128 v282; // [rsp+7B8h] [rbp+6B0h]
  int v283; // [rsp+7C8h] [rbp+6C0h]
  wchar_t v284; // [rsp+7CCh] [rbp+6C4h]

  v1 = *(_QWORD *)&DXGGLOBAL::m_pGlobal;
  memset(v279, 0, 0x58uLL);
  v2 = *(_OWORD *)&v279[16];
  *(_OWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 64LL) = *(_OWORD *)v279;
  v3 = *(_OWORD *)&v279[32];
  *(_OWORD *)(v1 + 80) = v2;
  v4 = *(_OWORD *)&v279[48];
  *(_OWORD *)(v1 + 96) = v3;
  v5 = *(_OWORD *)&v279[64];
  *(_OWORD *)(v1 + 112) = v4;
  *(_QWORD *)&v4 = *(_QWORD *)&v279[80];
  *(_OWORD *)(v1 + 128) = v5;
  *(_QWORD *)(v1 + 144) = v4;
  g_WindowsSubsystem = ZwAllocateVirtualMemory;
  qword_140168B80 = ZwAllocateVirtualMemoryEx;
  qword_140168B88 = (__int64)ZwFreeVirtualMemory;
  qword_140168B90 = MmMapViewOfSection;
  qword_140168B98 = MmUnmapViewOfSection;
  qword_140168BA0 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_140168BA8 = (__int64)MmUnmapLockedPages;
  g_WslSubsystem = ZwAllocateVirtualMemory;
  qword_140168B40 = ZwAllocateVirtualMemoryEx;
  qword_140168B48 = (__int64)ZwFreeVirtualMemory;
  qword_140168B50 = MmMapViewOfSection;
  qword_140168B58 = MmUnmapViewOfSection;
  qword_140168B60 = (__int64)MmMapLockedPagesSpecifyCache;
  qword_140168B68 = (__int64)MmUnmapLockedPages;
  v6 = ExInitializeLookasideListEx(
         (PLOOKASIDE_LIST_EX)(v1 + 305456),
         0LL,
         0LL,
         (POOL_TYPE)512,
         0,
         0x10uLL,
         0x4B677844u,
         0);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v6);
    v8 = L"DXGGlobal 0x%I64x: Unable to initialize the lookaside list for lock order tracker, returning 0x%I64x";
    WdLogGlobalForLineNumber = 1830;
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v1, v7, 0LL, 0LL, 0LL);
    return (unsigned int)v7;
  }
  *(_BYTE *)(v1 + 305440) = 1;
  v10 = ExInitializeLookasideListEx(
          (PLOOKASIDE_LIST_EX)(v1 + 160),
          0LL,
          0LL,
          (POOL_TYPE)512,
          0,
          0xA0uLL,
          0x576B7844u,
          0);
  v7 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry2(2LL, v1, v10);
    v8 = L"DXGGlobal 0x%I64x: Unable to initialize m_VmBusPacketWorkItemList, returning 0x%I64x";
    WdLogGlobalForLineNumber = 1842;
    goto LABEL_3;
  }
  *(_BYTE *)(v1 + 1363) = 1;
  if ( !HMGRTABLE::ExpandTable((HMGRTABLE *)(v1 + 344)) )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1854;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed the initial shared resource handle table expansion, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v11 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *(_QWORD *)(v1 + 608) = v11;
  if ( !v11 )
  {
    WdLogSingleEntry2(3LL, v1, -1073741801LL);
    WdLogGlobalForLineNumber = 1867;
    return 3221225495LL;
  }
  v12 = ExInitializeResourceLite(v11);
  DxgkSharedObjectTypes = v12;
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, v1, v12);
    WdLogGlobalForLineNumber = 1877;
    return DxgkSharedObjectTypes;
  }
  v14 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1152), 0LL, 0LL, PagedPool, 0, 0x5F8uLL, 0x4B677844u, 0);
  DxgkSharedObjectTypes = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry3(3LL, v1, v14, 0LL);
    WdLogGlobalForLineNumber = 1886;
    return DxgkSharedObjectTypes;
  }
  *(_BYTE *)(v1 + 1361) = 1;
  v15 = ExInitializeLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 1248), 0LL, 0LL, PagedPool, 0, 0x5E0uLL, 0x4B677844u, 0);
  DxgkSharedObjectTypes = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry3(3LL, v1, v15, 0LL);
    WdLogGlobalForLineNumber = 1896;
    return DxgkSharedObjectTypes;
  }
  v16 = g_bSkuSupportMultipleUsers;
  *(_BYTE *)(v1 + 1362) = 1;
  v75 = 32;
  v89 = 0x4000000LL;
  v57 = 0;
  v73 = 0;
  v58 = 0;
  v74 = 1;
  v56 = 0;
  v55 = 0;
  v60 = 0;
  v76 = 0;
  v77 = 0;
  v61 = 0;
  v62 = 0;
  v78 = 0;
  v79 = 0;
  v63 = 0;
  v80 = 0;
  v64 = 0;
  v81 = 0;
  v59 = 0;
  v67 = 0;
  v69 = 0;
  if ( v16 )
    v17 = g_IsInternalReleaseOrDbg != 0 ? 0x100000 : 0x80000;
  else
    v17 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  v82 = v17;
  if ( v16 )
    v18 = g_IsInternalReleaseOrDbg != 0 ? 8 : 4;
  else
    v18 = 2;
  v71 = v18;
  if ( v16 )
    v19 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x10000;
  else
    v19 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0x4000;
  v83 = v19;
  v51 = v19;
  v84 = 300;
  v53 = 300;
  v50 = v17;
  v72 = 1;
  v52 = v18;
  v54 = 1;
  v85 = 5000;
  v65 = 0;
  v86 = 15000;
  v66 = 0;
  v68 = *(_DWORD *)(v1 + 305944);
  v92 = L"TerminationListSizeLimit";
  v93 = &v57;
  v95 = &v89;
  v99 = L"ValidateWDDMCaps";
  v100 = &v58;
  v102 = &v73;
  v106 = L"WDDM2LockManagement";
  v107 = &v56;
  v109 = &v74;
  v113 = L"MaximumAdapterCount";
  v114 = &v55;
  v116 = &v75;
  v120 = L"InvestigationDebugParameter";
  v121 = &v60;
  v123 = &v76;
  v127 = L"EnableIgnoreWin32ProcessStatus";
  v128 = &v61;
  v130 = &v77;
  v134 = L"EnableHMDTestMode";
  v90 = 0LL;
  v91 = 288;
  v94 = 67108868;
  v96 = 4;
  v97 = 0LL;
  v98 = 288;
  v101 = 67108868;
  v103 = 4;
  v104 = 0LL;
  v105 = 288;
  v108 = 67108868;
  v110 = 4;
  v111 = 0LL;
  v112 = 288;
  v115 = 67108868;
  v117 = 4;
  v118 = 0LL;
  v119 = 288;
  v122 = 67108868;
  v124 = 4;
  v125 = 0LL;
  v126 = 288;
  v129 = 67108868;
  v131 = 4;
  v132 = 0LL;
  v133 = 288;
  v136 = 67108868;
  v135 = &v62;
  v137 = &v78;
  v141 = L"PreserveFirmwareMode";
  v142 = &v63;
  v144 = &v79;
  v148 = L"PreventFullscreenWireFormatChange";
  v149 = &v64;
  v151 = &v80;
  v155 = L"EnableFuzzing";
  v156 = &v59;
  v158 = &v81;
  v162 = L"InternalDiagnosticsBufferSize";
  v163 = &v50;
  v165 = &v82;
  v169 = L"InternalDiagnosticsBufferMultiplier";
  v170 = &v52;
  v172 = &v71;
  v176 = L"ExternalDiagnosticsBufferSize";
  v177 = &v51;
  v179 = &v83;
  v183 = L"ExternalDiagnosticsBufferMultiplier";
  v184 = &v54;
  v186 = &v72;
  v190 = L"DiagnosticsBufferExpansionTime";
  v138 = 4;
  v139 = 0LL;
  v140 = 288;
  v143 = 67108868;
  v145 = 4;
  v146 = 0LL;
  v147 = 288;
  v150 = 67108868;
  v152 = 4;
  v153 = 0LL;
  v154 = 288;
  v157 = 67108868;
  v159 = 4;
  v160 = 0LL;
  v161 = 288;
  v164 = 67108868;
  v166 = 4;
  v167 = 0LL;
  v168 = 288;
  v171 = 67108868;
  v173 = 4;
  v174 = 0LL;
  v175 = 288;
  v178 = 67108868;
  v180 = 4;
  v181 = 0LL;
  v182 = 288;
  v185 = 67108868;
  v187 = 4;
  v188 = 0LL;
  v189 = 288;
  v191 = &v53;
  v193 = &v84;
  v197 = L"RapidHpdTimeoutInMilliseconds";
  v198 = &v65;
  v200 = &v85;
  v204 = L"RapidHpdMaxChainInMilliseconds";
  v205 = &v66;
  v207 = &v86;
  v211 = L"ForceUsb4MonitorSupport";
  v212 = &g_bDbgForceUsb4MonitorSupport;
  v218 = L"Usb4MonitorTargetId";
  v219 = &g_DbgUsb4MonitorTargetId;
  v225 = L"Usb4MonitorDpcdUSB4_Driver_ID";
  v226 = &g_DbgUsb4MonitorDpcdUSB4_Driver_ID;
  v232 = L"Usb4MonitorDpcdDP_IN_Adapter_Number";
  v233 = &g_DbgUsb4MonitorDpcdDP_IN_Adapter_Number;
  v239 = L"Usb4MonitorPowerOnDelayInSeconds";
  v240 = &g_DbgUsb4MonitorPowerOnDelayInSeconds;
  v246 = L"TreatUsb4MonitorAsNormal";
  v247 = &g_bDbgTreatUsb4MonitorAsNormal;
  v192 = 67108868;
  v194 = 4;
  v195 = 0LL;
  v196 = 288;
  v199 = 67108868;
  v201 = 4;
  v202 = 0LL;
  v203 = 288;
  v206 = 67108868;
  v208 = 4;
  v209 = 0LL;
  v210 = 288;
  v213 = 67108868;
  v214 = 0LL;
  v215 = 0;
  v216 = 0LL;
  v217 = 288;
  v220 = 67108868;
  v221 = 0LL;
  v222 = 0;
  v223 = 0LL;
  v224 = 288;
  v227 = 67108868;
  v228 = 0LL;
  v229 = 0;
  v230 = 0LL;
  v231 = 288;
  v234 = 67108868;
  v235 = 0LL;
  v236 = 0;
  v237 = 0LL;
  v238 = 288;
  v241 = 67108868;
  v242 = 0LL;
  v243 = 0;
  v244 = 0LL;
  v245 = 288;
  v248 = 67108868;
  v249 = 0LL;
  v250 = 0;
  v251 = 0LL;
  v252 = 288;
  v255 = 67108868;
  v259 = 288;
  v253 = L"AllowAdvancedEtwLogging";
  v262 = 67108868;
  v254 = &v67;
  v266 = 288;
  v260 = L"NodeUsageTelemetryTimerInterval";
  v269 = 67108868;
  v261 = &v68;
  v256 = 0LL;
  v267 = L"NativeFenceDebugTest";
  v268 = &v69;
  v257 = 0;
  v258 = 0LL;
  v263 = 0LL;
  v264 = 0;
  v265 = 0LL;
  v270 = 0LL;
  v271 = 0;
  v272 = 0LL;
  v273 = 0;
  v274 = 0LL;
  v275 = 0LL;
  v276 = 0LL;
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v90, 0LL, 0LL) < 0 )
  {
    *(_QWORD *)(v1 + 920) = 0x4000000LL;
    *(_DWORD *)(v1 + 1380) = 32;
    *(_BYTE *)(v1 + 928) = 0;
    *(_DWORD *)(v1 + 1376) = 1;
    *(_DWORD *)(v1 + 1664) = 0;
    *(_DWORD *)(v1 + 1680) = 0;
  }
  else
  {
    *(_QWORD *)(v1 + 920) = v57;
    *(_BYTE *)(v1 + 928) = v58 != 0;
    *(_BYTE *)(v1 + 304898) = v59 != 0;
    v20 = 1;
    if ( v56 < 2 )
      v20 = v56;
    *(_DWORD *)(v1 + 1376) = v20;
    v21 = v55;
    if ( v55 >= 4 )
    {
      if ( v55 > 0x400 )
      {
        v21 = 1024;
        v55 = 1024;
      }
    }
    else
    {
      v21 = 4;
      v55 = 4;
    }
    *(_DWORD *)(v1 + 1380) = v21;
    *(_DWORD *)(v1 + 1664) = v60;
    *(_DWORD *)(v1 + 1680) = v61;
    *(_BYTE *)(v1 + 304897) = v62 == 1;
    *(_BYTE *)(v1 + 304952) = v63 != 0;
    *(_BYTE *)(v1 + 304953) = v64 != 0;
    if ( v65 )
      *(_DWORD *)(v1 + 305664) = v65;
    if ( v66 )
      *(_DWORD *)(v1 + 305668) = v66;
    if ( !g_IsInternalRelease && !g_OSTestSigningEnabled )
    {
      g_bDbgForceUsb4MonitorSupport = 0;
      g_bDbgTreatUsb4MonitorAsNormal = 0;
      g_DbgUsb4MonitorPowerOnDelayInSeconds = 0;
    }
    *(_BYTE *)(v1 + 305736) = v67 != 0;
    *(_DWORD *)(v1 + 305944) = v68;
    DXGGLOBAL::SetNodeUsageTelemetryTimer((DXGGLOBAL *)v1);
    *(_BYTE *)(v1 + 305952) = v69 != 0;
  }
  *(_DWORD *)(v1 + 912) = 0;
  v22 = *(_OWORD *)L"Y\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  v70 = 0;
  *(_OWORD *)v279 = *(_OWORD *)L"\\REGISTRY\\MACHINE\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v88.Length = 9830548LL;
  v23 = *(_OWORD *)L"E\\System\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_QWORD *)&v87.Length = 2228256LL;
  *(_OWORD *)&v279[16] = v22;
  v24 = *(_OWORD *)L"\\ControlSet001\\Control\\Terminal Server\\WinStations";
  *(_OWORD *)&v279[32] = v23;
  v25 = *(_OWORD *)L"Set001\\Control\\Terminal Server\\WinStations";
  *(_OWORD *)&v279[48] = v24;
  v26 = *(_OWORD *)L"ontrol\\Terminal Server\\WinStations";
  *(_OWORD *)&v279[64] = v25;
  v27 = *(_OWORD *)L"erminal Server\\WinStations";
  *(_OWORD *)&v279[80] = v26;
  v280 = v27;
  v281 = *(_OWORD *)L"Server\\WinStations";
  v28 = *(_DWORD *)L"ns";
  v282 = *(_OWORD *)L"inStations";
  v283 = v28;
  v284 = aRegistryMachin_13[74];
  v88.Buffer = (wchar_t *)v279;
  v278 = aDwmframeinterv[16];
  v87.Buffer = (wchar_t *)v277;
  v277[0] = *(_OWORD *)L"DWMFRAMEINTERVAL";
  v277[1] = *(_OWORD *)L"INTERVAL";
  if ( ReadRegistryDwordKeyValue(&v88, &v87, &v70) >= 0 && v70 )
    *(_DWORD *)(v1 + 305216) = v70;
  DxgkSharedObjectTypes = CreateDxgkSharedObjectTypes();
  if ( (DxgkSharedObjectTypes & 0x80000000) != 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 2179;
    return DxgkSharedObjectTypes;
  }
  v29 = v52;
  if ( !v52 || ((v52 - 1) & v52) != 0 )
  {
    v29 = v71;
    v52 = v71;
  }
  v30 = v54;
  if ( !v54 || ((v54 - 1) & v54) != 0 )
  {
    v30 = v72;
    v54 = v72;
  }
  if ( !g_OSTestSigningEnabled )
  {
    if ( v50 < 0x1000 || v50 * v29 > 0x1000000 )
    {
      v50 = 0x1000000;
      v52 = 1;
    }
    if ( v51 < 0x1000 || v51 * v30 > 0x1000000 )
    {
      v51 = 0x1000000;
      v54 = 1;
    }
  }
  if ( v53 > 0xE10 )
    v53 = 3600;
  v31 = (-(__int64)(g_IsInternalReleaseOrDbg != 0) & 0xFFFFFFFFFFFFFF40uLL) + 256;
  v32 = operator new(0x70uLL, 0x4B677844u, v31);
  if ( v32 )
    v33 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v32, v50, v52, v31, v53);
  else
    v33 = 0LL;
  *(_QWORD *)(v1 + 968) = v33;
  v34 = operator new(0x70uLL, 0x4B677844u, v31);
  if ( v34 )
    v35 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v34, v51, v54, v31, v53);
  else
    v35 = 0LL;
  *(_QWORD *)(v1 + 976) = v35;
  if ( !*(_QWORD *)(v1 + 968) )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2233;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for internal diagnostics buffers (SmallInternalDiagnosticsSize = 0x%I64x).",
      v50,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( !v35 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 2239;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for external diagnostics buffers (SmallExternalDiagnosticsSize = 0x%I64x).",
      v51,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v36 = (DXGSESSIONMGR *)operator new(0x1C0uLL, 0x4B677844u, 64LL);
  if ( v36 )
    v37 = DXGSESSIONMGR::DXGSESSIONMGR(v36);
  else
    v37 = 0LL;
  *(_QWORD *)(v1 + 984) = v37;
  if ( !v37 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2246;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dxgkrnl session manager.",
      2246LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  v38 = *(_DWORD *)(v1 + 1380);
  v39 = (unsigned int)(v38 + 31) >> 5;
  v40 = 4LL * ((unsigned int)v39 + ((unsigned int)(1055 - v38) >> 5));
  if ( !is_mul_ok((unsigned int)v39 + ((unsigned int)(1055 - v38) >> 5), 4uLL) )
    v40 = -1LL;
  v41 = (ULONG *)operator new[](v40, 0x4B677844u, 256LL);
  *(_QWORD *)(v1 + 904) = v41;
  if ( !v41 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2255;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for dxgkrnl adapter ordinal bits.",
      2255LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 872), v41, *(_DWORD *)(v1 + 1380));
  RtlInitializeBitMap((PRTL_BITMAP)(v1 + 888), (PULONG)(*(_QWORD *)(v1 + 904) + 4 * v39), 1024 - *(_DWORD *)(v1 + 1380));
  if ( DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)(v1 + 1384), 0LL, 0LL, 0, 0LL) < 0 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2269;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for system process.",
      2269LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  if ( PsInitialSystemProcess != *(PEPROCESS *)(*(_QWORD *)(v1 + 1384) + 56LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2272;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsInitialSystemProcess == m_pSystemDxgProcess->GetEProcess()",
      2272LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v42 = operator new(0x280uLL, 0x4B677844u, 256LL);
  v43 = (_BYTE *)v42;
  if ( v42 )
  {
    *(_BYTE *)v42 = 1;
    *(_QWORD *)(v42 + 16) = 0LL;
    *(_QWORD *)(v42 + 24) = 0LL;
    *(_QWORD *)(v42 + 32) = 0LL;
    *(_DWORD *)(v42 + 40) = 0;
    *(_DWORD *)(v42 + 44) = 69;
    *(_DWORD *)(v42 + 48) = 1;
    *(_DWORD *)(v42 + 632) = 0;
    memset((void *)(v42 + 56), 0, 0x240uLL);
    *v43 = 0;
  }
  else
  {
    v43 = 0LL;
  }
  *(_QWORD *)(v1 + 1480) = v43;
  if ( !v43 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 2277;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to Qdc cache.", 2277LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  KeInitializeSpinLock(&qword_140168A90);
  DXGVALIDATION::InitializeBootSettings((DXGVALIDATION *)(v1 + 1668));
  DXGGLOBAL::CsExitInitiatedWnfSubscription((DXGGLOBAL *)v1);
  KeInitializeTimer((PKTIMER)(v1 + 1920));
  KeInitializeDpc((PRKDPC)(v1 + 1984), (PKDEFERRED_ROUTINE)CsExitInitiatedReleaseComponentReferences, (PVOID)v1);
  LOBYTE(OutputBuffer) = 0;
  v44 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  if ( v44 >= 0 )
  {
    if ( (_BYTE)OutputBuffer )
      DXGGLOBAL::SubscribeWNFForCSAccounting((DXGGLOBAL *)v1);
  }
  else
  {
    v45 = v44;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2314;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the platformInformation. Status : 0x%I64x",
      v45,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v1 + 2072) = v1;
  *(_QWORD *)(v1 + 2064) = CsExitInitiatedReleaseComponentReferencesPassiveLevel;
  *(_QWORD *)(v1 + 2048) = 0LL;
  DXGGLOBAL::InitializeResourceManagerSid((DXGGLOBAL *)v1);
  *(_DWORD *)(v1 + 304884) &= ~1u;
  *(_DWORD *)(v1 + 304872) = 10;
  *(_DWORD *)(v1 + 304876) = 50;
  *(_DWORD *)(v1 + 304880) = 30;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 1768));
  DisplayDiagnostics::Initialize((PVOID *)(v1 + 305024));
  v46 = PoRegisterPowerSettingCallback(
          0LL,
          &GUID_ADVANCED_COLOR_QUALITY_BIAS,
          DXGGLOBAL::AdvancedColorPowerSettingsCallback,
          (PVOID)v1,
          0LL);
  v7 = v46;
  if ( v46 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 2351;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PoRegisterPowerSettingCallback for GUID_HDR_DISPLAY_QUALITY_BIAS failed with status:0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v7;
  }
  v47 = PoRegisterPowerSettingCallback(0LL, &GUID_ACDC_POWER_SOURCE, DXGGLOBAL::AcDcPowerSourceCallback, (PVOID)v1, 0LL);
  v48 = v47;
  if ( v47 >= 0 )
    return RegisterDxgKernelProcessExtensions();
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2361;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"PoRegisterPowerSettingCallback for GUID_ACDC_POWER_SOURCE failed with status:0x%I64x",
    v48,
    0LL,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v48;
}
