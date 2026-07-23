/*
 * XREFs of EtwStartAutoLogger @ 0x140B44338
 * Callers:
 *     PerfDiagpStartPerfDiagLogger @ 0x1408252B4 (PerfDiagpStartPerfDiagLogger.c)
 *     EtwpEnumerateAutologgerPath @ 0x140833C18 (EtwpEnumerateAutologgerPath.c)
 *     EtwpInitializeAutoLoggers @ 0x140833F20 (EtwpInitializeAutoLoggers.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     EtwpCreateKeyTreeForPath @ 0x1406CB148 (EtwpCreateKeyTreeForPath.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenKey @ 0x140728200 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     EtwpEnableKeyProviders @ 0x140833B0C (EtwpEnableKeyProviders.c)
 *     EtwpParsePoolTagFilter @ 0x1408341FC (EtwpParsePoolTagFilter.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     RtlpQueryRegistryValues @ 0x140A10184 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x140A10F00 (RtlWriteRegistryValue.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140A478B0 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x140A6F610 (RtlNtStatusToDosError.c)
 *     EtwpStartLogger @ 0x140AB0F2C (EtwpStartLogger.c)
 *     EtwpUpdateDisallowList @ 0x140AE1434 (EtwpUpdateDisallowList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, __int64 a2, const WCHAR *a3)
{
  void *v4; // rsi
  __int64 v5; // rbx
  PCWSTR v6; // rdx
  NTSTATUS RegistryValues; // edi
  __int64 v8; // rax
  _WORD *v9; // rsi
  _WORD *v10; // r12
  _WORD *v11; // r14
  _DWORD *v12; // r13
  int v13; // r15d
  int v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned __int16 v18; // cx
  _WORD *v19; // r12
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // si
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  unsigned int v25; // eax
  const WCHAR *v26; // rdx
  GUID v27; // xmm0
  __int64 v28; // rsi
  __int64 v29; // rcx
  int started; // eax
  unsigned int v31; // r15d
  unsigned int i; // eax
  unsigned int v33; // esi
  __int64 v34; // r12
  unsigned int v35; // r14d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v37; // rax
  const WCHAR *v38; // rdx
  ULONG v39; // eax
  ULONG Class; // [rsp+20h] [rbp-E0h]
  ULONG Classa; // [rsp+20h] [rbp-E0h]
  ULONG Classb; // [rsp+20h] [rbp-E0h]
  _WORD v44[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v45; // [rsp+44h] [rbp-BCh] BYREF
  __int64 Pool2; // [rsp+48h] [rbp-B8h]
  unsigned int v47; // [rsp+50h] [rbp-B0h] BYREF
  int v48; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v50; // [rsp+60h] [rbp-A0h]
  ULONG Disposition; // [rsp+64h] [rbp-9Ch] BYREF
  int v52; // [rsp+68h] [rbp-98h] BYREF
  int v53; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG ValueData; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h]
  UNICODE_STRING v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int v63; // [rsp+C0h] [rbp-40h] BYREF
  int v64; // [rsp+C4h] [rbp-3Ch] BYREF
  int v65; // [rsp+C8h] [rbp-38h] BYREF
  PCWSTR SourceStringa; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING GuidString; // [rsp+D8h] [rbp-28h] BYREF
  PVOID P[2]; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v69[2]; // [rsp+F8h] [rbp-8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+138h] [rbp+38h] BYREF
  wchar_t *Str1; // [rsp+148h] [rbp+48h]
  __int64 v73; // [rsp+150h] [rbp+50h]
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  int v75; // [rsp+170h] [rbp+70h] BYREF
  int *v76; // [rsp+178h] [rbp+78h]
  int v77; // [rsp+180h] [rbp+80h] BYREF
  int *v78; // [rsp+188h] [rbp+88h]
  int v79; // [rsp+190h] [rbp+90h] BYREF
  __int64 v80; // [rsp+198h] [rbp+98h]
  int v81; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  int v83; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  int v85; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  int v87; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v88; // [rsp+1D8h] [rbp+D8h]
  int v89; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v90; // [rsp+1E8h] [rbp+E8h]
  int v91; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  int v93; // [rsp+200h] [rbp+100h] BYREF
  __int64 v94; // [rsp+208h] [rbp+108h]
  int v95; // [rsp+210h] [rbp+110h] BYREF
  __int64 v96; // [rsp+218h] [rbp+118h]
  int v97; // [rsp+220h] [rbp+120h] BYREF
  int *v98; // [rsp+228h] [rbp+128h]
  int v99; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_GuidString; // [rsp+238h] [rbp+138h]
  int v101; // [rsp+240h] [rbp+140h] BYREF
  __int64 v102; // [rsp+248h] [rbp+148h]
  int v103; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v104; // [rsp+258h] [rbp+158h]
  int v105; // [rsp+260h] [rbp+160h] BYREF
  PVOID *v106; // [rsp+268h] [rbp+168h]
  int v107; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v108; // [rsp+278h] [rbp+178h]
  int v109; // [rsp+280h] [rbp+180h] BYREF
  int *v110; // [rsp+288h] [rbp+188h]
  int v111; // [rsp+290h] [rbp+190h] BYREF
  PVOID *v112; // [rsp+298h] [rbp+198h]
  int v113; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v114; // [rsp+2A8h] [rbp+1A8h]
  int v115[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  const wchar_t *v116; // [rsp+2D0h] [rbp+1D0h]
  int *v117; // [rsp+2D8h] [rbp+1D8h]
  int v118; // [rsp+2E0h] [rbp+1E0h]
  int *v119; // [rsp+2E8h] [rbp+1E8h]
  __int128 v120; // [rsp+2F8h] [rbp+1F8h]
  __int128 v121; // [rsp+308h] [rbp+208h]
  __int128 v122; // [rsp+318h] [rbp+218h]
  __int64 v123; // [rsp+328h] [rbp+228h]
  __int64 (__fastcall *v124)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+330h] [rbp+230h]
  const wchar_t *v125; // [rsp+340h] [rbp+240h]
  int *v126; // [rsp+348h] [rbp+248h]
  int v127; // [rsp+350h] [rbp+250h]
  __int64 v128; // [rsp+358h] [rbp+258h]
  __int64 (__fastcall *v129)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+368h] [rbp+268h]
  const wchar_t *v130; // [rsp+378h] [rbp+278h]
  int *v131; // [rsp+380h] [rbp+280h]
  int v132; // [rsp+388h] [rbp+288h]
  __int64 v133; // [rsp+390h] [rbp+290h]
  __int64 (__fastcall *v134)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3A0h] [rbp+2A0h]
  const wchar_t *v135; // [rsp+3B0h] [rbp+2B0h]
  int *v136; // [rsp+3B8h] [rbp+2B8h]
  int v137; // [rsp+3C0h] [rbp+2C0h]
  __int64 v138; // [rsp+3C8h] [rbp+2C8h]
  __int64 (__fastcall *v139)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+3D8h] [rbp+2D8h]
  const wchar_t *v140; // [rsp+3E8h] [rbp+2E8h]
  int *v141; // [rsp+3F0h] [rbp+2F0h]
  int v142; // [rsp+3F8h] [rbp+2F8h]
  _WORD *v143; // [rsp+400h] [rbp+300h]
  int v144; // [rsp+408h] [rbp+308h]
  __int64 (__fastcall *v145)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+410h] [rbp+310h]
  const wchar_t *v146; // [rsp+420h] [rbp+320h]
  int *v147; // [rsp+428h] [rbp+328h]
  int v148; // [rsp+430h] [rbp+330h]
  __int64 v149; // [rsp+438h] [rbp+338h]
  int v150; // [rsp+440h] [rbp+340h]
  __int64 (__fastcall *v151)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+448h] [rbp+348h]
  const wchar_t *v152; // [rsp+458h] [rbp+358h]
  int *v153; // [rsp+460h] [rbp+360h]
  int v154; // [rsp+468h] [rbp+368h]
  __int64 v155; // [rsp+470h] [rbp+370h]
  int v156; // [rsp+478h] [rbp+378h]
  __int64 (__fastcall *v157)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+480h] [rbp+380h]
  const wchar_t *v158; // [rsp+490h] [rbp+390h]
  int *v159; // [rsp+498h] [rbp+398h]
  int v160; // [rsp+4A0h] [rbp+3A0h]
  int *v161; // [rsp+4A8h] [rbp+3A8h]
  int v162; // [rsp+4B0h] [rbp+3B0h]
  __int64 (__fastcall *v163)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+4B8h] [rbp+3B8h]
  const wchar_t *v164; // [rsp+4C8h] [rbp+3C8h]
  int *v165; // [rsp+4D0h] [rbp+3D0h]
  int v166; // [rsp+4D8h] [rbp+3D8h]
  int *v167; // [rsp+4E0h] [rbp+3E0h]
  int v168; // [rsp+4E8h] [rbp+3E8h]
  __int64 (__fastcall *v169)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+4F0h] [rbp+3F0h]
  const wchar_t *v170; // [rsp+500h] [rbp+400h]
  int *v171; // [rsp+508h] [rbp+408h]
  int v172; // [rsp+510h] [rbp+410h]
  int *v173; // [rsp+518h] [rbp+418h]
  int v174; // [rsp+520h] [rbp+420h]
  __int64 (__fastcall *v175)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+528h] [rbp+428h]
  const wchar_t *v176; // [rsp+538h] [rbp+438h]
  int *v177; // [rsp+540h] [rbp+440h]
  int v178; // [rsp+548h] [rbp+448h]
  int *v179; // [rsp+550h] [rbp+450h]
  __int64 (__fastcall *v180)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+560h] [rbp+460h]
  const wchar_t *v181; // [rsp+570h] [rbp+470h]
  int *v182; // [rsp+578h] [rbp+478h]
  int v183; // [rsp+580h] [rbp+480h]
  wchar_t *Buffer; // [rsp+588h] [rbp+488h]
  int Length; // [rsp+590h] [rbp+490h]
  __int64 (__fastcall *v186)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+598h] [rbp+498h]
  const WCHAR *v187; // [rsp+5A8h] [rbp+4A8h]
  int *v188; // [rsp+5B0h] [rbp+4B0h]
  int v189; // [rsp+5B8h] [rbp+4B8h]
  __int64 v190; // [rsp+5C0h] [rbp+4C0h]
  __int64 (__fastcall *v191)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+5D0h] [rbp+4D0h]
  const wchar_t *v192; // [rsp+5E0h] [rbp+4E0h]
  int *v193; // [rsp+5E8h] [rbp+4E8h]
  int v194; // [rsp+5F0h] [rbp+4F0h]
  unsigned int *v195; // [rsp+5F8h] [rbp+4F8h]
  __int64 (__fastcall *v196)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+608h] [rbp+508h]
  const wchar_t *v197; // [rsp+618h] [rbp+518h]
  int *v198; // [rsp+620h] [rbp+520h]
  int v199; // [rsp+628h] [rbp+528h]
  _WORD *v200; // [rsp+630h] [rbp+530h]
  int v201; // [rsp+638h] [rbp+538h]
  __int64 (__fastcall *v202)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+640h] [rbp+540h]
  const wchar_t *v203; // [rsp+650h] [rbp+550h]
  int *v204; // [rsp+658h] [rbp+558h]
  int v205; // [rsp+660h] [rbp+560h]
  __int64 v206; // [rsp+668h] [rbp+568h]
  int v207; // [rsp+670h] [rbp+570h]
  __int64 (__fastcall *v208)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+678h] [rbp+578h]
  const wchar_t *v209; // [rsp+688h] [rbp+588h]
  int *v210; // [rsp+690h] [rbp+590h]
  int v211; // [rsp+698h] [rbp+598h]
  int *v212; // [rsp+6A0h] [rbp+5A0h]
  __int64 (__fastcall *v213)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+6B0h] [rbp+5B0h]
  const wchar_t *v214; // [rsp+6C0h] [rbp+5C0h]
  int *v215; // [rsp+6C8h] [rbp+5C8h]
  int v216; // [rsp+6D0h] [rbp+5D0h]
  _WORD *v217; // [rsp+6D8h] [rbp+5D8h]
  int v218; // [rsp+6E0h] [rbp+5E0h]
  __int64 (__fastcall *v219)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+6E8h] [rbp+5E8h]
  const wchar_t *v220; // [rsp+6F8h] [rbp+5F8h]
  int *v221; // [rsp+700h] [rbp+600h]
  int v222; // [rsp+708h] [rbp+608h]
  int v223; // [rsp+718h] [rbp+618h]

  SourceStringa = a3;
  v73 = a2;
  LODWORD(v62) = 0;
  LODWORD(v59) = 0;
  LODWORD(v57) = 0;
  Str1 = SourceString;
  v63 = 1;
  v4 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v5 = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  DestinationString = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  ValueData = 0;
  v52 = 0;
  GuidString = 0LL;
  v61 = 0LL;
  *(_OWORD *)P = 0LL;
  v58 = 0LL;
  *(_OWORD *)v69 = 0LL;
  v56 = 0LL;
  v47 = 0;
  v53 = 0;
  v48 = 0;
  v45 = 0;
  v44[0] = 0;
  v65 = 0;
  v64 = 100;
  v50 = 0;
  Guid = 0LL;
  *(_QWORD *)&v60.Length = PsGetCurrentServerSiloGlobals()[52].Flink;
  RtlInitUnicodeString(&DestinationString, v6);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v4 = (void *)Pool2;
    if ( !Pool2 || (v8 = ExAllocatePool2(0x100uLL), (v5 = v8) == 0) )
    {
      RegistryValues = -1073741801;
      goto LABEL_91;
    }
    *(_DWORD *)(v8 + 44) = 0x20000;
    *(_DWORD *)(v8 + 48) = 4;
    RtlInitUnicodeString((PUNICODE_STRING)(v8 + 144), SourceString);
    *(_DWORD *)(v5 + 72) = 0x80000000;
    v9 = (_WORD *)(v5 + 180);
    v10 = (_WORD *)(v5 + 224);
    *(_BYTE *)(v5 + 74) = -1;
    v11 = (_WORD *)(v5 + 1252);
    *(_WORD *)(v5 + 72) = 176;
    *(_DWORD *)(v5 + 176) = 1;
    v12 = (_DWORD *)(v5 + 1272);
    v13 = 180;
    memset_0(v115, 0, 0x498uLL);
    *(_QWORD *)v115 = EtwpQueryRegistryCallback;
    v118 = 4;
    v117 = &v75;
    v75 = 4;
    v116 = L"Start";
    v76 = &v52;
    *((_QWORD *)&v121 + 1) = &v77;
    *(_QWORD *)&v121 = L"Immutable";
    *(_QWORD *)&v120 = EtwpQueryRegistryCallback;
    LODWORD(v122) = 4;
    v77 = 4;
    v78 = &v45;
    RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v115, 0LL, Class, 1);
    if ( RegistryValues < 0 )
      goto LABEL_90;
    if ( !SourceStringa )
    {
LABEL_14:
      if ( !v45 )
      {
        if ( Handle )
        {
          v123 = 0LL;
          v119 = &v52;
          v120 = 0LL;
          v121 = 0LL;
          v122 = 0LL;
          RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v115, 0LL, Classa, 1);
          if ( RegistryValues < 0 )
            RegistryValues = 0;
        }
      }
      if ( !v52 )
        goto LABEL_90;
      LODWORD(v61) = 40;
      v118 = 4;
      *(_QWORD *)v115 = EtwpQueryRegistryCallback;
      v117 = &v75;
      v116 = L"FlushThreshold";
      v75 = 4;
      v76 = (int *)(v5 + 76);
      *(_QWORD *)&v120 = EtwpQueryRegistryCallback;
      *((_QWORD *)&v121 + 1) = &v77;
      *(_QWORD *)&v121 = L"BufferSize";
      v78 = (int *)(v5 + 48);
      v126 = &v79;
      v125 = L"MinimumBuffers";
      v80 = v5 + 52;
      v131 = &v81;
      v130 = L"FlushTimer";
      v82 = v5 + 68;
      v136 = &v83;
      v135 = L"MaximumBuffers";
      v84 = v5 + 56;
      v141 = &v85;
      v140 = L"FileName";
      v143 = v44;
      v86 = v5 + 128;
      v62 = v5 + 184;
      v147 = &v87;
      v146 = L"EnableKernelFlags";
      v88 = &v61;
      v57 = v5 + 228;
      v153 = &v89;
      v152 = L"StackWalkingFilter";
      LODWORD(v122) = 4;
      v77 = 4;
      v124 = EtwpQueryRegistryCallback;
      v127 = 4;
      v79 = 4;
      v129 = EtwpQueryRegistryCallback;
      v132 = 4;
      v81 = 4;
      v134 = EtwpQueryRegistryCallback;
      v137 = 4;
      v83 = 4;
      v139 = EtwpQueryRegistryCallback;
      v142 = 1;
      v85 = 1;
      v145 = EtwpQueryRegistryCallback;
      v148 = 3;
      v87 = 3;
      LODWORD(v56) = 1024;
      v151 = EtwpQueryRegistryCallback;
      v154 = 3;
      v89 = 3;
      v90 = &v56;
      v159 = &v91;
      v158 = L"ClockType";
      v161 = &v63;
      v92 = v5 + 40;
      v165 = &v93;
      v164 = L"MaxFileSize";
      v167 = &v64;
      v94 = v5 + 60;
      v171 = &v95;
      v170 = L"LogFileMode";
      v173 = &v65;
      v96 = v5 + 64;
      v177 = &v97;
      v176 = L"DisableRealtimePersistence";
      v98 = &v53;
      v182 = &v99;
      v181 = L"Guid";
      Buffer = v44;
      p_GuidString = &GuidString;
      v188 = &v101;
      v187 = L"FileCounter";
      v102 = v5 + 96;
      v193 = &v103;
      v192 = L"FileMax";
      v104 = &v47;
      v198 = &v105;
      v157 = EtwpQueryRegistryCallback;
      v160 = 4;
      v162 = 4;
      v91 = 4;
      v163 = EtwpQueryRegistryCallback;
      v166 = 4;
      v168 = 4;
      v93 = 4;
      v169 = EtwpQueryRegistryCallback;
      v172 = 4;
      v174 = 4;
      v95 = 4;
      v175 = EtwpQueryRegistryCallback;
      v178 = 4;
      v97 = 4;
      v180 = EtwpQueryRegistryCallback;
      v183 = 1;
      v99 = 1;
      v186 = EtwpQueryRegistryCallback;
      v189 = 4;
      v101 = 4;
      v191 = EtwpQueryRegistryCallback;
      v194 = 4;
      v103 = 4;
      v196 = EtwpQueryRegistryCallback;
      v197 = L"PoolTagFilter";
      v199 = 1;
      v200 = v44;
      v106 = P;
      v59 = v5 + 1276;
      v204 = &v107;
      v203 = L"StackCaching";
      v108 = &v58;
      v210 = &v109;
      v209 = L"EnableSecurityProvider";
      v110 = &v48;
      v215 = &v111;
      v214 = L"DisallowList";
      v217 = v44;
      v112 = v69;
      v221 = &v113;
      v220 = L"V2Options";
      v222 = 11;
      v113 = 11;
      v105 = 1;
      v202 = EtwpQueryRegistryCallback;
      v205 = 3;
      v107 = 3;
      v208 = EtwpQueryRegistryCallback;
      v211 = 4;
      v109 = 4;
      v213 = EtwpQueryRegistryCallback;
      v216 = 1;
      v111 = 1;
      v219 = EtwpQueryRegistryCallback;
      v114 = v5 + 80;
      LODWORD(v58) = 8;
      v223 = 8;
      RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, (__int64)v115, 0LL, Classa, 1);
      if ( RegistryValues < 0 )
        goto LABEL_90;
      if ( Handle )
      {
        if ( v45 )
        {
          *(_QWORD *)&v120 = 0LL;
          v117 = &v101;
          *(_QWORD *)v115 = EtwpQueryRegistryCallback;
          v116 = L"FileCounter";
          v118 = 4;
          v119 = (int *)(v5 + 96);
          v76 = (int *)(v5 + 96);
          v75 = 4;
        }
        else
        {
          v119 = (int *)(v5 + 76);
          *((_QWORD *)&v122 + 1) = v5 + 48;
          v128 = v5 + 52;
          v133 = v5 + 68;
          v138 = v5 + 56;
          v143 = *(_WORD **)(v5 + 136);
          v144 = *(unsigned __int16 *)(v5 + 128);
          v149 = v62;
          v150 = v61;
          v155 = v57;
          v156 = v56;
          v161 = (int *)(v5 + 40);
          v167 = (int *)(v5 + 60);
          v173 = (int *)(v5 + 64);
          v179 = &v53;
          Buffer = GuidString.Buffer;
          Length = GuidString.Length;
          v190 = v5 + 96;
          v195 = &v47;
          v200 = P[1];
          v201 = LOWORD(P[0]);
          v206 = v59;
          v207 = v58;
          v212 = &v48;
          v217 = v69[1];
          v218 = LOWORD(v69[0]);
        }
        RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, (__int64)v115, 0LL, Classb, 1);
      }
      v14 = *(_DWORD *)(v5 + 112) | 2;
      *(_DWORD *)(v5 + 112) = v14;
      if ( !v53 )
        *(_DWORD *)(v5 + 112) = v14 | 1;
      v15 = (unsigned int)v61 >> 2;
      if ( (unsigned __int16)((unsigned int)v61 >> 2) )
      {
        *(_WORD *)(v5 + 182) = 1;
        *v9 = v15 + 1;
        ++*(_WORD *)(v5 + 178);
        *(_WORD *)(v5 + 176) += v15 + 1;
        v13 = 4 * (unsigned __int16)*v9 + 180;
      }
      v16 = v56;
      if ( (_DWORD)v56 )
      {
        v17 = (unsigned int)v56 >> 2;
        *(_WORD *)(v5 + 226) = 3;
        v18 = (v16 >> 2) + 1;
        if ( (v16 & 3) == 0 )
          v18 = v17;
        *v10 = v18 + 1;
        ++*(_WORD *)(v5 + 178);
        *(_WORD *)(v5 + 176) += *v10;
        v13 += 4 * (unsigned __int16)*v10;
        if ( (_WORD)v15 )
          v9 += 2 * (unsigned __int16)*v9;
        if ( v9 != v10 )
          memmove(v9, (const void *)(v5 + 224), 4LL * v18 + 4);
      }
      if ( P[1] )
      {
        v19 = (_WORD *)(v5 + 4 * (*(unsigned __int16 *)(v5 + 176) + 44LL));
        v20 = EtwpParsePoolTagFilter((__int64)P, v5 + 1256);
        v21 = v20;
        if ( v20 )
        {
          *(_WORD *)(v5 + 1254) = 4;
          *v11 = v20 + 1;
          ++*(_WORD *)(v5 + 178);
          *(_WORD *)(v5 + 176) += *v11;
          v13 += 4 * (unsigned __int16)*v11;
          if ( v19 != v11 )
            memmove(v19, (const void *)(v5 + 1252), 4LL * v20 + 4);
        }
      }
      else
      {
        v21 = v50;
      }
      if ( (_DWORD)v58 == 8 )
      {
        v22 = *(unsigned __int16 *)(v5 + 176);
        *v12 = 327683;
        ++*(_WORD *)(v5 + 178);
        *(_WORD *)(v5 + 176) += *(_WORD *)v12;
        v23 = (_DWORD *)(v5 + 4 * (v22 + 44));
        v13 += 4 * *(unsigned __int16 *)v12;
        if ( v23 != v12 )
          memmove(v23, (const void *)(v5 + 1272), 0xCuLL);
      }
      if ( !(_WORD)v15 && !(_DWORD)v56 && !(_DWORD)v58 && !v21 )
        *(_DWORD *)(v5 + 72) = 0;
      if ( ((*(_DWORD *)(v5 + 64) & 0x200) != 0 || (*(_DWORD *)(v5 + 64) & 0x500) == 0)
        && !*(_QWORD *)(v5 + 136)
        && !RtlCreateUnicodeString((PUNICODE_STRING)(v5 + 128), L"%SystemRoot%") )
      {
        RegistryValues = -1073741801;
LABEL_90:
        v4 = (void *)Pool2;
        goto LABEL_91;
      }
      if ( v48 )
      {
        v24 = *(_DWORD *)(v5 + 64);
        if ( (v24 & 0x80u) == 0 || (v24 & 0x100) == 0 || *(_QWORD *)(v5 + 136) )
        {
          RegistryValues = -1073741790;
          goto LABEL_90;
        }
        *(_DWORD *)(v5 + 112) |= 0x8004000u;
      }
      if ( v47 )
      {
        v25 = *(_DWORD *)(v5 + 96) + 1;
        *(_DWORD *)(v5 + 96) = v25;
        if ( v25 > v47 || v25 > 0x10 )
          *(_DWORD *)(v5 + 96) = 1;
        v26 = (const WCHAR *)Handle;
        if ( !Handle )
          v26 = (const WCHAR *)KeyHandle;
        RtlWriteRegistryValue(0x40000000u, v26, L"FileCounter", 4u, (PVOID)(v5 + 96), 4u);
      }
      if ( !wcscmp(Str1, L"GlobalLogger") )
      {
        v27 = GlobalLoggerGuid;
        Guid = GlobalLoggerGuid;
      }
      else
      {
        if ( GuidString.Buffer )
          RegistryValues = RtlGUIDFromString(&GuidString, &Guid);
        else
          RegistryValues = -1073741811;
        if ( RegistryValues < 0 )
          goto LABEL_90;
        v27 = Guid;
      }
      v28 = *(_QWORD *)&v60.Length;
      v29 = *(_QWORD *)&v60.Length;
      *(_DWORD *)v5 = v13;
      *(GUID *)(v5 + 24) = v27;
      started = EtwpStartLogger(v29, v5);
      v31 = *(unsigned __int16 *)(v5 + 8);
      RegistryValues = started;
      if ( started >= 0 )
      {
        if ( *(_WORD *)(v5 + 8) && v48 )
        {
          for ( i = 0; i < 0x10; ++i )
          {
            if ( !*(_WORD *)(v28 + 2LL * i + 4304) )
            {
              *(_WORD *)(v28 + 2LL * i + 4304) = v31;
              break;
            }
          }
        }
        if ( LOWORD(v69[0]) )
        {
          v33 = LOWORD(v69[0]) / 0x4Cu;
          if ( LOWORD(v69[0]) == 76 * v33 )
          {
            v60.Buffer = (wchar_t *)v69[1];
            *(&v60.MaximumLength + 2) = 0;
            v60.Length = 76;
            *(_DWORD *)&v60.MaximumLength = (unsigned __int16)(WORD1(v69[0]) - LOWORD(v69[0]) + 76);
            if ( v33 <= 0x200 )
            {
              v34 = Pool2;
              v35 = 0;
              if ( v33 )
              {
                while ( 1 )
                {
                  RegistryValues = RtlGUIDFromString(&v60, (GUID *)(v34 + 16LL * v35));
                  if ( RegistryValues )
                    break;
                  v60.Buffer += 38;
                  if ( ++v35 >= v33 )
                    goto LABEL_87;
                }
              }
              else
              {
LABEL_87:
                if ( !RegistryValues )
                {
                  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                  EtwpUpdateDisallowList((__int64)CurrentServerSiloGlobals[52].Flink, v31, v33, v34);
                }
              }
            }
          }
        }
        v37 = PsGetCurrentServerSiloGlobals();
        EtwpEnableKeyProviders((__int64)v37[52].Flink, v31, v73, (__int64)SourceStringa);
      }
      goto LABEL_90;
    }
    Disposition = 0;
    RtlInitUnicodeString(&DestinationString, SourceStringa);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    if ( RegistryValues == -1073741772 )
    {
      if ( (unsigned int)EtwpCreateKeyTreeForPath((__int64)SourceStringa) )
      {
LABEL_11:
        RegistryValues = 0;
        Handle = 0LL;
LABEL_12:
        if ( Disposition == 1 )
          v45 = 1;
        goto LABEL_14;
      }
      RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    }
    if ( !RegistryValues )
      goto LABEL_12;
    goto LABEL_11;
  }
LABEL_91:
  v38 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v39 = RtlNtStatusToDosError(RegistryValues);
      v38 = (const WCHAR *)KeyHandle;
      ValueData = v39;
    }
    if ( Handle )
      v38 = (const WCHAR *)Handle;
    RtlWriteRegistryValue(0x40000000u, v38, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
  {
    RtlFreeAnsiString((PUNICODE_STRING)(v5 + 128));
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( GuidString.Buffer )
  {
    ExFreePool(GuidString.Buffer);
    GuidString = 0LL;
  }
  if ( P[1] )
  {
    ExFreePool(P[1]);
    *(_OWORD *)P = 0LL;
  }
  if ( v69[1] )
    ExFreePool(v69[1]);
  return (unsigned int)RegistryValues;
}
