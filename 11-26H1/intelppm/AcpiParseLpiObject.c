/*
 * XREFs of AcpiParseLpiObject @ 0x140030110
 * Callers:
 *     AcpiEval_LPI @ 0x140027E10 (AcpiEval_LPI.c)
 *     AcpiParseProcessorContainer @ 0x140030AC0 (AcpiParseProcessorContainer.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1400096B8 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x14000A210 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_SDD @ 0x14000A364 (WPP_RECORDER_SF_SDD.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     memmove @ 0x140010440 (memmove.c)
 *     AcpiTranslateAccessSize @ 0x1400310EC (AcpiTranslateAccessSize.c)
 *     AcpiParseCore @ 0x140040F74 (AcpiParseCore.c)
 */

__int64 __fastcall AcpiParseLpiObject(__int64 a1, const wchar_t *a2, char a3, _QWORD *a4)
{
  __int64 v6; // r9
  unsigned int v7; // ebx
  unsigned __int16 v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  size_t v15; // rsi
  __int64 v16; // rcx
  unsigned __int16 v17; // r9
  int v18; // ecx
  char *v19; // r14
  __int64 v20; // rcx
  int v21; // r12d
  __int64 Pool2; // rax
  _DWORD *v23; // rsi
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int v26; // ebx
  char *v27; // r15
  unsigned int i; // r14d
  __int64 v29; // rcx
  char *v30; // rcx
  __int64 v31; // r12
  __int64 v32; // rdx
  __int64 v33; // r8
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  int v37; // ecx
  unsigned __int16 v38; // r9
  unsigned __int16 v39; // r9
  unsigned int j; // edi
  __int64 v41; // rcx
  __int64 v43; // [rsp+30h] [rbp-D0h]
  __int64 v44; // [rsp+38h] [rbp-C8h]
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  int v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h]
  _QWORD *v49; // [rsp+60h] [rbp-A0h]
  char v50; // [rsp+70h] [rbp-90h] BYREF
  int v51; // [rsp+72h] [rbp-8Eh]
  const char *v52; // [rsp+78h] [rbp-88h]
  __int64 (__fastcall *v53)(); // [rsp+80h] [rbp-80h]
  char v54; // [rsp+88h] [rbp-78h]
  int v55; // [rsp+8Ah] [rbp-76h]
  const char *v56; // [rsp+90h] [rbp-70h]
  __int64 (__fastcall *v57)(); // [rsp+98h] [rbp-68h]
  char v58; // [rsp+A0h] [rbp-60h]
  int v59; // [rsp+A2h] [rbp-5Eh]
  const char *v60; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v61)(); // [rsp+B0h] [rbp-50h]
  char v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+BAh] [rbp-46h]
  const char *v64; // [rsp+C0h] [rbp-40h]
  __int64 (__fastcall *v65)(); // [rsp+C8h] [rbp-38h]
  char v66; // [rsp+D0h] [rbp-30h]
  int v67; // [rsp+D2h] [rbp-2Eh]
  const char *v68; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall *v69)(); // [rsp+E0h] [rbp-20h]
  char v70; // [rsp+E8h] [rbp-18h]
  int v71; // [rsp+EAh] [rbp-16h]
  const char *v72; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v73)(); // [rsp+F8h] [rbp-8h]
  char v74; // [rsp+100h] [rbp+0h]
  int v75; // [rsp+102h] [rbp+2h]
  const char *v76; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v77)(); // [rsp+110h] [rbp+10h]
  char v78; // [rsp+118h] [rbp+18h]
  int v79; // [rsp+11Ah] [rbp+1Ah]
  const char *v80; // [rsp+120h] [rbp+20h]
  __int64 (__fastcall *v81)(); // [rsp+128h] [rbp+28h]
  char v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+132h] [rbp+32h]
  const char *v84; // [rsp+138h] [rbp+38h]
  __int64 (__fastcall *v85)(); // [rsp+140h] [rbp+40h]
  char v86; // [rsp+148h] [rbp+48h]
  int v87; // [rsp+14Ah] [rbp+4Ah]
  const char *v88; // [rsp+150h] [rbp+50h]
  NTSTATUS (__fastcall *v89)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+158h] [rbp+58h]
  char v90; // [rsp+160h] [rbp+60h] BYREF
  int v91; // [rsp+162h] [rbp+62h]
  const char *v92; // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v93)(); // [rsp+170h] [rbp+70h]
  char v94; // [rsp+178h] [rbp+78h]
  int v95; // [rsp+17Ah] [rbp+7Ah]
  const char *v96; // [rsp+180h] [rbp+80h]
  __int64 (__fastcall *v97)(); // [rsp+188h] [rbp+88h]
  char v98; // [rsp+190h] [rbp+90h]
  int v99; // [rsp+192h] [rbp+92h]
  const char *v100; // [rsp+198h] [rbp+98h]
  __int64 (__fastcall *v101)(); // [rsp+1A0h] [rbp+A0h]
  char v102; // [rsp+1A8h] [rbp+A8h]
  int v103; // [rsp+1AAh] [rbp+AAh]
  const char *v104; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v105)(); // [rsp+1B8h] [rbp+B8h]
  char v106; // [rsp+1C0h] [rbp+C0h]
  int v107; // [rsp+1C2h] [rbp+C2h]
  const char *v108; // [rsp+1C8h] [rbp+C8h]
  __int64 (__fastcall *v109)(); // [rsp+1D0h] [rbp+D0h]
  char v110; // [rsp+1D8h] [rbp+D8h]
  int v111; // [rsp+1DAh] [rbp+DAh]
  const char *v112; // [rsp+1E0h] [rbp+E0h]
  __int64 (__fastcall *v113)(); // [rsp+1E8h] [rbp+E8h]
  char v114; // [rsp+1F0h] [rbp+F0h]
  int v115; // [rsp+1F2h] [rbp+F2h]
  const char *v116; // [rsp+1F8h] [rbp+F8h]
  __int64 (__fastcall *v117)(); // [rsp+200h] [rbp+100h]
  char v118; // [rsp+208h] [rbp+108h]
  int v119; // [rsp+20Ah] [rbp+10Ah]
  const char *v120; // [rsp+210h] [rbp+110h]
  __int64 (__fastcall *v121)(); // [rsp+218h] [rbp+118h]
  char v122; // [rsp+220h] [rbp+120h]
  int v123; // [rsp+222h] [rbp+122h]
  const char *v124; // [rsp+228h] [rbp+128h]
  __int64 (__fastcall *v125)(); // [rsp+230h] [rbp+130h]
  char v126; // [rsp+238h] [rbp+138h]
  int v127; // [rsp+23Ah] [rbp+13Ah]
  const char *v128; // [rsp+240h] [rbp+140h]
  __int64 (__fastcall *v129)(); // [rsp+248h] [rbp+148h]
  char v130; // [rsp+250h] [rbp+150h]
  int v131; // [rsp+252h] [rbp+152h]
  const char *v132; // [rsp+258h] [rbp+158h]
  NTSTATUS (__fastcall *v133)(__int64, struct _UNICODE_STRING *, unsigned int); // [rsp+260h] [rbp+160h]

  v52 = "MinimumResidency";
  v49 = a4;
  v90 = 0;
  v91 = 0;
  v68 = "ResidencyCounterFrequency";
  v54 = 1;
  v50 = 0;
  v66 = 4;
  v51 = 0;
  v53 = AcpiParseULong;
  v57 = AcpiParseULong;
  v61 = AcpiParseULong;
  v92 = "MinimumResidency";
  v56 = "WakeupLatency";
  v93 = AcpiParseULong;
  v65 = AcpiParseULong;
  v96 = "WakeupLatency";
  v69 = AcpiParseULong;
  v73 = AcpiParseULong;
  v97 = AcpiParseULong;
  v60 = "Flags";
  v77 = AcpiParseRegister;
  v81 = AcpiParseRegister;
  v82 = 8;
  v85 = AcpiParseRegister;
  v100 = "Flags";
  v55 = 0x40000;
  v58 = 2;
  v59 = 0x80000;
  v62 = 3;
  v63 = 786432;
  v64 = "ArchitectureFlags";
  v67 = 0x100000;
  v70 = 5;
  v71 = 1310720;
  v72 = "EnabledParentState";
  v74 = 6;
  v75 = 1572866;
  v76 = "EntryMethod";
  v78 = 7;
  v79 = 2359298;
  v80 = "ResidencyCounter";
  v83 = 3145730;
  v84 = "UsageCounter";
  v86 = 9;
  v87 = 4194305;
  v88 = "StateName";
  v89 = AcpiParseAnsiString;
  v94 = 1;
  v95 = 0x40000;
  v98 = 2;
  v99 = 0x80000;
  v112 = "EnabledParentState";
  v124 = "ResidencyCounter";
  v117 = AcpiParseRegisterOrQword;
  v101 = AcpiParseULong;
  v121 = AcpiParseStaticRegister;
  v104 = "ArchitectureFlags";
  v126 = 8;
  v6 = *(unsigned int *)(a1 + 4);
  v128 = "UsageCounter";
  v125 = AcpiParseRegister;
  v129 = AcpiParseRegister;
  v102 = 3;
  v103 = 786432;
  v105 = AcpiParseULong;
  v106 = 4;
  v107 = 0x100000;
  v108 = "ResidencyCounterFrequency";
  v109 = AcpiParseULong;
  v110 = 5;
  v111 = 1310720;
  v113 = AcpiParseULong;
  v114 = 6;
  v115 = 1572866;
  v116 = "EntryMethod";
  v118 = 6;
  v119 = 1572864;
  v120 = "EntryMethod";
  v122 = 7;
  v123 = 2359298;
  v127 = 3145730;
  v130 = 9;
  v131 = 4194305;
  v132 = "StateName";
  v133 = AcpiParseAnsiString;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x34u,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        a2);
    return (unsigned int)-1073741275;
  }
  if ( *(_WORD *)(a1 + 12) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 53;
LABEL_8:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v8,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      a2);
    return (unsigned int)-1072431096;
  }
  v9 = *(unsigned __int16 *)(a1 + 14);
  v47 = *(_DWORD *)(a1 + 16);
  v10 = v9;
  if ( (unsigned __int16)v9 < 4u )
    v10 = 4;
  v11 = v6 - v10 - 16;
  if ( (unsigned __int16)v9 < 4u )
    v9 = 4LL;
  v12 = (unsigned __int16 *)(v9 + a1 + 16);
  if ( v11 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Sd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)"StateName",
        1LL,
        0x36u,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        a2,
        v6 - v10 - 16);
    return (unsigned int)-1072431096;
  }
  v13 = v6 + a1;
  if ( (unsigned __int64)v12 >= v6 + a1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 55;
    goto LABEL_8;
  }
  v14 = *v12;
  if ( (_WORD)v14 && (_WORD)v14 != 2 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 56;
    goto LABEL_8;
  }
  _mm_lfence();
  v15 = v12[1];
  v16 = v15;
  if ( (unsigned __int16)v15 < 4u )
    v16 = 4LL;
  if ( v11 < (unsigned __int64)(v16 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v17 = 57;
LABEL_29:
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      1LL,
      v17,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      a2,
      v11);
    return (unsigned int)-1072431096;
  }
  if ( (_WORD)v14 )
  {
    if ( (unsigned __int16)v15 > 8u )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)-1072431096;
      v8 = 58;
      goto LABEL_8;
    }
    v46 = 0LL;
    memmove(&v46, v12 + 2, v15);
    v48 = v46;
  }
  else
  {
    v14 = *((unsigned int *)v12 + 1);
    v48 = v14;
  }
  v18 = v15;
  if ( (unsigned __int16)v15 < 4u )
    v18 = 4;
  v11 += -4 - v18;
  if ( (unsigned __int16)v15 < 4u )
    v15 = 4LL;
  v19 = (char *)v12 + v15 + 4;
  if ( v11 < 8 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v17 = 59;
    goto LABEL_29;
  }
  if ( (unsigned __int64)v19 >= v13 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 60;
    goto LABEL_8;
  }
  if ( *(_WORD *)v19 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v8 = 61;
    goto LABEL_8;
  }
  v20 = 4LL;
  if ( *((_WORD *)v19 + 1) >= 4u )
    v20 = *((unsigned __int16 *)v19 + 1);
  if ( v11 < (unsigned __int64)(v20 + 4) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1072431096;
    v17 = 62;
    goto LABEL_29;
  }
  _mm_lfence();
  v21 = *((_DWORD *)v19 + 1);
  LODWORD(v46) = v21;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(80 * v21 + 24), 1919119952LL);
  v23 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  _mm_lfence();
  *(_DWORD *)Pool2 = v47;
  *(_QWORD *)(Pool2 + 8) = v48;
  *(_DWORD *)(Pool2 + 16) = v21;
  v24 = *((unsigned __int16 *)v19 + 1);
  v25 = *((unsigned __int16 *)v19 + 1);
  if ( (unsigned __int16)v24 < 4u )
    v25 = 4;
  v26 = -4 - v25 + v11;
  if ( (unsigned __int16)v24 < 4u )
    v24 = 4LL;
  v27 = &v19[v24 + 4];
  for ( i = 0; ; ++i )
  {
    if ( (unsigned __int64)v27 >= a1 + (unsigned __int64)*(unsigned int *)(a1 + 4) )
    {
      if ( i == v21 )
      {
        if ( i )
        {
          v7 = 0;
          *v49 = v23;
          return v7;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_101;
        v39 = 69;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_101;
        v39 = 68;
      }
      goto LABEL_100;
    }
    if ( i == v21 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_101;
      v39 = 63;
LABEL_100:
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v39,
        (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
        a2);
      goto LABEL_101;
    }
    if ( v26 < 8 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = 64;
LABEL_87:
        LODWORD(v44) = v26;
        LODWORD(v43) = i + 3;
        WPP_RECORDER_SF_SDD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v24,
          4LL,
          v38,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          a2,
          v43,
          v44);
      }
LABEL_101:
      v7 = -1072431096;
      goto LABEL_102;
    }
    if ( *(_WORD *)v27 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v43) = i + 3;
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v24,
          4LL,
          0x41u,
          (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
          a2,
          v43);
      }
      goto LABEL_101;
    }
    v24 = *((unsigned __int16 *)v27 + 1);
    v29 = 4LL;
    if ( (unsigned __int16)v24 >= 4u )
      v29 = *((unsigned __int16 *)v27 + 1);
    if ( v26 < (unsigned __int64)(v29 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = 66;
        goto LABEL_87;
      }
      goto LABEL_101;
    }
    LODWORD(v44) = 1;
    v30 = &v90;
    v31 = 20LL * i;
    if ( !a3 )
      v30 = &v50;
    if ( (int)AcpiParseCore(
                (_DWORD)v30,
                (unsigned int)(a3 != 0) + 10,
                (int)v27 + 4,
                v24,
                (__int64)&v23[v31 + 6],
                80,
                (__int64)"_LPI",
                v44) < 0 )
      break;
    v34 = &v23[v31 + 12];
    if ( *v34 != 127 )
      AcpiTranslateAccessSize(v34);
    v35 = &v23[v31 + 15];
    if ( *v35 != 127 )
      AcpiTranslateAccessSize(v35);
    v36 = &v23[v31 + 18];
    if ( *v36 != 127 )
      AcpiTranslateAccessSize(v36);
    v24 = *((unsigned __int16 *)v27 + 1);
    v21 = v46;
    v37 = *((unsigned __int16 *)v27 + 1);
    if ( (unsigned __int16)v24 < 4u )
      v37 = 4;
    v26 += -4 - v37;
    if ( (unsigned __int16)v24 < 4u )
      v24 = 4LL;
    v27 += v24 + 4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v43) = i + 3;
    WPP_RECORDER_SF_Sd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v32,
      v33,
      0x43u,
      (__int64)&WPP_a2054a8aebda3d51da79f0036784113c_Traceguids,
      a2,
      v43);
  }
  v7 = -1072431089;
LABEL_102:
  for ( j = 0; j < v23[4]; ++j )
  {
    v41 = 20LL * j;
    if ( *(_QWORD *)&v23[v41 + 24] )
      RtlFreeUnicodeString((PUNICODE_STRING)&v23[v41 + 22]);
  }
  ExFreePoolWithTag(v23, (ULONG)0);
  return v7;
}
