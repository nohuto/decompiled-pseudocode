/*
 * XREFs of SmmQueryRegistry @ 0x14041D188
 * Callers:
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x140287F2C (-SysMmInitializeGlobal@@YAXXZ.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x140068140 (HviIsHypervisorMicrosoftCompatible.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 SmmQueryRegistry()
{
  int v0; // ebx
  char v1; // cl
  int v2; // r11d
  __int64 result; // rax
  unsigned int v4; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v5; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v6; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v7; // [rsp+3Ch] [rbp-C4h] BYREF
  int v8; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v9; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v10; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+4Ch] [rbp-B4h] BYREF
  int v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+54h] [rbp-ACh] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h] BYREF
  int v16; // [rsp+60h] [rbp-A0h] BYREF
  int v17; // [rsp+64h] [rbp-9Ch] BYREF
  int v18; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+6Ch] [rbp-94h] BYREF
  int v20; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h] BYREF
  int v26; // [rsp+98h] [rbp-68h]
  const wchar_t *v27; // [rsp+A0h] [rbp-60h]
  unsigned int *v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+B0h] [rbp-50h]
  unsigned int *v30; // [rsp+B8h] [rbp-48h]
  int v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+D0h] [rbp-30h]
  const wchar_t *v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  int v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  __int64 v39; // [rsp+100h] [rbp+0h]
  int v40; // [rsp+108h] [rbp+8h]
  const wchar_t *v41; // [rsp+110h] [rbp+10h]
  unsigned int *v42; // [rsp+118h] [rbp+18h]
  int v43; // [rsp+120h] [rbp+20h]
  unsigned int *v44; // [rsp+128h] [rbp+28h]
  int v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int v47; // [rsp+140h] [rbp+40h]
  const wchar_t *v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  int v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  int v52; // [rsp+168h] [rbp+68h]
  __int64 v53; // [rsp+170h] [rbp+70h]
  int v54; // [rsp+178h] [rbp+78h]
  const wchar_t *v55; // [rsp+180h] [rbp+80h]
  int *v56; // [rsp+188h] [rbp+88h]
  int v57; // [rsp+190h] [rbp+90h]
  int *v58; // [rsp+198h] [rbp+98h]
  int v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  int v61; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v62; // [rsp+1B8h] [rbp+B8h]
  int *v63; // [rsp+1C0h] [rbp+C0h]
  int v64; // [rsp+1C8h] [rbp+C8h]
  int *v65; // [rsp+1D0h] [rbp+D0h]
  int v66; // [rsp+1D8h] [rbp+D8h]
  __int64 v67; // [rsp+1E0h] [rbp+E0h]
  int v68; // [rsp+1E8h] [rbp+E8h]
  const wchar_t *v69; // [rsp+1F0h] [rbp+F0h]
  int *v70; // [rsp+1F8h] [rbp+F8h]
  int v71; // [rsp+200h] [rbp+100h]
  int *v72; // [rsp+208h] [rbp+108h]
  int v73; // [rsp+210h] [rbp+110h]
  __int64 v74; // [rsp+218h] [rbp+118h]
  int v75; // [rsp+220h] [rbp+120h]
  const wchar_t *v76; // [rsp+228h] [rbp+128h]
  unsigned int *v77; // [rsp+230h] [rbp+130h]
  int v78; // [rsp+238h] [rbp+138h]
  int *v79; // [rsp+240h] [rbp+140h]
  int v80; // [rsp+248h] [rbp+148h]
  __int64 v81; // [rsp+250h] [rbp+150h]
  int v82; // [rsp+258h] [rbp+158h]
  const wchar_t *v83; // [rsp+260h] [rbp+160h]
  __int64 *v84; // [rsp+268h] [rbp+168h]
  int v85; // [rsp+270h] [rbp+170h]
  __int64 *v86; // [rsp+278h] [rbp+178h]
  int v87; // [rsp+280h] [rbp+180h]
  __int64 v88; // [rsp+288h] [rbp+188h]
  int v89; // [rsp+290h] [rbp+190h]
  const wchar_t *v90; // [rsp+298h] [rbp+198h]
  unsigned int *v91; // [rsp+2A0h] [rbp+1A0h]
  int v92; // [rsp+2A8h] [rbp+1A8h]
  int *v93; // [rsp+2B0h] [rbp+1B0h]
  int v94; // [rsp+2B8h] [rbp+1B8h]
  __int128 v95; // [rsp+2C0h] [rbp+1C0h]
  __int128 v96; // [rsp+2D0h] [rbp+1D0h]
  __int128 v97; // [rsp+2E0h] [rbp+1E0h]
  __int64 v98; // [rsp+2F0h] [rbp+1F0h]

  v0 = 0;
  v22 = 31LL;
  v7 = 0;
  v4 = 0;
  v15 = 0;
  v11 = 0;
  v6 = 0;
  v20 = 12;
  v9 = 12;
  v27 = L"ForceEnableIommu";
  v28 = &v4;
  v30 = &v7;
  v34 = L"EnablePageTracking";
  v35 = &v11;
  v37 = &v15;
  v41 = L"LogicalAddressMode";
  v42 = &v5;
  v44 = &v6;
  v48 = L"PreferHighLogicalAddresses";
  v49 = &v13;
  v51 = &v16;
  v55 = L"DebugMode";
  v56 = &v14;
  v58 = &v17;
  v62 = L"IdentityMappedPassthrough";
  v5 = 0;
  v16 = 0;
  v13 = 0;
  v19 = 0;
  v12 = 0;
  v17 = 0;
  v14 = 0;
  v18 = 0;
  v8 = 0;
  v23 = 16LL;
  v24 = 31LL;
  v21 = 0;
  v10 = 0;
  v25 = 0LL;
  v26 = 288;
  v29 = 67108868;
  v31 = 4;
  v32 = 0LL;
  v33 = 288;
  v36 = 67108868;
  v38 = 4;
  v39 = 0LL;
  v40 = 288;
  v43 = 67108868;
  v45 = 4;
  v46 = 0LL;
  v47 = 288;
  v50 = 67108868;
  v52 = 4;
  v53 = 0LL;
  v54 = 288;
  v57 = 67108868;
  v59 = 4;
  v60 = 0LL;
  v61 = 288;
  v63 = &v8;
  v64 = 67108868;
  v68 = 288;
  v65 = &v18;
  v71 = 67108868;
  v69 = L"ForceDmaRemapping";
  v70 = &v12;
  v72 = &v19;
  v76 = L"LogSizeLog2";
  v77 = &v9;
  v79 = &v20;
  v83 = L"LogMask";
  v84 = &v23;
  v86 = &v22;
  v90 = L"MappingStackCount";
  v91 = &v10;
  v93 = &v21;
  v75 = 288;
  v78 = 67108868;
  v82 = 288;
  v89 = 288;
  v92 = 67108868;
  v98 = 0LL;
  v66 = 4;
  v67 = 0LL;
  v73 = 4;
  v74 = 0LL;
  v80 = 4;
  v81 = 0LL;
  v85 = 184549387;
  v87 = 8;
  v88 = 0LL;
  v94 = 4;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Smm", &v25, 0LL, 0LL);
  if ( v5 >= 3 )
    v5 = v6;
  if ( v4 >= 3 )
    v4 = v7;
  if ( !HviIsHypervisorMicrosoftCompatible() )
    v0 = v8;
  v1 = v9;
  if ( v9 >= 0x1A )
    v1 = 26;
  v2 = v10;
  if ( v10 >= 0x1F )
    v2 = 31;
  dword_1401696D0 = v2;
  result = v24;
  dword_1401696C4 = 1 << v1;
  dword_1401696C0 = (v0 != 0 ? 0x100 : 0) | (v11 != 0 ? 4 : 0) | v4 & 3 | dword_1401696C0 & 0xFFFFFE00 | (unsigned __int8)(8 * (v5 & 3 | (4 * (v14 & 1 | (2 * (v13 & 1 | (2 * (v12 & 1))))))));
  qword_1401696C8 = v24;
  return result;
}
