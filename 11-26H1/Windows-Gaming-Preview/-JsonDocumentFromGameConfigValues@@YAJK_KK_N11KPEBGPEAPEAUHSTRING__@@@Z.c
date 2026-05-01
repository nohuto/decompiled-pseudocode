/*
 * XREFs of ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180014D04
 * Callers:
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A9EC (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003BD14 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     memcmp_0 @ 0x180043364 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall JsonDocumentFromGameConfigValues(
        int a1,
        HSTRING a2,
        int a3,
        char a4,
        bool a5,
        bool a6,
        UINT32 length,
        PCNZWCH sourceString,
        HSTRING *a9)
{
  HRESULT v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  HSTRING v16; // rcx
  HSTRING v17; // rcx
  int v19; // eax
  __int64 v20; // rcx
  HSTRING v21; // rcx
  HRESULT v22; // eax
  int ActivationFactory; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  HSTRING v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  HSTRING v32; // rcx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v35; // rdi
  HRESULT v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  HSTRING v41; // rcx
  __int64 v42; // rbx
  __int64 (__fastcall *v43)(__int64, __int64, __int64 *); // rdi
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  HSTRING v49; // rcx
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v52; // rdi
  HRESULT v53; // eax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  HSTRING v58; // rcx
  __int64 v59; // rbx
  __int64 (__fastcall *v60)(__int64, __int64, __int64 *); // rsi
  __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  HSTRING v66; // rcx
  __int64 v67; // rbx
  __int64 (__fastcall *v68)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v69; // rdi
  HRESULT v70; // eax
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  HSTRING v75; // rcx
  __int64 v76; // rbx
  __int64 (__fastcall *v77)(__int64, __int64, __int64 *); // rdi
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  HSTRING v83; // rcx
  __int64 v84; // rbx
  __int64 (__fastcall *v85)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v86; // rdi
  HRESULT v87; // eax
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rcx
  __int64 v92; // rcx
  HSTRING v93; // rcx
  __int64 v94; // rbx
  __int64 (__fastcall *v95)(__int64, __int64, __int64 *); // rdi
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  HSTRING v101; // rcx
  __int64 v102; // rbx
  __int64 (__fastcall *v103)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v104; // rdi
  HRESULT v105; // eax
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rcx
  __int64 v110; // rcx
  HSTRING v111; // rcx
  __int64 v112; // rbx
  __int64 (__fastcall *v113)(__int64, __int64, __int64 *); // rdi
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  HSTRING v119; // rcx
  __int64 v120; // rbx
  __int64 (__fastcall *v121)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v122; // rdi
  HRESULT v123; // eax
  int v124; // eax
  __int64 v125; // rcx
  __int64 v126; // rcx
  __int64 v127; // rcx
  HSTRING v128; // rcx
  __int64 v129; // rbx
  __int64 (__fastcall *v130)(__int64, __int64, __int64 *); // rdi
  __int64 v131; // rcx
  int v132; // eax
  __int64 v133; // rcx
  __int64 v134; // rcx
  __int64 v135; // rcx
  HSTRING v136; // rcx
  __int64 v137; // rbx
  __int64 (__fastcall *v138)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v139; // rdi
  HRESULT v140; // eax
  int v141; // eax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rcx
  HSTRING v146; // rcx
  __int64 v147; // rbx
  __int64 (__fastcall *v148)(__int64, __int64, __int64 *); // rdi
  __int64 v149; // rcx
  int v150; // eax
  __int64 v151; // rcx
  __int64 v152; // rcx
  __int64 v153; // rcx
  HSTRING v154; // rcx
  __int64 v155; // rbx
  __int64 (__fastcall *v156)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v157; // rdi
  HRESULT v158; // eax
  int v159; // eax
  __int64 v160; // rcx
  __int64 v161; // rcx
  __int64 v162; // rcx
  HSTRING v163; // rcx
  HRESULT v164; // eax
  __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // rcx
  HSTRING v168; // rcx
  __int64 v169; // rbx
  __int64 (__fastcall *v170)(__int64, HSTRING, __int64 *); // rdi
  __int64 v171; // rcx
  int v172; // eax
  __int64 v173; // rcx
  __int64 v174; // rcx
  __int64 v175; // rcx
  HSTRING v176; // rcx
  __int64 v177; // rbx
  __int64 (__fastcall *v178)(__int64, HSTRING, __int64, _BYTE *); // rsi
  __int64 v179; // rdi
  HRESULT v180; // eax
  int v181; // eax
  __int64 v182; // rcx
  __int64 v183; // rcx
  __int64 v184; // rcx
  HSTRING v185; // rcx
  __int64 v186; // rcx
  HSTRING v187; // rbx
  __int64 (__fastcall *v188)(HSTRING, GUID *, __int64 *); // rdi
  __int64 v189; // rcx
  int v190; // eax
  __int64 v191; // rcx
  __int64 v192; // rcx
  __int64 v193; // rcx
  HSTRING v194; // rcx
  int v195; // eax
  __int64 v196; // rcx
  __int64 v197; // rcx
  __int64 v198; // rcx
  HSTRING v199; // rcx
  __int64 v200; // rcx
  __int64 v201; // rcx
  __int64 v202; // rcx
  HSTRING v203; // rcx
  __int64 v204; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v205[8]; // [rsp+38h] [rbp-61h] BYREF
  __int64 v206; // [rsp+40h] [rbp-59h] BYREF
  __int64 v207; // [rsp+48h] [rbp-51h] BYREF
  HSTRING v208; // [rsp+50h] [rbp-49h] BYREF
  HSTRING v209[2]; // [rsp+58h] [rbp-41h] BYREF
  HSTRING *v210; // [rsp+68h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  HSTRING string; // [rsp+88h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+3Fh]

  v209[1] = a2;
  v210 = a9;
  v208 = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Data.Json.JsonObject", 0x1Cu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
LABEL_283:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
LABEL_284:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v22);
    goto LABEL_285;
  }
  v208 = 0LL;
  v209[0] = 0LL;
  v14 = RoActivateInstance(string, v209);
  if ( (v14 & 0x80000000) == 0 )
  {
    v15 = memcmp_0(&GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, 0x10uLL);
    v16 = v209[0];
    if ( !v15 )
    {
      v208 = v209[0];
      goto LABEL_7;
    }
    v14 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, HSTRING *))v209[0])(
            v209[0],
            &GUID_064e24dd_29c2_4f83_9ac1_9ee11578beb3,
            &v208);
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v209[0] + 16LL))(v209[0]);
  }
  v16 = v208;
LABEL_7:
  if ( (v14 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)v14);
    v17 = v208;
    if ( v208 )
    {
      v208 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v14;
  }
  v207 = 0LL;
  v19 = (**(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v16)(
          v16,
          &GUID_c9d9a725_786b_5113_b4b7_9b61764c220b,
          &v207);
  v14 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v19);
    v20 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v208;
    if ( v208 )
    {
      v208 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v14;
  }
  v206 = 0LL;
  string = 0LL;
  v22 = WindowsCreateStringReference(L"Windows.Data.Json.JsonValue", 0x1Bu, &hstringHeader, &string);
  if ( v22 < 0 )
    goto LABEL_284;
  ActivationFactory = RoGetActivationFactory(string, &GUID_5f6b544a_2f53_48e1_91a3_f78b50a6345c, &v206);
  v14 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v25 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    v26 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = v208;
    if ( v208 )
    {
      v208 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v14;
  }
  v204 = 0LL;
  v205[0] = 0;
  if ( a3 )
  {
    v28 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 72LL))(v206, v24, &v204);
    v14 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x266,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v28);
      v29 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      v31 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v32 + 16LL))(v32);
      }
      return v14;
    }
    v33 = v207;
    v34 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v35 = v204;
    string = 0LL;
    v36 = WindowsCreateStringReference(L"MaxCpuCount", 0xBu, &hstringHeader, &string);
    if ( v36 < 0 )
    {
LABEL_285:
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v36);
      __debugbreak();
    }
    v37 = v34(v33, string, v35, v205);
    v14 = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x267,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v37);
      v38 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      }
      v40 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
      }
      v41 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v41 + 16LL))(v41);
      }
      return v14;
    }
  }
  if ( a4 )
  {
    v42 = v206;
    v43 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 64LL);
    v44 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    }
    LOBYTE(v24) = !a5;
    v45 = v43(v42, v24, &v204);
    v14 = v45;
    if ( v45 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v45);
      v46 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
      }
      v47 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
      v48 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
      }
      v49 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v49 + 16LL))(v49);
      }
      return v14;
    }
    v50 = v207;
    v51 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v52 = v204;
    string = 0LL;
    v53 = WindowsCreateStringReference(L"AffinitizeToExclusiveCpus", 0x19u, &hstringHeader, &string);
    if ( v53 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v53);
      __debugbreak();
    }
    v54 = v51(v50, string, v52, v205);
    v14 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v54);
      v55 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      v56 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
      }
      v57 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
      }
      v58 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v58 + 16LL))(v58);
      }
      return v14;
    }
  }
  if ( a6 )
  {
    v59 = v206;
    v60 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 64LL);
    v61 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v61 + 16LL))(v61);
    }
    LOBYTE(v24) = a6;
    v62 = v60(v59, v24, &v204);
    v14 = v62;
    if ( v62 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v62);
      v63 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      }
      v64 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
      v65 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      }
      v66 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v66 + 16LL))(v66);
      }
      return v14;
    }
    v67 = v207;
    v68 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v69 = v204;
    string = 0LL;
    v70 = WindowsCreateStringReference(L"AutoGameModeEnabled", 0x13u, &hstringHeader, &string);
    if ( v70 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v70);
      __debugbreak();
    }
    v71 = v68(v67, string, v69, v205);
    v14 = v71;
    if ( v71 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x273,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v71);
      v72 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      }
      v73 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
      }
      v74 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
      }
      v75 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v75 + 16LL))(v75);
      }
      return v14;
    }
  }
  if ( a1 )
  {
    v76 = v206;
    v77 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 72LL);
    v78 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
    }
    v79 = v77(v76, v24, &v204);
    v14 = v79;
    if ( v79 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x278,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v79);
      v80 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
      }
      v81 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
      }
      v82 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
      }
      v83 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v83 + 16LL))(v83);
      }
      return v14;
    }
    v84 = v207;
    v85 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v86 = v204;
    string = 0LL;
    v87 = WindowsCreateStringReference(L"PercentGpuTimeAllocatedToGame", 0x1Du, &hstringHeader, &string);
    if ( v87 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v87);
      __debugbreak();
    }
    v88 = v85(v84, string, v86, v205);
    v14 = v88;
    if ( v88 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x279,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v88);
      v90 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 16LL))(v90);
      }
      v91 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
      }
      v92 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
      }
      v93 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v93 + 16LL))(v93);
      }
      return v14;
    }
    v94 = v206;
    v95 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 72LL);
    v96 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v96 + 16LL))(v96);
    }
    v97 = v95(v94, v89, &v204);
    v14 = v97;
    if ( v97 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v97);
      v98 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v98 + 16LL))(v98);
      }
      v99 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v99 + 16LL))(v99);
      }
      v100 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v100 + 16LL))(v100);
      }
      v101 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v101 + 16LL))(v101);
      }
      return v14;
    }
    v102 = v207;
    v103 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v104 = v204;
    string = 0LL;
    v105 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToGame", 0x1Fu, &hstringHeader, &string);
    if ( v105 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v105);
      __debugbreak();
    }
    v106 = v103(v102, string, v104, v205);
    v14 = v106;
    if ( v106 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27C,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v106);
      v108 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v108 + 16LL))(v108);
      }
      v109 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
      }
      v110 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v110 + 16LL))(v110);
      }
      v111 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v111 + 16LL))(v111);
      }
      return v14;
    }
    v112 = v206;
    v113 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 72LL);
    v114 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v114 + 16LL))(v114);
    }
    v115 = v113(v112, v107, &v204);
    v14 = v115;
    if ( v115 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v115);
      v116 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v116 + 16LL))(v116);
      }
      v117 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v117 + 16LL))(v117);
      }
      v118 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v118 + 16LL))(v118);
      }
      v119 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v119 + 16LL))(v119);
      }
      return v14;
    }
    v120 = v207;
    v121 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v122 = v204;
    string = 0LL;
    v123 = WindowsCreateStringReference(L"PercentGpuMemoryAllocatedToSystemCompositor", 0x2Bu, &hstringHeader, &string);
    if ( v123 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v123);
      __debugbreak();
    }
    v124 = v121(v120, string, v122, v205);
    v14 = v124;
    if ( v124 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v124);
      v125 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v125 + 16LL))(v125);
      }
      v126 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v126 + 16LL))(v126);
      }
      v127 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v127 + 16LL))(v127);
      }
      v128 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v128 + 16LL))(v128);
      }
      return v14;
    }
  }
  if ( a2 )
  {
    v129 = v206;
    v130 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 72LL);
    v131 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v131 + 16LL))(v131);
    }
    v132 = v130(v129, v24, &v204);
    v14 = v132;
    if ( v132 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x287,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v132);
      v133 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v133 + 16LL))(v133);
      }
      v134 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v134 + 16LL))(v134);
      }
      v135 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v135 + 16LL))(v135);
      }
      v136 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v136 + 16LL))(v136);
      }
      return v14;
    }
    v137 = v207;
    v138 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v139 = v204;
    string = 0LL;
    v140 = WindowsCreateStringReference(L"CpuExclusivityMaskLow", 0x15u, &hstringHeader, &string);
    if ( v140 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v140);
      __debugbreak();
    }
    v141 = v138(v137, string, v139, v205);
    v14 = v141;
    if ( v141 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x288,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v141);
      v143 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v143 + 16LL))(v143);
      }
      v144 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v144 + 16LL))(v144);
      }
      v145 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v145 + 16LL))(v145);
      }
      v146 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v146 + 16LL))(v146);
      }
      return v14;
    }
    v147 = v206;
    v148 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v206 + 72LL);
    v149 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v149 + 16LL))(v149);
    }
    v150 = v148(v147, v142, &v204);
    v14 = v150;
    if ( v150 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28A,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v150);
      v151 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v151 + 16LL))(v151);
      }
      v152 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v152 + 16LL))(v152);
      }
      v153 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v153 + 16LL))(v153);
      }
      v154 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v154 + 16LL))(v154);
      }
      return v14;
    }
    v155 = v207;
    v156 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v157 = v204;
    string = 0LL;
    v158 = WindowsCreateStringReference(L"CpuExclusivityMaskHigh", 0x16u, &hstringHeader, &string);
    if ( v158 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v158);
      JUMPOUT(0x18001626ELL);
    }
    v159 = v156(v155, string, v157, v205);
    v14 = v159;
    if ( v159 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28B,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v159);
      v160 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v160 + 16LL))(v160);
      }
      v161 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v161 + 16LL))(v161);
      }
      v162 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v162 + 16LL))(v162);
      }
      v163 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v163 + 16LL))(v163);
      }
      return v14;
    }
  }
  if ( sourceString && length )
  {
    v209[0] = 0LL;
    WindowsDeleteString(0LL);
    v209[0] = 0LL;
    v164 = WindowsCreateString(sourceString, length, v209);
    v14 = v164;
    if ( v164 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x291,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v164);
      WindowsDeleteString(v209[0]);
      v209[0] = 0LL;
      v165 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v165 + 16LL))(v165);
      }
      v166 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v166 + 16LL))(v166);
      }
      v167 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v167 + 16LL))(v167);
      }
      v168 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v168 + 16LL))(v168);
      }
      return v14;
    }
    v169 = v206;
    v170 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v206 + 80LL);
    v171 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v171 + 16LL))(v171);
    }
    v172 = v170(v169, v209[0], &v204);
    v14 = v172;
    if ( v172 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x293,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v172);
      WindowsDeleteString(v209[0]);
      v209[0] = 0LL;
      v173 = v204;
      if ( v204 )
      {
        v204 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v173 + 16LL))(v173);
      }
      v174 = v206;
      if ( v206 )
      {
        v206 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v174 + 16LL))(v174);
      }
      v175 = v207;
      if ( v207 )
      {
        v207 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v175 + 16LL))(v175);
      }
      v176 = v208;
      if ( v208 )
      {
        v208 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v176 + 16LL))(v176);
      }
      return v14;
    }
    v177 = v207;
    v178 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64, _BYTE *))(*(_QWORD *)v207 + 80LL);
    v179 = v204;
    string = 0LL;
    v180 = WindowsCreateStringReference(L"RelatedProcessNames", 0x13u, &hstringHeader, &string);
    if ( v180 >= 0 )
    {
      v181 = v178(v177, string, v179, v205);
      v14 = v181;
      if ( v181 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x294,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
          (const char *)(unsigned int)v181);
        WindowsDeleteString(v209[0]);
        v209[0] = 0LL;
        v182 = v204;
        if ( v204 )
        {
          v204 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v182 + 16LL))(v182);
        }
        v183 = v206;
        if ( v206 )
        {
          v206 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v183 + 16LL))(v183);
        }
        v184 = v207;
        if ( v207 )
        {
          v207 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v184 + 16LL))(v184);
        }
        v185 = v208;
        if ( v208 )
        {
          v208 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v185 + 16LL))(v185);
        }
        return v14;
      }
      WindowsDeleteString(v209[0]);
      goto LABEL_249;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v180);
    goto LABEL_283;
  }
LABEL_249:
  v186 = v204;
  if ( v204 )
  {
    v204 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v186 + 16LL))(v186);
  }
  v187 = v208;
  v188 = **(__int64 (__fastcall ***)(HSTRING, GUID *, __int64 *))v208;
  v189 = v204;
  if ( v204 )
  {
    v204 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v189 + 16LL))(v189);
  }
  v190 = v188(v187, &GUID_a3219ecb_f0b3_4dcd_beee_19d48cd3ed1e, &v204);
  v14 = v190;
  if ( v190 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x299,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v190);
    v191 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v191 + 16LL))(v191);
    }
    v192 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v192 + 16LL))(v192);
    }
    v193 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v193 + 16LL))(v193);
    }
    v194 = v208;
    if ( v208 )
    {
      v208 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v194 + 16LL))(v194);
    }
    return v14;
  }
  v195 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v204 + 56LL))(v204, v210);
  v14 = v195;
  if ( v195 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29A,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v195);
    v196 = v204;
    if ( v204 )
    {
      v204 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v196 + 16LL))(v196);
    }
    v197 = v206;
    if ( v206 )
    {
      v206 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v197 + 16LL))(v197);
    }
    v198 = v207;
    if ( v207 )
    {
      v207 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v198 + 16LL))(v198);
    }
    v199 = v208;
    if ( v208 )
    {
      v208 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v199 + 16LL))(v199);
    }
    return v14;
  }
  v200 = v204;
  if ( v204 )
  {
    v204 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v200 + 16LL))(v200);
  }
  v201 = v206;
  if ( v206 )
  {
    v206 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v201 + 16LL))(v201);
  }
  v202 = v207;
  if ( v207 )
  {
    v207 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v202 + 16LL))(v202);
  }
  v203 = v208;
  if ( v208 )
  {
    v208 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v203 + 16LL))(v203);
  }
  return 0LL;
}
