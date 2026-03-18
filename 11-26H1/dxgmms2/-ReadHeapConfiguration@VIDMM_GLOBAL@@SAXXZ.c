/*
 * XREFs of ?ReadHeapConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x140121478
 * Callers:
 *     ?ReadConfiguration@VIDMM_GLOBAL@@SAXXZ @ 0x14011FA24 (-ReadConfiguration@VIDMM_GLOBAL@@SAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 */

void VIDMM_GLOBAL::ReadHeapConfiguration(void)
{
  int v0; // edx
  int v1; // eax
  int v2; // [rsp+30h] [rbp-D0h] BYREF
  int v3; // [rsp+34h] [rbp-CCh] BYREF
  int v4; // [rsp+38h] [rbp-C8h] BYREF
  int v5; // [rsp+3Ch] [rbp-C4h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  int v7; // [rsp+44h] [rbp-BCh] BYREF
  int v8; // [rsp+48h] [rbp-B8h] BYREF
  int v9; // [rsp+4Ch] [rbp-B4h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  int v11; // [rsp+54h] [rbp-ACh] BYREF
  int v12; // [rsp+58h] [rbp-A8h] BYREF
  int v13; // [rsp+5Ch] [rbp-A4h] BYREF
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v15; // [rsp+64h] [rbp-9Ch] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  int v17; // [rsp+70h] [rbp-90h] BYREF
  int v18; // [rsp+74h] [rbp-8Ch] BYREF
  int v19; // [rsp+78h] [rbp-88h] BYREF
  int v20; // [rsp+7Ch] [rbp-84h] BYREF
  int v21; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+84h] [rbp-7Ch] BYREF
  int v23; // [rsp+88h] [rbp-78h] BYREF
  int v24; // [rsp+8Ch] [rbp-74h] BYREF
  int v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+94h] [rbp-6Ch] BYREF
  int v27; // [rsp+98h] [rbp-68h] BYREF
  int v28; // [rsp+9Ch] [rbp-64h] BYREF
  int v29; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+A4h] [rbp-5Ch] BYREF
  int v31; // [rsp+A8h] [rbp-58h] BYREF
  int v32; // [rsp+ACh] [rbp-54h] BYREF
  __int64 v33; // [rsp+B0h] [rbp-50h] BYREF
  int v34; // [rsp+B8h] [rbp-48h]
  const wchar_t *v35; // [rsp+C0h] [rbp-40h]
  int *v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+D0h] [rbp-30h]
  int *v38; // [rsp+D8h] [rbp-28h]
  int v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+F0h] [rbp-10h]
  const wchar_t *v42; // [rsp+F8h] [rbp-8h]
  int *v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+108h] [rbp+8h]
  int *v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  __int64 v47; // [rsp+120h] [rbp+20h]
  int v48; // [rsp+128h] [rbp+28h]
  const wchar_t *v49; // [rsp+130h] [rbp+30h]
  int *v50; // [rsp+138h] [rbp+38h]
  int v51; // [rsp+140h] [rbp+40h]
  int *v52; // [rsp+148h] [rbp+48h]
  int v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  int v55; // [rsp+160h] [rbp+60h]
  const wchar_t *v56; // [rsp+168h] [rbp+68h]
  int *v57; // [rsp+170h] [rbp+70h]
  int v58; // [rsp+178h] [rbp+78h]
  int *v59; // [rsp+180h] [rbp+80h]
  int v60; // [rsp+188h] [rbp+88h]
  __int64 v61; // [rsp+190h] [rbp+90h]
  int v62; // [rsp+198h] [rbp+98h]
  const wchar_t *v63; // [rsp+1A0h] [rbp+A0h]
  int *v64; // [rsp+1A8h] [rbp+A8h]
  int v65; // [rsp+1B0h] [rbp+B0h]
  int *v66; // [rsp+1B8h] [rbp+B8h]
  int v67; // [rsp+1C0h] [rbp+C0h]
  __int64 v68; // [rsp+1C8h] [rbp+C8h]
  int v69; // [rsp+1D0h] [rbp+D0h]
  const wchar_t *v70; // [rsp+1D8h] [rbp+D8h]
  int *v71; // [rsp+1E0h] [rbp+E0h]
  int v72; // [rsp+1E8h] [rbp+E8h]
  int *v73; // [rsp+1F0h] [rbp+F0h]
  int v74; // [rsp+1F8h] [rbp+F8h]
  __int64 v75; // [rsp+200h] [rbp+100h]
  int v76; // [rsp+208h] [rbp+108h]
  const wchar_t *v77; // [rsp+210h] [rbp+110h]
  int *v78; // [rsp+218h] [rbp+118h]
  int v79; // [rsp+220h] [rbp+120h]
  int *v80; // [rsp+228h] [rbp+128h]
  int v81; // [rsp+230h] [rbp+130h]
  __int64 v82; // [rsp+238h] [rbp+138h]
  int v83; // [rsp+240h] [rbp+140h]
  const wchar_t *v84; // [rsp+248h] [rbp+148h]
  int *v85; // [rsp+250h] [rbp+150h]
  int v86; // [rsp+258h] [rbp+158h]
  int *v87; // [rsp+260h] [rbp+160h]
  int v88; // [rsp+268h] [rbp+168h]
  __int64 v89; // [rsp+270h] [rbp+170h]
  int v90; // [rsp+278h] [rbp+178h]
  const wchar_t *v91; // [rsp+280h] [rbp+180h]
  int *v92; // [rsp+288h] [rbp+188h]
  int v93; // [rsp+290h] [rbp+190h]
  int *v94; // [rsp+298h] [rbp+198h]
  int v95; // [rsp+2A0h] [rbp+1A0h]
  __int64 v96; // [rsp+2A8h] [rbp+1A8h]
  int v97; // [rsp+2B0h] [rbp+1B0h]
  const wchar_t *v98; // [rsp+2B8h] [rbp+1B8h]
  int *v99; // [rsp+2C0h] [rbp+1C0h]
  int v100; // [rsp+2C8h] [rbp+1C8h]
  int *v101; // [rsp+2D0h] [rbp+1D0h]
  int v102; // [rsp+2D8h] [rbp+1D8h]
  __int64 v103; // [rsp+2E0h] [rbp+1E0h]
  int v104; // [rsp+2E8h] [rbp+1E8h]
  const wchar_t *v105; // [rsp+2F0h] [rbp+1F0h]
  int *v106; // [rsp+2F8h] [rbp+1F8h]
  int v107; // [rsp+300h] [rbp+200h]
  int *v108; // [rsp+308h] [rbp+208h]
  int v109; // [rsp+310h] [rbp+210h]
  __int64 v110; // [rsp+318h] [rbp+218h]
  int v111; // [rsp+320h] [rbp+220h]
  const wchar_t *v112; // [rsp+328h] [rbp+228h]
  int *v113; // [rsp+330h] [rbp+230h]
  int v114; // [rsp+338h] [rbp+238h]
  int *v115; // [rsp+340h] [rbp+240h]
  int v116; // [rsp+348h] [rbp+248h]
  __int64 v117; // [rsp+350h] [rbp+250h]
  int v118; // [rsp+358h] [rbp+258h]
  const wchar_t *v119; // [rsp+360h] [rbp+260h]
  int *v120; // [rsp+368h] [rbp+268h]
  int v121; // [rsp+370h] [rbp+270h]
  int *v122; // [rsp+378h] [rbp+278h]
  int v123; // [rsp+380h] [rbp+280h]
  __int64 v124; // [rsp+388h] [rbp+288h]
  int v125; // [rsp+390h] [rbp+290h]
  const wchar_t *v126; // [rsp+398h] [rbp+298h]
  unsigned __int64 *v127; // [rsp+3A0h] [rbp+2A0h]
  int v128; // [rsp+3A8h] [rbp+2A8h]
  int *v129; // [rsp+3B0h] [rbp+2B0h]
  int v130; // [rsp+3B8h] [rbp+2B8h]
  __int64 v131; // [rsp+3C0h] [rbp+2C0h]
  int v132; // [rsp+3C8h] [rbp+2C8h]
  const wchar_t *v133; // [rsp+3D0h] [rbp+2D0h]
  char *v134; // [rsp+3D8h] [rbp+2D8h]
  int v135; // [rsp+3E0h] [rbp+2E0h]
  int *v136; // [rsp+3E8h] [rbp+2E8h]
  int v137; // [rsp+3F0h] [rbp+2F0h]
  __int64 v138; // [rsp+3F8h] [rbp+2F8h]
  int v139; // [rsp+400h] [rbp+300h]
  const wchar_t *v140; // [rsp+408h] [rbp+308h]
  int *v141; // [rsp+410h] [rbp+310h]
  int v142; // [rsp+418h] [rbp+318h]
  int *v143; // [rsp+420h] [rbp+320h]
  int v144; // [rsp+428h] [rbp+328h]
  __int128 v145; // [rsp+430h] [rbp+330h]
  __int128 v146; // [rsp+440h] [rbp+340h]
  __int128 v147; // [rsp+450h] [rbp+350h]
  __int64 v148; // [rsp+460h] [rbp+360h]

  v17 = 1;
  v18 = 15;
  v0 = 256;
  v3 = 15;
  v19 = 15;
  v4 = 15;
  v2 = 1;
  v21 = 32;
  v6 = 32;
  v22 = 1024;
  v7 = 1024;
  v25 = 8;
  v10 = 8;
  v1 = 256;
  if ( (unsigned __int64)qword_14008A318 <= 0x53333333 )
    v1 = 64;
  v20 = 4;
  v27 = v1;
  if ( (unsigned __int64)qword_14008A318 <= 0x53333333 )
    v0 = 64;
  v12 = v1;
  v28 = v0;
  v31 = 0x200000;
  v35 = L"DebouncedPageManagement";
  v36 = &v2;
  v38 = &v17;
  v42 = L"DebouncedUnlockAge";
  v43 = &v3;
  v45 = &v18;
  v49 = L"DebouncedDecommitAge";
  v50 = &v4;
  v13 = v0;
  v52 = &v19;
  v5 = 4;
  v23 = 1;
  v8 = 1;
  v24 = 4;
  v9 = 4;
  v26 = 64;
  v11 = 64;
  v29 = 0;
  v14 = 0;
  v30 = 64;
  v15 = 0x20000000000040LL;
  v32 = 0;
  v16 = 0;
  v33 = 0LL;
  v34 = 288;
  v37 = 67108868;
  v39 = 4;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v56 = L"RecycleHeapPackingThreshold";
  v57 = &v5;
  v59 = &v20;
  v63 = L"RecycleHeapPackingBlockSize";
  v64 = &v6;
  v66 = &v21;
  v70 = L"RecycleHeapPTDBlockSize";
  v71 = &v7;
  v73 = &v22;
  v77 = L"ZeroedRecyclePages";
  v78 = &v8;
  v80 = &v23;
  v84 = L"LeanRecycleHeapPackingThreshold";
  v85 = &v9;
  v87 = &v24;
  v91 = L"LeanRecycleHeapPackingBlockSize";
  v92 = &v10;
  v94 = &v25;
  v98 = L"LeanRecycleHeapPTDBlockSize";
  v99 = &v11;
  v101 = &v26;
  v105 = L"MaximumDecommitDebounce";
  v106 = &v12;
  v108 = &v27;
  v112 = L"MaximumUnlockDebounce";
  v58 = 67108868;
  v60 = 4;
  v61 = 0LL;
  v62 = 288;
  v65 = 67108868;
  v67 = 4;
  v68 = 0LL;
  v69 = 288;
  v72 = 67108868;
  v74 = 4;
  v75 = 0LL;
  v76 = 288;
  v79 = 67108868;
  v81 = 4;
  v82 = 0LL;
  v83 = 288;
  v86 = 67108868;
  v88 = 4;
  v89 = 0LL;
  v90 = 288;
  v93 = 67108868;
  v95 = 4;
  v96 = 0LL;
  v97 = 288;
  v100 = 67108868;
  v102 = 4;
  v103 = 0LL;
  v104 = 288;
  v107 = 67108868;
  v109 = 4;
  v110 = 0LL;
  v111 = 288;
  v114 = 67108868;
  v117 = 0LL;
  v113 = &v13;
  v118 = 288;
  v115 = &v28;
  v119 = L"RecycleHistory";
  v120 = &v14;
  v122 = &v29;
  v126 = L"RecycleHistorySize";
  v127 = &v15;
  v129 = &v30;
  v133 = L"ZeroPageLockThreshold";
  v134 = (char *)&v15 + 4;
  v136 = &v31;
  v140 = L"SystemHeapManagement";
  v141 = &v16;
  v143 = &v32;
  v121 = 67108868;
  v124 = 0LL;
  v125 = 288;
  v128 = 67108868;
  v131 = 0LL;
  v132 = 288;
  v135 = 67108868;
  v138 = 0LL;
  v139 = 288;
  v142 = 67108868;
  v116 = 4;
  v123 = 4;
  v130 = 4;
  v137 = 4;
  v144 = 4;
  v145 = 0LL;
  v148 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\MemoryManager", &v33, 0LL, 0LL);
  VIDMM_GLOBAL::_Config &= ~0x200u;
  dword_14008A508 = v2;
  dword_14008A50C = v3;
  dword_14008A510 = v4;
  dword_14008A514 = v5;
  dword_14008A518 = v6;
  dword_14008A51C = v7;
  dword_14008A520 = v8;
  dword_14008A524 = v9;
  dword_14008A528 = v10;
  dword_14008A52C = v11;
  dword_14008A530 = v12;
  dword_14008A534 = v13;
  byte_14008A544 = v16 == 1;
  dword_14008A538 = v14;
  qword_14008A53C = v15;
}
