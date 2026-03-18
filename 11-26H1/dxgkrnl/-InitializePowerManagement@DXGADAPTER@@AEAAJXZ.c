/*
 * XREFs of ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x14041EB18
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x140011704 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012744 (McTemplateK0pt_EtwWriteTransfer.c)
 *     ?UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ @ 0x140013398 (-UpdateLatencyTolerances@DXGADAPTER@@QEAAXXZ.c)
 *     ?SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x140013E40 (-SetPowerComponentLatencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x140037230 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1400388F0 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x140039928 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z @ 0x14006F70C (-SetPowerComponentResidencyCB@DXGADAPTER@@QEAAXI_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x14019827C (-DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ.c)
 *     ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1401A3838 (-InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A9050 (-InitializePowerManagement@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiEnablePowerManagement @ 0x140238754 (DpiEnablePowerManagement.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1402C00F8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DpiGetPnpRegistryKeyName @ 0x140391730 (DpiGetPnpRegistryKeyName.c)
 */

__int64 __fastcall DXGADAPTER::InitializePowerManagement(DXGADAPTER *this)
{
  _BYTE *v1; // rbx
  unsigned int v3; // r13d
  bool v4; // cc
  __int64 v5; // rcx
  __int64 v6; // rdx
  bool v7; // zf
  unsigned int v8; // ebx
  unsigned int NumDifferentPhysicalAdapters; // r12d
  unsigned int v10; // eax
  __int64 v11; // rcx
  DXGADAPTER *v12; // rcx
  int AdapterInfo; // eax
  __int64 v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  const wchar_t *v20; // r9
  __int64 v21; // rax
  char *v22; // r14
  unsigned int v23; // esi
  unsigned int v24; // ebx
  __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // ecx
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int16 v31; // dx
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int64 v35; // r12
  int v36; // eax
  const wchar_t *v37; // r9
  int v38; // eax
  void *v39; // rcx
  char *v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned int v43; // r8d
  unsigned int v44; // r9d
  unsigned int v45; // ecx
  unsigned __int64 v46; // r9
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // edx
  unsigned int j; // r8d
  __int64 v53; // r10
  __int64 v54; // r9
  unsigned int v55; // edx
  unsigned int v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // rbx
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rsi
  int v63; // eax
  __int64 v64; // rax
  unsigned int v65; // ecx
  __int64 v66; // rdx
  __int64 v67; // rax
  void *v68; // rcx
  unsigned int v69; // eax
  unsigned int v70; // edx
  __int64 v71; // r8
  __int64 v72; // r10
  __int64 v73; // rax
  unsigned int v74; // ebx
  __int64 v75; // r9
  unsigned int k; // ecx
  __int64 v77; // r10
  __int64 v78; // rsi
  unsigned int v79; // r11d
  __int64 v80; // r12
  __int64 v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rbx
  ADAPTER_RENDER *v84; // rcx
  int v85; // eax
  __int64 v86; // r15
  const wchar_t *v87; // r9
  ADAPTER_DISPLAY *v88; // rcx
  int v89; // eax
  int v90; // eax
  ULONG TimeIncrement; // eax
  __int64 v92; // rcx
  unsigned __int64 v93; // r9
  __int64 v94; // rax
  unsigned __int64 v95; // rtt
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // rtt
  __int64 v107; // rax
  unsigned __int64 v108; // rtt
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rax
  unsigned __int64 v112; // rtt
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // r12
  __int64 v132; // rsi
  __int64 v133; // rbx
  DXGADAPTER *v134; // rdx
  int v135; // ecx
  int v136; // ecx
  int v137; // ecx
  int v138; // ecx
  int v139; // ecx
  int v140; // ecx
  DXGADAPTER *v141; // rcx
  unsigned int v142; // edx
  __int64 v143; // r8
  DXGADAPTER **v144; // rcx
  __int64 v145; // rax
  DXGADAPTER **v146; // rcx
  unsigned __int64 v147; // rcx
  unsigned int v148; // eax
  unsigned __int64 *v149; // rdx
  __int64 v150; // r8
  unsigned __int64 v151; // rax
  unsigned int i; // edx
  unsigned int v153; // edx
  __int64 v154; // r8
  __int64 v155; // rcx
  __int64 v156; // rax
  __int64 v157; // rbx
  __int64 v158; // rsi
  NTSTATUS v159; // eax
  int v160; // eax
  __int64 v161; // rcx
  char v162; // [rsp+58h] [rbp-B0h]
  int v163; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v164; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v165; // [rsp+68h] [rbp-A0h] BYREF
  int v166; // [rsp+6Ch] [rbp-9Ch] BYREF
  BOOL v167; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v168; // [rsp+74h] [rbp-94h] BYREF
  unsigned int v169; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v170; // [rsp+7Ch] [rbp-8Ch] BYREF
  unsigned int v171; // [rsp+80h] [rbp-88h] BYREF
  int v172; // [rsp+84h] [rbp-84h] BYREF
  unsigned int v173; // [rsp+88h] [rbp-80h]
  unsigned int v174; // [rsp+8Ch] [rbp-7Ch] BYREF
  unsigned int v175; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v176; // [rsp+94h] [rbp-74h] BYREF
  void *v177; // [rsp+98h] [rbp-70h] BYREF
  int v178; // [rsp+A0h] [rbp-68h] BYREF
  int v179; // [rsp+A4h] [rbp-64h] BYREF
  int v180; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v181; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned int v182; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int v183; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int v184; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v185; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v186; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v187; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v188; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v189; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v190; // [rsp+D0h] [rbp-38h] BYREF
  unsigned int v191; // [rsp+D4h] [rbp-34h] BYREF
  unsigned int v192; // [rsp+D8h] [rbp-30h] BYREF
  unsigned int v193; // [rsp+DCh] [rbp-2Ch] BYREF
  unsigned int v194; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v195; // [rsp+E4h] [rbp-24h] BYREF
  unsigned int v196; // [rsp+E8h] [rbp-20h] BYREF
  unsigned int v197; // [rsp+ECh] [rbp-1Ch] BYREF
  int v198; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v199; // [rsp+F4h] [rbp-14h] BYREF
  unsigned int v200; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int v201; // [rsp+FCh] [rbp-Ch] BYREF
  unsigned int v202; // [rsp+100h] [rbp-8h] BYREF
  unsigned int v203; // [rsp+104h] [rbp-4h] BYREF
  unsigned int v204; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v205; // [rsp+10Ch] [rbp+4h] BYREF
  unsigned int v206; // [rsp+110h] [rbp+8h] BYREF
  int v207; // [rsp+114h] [rbp+Ch] BYREF
  unsigned int v208; // [rsp+118h] [rbp+10h] BYREF
  int v209; // [rsp+11Ch] [rbp+14h] BYREF
  int v210; // [rsp+120h] [rbp+18h] BYREF
  int v211; // [rsp+124h] [rbp+1Ch] BYREF
  int v212; // [rsp+128h] [rbp+20h] BYREF
  int v213; // [rsp+12Ch] [rbp+24h] BYREF
  int v214; // [rsp+130h] [rbp+28h] BYREF
  int v215; // [rsp+134h] [rbp+2Ch] BYREF
  int v216; // [rsp+138h] [rbp+30h] BYREF
  int v217; // [rsp+13Ch] [rbp+34h] BYREF
  int v218; // [rsp+140h] [rbp+38h] BYREF
  int v219; // [rsp+144h] [rbp+3Ch] BYREF
  int v220; // [rsp+148h] [rbp+40h] BYREF
  int v221; // [rsp+14Ch] [rbp+44h] BYREF
  int v222; // [rsp+150h] [rbp+48h] BYREF
  int v223; // [rsp+154h] [rbp+4Ch] BYREF
  int v224; // [rsp+158h] [rbp+50h] BYREF
  int v225; // [rsp+15Ch] [rbp+54h] BYREF
  int v226; // [rsp+160h] [rbp+58h] BYREF
  int v227; // [rsp+164h] [rbp+5Ch] BYREF
  int v228; // [rsp+168h] [rbp+60h] BYREF
  int v229; // [rsp+16Ch] [rbp+64h] BYREF
  int v230; // [rsp+170h] [rbp+68h] BYREF
  int v231; // [rsp+174h] [rbp+6Ch] BYREF
  int v232; // [rsp+178h] [rbp+70h] BYREF
  int v233; // [rsp+17Ch] [rbp+74h] BYREF
  int v234; // [rsp+180h] [rbp+78h] BYREF
  int v235; // [rsp+184h] [rbp+7Ch] BYREF
  int v236; // [rsp+188h] [rbp+80h] BYREF
  int v237; // [rsp+18Ch] [rbp+84h] BYREF
  int v238; // [rsp+190h] [rbp+88h] BYREF
  int v239; // [rsp+194h] [rbp+8Ch] BYREF
  int v240; // [rsp+198h] [rbp+90h] BYREF
  int v241; // [rsp+19Ch] [rbp+94h] BYREF
  int v242; // [rsp+1A0h] [rbp+98h] BYREF
  int v243; // [rsp+1A4h] [rbp+9Ch] BYREF
  int v244; // [rsp+1A8h] [rbp+A0h] BYREF
  int v245; // [rsp+1ACh] [rbp+A4h] BYREF
  int v246; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v247; // [rsp+1B8h] [rbp+B0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C0h] [rbp+B8h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v249; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v250; // [rsp+220h] [rbp+118h]
  __int64 v251; // [rsp+228h] [rbp+120h]
  __int64 v252; // [rsp+238h] [rbp+130h] BYREF
  int v253; // [rsp+240h] [rbp+138h]
  const wchar_t *v254; // [rsp+248h] [rbp+140h]
  BOOL *v255; // [rsp+250h] [rbp+148h]
  int v256; // [rsp+258h] [rbp+150h]
  int *v257; // [rsp+260h] [rbp+158h]
  int v258; // [rsp+268h] [rbp+160h]
  __int64 v259; // [rsp+270h] [rbp+168h]
  int v260; // [rsp+278h] [rbp+170h]
  __int64 v261; // [rsp+280h] [rbp+178h]
  __int128 v262; // [rsp+288h] [rbp+180h]
  __int128 v263; // [rsp+298h] [rbp+190h]
  __int64 v264; // [rsp+2A8h] [rbp+1A0h] BYREF
  int v265; // [rsp+2B0h] [rbp+1A8h]
  const wchar_t *v266; // [rsp+2B8h] [rbp+1B0h]
  int *v267; // [rsp+2C0h] [rbp+1B8h]
  int v268; // [rsp+2C8h] [rbp+1C0h]
  int *v269; // [rsp+2D0h] [rbp+1C8h]
  int v270; // [rsp+2D8h] [rbp+1D0h]
  __int64 v271; // [rsp+2E0h] [rbp+1D8h]
  int v272; // [rsp+2E8h] [rbp+1E0h]
  const wchar_t *v273; // [rsp+2F0h] [rbp+1E8h]
  int *v274; // [rsp+2F8h] [rbp+1F0h]
  int v275; // [rsp+300h] [rbp+1F8h]
  int *v276; // [rsp+308h] [rbp+200h]
  int v277; // [rsp+310h] [rbp+208h]
  __int64 v278; // [rsp+318h] [rbp+210h]
  int v279; // [rsp+320h] [rbp+218h]
  const wchar_t *v280; // [rsp+328h] [rbp+220h]
  unsigned int *v281; // [rsp+330h] [rbp+228h]
  int v282; // [rsp+338h] [rbp+230h]
  int *v283; // [rsp+340h] [rbp+238h]
  int v284; // [rsp+348h] [rbp+240h]
  __int64 v285; // [rsp+350h] [rbp+248h]
  int v286; // [rsp+358h] [rbp+250h]
  const wchar_t *v287; // [rsp+360h] [rbp+258h]
  unsigned int *v288; // [rsp+368h] [rbp+260h]
  int v289; // [rsp+370h] [rbp+268h]
  int *v290; // [rsp+378h] [rbp+270h]
  int v291; // [rsp+380h] [rbp+278h]
  __int64 v292; // [rsp+388h] [rbp+280h]
  int v293; // [rsp+390h] [rbp+288h]
  const wchar_t *v294; // [rsp+398h] [rbp+290h]
  unsigned int *v295; // [rsp+3A0h] [rbp+298h]
  int v296; // [rsp+3A8h] [rbp+2A0h]
  int *v297; // [rsp+3B0h] [rbp+2A8h]
  int v298; // [rsp+3B8h] [rbp+2B0h]
  __int64 v299; // [rsp+3C0h] [rbp+2B8h]
  int v300; // [rsp+3C8h] [rbp+2C0h]
  const wchar_t *v301; // [rsp+3D0h] [rbp+2C8h]
  unsigned int *v302; // [rsp+3D8h] [rbp+2D0h]
  int v303; // [rsp+3E0h] [rbp+2D8h]
  int *v304; // [rsp+3E8h] [rbp+2E0h]
  int v305; // [rsp+3F0h] [rbp+2E8h]
  __int64 v306; // [rsp+3F8h] [rbp+2F0h]
  int v307; // [rsp+400h] [rbp+2F8h]
  const wchar_t *v308; // [rsp+408h] [rbp+300h]
  unsigned int *v309; // [rsp+410h] [rbp+308h]
  int v310; // [rsp+418h] [rbp+310h]
  int *v311; // [rsp+420h] [rbp+318h]
  int v312; // [rsp+428h] [rbp+320h]
  __int64 v313; // [rsp+430h] [rbp+328h]
  int v314; // [rsp+438h] [rbp+330h]
  const wchar_t *v315; // [rsp+440h] [rbp+338h]
  unsigned int *v316; // [rsp+448h] [rbp+340h]
  int v317; // [rsp+450h] [rbp+348h]
  int *v318; // [rsp+458h] [rbp+350h]
  int v319; // [rsp+460h] [rbp+358h]
  __int64 v320; // [rsp+468h] [rbp+360h]
  int v321; // [rsp+470h] [rbp+368h]
  const wchar_t *v322; // [rsp+478h] [rbp+370h]
  unsigned int *v323; // [rsp+480h] [rbp+378h]
  int v324; // [rsp+488h] [rbp+380h]
  int *v325; // [rsp+490h] [rbp+388h]
  int v326; // [rsp+498h] [rbp+390h]
  __int64 v327; // [rsp+4A0h] [rbp+398h]
  int v328; // [rsp+4A8h] [rbp+3A0h]
  const wchar_t *v329; // [rsp+4B0h] [rbp+3A8h]
  unsigned int *v330; // [rsp+4B8h] [rbp+3B0h]
  int v331; // [rsp+4C0h] [rbp+3B8h]
  int *v332; // [rsp+4C8h] [rbp+3C0h]
  int v333; // [rsp+4D0h] [rbp+3C8h]
  __int64 v334; // [rsp+4D8h] [rbp+3D0h]
  int v335; // [rsp+4E0h] [rbp+3D8h]
  const wchar_t *v336; // [rsp+4E8h] [rbp+3E0h]
  int *v337; // [rsp+4F0h] [rbp+3E8h]
  int v338; // [rsp+4F8h] [rbp+3F0h]
  int *v339; // [rsp+500h] [rbp+3F8h]
  int v340; // [rsp+508h] [rbp+400h]
  __int64 v341; // [rsp+510h] [rbp+408h]
  int v342; // [rsp+518h] [rbp+410h]
  const wchar_t *v343; // [rsp+520h] [rbp+418h]
  unsigned int *v344; // [rsp+528h] [rbp+420h]
  int v345; // [rsp+530h] [rbp+428h]
  int *v346; // [rsp+538h] [rbp+430h]
  int v347; // [rsp+540h] [rbp+438h]
  __int64 v348; // [rsp+548h] [rbp+440h]
  int v349; // [rsp+550h] [rbp+448h]
  const wchar_t *v350; // [rsp+558h] [rbp+450h]
  int *v351; // [rsp+560h] [rbp+458h]
  int v352; // [rsp+568h] [rbp+460h]
  int *v353; // [rsp+570h] [rbp+468h]
  int v354; // [rsp+578h] [rbp+470h]
  __int64 v355; // [rsp+580h] [rbp+478h]
  int v356; // [rsp+588h] [rbp+480h]
  const wchar_t *v357; // [rsp+590h] [rbp+488h]
  unsigned int *v358; // [rsp+598h] [rbp+490h]
  int v359; // [rsp+5A0h] [rbp+498h]
  int *v360; // [rsp+5A8h] [rbp+4A0h]
  int v361; // [rsp+5B0h] [rbp+4A8h]
  __int64 v362; // [rsp+5B8h] [rbp+4B0h]
  int v363; // [rsp+5C0h] [rbp+4B8h]
  const wchar_t *v364; // [rsp+5C8h] [rbp+4C0h]
  unsigned int *v365; // [rsp+5D0h] [rbp+4C8h]
  int v366; // [rsp+5D8h] [rbp+4D0h]
  int *v367; // [rsp+5E0h] [rbp+4D8h]
  int v368; // [rsp+5E8h] [rbp+4E0h]
  __int64 v369; // [rsp+5F0h] [rbp+4E8h]
  int v370; // [rsp+5F8h] [rbp+4F0h]
  const wchar_t *v371; // [rsp+600h] [rbp+4F8h]
  unsigned int *v372; // [rsp+608h] [rbp+500h]
  int v373; // [rsp+610h] [rbp+508h]
  int *v374; // [rsp+618h] [rbp+510h]
  int v375; // [rsp+620h] [rbp+518h]
  __int64 v376; // [rsp+628h] [rbp+520h]
  int v377; // [rsp+630h] [rbp+528h]
  const wchar_t *v378; // [rsp+638h] [rbp+530h]
  unsigned int *v379; // [rsp+640h] [rbp+538h]
  int v380; // [rsp+648h] [rbp+540h]
  int *v381; // [rsp+650h] [rbp+548h]
  int v382; // [rsp+658h] [rbp+550h]
  __int64 v383; // [rsp+660h] [rbp+558h]
  int v384; // [rsp+668h] [rbp+560h]
  const wchar_t *v385; // [rsp+670h] [rbp+568h]
  unsigned int *v386; // [rsp+678h] [rbp+570h]
  int v387; // [rsp+680h] [rbp+578h]
  int *v388; // [rsp+688h] [rbp+580h]
  int v389; // [rsp+690h] [rbp+588h]
  __int64 v390; // [rsp+698h] [rbp+590h]
  int v391; // [rsp+6A0h] [rbp+598h]
  const wchar_t *v392; // [rsp+6A8h] [rbp+5A0h]
  unsigned int *v393; // [rsp+6B0h] [rbp+5A8h]
  int v394; // [rsp+6B8h] [rbp+5B0h]
  int *v395; // [rsp+6C0h] [rbp+5B8h]
  int v396; // [rsp+6C8h] [rbp+5C0h]
  __int64 v397; // [rsp+6D0h] [rbp+5C8h]
  int v398; // [rsp+6D8h] [rbp+5D0h]
  const wchar_t *v399; // [rsp+6E0h] [rbp+5D8h]
  unsigned int *v400; // [rsp+6E8h] [rbp+5E0h]
  int v401; // [rsp+6F0h] [rbp+5E8h]
  int *v402; // [rsp+6F8h] [rbp+5F0h]
  int v403; // [rsp+700h] [rbp+5F8h]
  __int64 v404; // [rsp+708h] [rbp+600h]
  int v405; // [rsp+710h] [rbp+608h]
  const wchar_t *v406; // [rsp+718h] [rbp+610h]
  unsigned int *v407; // [rsp+720h] [rbp+618h]
  int v408; // [rsp+728h] [rbp+620h]
  int *v409; // [rsp+730h] [rbp+628h]
  int v410; // [rsp+738h] [rbp+630h]
  __int64 v411; // [rsp+740h] [rbp+638h]
  int v412; // [rsp+748h] [rbp+640h]
  const wchar_t *v413; // [rsp+750h] [rbp+648h]
  int *v414; // [rsp+758h] [rbp+650h]
  int v415; // [rsp+760h] [rbp+658h]
  int *v416; // [rsp+768h] [rbp+660h]
  int v417; // [rsp+770h] [rbp+668h]
  __int64 v418; // [rsp+778h] [rbp+670h]
  int v419; // [rsp+780h] [rbp+678h]
  const wchar_t *v420; // [rsp+788h] [rbp+680h]
  int *v421; // [rsp+790h] [rbp+688h]
  int v422; // [rsp+798h] [rbp+690h]
  int *v423; // [rsp+7A0h] [rbp+698h]
  int v424; // [rsp+7A8h] [rbp+6A0h]
  __int64 v425; // [rsp+7B0h] [rbp+6A8h]
  int v426; // [rsp+7B8h] [rbp+6B0h]
  const wchar_t *v427; // [rsp+7C0h] [rbp+6B8h]
  int *v428; // [rsp+7C8h] [rbp+6C0h]
  int v429; // [rsp+7D0h] [rbp+6C8h]
  int *v430; // [rsp+7D8h] [rbp+6D0h]
  int v431; // [rsp+7E0h] [rbp+6D8h]
  __int64 v432; // [rsp+7E8h] [rbp+6E0h]
  int v433; // [rsp+7F0h] [rbp+6E8h]
  const wchar_t *v434; // [rsp+7F8h] [rbp+6F0h]
  unsigned int *v435; // [rsp+800h] [rbp+6F8h]
  int v436; // [rsp+808h] [rbp+700h]
  int *v437; // [rsp+810h] [rbp+708h]
  int v438; // [rsp+818h] [rbp+710h]
  __int64 v439; // [rsp+820h] [rbp+718h]
  int v440; // [rsp+828h] [rbp+720h]
  const wchar_t *v441; // [rsp+830h] [rbp+728h]
  unsigned int *v442; // [rsp+838h] [rbp+730h]
  int v443; // [rsp+840h] [rbp+738h]
  int *v444; // [rsp+848h] [rbp+740h]
  int v445; // [rsp+850h] [rbp+748h]
  __int64 v446; // [rsp+858h] [rbp+750h]
  int v447; // [rsp+860h] [rbp+758h]
  const wchar_t *v448; // [rsp+868h] [rbp+760h]
  unsigned int *v449; // [rsp+870h] [rbp+768h]
  int v450; // [rsp+878h] [rbp+770h]
  int *v451; // [rsp+880h] [rbp+778h]
  int v452; // [rsp+888h] [rbp+780h]
  __int64 v453; // [rsp+890h] [rbp+788h]
  int v454; // [rsp+898h] [rbp+790h]
  const wchar_t *v455; // [rsp+8A0h] [rbp+798h]
  unsigned int *v456; // [rsp+8A8h] [rbp+7A0h]
  int v457; // [rsp+8B0h] [rbp+7A8h]
  int *v458; // [rsp+8B8h] [rbp+7B0h]
  int v459; // [rsp+8C0h] [rbp+7B8h]
  __int64 v460; // [rsp+8C8h] [rbp+7C0h]
  int v461; // [rsp+8D0h] [rbp+7C8h]
  const wchar_t *v462; // [rsp+8D8h] [rbp+7D0h]
  unsigned int *v463; // [rsp+8E0h] [rbp+7D8h]
  int v464; // [rsp+8E8h] [rbp+7E0h]
  int *v465; // [rsp+8F0h] [rbp+7E8h]
  int v466; // [rsp+8F8h] [rbp+7F0h]
  __int64 v467; // [rsp+900h] [rbp+7F8h]
  int v468; // [rsp+908h] [rbp+800h]
  const wchar_t *v469; // [rsp+910h] [rbp+808h]
  unsigned int *v470; // [rsp+918h] [rbp+810h]
  int v471; // [rsp+920h] [rbp+818h]
  int *v472; // [rsp+928h] [rbp+820h]
  int v473; // [rsp+930h] [rbp+828h]
  __int64 v474; // [rsp+938h] [rbp+830h]
  int v475; // [rsp+940h] [rbp+838h]
  const wchar_t *v476; // [rsp+948h] [rbp+840h]
  unsigned int *v477; // [rsp+950h] [rbp+848h]
  int v478; // [rsp+958h] [rbp+850h]
  int *v479; // [rsp+960h] [rbp+858h]
  int v480; // [rsp+968h] [rbp+860h]
  __int64 v481; // [rsp+970h] [rbp+868h]
  int v482; // [rsp+978h] [rbp+870h]
  const wchar_t *v483; // [rsp+980h] [rbp+878h]
  unsigned int *v484; // [rsp+988h] [rbp+880h]
  int v485; // [rsp+990h] [rbp+888h]
  int *v486; // [rsp+998h] [rbp+890h]
  int v487; // [rsp+9A0h] [rbp+898h]
  __int64 v488; // [rsp+9A8h] [rbp+8A0h]
  int v489; // [rsp+9B0h] [rbp+8A8h]
  const wchar_t *v490; // [rsp+9B8h] [rbp+8B0h]
  unsigned int *v491; // [rsp+9C0h] [rbp+8B8h]
  int v492; // [rsp+9C8h] [rbp+8C0h]
  int *v493; // [rsp+9D0h] [rbp+8C8h]
  int v494; // [rsp+9D8h] [rbp+8D0h]
  __int64 v495; // [rsp+9E0h] [rbp+8D8h]
  int v496; // [rsp+9E8h] [rbp+8E0h]
  const wchar_t *v497; // [rsp+9F0h] [rbp+8E8h]
  unsigned int *v498; // [rsp+9F8h] [rbp+8F0h]
  int v499; // [rsp+A00h] [rbp+8F8h]
  int *v500; // [rsp+A08h] [rbp+900h]
  int v501; // [rsp+A10h] [rbp+908h]
  __int64 v502; // [rsp+A18h] [rbp+910h]
  int v503; // [rsp+A20h] [rbp+918h]
  const wchar_t *v504; // [rsp+A28h] [rbp+920h]
  unsigned int *v505; // [rsp+A30h] [rbp+928h]
  int v506; // [rsp+A38h] [rbp+930h]
  int *v507; // [rsp+A40h] [rbp+938h]
  int v508; // [rsp+A48h] [rbp+940h]
  __int64 v509; // [rsp+A50h] [rbp+948h]
  int v510; // [rsp+A58h] [rbp+950h]
  const wchar_t *v511; // [rsp+A60h] [rbp+958h]
  unsigned int *v512; // [rsp+A68h] [rbp+960h]
  int v513; // [rsp+A70h] [rbp+968h]
  int *v514; // [rsp+A78h] [rbp+970h]
  int v515; // [rsp+A80h] [rbp+978h]
  __int64 v516; // [rsp+A88h] [rbp+980h]
  int v517; // [rsp+A90h] [rbp+988h]
  const wchar_t *v518; // [rsp+A98h] [rbp+990h]
  unsigned int *v519; // [rsp+AA0h] [rbp+998h]
  int v520; // [rsp+AA8h] [rbp+9A0h]
  int *v521; // [rsp+AB0h] [rbp+9A8h]
  int v522; // [rsp+AB8h] [rbp+9B0h]
  __int64 v523; // [rsp+AC0h] [rbp+9B8h]
  int v524; // [rsp+AC8h] [rbp+9C0h]
  const wchar_t *v525; // [rsp+AD0h] [rbp+9C8h]
  unsigned int *v526; // [rsp+AD8h] [rbp+9D0h]
  int v527; // [rsp+AE0h] [rbp+9D8h]
  int *v528; // [rsp+AE8h] [rbp+9E0h]
  int v529; // [rsp+AF0h] [rbp+9E8h]
  __int64 v530; // [rsp+AF8h] [rbp+9F0h]
  int v531; // [rsp+B00h] [rbp+9F8h]
  const wchar_t *v532; // [rsp+B08h] [rbp+A00h]
  unsigned int *v533; // [rsp+B10h] [rbp+A08h]
  int v534; // [rsp+B18h] [rbp+A10h]
  int *v535; // [rsp+B20h] [rbp+A18h]
  int v536; // [rsp+B28h] [rbp+A20h]
  __int64 v537; // [rsp+B30h] [rbp+A28h]
  int v538; // [rsp+B38h] [rbp+A30h]
  __int64 v539; // [rsp+B40h] [rbp+A38h]
  __int128 v540; // [rsp+B48h] [rbp+A40h]
  __int128 v541; // [rsp+B58h] [rbp+A50h]
  _DWORD v542[64]; // [rsp+B68h] [rbp+A60h] BYREF
  unsigned __int16 v543[264]; // [rsp+C68h] [rbp+B60h] BYREF

  v1 = (char *)this + 2981;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pt_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&Dxgk_PowerManagementSupport);
  if ( !*v1 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4749;
    return 0LL;
  }
  v228 = 0;
  v245 = -1;
  v174 = -1;
  v246 = 2000;
  v211 = 35000;
  v183 = 35000;
  v175 = 2000;
  v213 = 50000;
  v186 = 50000;
  v3 = 0;
  v212 = 2000;
  v214 = 100000;
  v187 = 100000;
  v219 = 300000;
  v205 = 300000;
  v220 = 17000;
  v204 = 17000;
  v215 = 200;
  v180 = 200;
  v216 = 200;
  v184 = 200;
  v218 = 100;
  v217 = 100;
  v221 = 25000;
  v206 = 25000;
  v223 = 300;
  v171 = 300;
  v224 = 700;
  v170 = 700;
  v225 = 900;
  v169 = 900;
  v226 = 500;
  v168 = 500;
  v232 = 140000;
  v193 = 140000;
  v233 = 200000;
  v195 = 200000;
  v234 = 250000;
  v196 = 250000;
  v235 = 250000;
  v197 = 250000;
  v185 = 2000;
  v222 = 2000;
  v188 = 2000;
  v236 = 10000;
  v209 = 80;
  v181 = 80;
  v210 = 15000;
  v182 = 15000;
  v227 = 3;
  v179 = 3;
  v207 = 0;
  v229 = 0;
  v178 = 0;
  v230 = 80;
  v189 = 80;
  v231 = 80000;
  v191 = 80000;
  v4 = *((_DWORD *)this + 761) < 2400;
  v190 = 10000;
  v237 = 60000;
  v192 = 60000;
  v238 = 60000;
  v194 = 60000;
  v240 = 30000;
  v199 = 30000;
  v243 = 30000;
  v202 = 30000;
  v198 = 1;
  v167 = 1;
  v163 = 1;
  v166 = 1;
  v239 = 15000;
  v203 = 15000;
  v242 = 15000;
  v201 = 15000;
  v244 = 80000;
  v208 = 80000;
  v241 = 80;
  v200 = 80;
  v172 = 0;
  v165 = 0;
  if ( v4 )
  {
    v254 = L"UseSelfRefreshVRAMInS3";
    v253 = 288;
    v256 = 67108868;
    v255 = &v167;
    v252 = 0LL;
    v257 = &v198;
    v258 = 4;
    v259 = 0LL;
    v260 = 0;
    v261 = 0LL;
    v262 = 0LL;
    v263 = 0LL;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Power", &v252, 0LL, 0LL);
  }
  else
  {
    v167 = (*((_DWORD *)this + 627) & 0x1000) == 0;
  }
  v264 = 0LL;
  v266 = L"EnableRuntimePowerManagement";
  v267 = &v166;
  v269 = &v163;
  v273 = L"DisableDevicePowerRequired";
  v274 = (int *)&v165;
  v276 = &v172;
  v280 = L"DefaultLatencyToleranceOther";
  v281 = &v174;
  v283 = &v245;
  v287 = L"DefaultExpectedResidency";
  v288 = &v175;
  v290 = &v246;
  v294 = L"DefaultLatencyToleranceIdle0";
  v295 = &v181;
  v297 = &v209;
  v301 = L"DefaultLatencyToleranceIdle1";
  v302 = &v182;
  v304 = &v210;
  v308 = L"DefaultLatencyToleranceNoContext";
  v309 = &v183;
  v311 = &v211;
  v315 = L"DefaultLatencyToleranceIdle0MonitorOff";
  v316 = &v185;
  v318 = &v212;
  v265 = 288;
  v268 = 67108868;
  v270 = 4;
  v271 = 0LL;
  v272 = 288;
  v275 = 67108868;
  v277 = 4;
  v278 = 0LL;
  v279 = 288;
  v282 = 67108868;
  v284 = 4;
  v285 = 0LL;
  v286 = 288;
  v289 = 67108868;
  v291 = 4;
  v292 = 0LL;
  v293 = 288;
  v296 = 67108868;
  v298 = 4;
  v299 = 0LL;
  v300 = 288;
  v303 = 67108868;
  v305 = 4;
  v306 = 0LL;
  v307 = 288;
  v310 = 67108868;
  v312 = 4;
  v313 = 0LL;
  v314 = 288;
  v317 = 67108868;
  v319 = 4;
  v320 = 0LL;
  v321 = 288;
  v322 = L"DefaultLatencyToleranceIdle1MonitorOff";
  v323 = &v186;
  v325 = &v213;
  v329 = L"DefaultLatencyToleranceNoContextMonitorOff";
  v330 = &v187;
  v332 = &v214;
  v336 = L"DefaultLatencyToleranceTimerPeriod";
  v337 = &v180;
  v339 = &v215;
  v343 = L"DefaultIdleThresholdIdle0";
  v344 = &v184;
  v346 = &v216;
  v350 = L"DefaultIdleThresholdIdle0MonitorOff";
  v351 = &v217;
  v353 = &v218;
  v357 = L"MonitorLatencyTolerance";
  v358 = &v205;
  v360 = &v219;
  v364 = L"MonitorRefreshLatencyTolerance";
  v365 = &v204;
  v367 = &v220;
  v371 = L"DefaultPowerNotRequiredTimeout";
  v372 = &v206;
  v374 = &v221;
  v324 = 67108868;
  v326 = 4;
  v327 = 0LL;
  v328 = 288;
  v331 = 67108868;
  v333 = 4;
  v334 = 0LL;
  v335 = 288;
  v338 = 67108868;
  v340 = 4;
  v341 = 0LL;
  v342 = 288;
  v345 = 67108868;
  v347 = 4;
  v348 = 0LL;
  v349 = 288;
  v352 = 67108868;
  v354 = 4;
  v355 = 0LL;
  v356 = 288;
  v359 = 67108868;
  v361 = 4;
  v362 = 0LL;
  v363 = 288;
  v366 = 67108868;
  v368 = 4;
  v369 = 0LL;
  v370 = 288;
  v373 = 67108868;
  v375 = 4;
  v376 = 0LL;
  v377 = 288;
  v380 = 67108868;
  v378 = L"DefaultActiveIdleThreshold";
  v379 = &v188;
  v381 = &v222;
  v385 = L"ulow";
  v386 = &v171;
  v388 = &v223;
  v392 = L"uhigh";
  v393 = &v170;
  v395 = &v224;
  v399 = L"uglitch";
  v400 = &v169;
  v402 = &v225;
  v406 = L"uideal";
  v407 = &v168;
  v409 = &v226;
  v413 = L"lowdebounce";
  v414 = &v179;
  v416 = &v227;
  v420 = L"EnablePODebounce";
  v421 = &v207;
  v423 = &v228;
  v427 = L"DisablePStateManagement";
  v428 = &v178;
  v430 = &v229;
  v382 = 4;
  v383 = 0LL;
  v384 = 288;
  v387 = 67108868;
  v389 = 4;
  v390 = 0LL;
  v391 = 288;
  v394 = 67108868;
  v396 = 4;
  v397 = 0LL;
  v398 = 288;
  v401 = 67108868;
  v403 = 4;
  v404 = 0LL;
  v405 = 288;
  v408 = 67108868;
  v410 = 4;
  v411 = 0LL;
  v412 = 288;
  v415 = 67108868;
  v417 = 4;
  v418 = 0LL;
  v419 = 288;
  v422 = 67108868;
  v424 = 4;
  v425 = 0LL;
  v426 = 288;
  v429 = 67108868;
  v431 = 4;
  v432 = 0LL;
  v433 = 288;
  v434 = L"DefaultD3TransitionLatencyActivelyUsed";
  v435 = &v189;
  v437 = &v230;
  v441 = L"DefaultD3TransitionLatencyIdleShortTime";
  v442 = &v191;
  v444 = &v231;
  v448 = L"DefaultD3TransitionLatencyIdleLongTime";
  v449 = &v193;
  v451 = &v232;
  v455 = L"DefaultD3TransitionLatencyIdleVeryLongTime";
  v456 = &v195;
  v458 = &v233;
  v462 = L"DefaultD3TransitionLatencyIdleNoContext";
  v463 = &v196;
  v465 = &v234;
  v469 = L"DefaultD3TransitionLatencyIdleMonitorOff";
  v470 = &v197;
  v472 = &v235;
  v476 = L"DefaultD3TransitionIdleShortTimeThreshold";
  v477 = &v190;
  v479 = &v236;
  v483 = L"DefaultD3TransitionIdleLongTimeThreshold";
  v484 = &v192;
  v486 = &v237;
  v490 = L"DefaultD3TransitionIdleVeryLongTimeThreshold";
  v436 = 67108868;
  v438 = 4;
  v439 = 0LL;
  v440 = 288;
  v443 = 67108868;
  v445 = 4;
  v446 = 0LL;
  v447 = 288;
  v450 = 67108868;
  v452 = 4;
  v453 = 0LL;
  v454 = 288;
  v457 = 67108868;
  v459 = 4;
  v460 = 0LL;
  v461 = 288;
  v464 = 67108868;
  v466 = 4;
  v467 = 0LL;
  v468 = 288;
  v471 = 67108868;
  v473 = 4;
  v474 = 0LL;
  v475 = 288;
  v478 = 67108868;
  v480 = 4;
  v481 = 0LL;
  v482 = 288;
  v485 = 67108868;
  v487 = 4;
  v488 = 0LL;
  v489 = 288;
  v492 = 67108868;
  v491 = &v194;
  v496 = 288;
  v493 = &v238;
  v499 = 67108868;
  v497 = L"DefaultLatencyToleranceMemory";
  v503 = 288;
  v498 = &v203;
  v500 = &v239;
  v504 = L"DefaultLatencyToleranceMemoryNoContext";
  v505 = &v199;
  v507 = &v240;
  v511 = L"DefaultMemoryRefreshLatencyToleranceActivelyUsed";
  v512 = &v200;
  v514 = &v241;
  v518 = L"DefaultMemoryRefreshLatencyToleranceIdleShortTime";
  v519 = &v201;
  v521 = &v242;
  v525 = L"DefaultMemoryRefreshLatencyToleranceNoContext";
  v526 = &v202;
  v528 = &v243;
  v532 = L"DefaultMemoryRefreshLatencyToleranceMonitorOff";
  v533 = &v208;
  v506 = 67108868;
  v510 = 288;
  v513 = 67108868;
  v517 = 288;
  v520 = 67108868;
  v524 = 288;
  v527 = 67108868;
  v531 = 288;
  v534 = 67108868;
  v535 = &v244;
  v494 = 4;
  v495 = 0LL;
  v501 = 4;
  v502 = 0LL;
  v508 = 4;
  v509 = 0LL;
  v515 = 4;
  v516 = 0LL;
  v522 = 4;
  v523 = 0LL;
  v529 = 4;
  v530 = 0LL;
  v536 = 4;
  v537 = 0LL;
  v538 = 0;
  v539 = 0LL;
  v540 = 0LL;
  v541 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v264, 0LL, 0LL);
  if ( *((int *)this + 761) < 2400 )
  {
    v5 = *((_QWORD *)this + 27);
    v177 = 0LL;
    if ( (int)DpiGetPnpRegistryKeyName(v5, 2, (__int64 *)&v177) >= 0
      && (int)RtlStringCbCopyW((char *)v543, 0x208uLL, *((char **)v177 + 1)) >= 0
      && (int)RtlStringCbCatW(v543, v6, (char *)L"\\DxgkSettings") >= 0 )
    {
      v252 = 0LL;
      v253 = 288;
      v254 = L"UseSelfRefreshVRAMInS3";
      v256 = 67108868;
      v255 = &v167;
      v258 = 4;
      v257 = &v198;
      v259 = 0LL;
      v260 = 0;
      v261 = 0LL;
      v262 = 0LL;
      v263 = 0LL;
      RtlQueryRegistryValuesEx(0LL, v543, &v252, 0LL, 0LL);
    }
  }
  if ( !v166 )
    return 0LL;
  v7 = !v167;
  *((_BYTE *)this + 204) = v165 != 0;
  *((_BYTE *)this + 207) = !v7;
  v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 40LL) + 28LL);
  if ( v8 < 0x5019 )
    NumDifferentPhysicalAdapters = 1;
  else
    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(this);
  v163 = NumDifferentPhysicalAdapters;
  v10 = 0;
  LODWORD(v164) = 0;
  v11 = 0LL;
  while ( v10 < NumDifferentPhysicalAdapters )
  {
    *(_QWORD *)&ObjectAttributes.Attributes = &v542[(unsigned int)v11];
    memset(&ObjectAttributes, 0, 24);
    ObjectAttributes.Length = 6;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(ObjectAttributes.SecurityDescriptor) = 4;
    if ( DXGADAPTER::IsDxgmms2(this) && v8 >= 0x5019 )
    {
      LODWORD(ObjectAttributes.ObjectName) = 4;
      ObjectAttributes.RootDirectory = &v164;
    }
    AdapterInfo = DXGADAPTER::DdiQueryAdapterInfo(v12, (struct _DXGKARG_QUERYADAPTERINFO *)&ObjectAttributes);
    v14 = AdapterInfo;
    if ( AdapterInfo < 0 )
    {
      WdLogSingleEntry2(2LL, this, AdapterInfo);
      WdLogGlobalForLineNumber = 4946;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DdiQueryAdapterInfo failed. Adapter: 0x%p Status: 0x%I64x",
        (__int64)this,
        v14,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v14;
    }
    v3 += v542[(unsigned int)v164];
    v10 = v164 + 1;
    LODWORD(v164) = v10;
    v11 = v10;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    McTemplateK0pqq_EtwWriteTransfer(v11, (__int64)&Dxgk_PowerManagementComponents);
  if ( !v3 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 4961;
    return 0LL;
  }
  if ( v3 > 0xFFFF )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4967;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Miniport returned invalid number of power components:0x%I64x",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v14) = -1073741811;
    goto LABEL_213;
  }
  *((_DWORD *)this + 852) = v3;
  v18 = 520LL * v3;
  if ( !is_mul_ok(v3, 0x208uLL) )
    v18 = -1LL;
  v19 = operator new[](v18, 0x4B677844u, 64LL);
  *((_QWORD *)this + 408) = v19;
  if ( !v19 )
  {
    WdLogSingleEntry1(6LL);
    v20 = L"Adapter 0x%I64x: Out of memory allocating m_pPowerComponents";
    WdLogGlobalForLineNumber = 4977;
LABEL_36:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v20, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    LODWORD(v14) = -1073741801;
    goto LABEL_213;
  }
  v21 = operator new[](312 * v3 + 160, 0x4B677844u, 256LL);
  v22 = (char *)v21;
  if ( !v21 )
  {
    WdLogSingleEntry1(6LL);
    v20 = L"Adapter 0x%I64x: Out of memory allocating pRegistrationInfo";
    WdLogGlobalForLineNumber = 4994;
    goto LABEL_36;
  }
  *(_DWORD *)v21 = 3;
  *(_QWORD *)(v21 + 8) = 2LL;
  v23 = 0;
  *(_DWORD *)(v21 + 96) = v3;
  *(_QWORD *)(v21 + 64) = DxgkPowerRuntimeDeviceDirectedPowerUpCallback;
  *(_QWORD *)(v21 + 88) = this;
  v247 = v21 + 56LL * v3 + 104;
  *(_QWORD *)(v21 + 72) = DxgkPowerRuntimeDeviceDirectedPowerDownCallback;
  v24 = 0;
  v173 = 0;
  *(_QWORD *)(v21 + 32) = DxgkPowerRuntimeComponentIdleStateCallback;
  *(_QWORD *)(v21 + 16) = DxgkPowerRuntimeComponentActiveCallback;
  *(_QWORD *)(v21 + 24) = DxgkPowerRuntimeComponentIdleCallback;
  *(_QWORD *)(v21 + 40) = DxgkPowerRuntimeDevicePowerRequiredCallback;
  *(_QWORD *)(v21 + 48) = DxgkPowerRuntimeDevicePowerNotRequiredCallback;
  *(_QWORD *)(v21 + 56) = DxgkPowerRuntimeControlCallback;
  v177 = (void *)(v21 + 56LL * v3 + 104 + 192LL * v3);
  v25 = 0LL;
  memset(&v249, 0, sizeof(v249));
  v26 = 0;
  v249.Type = DXGKQAITYPE_POWERCOMPONENTINFO;
  v249.InputDataSize = 4;
  v249.OutputDataSize = 336;
  while ( 1 )
  {
    v172 = v26;
    v166 = v25;
    if ( (unsigned int)v25 >= NumDifferentPhysicalAdapters )
      break;
    v251 = v25;
    v27 = 0;
    *((_WORD *)this + v25 + 1640) = v24;
    while ( 1 )
    {
      v165 = v27;
      if ( v27 >= v542[v25] )
        break;
      v164 = 56LL * v24;
      v176 = v26 + v27;
      v249.pInputData = &v176;
      v28 = *((_QWORD *)this + 408);
      v250 = 520LL * v24;
      v249.pOutputData = (void *)(v28 + 8 + v250);
      v29 = DXGADAPTER::DdiQueryAdapterInfo(this, &v249);
      v14 = v29;
      if ( v29 < 0 )
      {
        WdLogSingleEntry2(2LL, v24, v29);
        WdLogGlobalForLineNumber = 5061;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miniport failed QueryAdapterInfo(DXGKQAITYPE_POWERCOMPONENTINFO). Component: 0x%I64x, Status: 0x%I64x",
          v24,
          v14,
          0LL,
          0LL,
          0LL);
        goto LABEL_212;
      }
      v30 = v250;
      v31 = v165;
      *(_DWORD *)(v250 + *((_QWORD *)this + 408)) = v24;
      *(_WORD *)(*((_QWORD *)this + 408) + v30 + 4) = v31;
      *(_WORD *)(*((_QWORD *)this + 408) + v30 + 6) = v166;
      v32 = v30 + *((_QWORD *)this + 408);
      v33 = v164;
      *(_DWORD *)&v22[v164 + 132] = *(_DWORD *)(v32 + 8);
      if ( (unsigned int)(*(_DWORD *)(v32 + 8) - 1) > 7 )
      {
        WdLogSingleEntry3(2LL, v24, *(unsigned int *)(v32 + 8), 0LL);
        v48 = *(unsigned int *)(v32 + 8);
        WdLogGlobalForLineNumber = 5075;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Miniport returned invalid number of F states for component:0x%I64x 0x%I64x",
          v24,
          v48,
          0LL,
          0LL,
          0LL);
        goto LABEL_104;
      }
      *(_OWORD *)&v22[v33 + 104] = *(_OWORD *)(v32 + 220);
      *(_BYTE *)(v32 + 275) = 0;
      v34 = *(_DWORD *)(v32 + 216);
      if ( v34 >= 0x20 )
      {
        WdLogSingleEntry2(2LL, v24, 2LL);
        WdLogGlobalForLineNumber = 5089;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Reserved flags are not zero. Component:0x%I64x",
          v24,
          2LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_104;
      }
      v35 = v33;
      if ( (v34 & 4) != 0 )
        *(_QWORD *)&v22[v33 + 120] |= 1uLL;
      if ( !v207 )
        *(_QWORD *)&v22[v33 + 120] |= 2uLL;
      if ( (*(_DWORD *)(v32 + 216) & 0x10) != 0 )
      {
        v36 = *(_DWORD *)(v32 + 208);
        if ( v36 != 3 && v36 != 7 )
        {
          WdLogSingleEntry1(2LL);
          v37 = L"Power component ActiveInD3 flag can only be used with DXGK_POWER_COMPONENT_MEMORY and DXGK_POWER_COMPONE"
                 "NT_SHARED. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5108;
          goto LABEL_93;
        }
        if ( *(_DWORD *)(v32 + 8) != 2 )
        {
          WdLogSingleEntry1(2LL);
          v37 = L"F state count must be 2 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5114;
          goto LABEL_93;
        }
        if ( *(_QWORD *)(v32 + 40) )
        {
          WdLogSingleEntry1(2LL);
          v37 = L"TransitionLatency for the F1 state must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5120;
          goto LABEL_93;
        }
        if ( *(_DWORD *)(v32 + 276) )
        {
          WdLogSingleEntry1(2LL);
          v37 = L"Provider count must be 0 when the ActiveInD3 flag is set. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5126;
LABEL_93:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v37, v24, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_94;
        }
      }
      else if ( *(_DWORD *)(v32 + 276) > 0x10u )
      {
        WdLogSingleEntry2(2LL, v24, 3LL);
        WdLogGlobalForLineNumber = 5134;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid component ProviderCount. Component:0x%I64x",
          v24,
          3LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_94;
      }
      v38 = *(_DWORD *)(v32 + 208);
      if ( v38 == 4 )
      {
        if ( *((_DWORD *)this + 854) != -1 )
        {
          WdLogSingleEntry1(2LL);
          v37 = L"DXGK_POWER_COMPONENT_MEMORY_REFRESH component is defined second time. Component:0x%I64x";
          WdLogGlobalForLineNumber = 5174;
          goto LABEL_93;
        }
        *((_DWORD *)this + 854) = v24;
      }
      else if ( v38 == 6 )
      {
        if ( *((_DWORD *)this + 853) == -1 )
        {
          *((_DWORD *)this + 853) = v24;
          *((_QWORD *)this + 453) = *((_QWORD *)this + 408) + 520LL * v24;
          if ( *(_DWORD *)(v32 + 8) == 2 )
          {
            *((_BYTE *)this + 3704) = 1;
          }
          else if ( *(_DWORD *)(v32 + 8) > 2u )
          {
            WdLogSingleEntry1(2LL);
            v37 = L"F state count for the DXGK_POWER_COMPONENT_D3_TRANSITION component must be 1 or 2. Component:0x%I64x";
            WdLogGlobalForLineNumber = 5164;
            goto LABEL_93;
          }
        }
        else
        {
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 5148;
        }
      }
      v39 = v177;
      *(_DWORD *)&v22[v35 + 144] = *(_DWORD *)(v32 + 276);
      memmove(v39, (const void *)(v32 + 280), 4LL * *(unsigned int *)(v32 + 276));
      v40 = (char *)v177;
      v41 = v247;
      *(_QWORD *)&v22[v35 + 152] = v177;
      v42 = *(unsigned int *)(v32 + 276);
      *(_QWORD *)&v22[v35 + 136] = v41;
      v43 = 0;
      v177 = &v40[4 * v42];
      while ( v43 < *(_DWORD *)(v32 + 8) )
      {
        *(_QWORD *)v41 = *(_QWORD *)(v32 + 24LL * v43 + 16);
        *(_QWORD *)(v41 + 8) = *(_QWORD *)(v32 + 24LL * v43 + 24);
        *(_DWORD *)(v41 + 16) = *(_DWORD *)(v32 + 24LL * v43 + 32);
        if ( *(_QWORD *)(v32 + 24LL * v43 + 16) == -1LL )
          *(_QWORD *)v41 = -1LL;
        if ( *(_QWORD *)(v32 + 24LL * v43 + 24) == -1LL )
          *(_QWORD *)(v41 + 8) = -1LL;
        if ( *(_DWORD *)(v32 + 24LL * v43 + 32) == -1 )
          *(_DWORD *)(v41 + 16) = -1;
        if ( v43 )
        {
          v44 = *(_DWORD *)(v32 + 24LL * v43 + 32);
          if ( v44 != -1 )
          {
            v45 = *(_DWORD *)(v32 + 24 * (v43 - 1 + 1LL) + 8);
            if ( v45 != -1 && v44 > v45 )
            {
              WdLogSingleEntry2(2LL, v24, 5LL);
              WdLogGlobalForLineNumber = 5238;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"NominalPower must be decreasing for higher F states. Component:0x%I64x",
                v24,
                5LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_94;
            }
          }
          v46 = *(_QWORD *)(v32 + 24LL * v43 + 16);
          if ( v46 != -1LL )
          {
            v47 = *(_QWORD *)(v32 + 24LL * (v43 - 1) + 16);
            if ( v47 != -1LL && v46 < v47 )
            {
              WdLogSingleEntry2(2LL, v24, 6LL);
              WdLogGlobalForLineNumber = 5246;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"TransitionLatency must be increasing for higher F states. Component:0x%I64x",
                v24,
                6LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_94;
            }
          }
        }
        else
        {
          if ( ((*(_QWORD *)(v32 + 16) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
            || ((*(_QWORD *)(v32 + 24) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          {
            WdLogSingleEntry2(2LL, v24, 3LL);
            WdLogGlobalForLineNumber = 5221;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"TransitionLatency and ResidencyRequirement must be zero for the F0 state. Component:0x%I64x",
              v24,
              3LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_94;
          }
          if ( !*(_DWORD *)(v32 + 32) )
          {
            WdLogSingleEntry2(2LL, v24, 4LL);
            WdLogGlobalForLineNumber = 5227;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"NominalPower must not be zero for the F0 state. Component:0x%I64x",
              v24,
              4LL,
              0LL,
              0LL,
              0LL);
            goto LABEL_94;
          }
        }
        v41 += 24LL;
        v247 = v41;
        ++v43;
      }
      v7 = *(_DWORD *)(v32 + 208) == 0;
      v23 = v173;
      if ( v7 )
        v23 = ++v173;
      v26 = v172;
      v27 = v165 + 1;
      v25 = v251;
      ++v24;
    }
    NumDifferentPhysicalAdapters = v163;
    v25 = (unsigned int)(v166 + 1);
    v26 += 0x10000;
  }
  if ( *((_DWORD *)this + 854) == -1 && !*((_BYTE *)this + 3704) )
    *((_QWORD *)this + 453) = 0LL;
  if ( *((int *)this + 761) < 1300 || !v23 || v178 )
  {
LABEL_152:
    v84 = (ADAPTER_RENDER *)*((_QWORD *)this + 396);
    *((_DWORD *)this + 924) = v180;
    if ( v84 )
    {
      v85 = ADAPTER_RENDER::InitializePowerManagement(v84);
      v14 = v85;
      if ( v85 < 0 )
      {
        v86 = 7LL;
        WdLogSingleEntry2(2LL, v85, 7LL);
        v87 = L"InitializePowerManagement failed for render adapter:0x%I64x";
        WdLogGlobalForLineNumber = 5455;
LABEL_211:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v87, v14, v86, 0LL, 0LL, 0LL);
        goto LABEL_212;
      }
    }
    v88 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 395);
    if ( v88 )
    {
      v89 = ADAPTER_DISPLAY::InitializePowerManagement(v88);
      v14 = v89;
      if ( v89 < 0 )
      {
        v86 = 8LL;
        WdLogSingleEntry2(2LL, v89, 8LL);
        v87 = L"InitializePowerManagement failed for display adapter:0x%I64x";
        WdLogGlobalForLineNumber = 5465;
        goto LABEL_211;
      }
    }
    v90 = PoFxRegisterDevice(*((_QWORD *)this + 27), v22, (char *)this + 3272);
    v14 = v90;
    if ( v90 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5473;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"PoFxRegisterDevice failed with status:0x%I64x",
        v14,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_212;
    }
    KeInitializeEvent((PRKEVENT)this + 143, SynchronizationEvent, 0);
    *((_QWORD *)this + 465) = (char *)this + 3712;
    *((_QWORD *)this + 464) = (char *)this + 3712;
    *((_BYTE *)this + 3700) = 0;
    TimeIncrement = KeQueryTimeIncrement();
    v92 = v181;
    v93 = TimeIncrement;
    *((_QWORD *)this + 435) = 0LL;
    *((_QWORD *)this + 437) = 0LL;
    *((_QWORD *)this + 441) = 0LL;
    *((_QWORD *)this + 443) = 0LL;
    *((_QWORD *)this + 432) = 10 * v92;
    v94 = v183;
    *((_QWORD *)this + 434) = 10LL * v182;
    v95 = 10000LL * v184;
    *((_QWORD *)this + 436) = 10 * v94;
    v96 = (unsigned int)(v95 / v93);
    v97 = v185;
    *((_QWORD *)this + 433) = v96;
    *((_QWORD *)this + 439) = v96;
    v98 = 5 * v97;
    v99 = v186;
    *((_QWORD *)this + 438) = 2 * v98;
    v100 = 5 * v99;
    v101 = v187;
    *((_QWORD *)this + 440) = 2 * v100;
    v102 = 5 * v101;
    v103 = v188;
    *((_QWORD *)this + 442) = 2 * v102;
    *((_QWORD *)this + 444) = (char *)this + 3456;
    v104 = 5 * v103;
    v105 = v189;
    *((_QWORD *)this + 476) = 2 * v104;
    v106 = 10000LL * v190;
    *((_QWORD *)this + 445) = 10 * v105;
    v107 = v191;
    *((_QWORD *)this + 446) = (unsigned int)(v106 / v93);
    v108 = 10000LL * v192;
    *((_QWORD *)this + 447) = 10 * v107;
    v109 = v193;
    *((_QWORD *)this + 448) = (unsigned int)(v108 / v93);
    v110 = 5 * v109;
    v111 = 10000LL * v194;
    *((_QWORD *)this + 449) = 2 * v110;
    v112 = v111;
    v113 = v195;
    *((_QWORD *)this + 450) = (unsigned int)(v112 / v93);
    *((_QWORD *)this + 452) = 0LL;
    v162 = 0;
    v114 = 5 * v113;
    v115 = v196;
    *((_QWORD *)this + 451) = 2 * v114;
    v116 = 5 * v115;
    v117 = v197;
    *((_QWORD *)this + 454) = 2 * v116;
    v118 = 5 * v117;
    v119 = v203;
    *((_QWORD *)this + 455) = 2 * v118;
    v120 = 5 * v119;
    v121 = v199;
    *((_QWORD *)this + 456) = 2 * v120;
    v122 = 5 * v121;
    v123 = v200;
    *((_QWORD *)this + 457) = 2 * v122;
    v124 = 5 * v123;
    v125 = v201;
    *((_QWORD *)this + 458) = 2 * v124;
    v126 = 5 * v125;
    v127 = v202;
    *((_QWORD *)this + 459) = 2 * v126;
    v128 = 5 * v127;
    v129 = v208;
    *((_QWORD *)this + 460) = 2 * v128;
    *((_QWORD *)this + 461) = 10 * v129;
    *((_QWORD *)this + 470) = (char *)this + 3752;
    *((_QWORD *)this + 469) = (char *)this + 3752;
    KeInitializeSpinLock((PKSPIN_LOCK)this + 475);
    v130 = 0LL;
    v163 = 0;
    while ( 1 )
    {
      v131 = *((_QWORD *)this + 408);
      v132 = 520 * v130;
      v133 = 520 * v130 + v131;
      *(_BYTE *)(v133 + 356) = 1;
      v134 = (DXGADAPTER *)(v133 + 424);
      *(_OWORD *)(v133 + 424) = 0LL;
      v135 = *(_DWORD *)(v133 + 208);
      if ( !v135 )
      {
        *(_BYTE *)(v133 + 357) = 1;
        v146 = (DXGADAPTER **)*((_QWORD *)this + 474);
        if ( *v146 != (DXGADAPTER *)((char *)this + 3784) )
LABEL_208:
          __fastfail(3u);
        *(_QWORD *)(v133 + 432) = v146;
        *(_QWORD *)v134 = (char *)this + 3784;
        *v146 = v134;
        v147 = 0LL;
        *((_QWORD *)this + 474) = v134;
        v148 = *(_DWORD *)(v133 + 8);
        if ( v148 > 1 )
        {
          v149 = (unsigned __int64 *)(v133 + 40);
          v150 = v148 - 1;
          do
          {
            v151 = *v149;
            v149 += 3;
            if ( v147 >= v151 )
              v151 = v147;
            v147 = v151;
            --v150;
          }
          while ( v150 );
        }
        *(_DWORD *)(v133 + 388) = 1;
        for ( i = 0; ; ++i )
        {
          if ( i >= 2 )
            goto LABEL_191;
          if ( *((_QWORD *)this + 2 * i + 432) >= v147 )
            break;
        }
        *(_DWORD *)(v133 + 388) = i;
LABEL_191:
        v153 = *(_DWORD *)(v133 + 4);
        *(_DWORD *)(v133 + 384) = 2;
        DXGADAPTER::SetPowerComponentLatencyCB(this, v153, *(_QWORD *)(*((_QWORD *)this + 444) + 32LL));
        ++*((_DWORD *)this + 856);
        goto LABEL_192;
      }
      v136 = v135 - 1;
      if ( !v136 )
        break;
      v137 = v136 - 1;
      if ( !v137 )
      {
        v145 = v204;
LABEL_179:
        v142 = *(_DWORD *)(v133 + 4);
        v143 = 10 * v145;
        v141 = this;
LABEL_170:
        DXGADAPTER::SetPowerComponentLatencyCB(v141, v142, v143);
        goto LABEL_192;
      }
      v138 = v137 - 1;
      if ( !v138 )
      {
        v144 = (DXGADAPTER **)*((_QWORD *)this + 472);
        if ( *v144 != (DXGADAPTER *)((char *)this + 3768) )
          goto LABEL_208;
        *(_QWORD *)v134 = (char *)this + 3768;
        *(_QWORD *)(v133 + 432) = v144;
        *v144 = v134;
        *((_QWORD *)this + 472) = v134;
        if ( (*(_DWORD *)(v133 + 216) & 0x10) != 0 )
          *(_BYTE *)(v133 + 360) = 1;
        goto LABEL_192;
      }
      v139 = v138 - 1;
      if ( v139 )
      {
        v140 = v139 - 2;
        if ( v140 )
        {
          if ( v140 == 1 )
          {
            v162 = 1;
            if ( (*(_DWORD *)(v133 + 216) & 0x10) != 0 )
            {
              *(_BYTE *)(v133 + 360) = 1;
              *(_BYTE *)(v133 + 356) = 0;
              *(_DWORD *)(v133 + 344) = 1;
            }
            goto LABEL_192;
          }
          v141 = this;
          v142 = *(_DWORD *)(v133 + 4);
          if ( v174 == -1 )
            v143 = -1LL;
          else
            v143 = 10LL * v174;
          goto LABEL_170;
        }
      }
LABEL_192:
      if ( v175 == -1 )
        v154 = -1LL;
      else
        v154 = 10000LL * v175;
      DXGADAPTER::SetPowerComponentResidencyCB(this, *(_DWORD *)(v131 + v132 + 4), v154);
      KeInitializeSpinLock((PKSPIN_LOCK)(v133 + 504));
      if ( *(_DWORD *)(v133 + 8) <= 1u || (v155 = *(_QWORD *)(v133 + 48), v155 == -1) )
      {
        v156 = *((_QWORD *)this + 476);
      }
      else
      {
        v156 = *((_QWORD *)this + 476);
        if ( v155 > v156 )
          v156 = *(_QWORD *)(v133 + 48);
      }
      *(_QWORD *)(v133 + 496) = v156;
      v130 = (unsigned int)(v163 + 1);
      v163 = v130;
      if ( (unsigned int)v130 >= v3 )
      {
        DXGADAPTER::UpdateLatencyTolerances(this);
        PoFxSetDeviceIdleTimeout(*((_QWORD *)this + 409), 10LL * v206);
        if ( *((_DWORD *)this + 105) == 1297040209 && *((_DWORD *)this + 694) == 4608 )
        {
          KeInitializeEvent((PRKEVENT)((char *)this + 3952), SynchronizationEvent, 0);
          KeInitializeEvent((PRKEVENT)((char *)this + 3976), SynchronizationEvent, 0);
          KeInitializeEvent((PRKEVENT)((char *)this + 4000), SynchronizationEvent, 0);
          KeInitializeSpinLock((PKSPIN_LOCK)this + 503);
          *((_QWORD *)this + 506) = (char *)this + 4040;
          *((_QWORD *)this + 505) = (char *)this + 4040;
          InitializeSListHead((PSLIST_HEADER)this + 254);
          v157 = 0LL;
          v86 = 8LL;
          v158 = 8LL;
          do
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 254, (PSLIST_ENTRY)((char *)this + v157 + 4096));
            v157 += 32LL;
            --v158;
          }
          while ( v158 );
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v159 = PsCreateSystemThread(
                   (PHANDLE)this + 510,
                   0x1FFFFFu,
                   &ObjectAttributes,
                   0LL,
                   0LL,
                   (PKSTART_ROUTINE)DXGADAPTER::PowerRuntimeComponentIdleStateCallbackThread,
                   this);
          v14 = v159;
          if ( v159 < 0 )
          {
            WdLogSingleEntry2(2LL, v159, 8LL);
            v87 = L"InitializePowerManagement failed to create worker thread for display adapter:0x%I64x";
            WdLogGlobalForLineNumber = 5725;
            goto LABEL_211;
          }
        }
        v160 = DpiEnablePowerManagement(*((_QWORD *)this + 27), *((_QWORD *)this + 409), v162);
        v14 = v160;
        if ( v160 < 0 )
        {
          DXGADAPTER::DestroySerializeFStateTransitWorker(this);
          v86 = 9LL;
          WdLogSingleEntry2(2LL, v14, 9LL);
          v87 = L"Port power management enable failed:0x%I64x";
          WdLogGlobalForLineNumber = 5740;
          goto LABEL_211;
        }
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
        return 0LL;
      }
    }
    v145 = v205;
    goto LABEL_179;
  }
  if ( v171 > 0x3E8 || v170 > 0x3E8 || v169 > 0x3E8 || v168 > 0x3E8 || v171 >= v168 || v168 >= v170 || v170 >= v169 )
  {
    WdLogSingleEntry4(2LL, v171, v170, v169, v168);
    WdLogGlobalForLineNumber = 5295;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"P-State engine regkey validation error - low: 0x%I64x high: 0x%I64x glitch: 0x%I64x ideal: 0x%I64x",
      v171,
      v170,
      v169,
      v168,
      0LL);
    goto LABEL_94;
  }
  v49 = 248LL * v23;
  v249.Type = DXGKQAITYPE_POWERCOMPONENTPSTATEINFO;
  v249.OutputDataSize = 136;
  if ( !is_mul_ok(v23, 0xF8uLL) )
    v49 = -1LL;
  v50 = operator new[](v49, 0x4B677844u, 64LL);
  *((_QWORD *)this + 559) = v50;
  *((_DWORD *)this + 1120) = v23;
  if ( !v50 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 5311;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Adapter 0x%I64x: Out of memory allocating m_NodePStateData",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v14) = -1073741801;
    goto LABEL_212;
  }
  v51 = 0;
  for ( j = 0; v51 < *((_DWORD *)this + 852); ++v51 )
  {
    v53 = *((_QWORD *)this + 408);
    v54 = 520LL * v51;
    if ( !*(_DWORD *)(v54 + v53 + 208) )
      *(_QWORD *)(v54 + v53 + 512) = *((_QWORD *)this + 559) + 248LL * j++;
  }
  v55 = 0;
  *((_DWORD *)this + 1172) = v169;
  v56 = 0;
  *((_DWORD *)this + 1173) = v170;
  *((_DWORD *)this + 1174) = v171;
  *((_DWORD *)this + 1175) = v168;
  *((_DWORD *)this + 1176) = v179;
  v57 = 0;
  while ( 1 )
  {
    LODWORD(v164) = v55;
    if ( v57 >= v3 )
      break;
    v58 = *(_QWORD *)(520LL * v56 + *((_QWORD *)this + 408) + 512);
    if ( v58 )
    {
      v249.pOutputData = *(void **)(520LL * v56 + *((_QWORD *)this + 408) + 512);
      v249.pInputData = &v164;
      v59 = DXGADAPTER::DdiQueryAdapterInfo(this, &v249);
      v62 = v59;
      if ( v59 < 0 )
      {
        v64 = WdLogNewEntry5_WdTrace(v61, v60);
        *(_QWORD *)(v64 + 24) = (unsigned int)v164;
        v65 = 0;
        *(_QWORD *)(v64 + 32) = v62;
        for ( WdLogGlobalForLineNumber = 5361; v65 < *((_DWORD *)this + 852); ++v65 )
        {
          v66 = 520LL * v65;
          v67 = *((_QWORD *)this + 408);
          if ( !*(_DWORD *)(v66 + v67 + 208) )
            *(_QWORD *)(v66 + v67 + 512) = 0LL;
        }
        v68 = (void *)*((_QWORD *)this + 559);
        *((_DWORD *)this + 1120) = 0;
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v68);
        *((_QWORD *)this + 559) = 0LL;
        break;
      }
      v63 = v164;
      *(_QWORD *)(v58 + 136) = this;
      *(_DWORD *)(v58 + 144) = v63;
      *(_QWORD *)(v58 + 152) = v58;
      KeInitializeSpinLock((PKSPIN_LOCK)(v58 + 160));
      *(_BYTE *)(v58 + 240) = 0;
      *(_DWORD *)(v58 + 244) = -1;
      v55 = v164;
    }
    v57 = ++v55;
    v56 = v55;
  }
  v69 = *((_DWORD *)this + 1120);
  v70 = 0;
  v176 = v69;
LABEL_139:
  if ( v70 >= v69 )
    goto LABEL_152;
  v71 = *((_QWORD *)this + 559);
  v72 = v70;
  v73 = 248LL * v70;
  v74 = *(_DWORD *)(v73 + v71);
  v75 = *(unsigned int *)(v73 + v71 + 144);
  if ( v74 > 0x20 )
  {
    v83 = *(unsigned int *)(v73 + v71 + 144);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 5416;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"P-State StateCount cannot be larger than DXGK_MAX_P_STATES. Component:0x%I64x",
      v83,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_94;
  }
  for ( k = 0; ; ++k )
  {
    if ( k >= v74 )
    {
      v69 = v176;
      ++v70;
      goto LABEL_139;
    }
    v77 = 62 * v72;
    v78 = k;
    v79 = *(_DWORD *)(v71 + 4 * (k + v77) + 4);
    if ( !v79 )
    {
      v82 = *(unsigned int *)(v73 + v71 + 144);
      WdLogSingleEntry2(2LL, v75, k);
      WdLogGlobalForLineNumber = 5429;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"P-State cannot specify 0 operating frequency. Component:0x%I64x, P-State:0x%I64x",
        v82,
        v78,
        0LL,
        0LL,
        0LL);
LABEL_94:
      LODWORD(v14) = -1073741811;
      goto LABEL_212;
    }
    if ( k )
    {
      v80 = k - 1;
      if ( v79 > *(_DWORD *)(v71 + 4 * (v77 + v80) + 4) )
        break;
    }
    v72 = v70;
  }
  v81 = *(unsigned int *)(v73 + v71 + 144);
  WdLogSingleEntry3(2LL, v75, k, k - 1);
  WdLogGlobalForLineNumber = 5439;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"P-States must have monotonically decreasing operating frequency. Component:0x%I64x, P-State1:0x%I64x, P-State2:0x%I64x",
    v81,
    v78,
    v80,
    0LL,
    0LL);
LABEL_104:
  LODWORD(v14) = -1073741811;
LABEL_212:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v22);
LABEL_213:
  v161 = *((_QWORD *)this + 409);
  if ( v161 )
  {
    PoFxUnregisterDevice(v161, v16, v17);
    *((_QWORD *)this + 409) = 0LL;
  }
  return (unsigned int)v14;
}
