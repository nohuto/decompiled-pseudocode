/*
 * XREFs of ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GAEBUtagPOINT@@PEBUtagPOINTEREVENTINT@@W4ContactPopulationSource@12@@Z @ 0x1400F577C
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1400F955C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x14019D2A0 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664@Z @ 0x1400064F8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@U-$_tlgWrapper.c)
 *     _tlgKeywordOn @ 0x1400E4F60 (_tlgKeywordOn.c)
 *     ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4E24 (-PointerTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ?ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1400F4E94 (-ButtonChangeTypeToString@InputTraceLogging@@CAPEBDW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z.c)
 *     ?ContactPopulationSourceToString@InputTraceLogging@@CAPEBDW4ContactPopulationSource@RIM@1@@Z @ 0x1400F4F40 (-ContactPopulationSourceToString@InputTraceLogging@@CAPEBDW4ContactPopulationSource@RIM@1@@Z.c)
 *     ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1400F4F78 (-PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666666666@Z @ 0x140137F74 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@U_ea_140137F74.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@U?$_tlgWrapperByVal@$03@@U4@U4@U4@U2@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@U1@U4@U1@U4@U4@U2@U4@U4@U4@U4@U4@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$01@@4AEBU?$_tlgWrapperByVal@$03@@666466666666663363664666666@Z @ 0x14016795C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@U_ea_14016795C.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall InputTraceLogging::RIM::PopulateContact(_QWORD *a1, int a2, __int16 a3, int *a4, int *a5, int a6)
{
  __int64 v6; // rax
  int v11; // r10d
  int v12; // ecx
  const char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // r8d
  int v20; // r9d
  int v21; // ecx
  const char *v22; // rax
  __int64 v23; // r8
  int v24; // ecx
  const char *v25; // rdi
  _QWORD *v26; // rdx
  int v27; // ecx
  int v28; // ecx
  const char *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  const char *v32; // rbx
  _BYTE *v33; // r8
  __int64 v34; // r9
  ULONGLONG v35; // r10
  _BYTE *v36; // r11
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // edx
  __int64 v41; // rdx
  int v42; // edx
  __int64 v43; // rdx
  int v44; // edx
  int v45; // eax
  const char *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  int v53; // ecx
  const char *v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  int v57; // ecx
  __int64 v58; // r8
  const char *v59; // rdx
  int v60; // r8d
  int v61; // r9d
  _WORD v63[2]; // [rsp+168h] [rbp-80h] BYREF
  int v64; // [rsp+16Ch] [rbp-7Ch] BYREF
  int v65; // [rsp+170h] [rbp-78h] BYREF
  int v66; // [rsp+174h] [rbp-74h] BYREF
  int v67; // [rsp+178h] [rbp-70h] BYREF
  int v68; // [rsp+17Ch] [rbp-6Ch] BYREF
  int v69; // [rsp+180h] [rbp-68h] BYREF
  int v70; // [rsp+184h] [rbp-64h] BYREF
  int v71; // [rsp+188h] [rbp-60h] BYREF
  int v72; // [rsp+18Ch] [rbp-5Ch] BYREF
  int v73; // [rsp+190h] [rbp-58h] BYREF
  int v74; // [rsp+194h] [rbp-54h] BYREF
  int v75; // [rsp+198h] [rbp-50h] BYREF
  int v76; // [rsp+19Ch] [rbp-4Ch] BYREF
  int v77; // [rsp+1A0h] [rbp-48h] BYREF
  int v78; // [rsp+1A4h] [rbp-44h] BYREF
  int v79; // [rsp+1A8h] [rbp-40h] BYREF
  int v80; // [rsp+1ACh] [rbp-3Ch] BYREF
  int v81; // [rsp+1B0h] [rbp-38h] BYREF
  _QWORD *v82; // [rsp+1B8h] [rbp-30h] BYREF
  __int64 v83; // [rsp+1C0h] [rbp-28h] BYREF
  const char *v84; // [rsp+1C8h] [rbp-20h] BYREF
  const char *v85; // [rsp+1D0h] [rbp-18h] BYREF
  const char *v86; // [rsp+1D8h] [rbp-10h] BYREF
  const char *v87; // [rsp+1E0h] [rbp-8h] BYREF
  const char *v88; // [rsp+1E8h] [rbp+0h] BYREF
  __int64 v89; // [rsp+1F0h] [rbp+8h] BYREF
  __int64 v90; // [rsp+1F8h] [rbp+10h] BYREF
  __int64 v91; // [rsp+200h] [rbp+18h] BYREF
  const char *v92; // [rsp+208h] [rbp+20h] BYREF
  const char *v93; // [rsp+210h] [rbp+28h] BYREF
  _QWORD *v94; // [rsp+218h] [rbp+30h] BYREF
  const char *v95; // [rsp+220h] [rbp+38h] BYREF
  __int64 v96; // [rsp+228h] [rbp+40h] BYREF
  __int64 v97; // [rsp+230h] [rbp+48h] BYREF
  const char *v98; // [rsp+238h] [rbp+50h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+240h] [rbp+58h] BYREF
  const char *v100; // [rsp+250h] [rbp+68h] BYREF
  __int64 v101; // [rsp+258h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+268h] [rbp+80h] BYREF
  void *v103; // [rsp+278h] [rbp+90h]
  int v104; // [rsp+280h] [rbp+98h]
  int v105; // [rsp+284h] [rbp+9Ch]
  void **v106; // [rsp+288h] [rbp+A0h]
  __int64 v107; // [rsp+290h] [rbp+A8h]
  __int64 *v108; // [rsp+298h] [rbp+B0h]
  __int64 v109; // [rsp+2A0h] [rbp+B8h]
  const char *v110; // [rsp+2A8h] [rbp+C0h]
  int v111; // [rsp+2B0h] [rbp+C8h]
  int v112; // [rsp+2B4h] [rbp+CCh]
  _WORD *v113; // [rsp+2B8h] [rbp+D0h]
  __int64 v114; // [rsp+2C0h] [rbp+D8h]
  _BYTE *v115; // [rsp+2C8h] [rbp+E0h]
  int v116; // [rsp+2D0h] [rbp+E8h]
  int v117; // [rsp+2D4h] [rbp+ECh]
  __int64 *v118; // [rsp+2D8h] [rbp+F0h]
  __int64 v119; // [rsp+2E0h] [rbp+F8h]
  __int64 *v120; // [rsp+2E8h] [rbp+100h]
  __int64 v121; // [rsp+2F0h] [rbp+108h]
  __int64 *v122; // [rsp+2F8h] [rbp+110h]
  __int64 v123; // [rsp+300h] [rbp+118h]
  const char **v124; // [rsp+308h] [rbp+120h]
  __int64 v125; // [rsp+310h] [rbp+128h]
  _BYTE *v126; // [rsp+318h] [rbp+130h]
  int v127; // [rsp+320h] [rbp+138h]
  int v128; // [rsp+324h] [rbp+13Ch]
  const char **v129; // [rsp+328h] [rbp+140h]
  __int64 v130; // [rsp+330h] [rbp+148h]
  const char **v131; // [rsp+338h] [rbp+150h]
  __int64 v132; // [rsp+340h] [rbp+158h]
  const char **v133; // [rsp+348h] [rbp+160h]
  __int64 v134; // [rsp+350h] [rbp+168h]
  int *v135; // [rsp+358h] [rbp+170h]
  __int64 v136; // [rsp+360h] [rbp+178h]
  int *v137; // [rsp+368h] [rbp+180h]
  __int64 v138; // [rsp+370h] [rbp+188h]
  int *v139; // [rsp+378h] [rbp+190h]
  __int64 v140; // [rsp+380h] [rbp+198h]
  int *v141; // [rsp+388h] [rbp+1A0h]
  __int64 v142; // [rsp+390h] [rbp+1A8h]
  int *v143; // [rsp+398h] [rbp+1B0h]
  __int64 v144; // [rsp+3A0h] [rbp+1B8h]
  int *v145; // [rsp+3A8h] [rbp+1C0h]
  __int64 v146; // [rsp+3B0h] [rbp+1C8h]
  int *v147; // [rsp+3B8h] [rbp+1D0h]
  __int64 v148; // [rsp+3C0h] [rbp+1D8h]
  __int64 *v149; // [rsp+3C8h] [rbp+1E0h]
  __int64 v150; // [rsp+3D0h] [rbp+1E8h]
  const char **v151; // [rsp+3D8h] [rbp+1F0h]
  __int64 v152; // [rsp+3E0h] [rbp+1F8h]
  int *v153; // [rsp+3E8h] [rbp+200h]
  __int64 v154; // [rsp+3F0h] [rbp+208h]
  _QWORD *v155; // [rsp+3F8h] [rbp+210h]
  __int64 v156; // [rsp+400h] [rbp+218h]
  _QWORD *v157; // [rsp+408h] [rbp+220h]
  __int64 v158; // [rsp+410h] [rbp+228h]
  __int64 *v159; // [rsp+418h] [rbp+230h]
  __int64 v160; // [rsp+420h] [rbp+238h]
  const char *v161; // [rsp+428h] [rbp+240h]
  int v162; // [rsp+430h] [rbp+248h]
  int v163; // [rsp+434h] [rbp+24Ch]
  const char **v164; // [rsp+438h] [rbp+250h]
  __int64 v165; // [rsp+440h] [rbp+258h]
  const char **v166; // [rsp+448h] [rbp+260h]
  __int64 v167; // [rsp+450h] [rbp+268h]
  int *v168; // [rsp+458h] [rbp+270h]
  __int64 v169; // [rsp+460h] [rbp+278h]
  int *v170; // [rsp+468h] [rbp+280h]
  __int64 v171; // [rsp+470h] [rbp+288h]
  int *v172; // [rsp+478h] [rbp+290h]
  __int64 v173; // [rsp+480h] [rbp+298h]
  int *v174; // [rsp+488h] [rbp+2A0h]
  __int64 v175; // [rsp+490h] [rbp+2A8h]
  int *v176; // [rsp+498h] [rbp+2B0h]
  __int64 v177; // [rsp+4A0h] [rbp+2B8h]
  int *v178; // [rsp+4A8h] [rbp+2C0h]
  __int64 v179; // [rsp+4B0h] [rbp+2C8h]
  int *v180; // [rsp+4B8h] [rbp+2D0h]
  __int64 v181; // [rsp+4C0h] [rbp+2D8h]
  int *v182; // [rsp+4C8h] [rbp+2E0h]
  __int64 v183; // [rsp+4D0h] [rbp+2E8h]
  int *v184; // [rsp+4D8h] [rbp+2F0h]
  __int64 v185; // [rsp+4E0h] [rbp+2F8h]
  int *v186; // [rsp+4E8h] [rbp+300h]
  __int64 v187; // [rsp+4F0h] [rbp+308h]

  v6 = a1[57];
  v11 = *(_DWORD *)(v6 + 24);
  if ( v11 == 1 || (LOBYTE(v6) = v11 - 2, (unsigned int)(v11 - 2) <= 2) )
  {
    if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x100) != 0 )
    {
      LOBYTE(v6) = 0;
      if ( (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
      {
        v12 = a5[24];
        LODWORD(v92) = a5[37];
        LODWORD(v91) = a5[36];
        LODWORD(v90) = a5[35];
        LODWORD(v89) = a5[34];
        LODWORD(v88) = a5[33];
        LODWORD(v87) = a5[32];
        LODWORD(v86) = a5[31];
        v66 = a5[30];
        v65 = a5[29];
        v64 = a5[28];
        v73 = a5[27];
        v72 = a5[26];
        v13 = InputTraceLogging::ButtonChangeTypeToString(v12);
        v15 = *(_QWORD *)(v14 + 88);
        v16 = *(_DWORD *)(v14 + 8);
        v98 = v13;
        v71 = *(_DWORD *)(v14 + 84);
        v70 = *(_DWORD *)(v14 + 76);
        v69 = *(_DWORD *)(v14 + 72);
        v96 = *(_QWORD *)(v14 + 32);
        v94 = *(_QWORD **)(v14 + 24);
        v68 = *(_DWORD *)(v14 + 80);
        v67 = *(_DWORD *)(v14 + 68);
        LODWORD(v85) = *(_DWORD *)(v14 + 64);
        LODWORD(v84) = *(_DWORD *)(v14 + 52);
        LODWORD(v83) = *(_DWORD *)(v14 + 48);
        LODWORD(v82) = *(_DWORD *)(v14 + 60);
        v81 = *(_DWORD *)(v14 + 56);
        v80 = *(_DWORD *)(v14 + 44);
        v79 = *(_DWORD *)(v14 + 40);
        v78 = *(_DWORD *)(v14 + 20);
        v97 = v15;
        v93 = InputTraceLogging::PointerTypeToString(v16);
        v77 = *(_DWORD *)(v17 + 16);
        v76 = *(_DWORD *)(v17 + 12);
        v75 = a4[1];
        v74 = *a4;
        v95 = InputTraceLogging::PointerDeviceTypeToString(a2);
        v63[0] = a3;
        v100 = InputTraceLogging::ContactPopulationSourceToString(a6);
        v101 = v18;
        *(_QWORD *)&EventDescriptor.Id = a1;
        LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                       (unsigned int)&dword_1402A9E40,
                       (unsigned int)&unk_1402875C2,
                       v19,
                       v20,
                       (__int64)&EventDescriptor,
                       (__int64)&v101,
                       (__int64)&v100,
                       (__int64)v63,
                       (__int64)&v95,
                       (__int64)&v74,
                       (__int64)&v75,
                       (__int64)&v76,
                       (__int64)&v77,
                       (__int64)&v93,
                       (__int64)&v78,
                       (__int64)&v79,
                       (__int64)&v80,
                       (__int64)&v81,
                       (__int64)&v82,
                       (__int64)&v83,
                       (__int64)&v84,
                       (__int64)&v85,
                       (__int64)&v67,
                       (__int64)&v68,
                       (__int64)&v94,
                       (__int64)&v96,
                       (__int64)&v69,
                       (__int64)&v97,
                       (__int64)&v70,
                       (__int64)&v71,
                       (__int64)&v98,
                       (__int64)&v72,
                       (__int64)&v73,
                       (__int64)&v64,
                       (__int64)&v65,
                       (__int64)&v66,
                       (__int64)&v86,
                       (__int64)&v87,
                       (__int64)&v88,
                       (__int64)&v89,
                       (__int64)&v90,
                       (__int64)&v91,
                       (__int64)&v92);
      }
    }
  }
  else
  {
    LOBYTE(v6) = v11 - 5;
    if ( (unsigned int)(v11 - 5) <= 1 )
    {
      if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x100) != 0 )
      {
        LOBYTE(v6) = 0;
        if ( (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
        {
          v53 = a5[24];
          LODWORD(v95) = a5[31];
          v74 = a5[30];
          v75 = a5[29];
          v76 = a5[28];
          v77 = a5[27];
          v78 = a5[26];
          v54 = InputTraceLogging::ButtonChangeTypeToString(v53);
          v56 = *(_QWORD *)(v55 + 88);
          v57 = *(_DWORD *)(v55 + 8);
          v92 = v54;
          v79 = *(_DWORD *)(v55 + 84);
          v80 = *(_DWORD *)(v55 + 76);
          v81 = *(_DWORD *)(v55 + 72);
          v90 = *(_QWORD *)(v55 + 32);
          v89 = *(_QWORD *)(v55 + 24);
          LODWORD(v82) = *(_DWORD *)(v55 + 80);
          LODWORD(v83) = *(_DWORD *)(v55 + 68);
          LODWORD(v84) = *(_DWORD *)(v55 + 64);
          LODWORD(v85) = *(_DWORD *)(v55 + 52);
          v67 = *(_DWORD *)(v55 + 48);
          v68 = *(_DWORD *)(v55 + 60);
          v69 = *(_DWORD *)(v55 + 56);
          v70 = *(_DWORD *)(v55 + 44);
          v71 = *(_DWORD *)(v55 + 40);
          v72 = *(_DWORD *)(v55 + 20);
          v91 = v56;
          v88 = InputTraceLogging::PointerTypeToString(v57);
          v73 = *(_DWORD *)(v58 + 16);
          v64 = *(_DWORD *)(v58 + 12);
          v65 = a4[1];
          v66 = *a4;
          v87 = InputTraceLogging::PointerDeviceTypeToString(a2);
          v63[0] = a3;
          v86 = InputTraceLogging::ContactPopulationSourceToString(a6);
          v93 = v59;
          v94 = a1;
          LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                         (unsigned int)&dword_1402A9E40,
                         (unsigned int)&unk_1402877B0,
                         v60,
                         v61,
                         (__int64)&v94,
                         (__int64)&v93,
                         (__int64)&v86,
                         (__int64)v63,
                         (__int64)&v87,
                         (__int64)&v66,
                         (__int64)&v65,
                         (__int64)&v64,
                         (__int64)&v73,
                         (__int64)&v88,
                         (__int64)&v72,
                         (__int64)&v71,
                         (__int64)&v70,
                         (__int64)&v69,
                         (__int64)&v68,
                         (__int64)&v67,
                         (__int64)&v85,
                         (__int64)&v84,
                         (__int64)&v83,
                         (__int64)&v82,
                         (__int64)&v89,
                         (__int64)&v90,
                         (__int64)&v81,
                         (__int64)&v91,
                         (__int64)&v80,
                         (__int64)&v79,
                         (__int64)&v92,
                         (__int64)&v78,
                         (__int64)&v77,
                         (__int64)&v76,
                         (__int64)&v75,
                         (__int64)&v74,
                         (__int64)&v95);
        }
      }
    }
    else if ( v11 == 7 )
    {
      if ( (unsigned int)dword_1402A9E40 > 4 && (qword_1402A9E50 & 0x100) != 0 )
      {
        LOBYTE(v6) = 0;
        if ( (qword_1402A9E58 & 0x100) == qword_1402A9E58 )
        {
          v21 = a5[24];
          v66 = a5[37];
          v65 = a5[36];
          v64 = a5[35];
          v73 = a5[34];
          v72 = a5[33];
          v71 = a5[32];
          v70 = a5[31];
          v69 = a5[30];
          v68 = a5[29];
          v67 = a5[28];
          LODWORD(v85) = a5[27];
          LODWORD(v84) = a5[26];
          v22 = InputTraceLogging::ButtonChangeTypeToString(v21);
          v24 = *(_DWORD *)(v23 + 84);
          v25 = v22;
          v26 = *(_QWORD **)(v23 + 88);
          v79 = *(_DWORD *)(v23 + 68);
          v78 = *(_DWORD *)(v23 + 64);
          LODWORD(v22) = *(_DWORD *)(v23 + 52);
          LODWORD(v83) = v24;
          v27 = *(_DWORD *)(v23 + 76);
          v77 = (int)v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 48);
          LODWORD(v82) = v27;
          v28 = *(_DWORD *)(v23 + 72);
          v76 = (int)v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 60);
          v81 = v28;
          v29 = *(const char **)(v23 + 32);
          v75 = (int)v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 56);
          v93 = v29;
          v30 = *(_QWORD *)(v23 + 24);
          v74 = (int)v22;
          LODWORD(v95) = *(_DWORD *)(v23 + 44);
          LODWORD(v22) = *(_DWORD *)(v23 + 40);
          v96 = v30;
          LODWORD(v30) = *(_DWORD *)(v23 + 80);
          LODWORD(v86) = (_DWORD)v22;
          LODWORD(v22) = *(_DWORD *)(v23 + 20);
          v80 = v30;
          LODWORD(v30) = *(_DWORD *)(v23 + 8);
          LODWORD(v87) = (_DWORD)v22;
          v94 = v26;
          InputTraceLogging::PointerTypeToString(v30);
          LODWORD(v88) = *(_DWORD *)(v31 + 16);
          LODWORD(v89) = *(_DWORD *)(v31 + 12);
          LODWORD(v90) = a4[1];
          LODWORD(v91) = *a4;
          InputTraceLogging::PointerDeviceTypeToString(a2);
          v63[0] = a3;
          v32 = InputTraceLogging::ContactPopulationSourceToString(a6);
          v97 = v37;
          v98 = (const char *)a1;
          v186 = &v66;
          v187 = v34;
          v184 = &v65;
          v185 = v34;
          v182 = &v64;
          v180 = &v73;
          v178 = &v72;
          v176 = &v71;
          v174 = &v70;
          v172 = &v69;
          v170 = &v68;
          v168 = &v67;
          v166 = &v85;
          v164 = &v84;
          v38 = -1LL;
          v183 = v34;
          v181 = v34;
          v179 = v34;
          v177 = v34;
          v175 = v34;
          v173 = v34;
          v171 = v34;
          v169 = v34;
          v167 = v34;
          v165 = v34;
          if ( v25 )
          {
            v39 = -1LL;
            do
              ++v39;
            while ( v25[v39] );
            v40 = v39 + 1;
          }
          else
          {
            v25 = (const char *)&unk_140269890;
            v40 = 1;
          }
          v162 = v40;
          v159 = &v83;
          v157 = &v82;
          v155 = &v94;
          v153 = &v81;
          v151 = &v93;
          v149 = &v96;
          v147 = &v80;
          v145 = &v79;
          v143 = &v78;
          v141 = &v77;
          v139 = &v76;
          v137 = &v75;
          v135 = &v74;
          v133 = &v95;
          v131 = &v86;
          v129 = &v87;
          v161 = v25;
          v163 = 0;
          v160 = v34;
          v158 = v34;
          v156 = 8LL;
          v154 = v34;
          v152 = 8LL;
          v150 = 8LL;
          v148 = v34;
          v146 = v34;
          v144 = v34;
          v142 = v34;
          v140 = v34;
          v138 = v34;
          v136 = v34;
          v134 = v34;
          v132 = v34;
          v130 = v34;
          if ( v36 )
          {
            v41 = -1LL;
            do
              ++v41;
            while ( v36[v41] );
            v42 = v41 + 1;
          }
          else
          {
            v36 = &unk_140269890;
            v42 = 1;
          }
          v127 = v42;
          v124 = &v88;
          v122 = &v89;
          v120 = &v90;
          v118 = &v91;
          v126 = v36;
          v128 = 0;
          v125 = v34;
          v123 = v34;
          v121 = v34;
          v119 = v34;
          if ( v33 )
          {
            v43 = -1LL;
            do
              ++v43;
            while ( v33[v43] );
            v44 = v43 + 1;
          }
          else
          {
            v33 = &unk_140269890;
            v44 = 1;
          }
          v116 = v44;
          v113 = v63;
          v115 = v33;
          v117 = 0;
          v114 = 2LL;
          if ( v32 )
          {
            do
              ++v38;
            while ( v32[v38] );
            v45 = v38 + 1;
          }
          else
          {
            v32 = (const char *)&unk_140269890;
            v45 = 1;
          }
          v111 = v45;
          v112 = 0;
          v108 = &v97;
          v110 = v32;
          v106 = (void **)&v98;
          UserData.Ptr = (ULONGLONG)off_1402A9E48;
          *(_DWORD *)&EventDescriptor.Level = 4;
          v109 = 8LL;
          v107 = 8LL;
          *(_DWORD *)&EventDescriptor.Id = 184549376;
          EventDescriptor.Keyword = v35;
          UserData.Size = *(unsigned __int16 *)off_1402A9E48;
          v103 = &unk_14028795F;
          UserData.Reserved = 2;
          v104 = 480;
          v105 = 1;
          LODWORD(v92) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          LOBYTE(v6) = EtwWriteTransfer(qword_1402A9E60, &EventDescriptor, 0LL, 0LL, 0x29u, &UserData);
        }
      }
    }
    else if ( (unsigned int)dword_1402A9E40 > 4 )
    {
      LOBYTE(v6) = tlgKeywordOn((__int64)&dword_1402A9E40, 256LL);
      if ( (_BYTE)v6 )
      {
        v46 = InputTraceLogging::ButtonChangeTypeToString(a5[24]);
        v48 = *(_QWORD *)(v47 + 88);
        v49 = *(_DWORD *)(v47 + 8);
        v98 = v46;
        LODWORD(v92) = *(_DWORD *)(v47 + 84);
        LODWORD(v91) = *(_DWORD *)(v47 + 76);
        LODWORD(v90) = *(_DWORD *)(v47 + 72);
        v96 = *(_QWORD *)(v47 + 32);
        v94 = *(_QWORD **)(v47 + 24);
        LODWORD(v89) = *(_DWORD *)(v47 + 80);
        LODWORD(v88) = *(_DWORD *)(v47 + 68);
        LODWORD(v87) = *(_DWORD *)(v47 + 64);
        LODWORD(v86) = *(_DWORD *)(v47 + 52);
        v66 = *(_DWORD *)(v47 + 48);
        v65 = *(_DWORD *)(v47 + 60);
        v64 = *(_DWORD *)(v47 + 56);
        v73 = *(_DWORD *)(v47 + 44);
        v72 = *(_DWORD *)(v47 + 40);
        v71 = *(_DWORD *)(v47 + 20);
        v97 = v48;
        v93 = InputTraceLogging::PointerTypeToString(v49);
        v70 = *(_DWORD *)(v50 + 16);
        v69 = *(_DWORD *)(v50 + 12);
        v68 = a4[1];
        v67 = *a4;
        v85 = InputTraceLogging::PointerDeviceTypeToString(a2);
        v63[0] = a3;
        v84 = InputTraceLogging::ContactPopulationSourceToString(a6);
        v83 = v51;
        v82 = a1;
        LOBYTE(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
                       (__int64)&dword_1402A9E40,
                       (__int64)&unk_140287B40,
                       v51,
                       v52,
                       (__int64)&v82,
                       (__int64)&v83,
                       (void **)&v84,
                       (__int64)v63,
                       (void **)&v85,
                       (__int64)&v67,
                       (__int64)&v68,
                       (__int64)&v69,
                       (__int64)&v70,
                       (void **)&v93,
                       (__int64)&v71,
                       (__int64)&v72,
                       (__int64)&v73,
                       (__int64)&v64,
                       (__int64)&v65,
                       (__int64)&v66,
                       (__int64)&v86,
                       (__int64)&v87,
                       (__int64)&v88,
                       (__int64)&v89,
                       (__int64)&v94,
                       (__int64)&v96,
                       (__int64)&v90,
                       (__int64)&v97,
                       (__int64)&v91,
                       (__int64)&v92,
                       (void **)&v98);
      }
    }
  }
  return v6;
}
