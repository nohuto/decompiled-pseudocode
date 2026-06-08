/*
 * XREFs of AcpiEval_CPC @ 0x140027B5C
 * Callers:
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     GetCpcRegisterDefinitionTable @ 0x1400066D0 (GetCpcRegisterDefinitionTable.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     AcpiParseCore @ 0x14002A3D0 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x14002BABC (AcpiTranslateAccessSize.c)
 *     AcpiEvaluateMethod @ 0x140040898 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_CPC(__int64 a1, _QWORD *a2)
{
  int v2; // r15d
  _DWORD *Pool2; // rdi
  int v6; // eax
  int v7; // edx
  _DWORD *v8; // r14
  int v9; // ebx
  int v10; // edx
  int v11; // r9d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  char v15; // al
  __int64 v16; // rdx
  unsigned int *v17; // rsi
  __int64 v18; // r15
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int *v23; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+62h] [rbp-9Eh]
  const char *v26; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v27)(); // [rsp+70h] [rbp-90h]
  char v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ah] [rbp-86h]
  const char *v30; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v31)(); // [rsp+88h] [rbp-78h]
  char v32; // [rsp+90h] [rbp-70h]
  int v33; // [rsp+92h] [rbp-6Eh]
  const char *v34; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v35)(); // [rsp+A0h] [rbp-60h]
  char v36; // [rsp+A8h] [rbp-58h]
  int v37; // [rsp+AAh] [rbp-56h]
  const char *v38; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v39)(); // [rsp+B8h] [rbp-48h]
  char v40; // [rsp+C0h] [rbp-40h]
  int v41; // [rsp+C2h] [rbp-3Eh]
  const char *v42; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v43)(); // [rsp+D0h] [rbp-30h]
  char v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+DAh] [rbp-26h]
  const char *v46; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v47)(); // [rsp+E8h] [rbp-18h]
  char v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F2h] [rbp-Eh]
  const char *v50; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v51)(); // [rsp+100h] [rbp+0h]
  char v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ah] [rbp+Ah]
  const char *v54; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v55)(); // [rsp+118h] [rbp+18h]
  char v56; // [rsp+120h] [rbp+20h]
  int v57; // [rsp+122h] [rbp+22h]
  const char *v58; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v59)(); // [rsp+130h] [rbp+30h]
  char v60; // [rsp+138h] [rbp+38h]
  int v61; // [rsp+13Ah] [rbp+3Ah]
  const char *v62; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v63)(); // [rsp+148h] [rbp+48h]
  char v64; // [rsp+150h] [rbp+50h]
  int v65; // [rsp+152h] [rbp+52h]
  const char *v66; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v67)(); // [rsp+160h] [rbp+60h]
  char v68; // [rsp+168h] [rbp+68h]
  int v69; // [rsp+16Ah] [rbp+6Ah]
  const char *v70; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v71)(); // [rsp+178h] [rbp+78h]
  char v72; // [rsp+180h] [rbp+80h]
  int v73; // [rsp+182h] [rbp+82h]
  const char *v74; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v75)(); // [rsp+190h] [rbp+90h]
  char v76; // [rsp+198h] [rbp+98h]
  int v77; // [rsp+19Ah] [rbp+9Ah]
  const char *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v79)(); // [rsp+1A8h] [rbp+A8h]
  char v80; // [rsp+1B0h] [rbp+B0h]
  int v81; // [rsp+1B2h] [rbp+B2h]
  const char *v82; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v83)(); // [rsp+1C0h] [rbp+C0h]
  char v84; // [rsp+1C8h] [rbp+C8h]
  int v85; // [rsp+1CAh] [rbp+CAh]
  const char *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v87)(); // [rsp+1D8h] [rbp+D8h]
  char v88; // [rsp+1E0h] [rbp+E0h]
  int v89; // [rsp+1E2h] [rbp+E2h]
  const char *v90; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v91)(); // [rsp+1F0h] [rbp+F0h]
  char v92; // [rsp+1F8h] [rbp+F8h]
  int v93; // [rsp+1FAh] [rbp+FAh]
  const char *v94; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v95)(); // [rsp+208h] [rbp+108h]
  char v96; // [rsp+210h] [rbp+110h]
  int v97; // [rsp+212h] [rbp+112h]
  const char *v98; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v99)(); // [rsp+220h] [rbp+120h]
  char v100; // [rsp+228h] [rbp+128h]
  int v101; // [rsp+22Ah] [rbp+12Ah]
  const char *v102; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v103)(); // [rsp+238h] [rbp+138h]
  char v104; // [rsp+240h] [rbp+140h]
  int v105; // [rsp+242h] [rbp+142h]
  const char *v106; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v107)(); // [rsp+250h] [rbp+150h]
  char v108; // [rsp+258h] [rbp+158h]
  int v109; // [rsp+25Ah] [rbp+15Ah]
  const char *v110; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v111)(); // [rsp+268h] [rbp+168h]
  char v112; // [rsp+270h] [rbp+170h]
  int v113; // [rsp+272h] [rbp+172h]
  const char *v114; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v115)(); // [rsp+280h] [rbp+180h]
  char v116; // [rsp+288h] [rbp+188h]
  int v117; // [rsp+28Ah] [rbp+18Ah]
  const char *v118; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v119)(); // [rsp+298h] [rbp+198h]
  char v120; // [rsp+2A0h] [rbp+1A0h]
  int v121; // [rsp+2A2h] [rbp+1A2h]
  const char *v122; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v123)(); // [rsp+2B0h] [rbp+1B0h]
  char v124; // [rsp+2B8h] [rbp+1B8h]
  int v125; // [rsp+2BAh] [rbp+1BAh]
  const char *v126; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v127)(); // [rsp+2C8h] [rbp+1C8h]
  char v128; // [rsp+2D0h] [rbp+1D0h]
  int v129; // [rsp+2D2h] [rbp+1D2h]
  const char *v130; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v131)(); // [rsp+2E0h] [rbp+1E0h]
  char v132; // [rsp+2E8h] [rbp+1E8h]
  int v133; // [rsp+2EAh] [rbp+1EAh]
  const char *v134; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v135)(); // [rsp+2F8h] [rbp+1F8h]
  char v136; // [rsp+300h] [rbp+200h]
  int v137; // [rsp+302h] [rbp+202h]
  const char *v138; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v139)(); // [rsp+310h] [rbp+210h]
  char v140; // [rsp+318h] [rbp+218h]
  int v141; // [rsp+31Ah] [rbp+21Ah]
  const char *v142; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v143)(); // [rsp+328h] [rbp+228h]
  char v144; // [rsp+330h] [rbp+230h]
  int v145; // [rsp+332h] [rbp+232h]
  const char *v146; // [rsp+338h] [rbp+238h]
  __int64 (__fastcall *v147)(); // [rsp+340h] [rbp+240h]
  char v148; // [rsp+348h] [rbp+248h]
  int v149; // [rsp+34Ah] [rbp+24Ah]
  const char *v150; // [rsp+350h] [rbp+250h]
  __int64 (__fastcall *v151)(); // [rsp+358h] [rbp+258h]
  char v152; // [rsp+360h] [rbp+260h]
  int v153; // [rsp+362h] [rbp+262h]
  const char *v154; // [rsp+368h] [rbp+268h]
  __int64 (__fastcall *v155)(); // [rsp+370h] [rbp+270h]
  char v156; // [rsp+378h] [rbp+278h]
  int v157; // [rsp+37Ah] [rbp+27Ah]
  const char *v158; // [rsp+380h] [rbp+280h]
  __int64 (__fastcall *v159)(); // [rsp+388h] [rbp+288h]

  v28 = 1;
  v23 = 0LL;
  v21 = 0;
  v20 = 0;
  v26 = "NumEntries";
  v24[0] = 0;
  v30 = "Revision";
  v25 = 0;
  v34 = "HighestPerformance";
  v2 = 32;
  v38 = "HighestPerformance";
  v29 = 0x40000;
  v42 = "NominalPerformance";
  v46 = "NominalPerformance";
  v32 = 2;
  v50 = "LowestNonlinearPerformance";
  v54 = "LowestNonlinearPerformance";
  v27 = AcpiParseULong;
  v58 = "LowestPerformance";
  v62 = "LowestPerformance";
  v66 = "GuaranteedPerformance";
  v70 = "DesiredPerformance";
  v74 = "MinimumPerformance";
  v78 = "MaximumPerformance";
  v31 = AcpiParseULong;
  v33 = 0x80000;
  v35 = AcpiParseStaticRegister;
  v36 = 2;
  v37 = 524290;
  v39 = AcpiParseRegister;
  v40 = 3;
  v41 = 0x200000;
  v43 = AcpiParseStaticRegister;
  v44 = 3;
  v45 = 2097154;
  v47 = AcpiParseRegister;
  v48 = 4;
  v49 = 3670016;
  v51 = AcpiParseStaticRegister;
  v52 = 4;
  v53 = 3670018;
  v55 = AcpiParseRegister;
  v56 = 5;
  v57 = 5242880;
  v59 = AcpiParseStaticRegister;
  v60 = 5;
  v61 = 5242882;
  v63 = AcpiParseRegister;
  v64 = 6;
  v65 = 6815746;
  v67 = AcpiParseRegister;
  v68 = 7;
  v69 = 8388610;
  v71 = AcpiParseRegister;
  v72 = 8;
  v73 = 9961474;
  v75 = AcpiParseRegister;
  v76 = 9;
  v77 = 11534338;
  v79 = AcpiParseRegister;
  v80 = 10;
  v81 = 13107202;
  v82 = "PerformanceReductionTolerance";
  v86 = "TimeWindow";
  v90 = "CounterWraparound";
  v94 = "CounterWraparound";
  v98 = "ReferenceCounter";
  v102 = "DeliveredCounter";
  v106 = "PerformanceLimited";
  v110 = "Enable";
  v114 = "AutonomousEnable";
  v118 = "AutonomousEnable";
  v122 = "AutonomousActivityWindow";
  v126 = "EnergyPerformancePreference";
  v130 = "ReferencePerformance";
  v134 = "ReferencePerformance";
  v138 = "LowestFrequency";
  v142 = "LowestFrequency";
  v146 = "NominalFrequency";
  v83 = AcpiParseRegister;
  v84 = 11;
  v85 = 14680066;
  v87 = AcpiParseRegister;
  v88 = 12;
  v89 = 16252928;
  v91 = AcpiParseStaticRegister;
  v92 = 12;
  v93 = 16252930;
  v95 = AcpiParseRegister;
  v96 = 13;
  v97 = 17825794;
  v99 = AcpiParseRegister;
  v100 = 14;
  v101 = 19398658;
  v103 = AcpiParseRegister;
  v104 = 15;
  v105 = 20971522;
  v107 = AcpiParseRegister;
  v108 = 16;
  v109 = 22544386;
  v111 = AcpiParseRegister;
  v112 = 17;
  v113 = 24117248;
  v115 = AcpiParseStaticRegister;
  v116 = 17;
  v117 = 24117250;
  v119 = AcpiParseRegister;
  v120 = 18;
  v121 = 25690114;
  v123 = AcpiParseRegister;
  v124 = 19;
  v125 = 27262978;
  v127 = AcpiParseRegister;
  v128 = 20;
  v129 = 28835840;
  v131 = AcpiParseStaticRegister;
  v132 = 20;
  v133 = 28835842;
  v135 = AcpiParseRegister;
  v136 = 21;
  v137 = 30408704;
  v139 = AcpiParseStaticRegister;
  v140 = 21;
  v141 = 30408706;
  v143 = AcpiParseRegister;
  v144 = 22;
  v145 = 31981568;
  v147 = AcpiParseStaticRegister;
  v148 = 22;
  v150 = "NominalFrequency";
  Pool2 = 0LL;
  v149 = 31981570;
  v154 = "OSPMNominalPerformance";
  v158 = "ResourcePriorities";
  v159 = AcpiParseCpcResourcePriorities;
  v151 = AcpiParseRegister;
  v152 = 23;
  v153 = 33554434;
  v155 = AcpiParseRegister;
  v156 = 24;
  v157 = 35127299;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1108), 0x40000u);
  v6 = AcpiEvaluateMethod(a1, 1129333599, 0, (unsigned int)&P, (__int64)&v20);
  v8 = P;
  v9 = v6;
  if ( v6 < 0 )
    goto LABEL_30;
  *(_QWORD *)(a1 + 272) |= *(_DWORD *)(a1 + 280) & 0x8000000;
  if ( !v20 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        1,
        47,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    }
    v9 = -1073741275;
    goto LABEL_30;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 544LL, 1919119952LL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_30;
  }
  v9 = AcpiParseCore((unsigned int)v24, 2, (int)v8 + 12, v8[1] - 12, (__int64)Pool2, 544, (__int64)"_CPC", 1);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_30;
    v11 = 48;
    goto LABEL_11;
  }
  v12 = Pool2[1];
  if ( !v12 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        1,
        49,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    }
    v9 = -1072431089;
    goto LABEL_30;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v15 = 1;
        v2 = 34;
        goto LABEL_20;
      }
    }
    else
    {
      v2 = 28;
    }
  }
  else
  {
    v2 = 22;
  }
  v15 = 0;
LABEL_20:
  v9 = AcpiParseCore((unsigned int)v24, v2, (int)v8 + 12, v8[1] - 12, (__int64)Pool2, 544, (__int64)"_CPC", v15);
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 50;
LABEL_11:
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        1,
        v11,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids);
    }
LABEL_30:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1112), 0x40000u);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, (ULONG)0);
    goto LABEL_32;
  }
  GetCpcRegisterDefinitionTable((__int64)Pool2, &v23, &v21);
  if ( v21 )
  {
    v17 = v23;
    v18 = v21;
    do
    {
      AcpiTranslateAccessSize((char *)Pool2 + *v17, v16);
      v17 += 6;
      --v18;
    }
    while ( v18 );
  }
  *a2 = Pool2;
LABEL_32:
  if ( v8 )
    ExFreePoolWithTag(v8, (ULONG)0);
  return (unsigned int)v9;
}
