/*
 * XREFs of InitCpcStatesInternal @ 0x140032B70
 * Callers:
 *     RegisterKernelCpc @ 0x1400356E0 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x14003D910 (RegisterHvCpcCounters.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EnumerateNextDevice @ 0x140001490 (EnumerateNextDevice.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x140001800 (WriteGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x140002120 (ReadGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrEx @ 0x140002148 (ReadGenAddrEx.c)
 *     ResetEnumerationContext @ 0x140002B9C (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_DD @ 0x140003168 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x140003880 (WPP_RECORDER_SF_.c)
 *     ReadGenAddrHiddenEx @ 0x14000395C (ReadGenAddrHiddenEx.c)
 *     ClearEnumerationContext @ 0x140005440 (ClearEnumerationContext.c)
 *     CpcFindResourcePriorityDescriptor @ 0x140006364 (CpcFindResourcePriorityDescriptor.c)
 *     CpcRegisterIsSupportedEx @ 0x140006494 (CpcRegisterIsSupportedEx.c)
 *     GetCpcRegisterDefinitionTable @ 0x1400066D0 (GetCpcRegisterDefinitionTable.c)
 *     WPP_RECORDER_SF_ii @ 0x14000B60C (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x14000B738 (WPP_RECORDER_SF_iii.c)
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     memset @ 0x14000EA40 (memset.c)
 *     GetRegistryDwordValue @ 0x1400243B4 (GetRegistryDwordValue.c)
 *     ProcLibTraceNoPayloadEvent @ 0x140024E2C (ProcLibTraceNoPayloadEvent.c)
 *     CpcConnectNativeInterrupt @ 0x1400268C4 (CpcConnectNativeInterrupt.c)
 *     ExecutePccCommand @ 0x140027564 (ExecutePccCommand.c)
 *     StartPccCommand @ 0x14002787C (StartPccCommand.c)
 *     DisplayKernelPerfStates @ 0x14002E1BC (DisplayKernelPerfStates.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x14003232C (AllocateAndInitKernelPerfStatesRegistration.c)
 *     GetLogicalProcessorIndex @ 0x1400327A8 (GetLogicalProcessorIndex.c)
 *     GetPackageAffinity @ 0x1400328D0 (GetPackageAffinity.c)
 *     InitCommonPerfStateContext @ 0x140032AA0 (InitCommonPerfStateContext.c)
 *     ProcLibCapChange @ 0x14004061C (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x140042498 (GetPerfDomain.c)
 */

__int64 __fastcall InitCpcStatesInternal(__int64 a1, __int64 (__fastcall *a2)(__int64))
{
  BOOL v2; // edi
  __int64 v3; // r13
  __int64 v5; // rsi
  int v6; // edx
  int started; // edi
  void (__fastcall *v8)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 Pool2; // rax
  int v10; // ecx
  __int64 v11; // r14
  char v12; // r12
  int i; // eax
  PVOID v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdi
  int v17; // eax
  int v18; // r10d
  unsigned __int8 v19; // r11
  __int64 v20; // rbx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // r9
  int v27; // r10d
  int v28; // ecx
  char v29; // al
  int v30; // r10d
  int v31; // ecx
  __int64 v32; // rax
  int GenAddr; // eax
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 (__fastcall *v36)(__int64, __int64, __int64 *, __int64 *); // rcx
  int v37; // eax
  char v38; // r8
  __m128i v39; // xmm1
  unsigned int v40; // r9d
  __int64 v41; // xmm0_8
  __int64 v42; // rdx
  _BYTE *v43; // rdx
  int v44; // r9d
  __int64 v45; // rdx
  char v46; // r8
  char v47; // r10d^3
  char v48; // al
  int v49; // eax
  int v50; // ecx
  unsigned int *v51; // rcx
  __int64 v52; // r8
  int v53; // edx
  __int64 v54; // rax
  __int64 v55; // r15
  __int64 v56; // r12
  _QWORD *v57; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v59; // r12
  __int64 v60; // rbx
  char v61; // r11
  __int64 *v62; // rdi
  __int64 v63; // rbx
  int v64; // edx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 j; // rbx
  int v68; // edx
  __int64 v69; // rdi
  PVOID v70; // r13
  struct _GROUP_AFFINITY *v71; // rdx
  _BYTE *v72; // rcx
  __int64 v73; // rax
  int v74; // r9d
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  bool v80; // al
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int64 v84; // rcx
  int v85; // eax
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // rax
  unsigned __int16 v88; // r9
  char v89; // r12
  __int64 v90; // rbx
  int v91; // edi
  __int64 inited; // rax
  char v93; // dl
  int v94; // r8d
  char v95; // r9
  void *v96; // rax
  unsigned __int64 (__fastcall *v97)(__int64, __int64, __int64); // rax
  char v98; // r10
  unsigned int v99; // ecx
  bool v100; // al
  int v101; // ecx
  int v102; // eax
  int v103; // eax
  int v104; // ecx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // r8
  unsigned __int64 v108; // rtt
  __int64 v109; // rax
  unsigned __int64 v110; // r8
  __int64 v111; // rcx
  unsigned __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 v116; // rax
  unsigned int v117; // r12d
  _DWORD *v118; // r13
  __int64 v119; // rbx
  struct _GROUP_AFFINITY *v120; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  int v122; // edx
  unsigned __int64 v123; // rax
  __int64 v124; // rdx
  _QWORD *v125; // r10
  unsigned __int8 v126; // cl
  unsigned __int8 v127; // cl
  int LogicalProcessorIndex; // eax
  __int64 v129; // r10
  _QWORD *v130; // r10
  __int64 (__fastcall *v131)(__int64); // rax
  __int64 *v133; // [rsp+20h] [rbp-E0h]
  unsigned __int64 (__fastcall **v134)(__int64, __int64, __int64); // [rsp+28h] [rbp-D8h]
  __int64 v135; // [rsp+28h] [rbp-D8h]
  char *v136; // [rsp+30h] [rbp-D0h]
  __int64 v137; // [rsp+30h] [rbp-D0h]
  char v138; // [rsp+60h] [rbp-A0h]
  char v139; // [rsp+61h] [rbp-9Fh]
  char v140; // [rsp+62h] [rbp-9Eh]
  char v141; // [rsp+63h] [rbp-9Dh]
  char v142; // [rsp+64h] [rbp-9Ch]
  char v143; // [rsp+65h] [rbp-9Bh]
  bool v144; // [rsp+66h] [rbp-9Ah]
  char v145; // [rsp+67h] [rbp-99h]
  PVOID DeferredContext; // [rsp+70h] [rbp-90h] BYREF
  char v147; // [rsp+78h] [rbp-88h]
  char IsSupported; // [rsp+79h] [rbp-87h]
  char v149; // [rsp+7Ah] [rbp-86h]
  char v150; // [rsp+7Bh] [rbp-85h] BYREF
  char v151; // [rsp+7Ch] [rbp-84h]
  int v152; // [rsp+80h] [rbp-80h]
  int v153; // [rsp+84h] [rbp-7Ch]
  int v154; // [rsp+88h] [rbp-78h]
  int v155; // [rsp+8Ch] [rbp-74h] BYREF
  int v156; // [rsp+90h] [rbp-70h]
  int v157; // [rsp+94h] [rbp-6Ch]
  int v158; // [rsp+98h] [rbp-68h]
  int v159; // [rsp+9Ch] [rbp-64h]
  int v160; // [rsp+A0h] [rbp-60h]
  int v161; // [rsp+A4h] [rbp-5Ch]
  __int64 v162; // [rsp+A8h] [rbp-58h]
  _OWORD v163[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v164; // [rsp+D0h] [rbp-30h]
  unsigned int v165; // [rsp+D8h] [rbp-28h] BYREF
  int v166; // [rsp+DCh] [rbp-24h] BYREF
  BOOL v167; // [rsp+E0h] [rbp-20h]
  _QWORD *v168; // [rsp+E8h] [rbp-18h]
  __int64 v169; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v170; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 (__fastcall *v171)(__int64, __int64, __int64); // [rsp+100h] [rbp+0h] BYREF
  __int64 (__fastcall *v172)(__int64, __int64, __int64 *, __int64 *); // [rsp+108h] [rbp+8h]
  __int64 v173; // [rsp+110h] [rbp+10h]
  unsigned int *v174; // [rsp+118h] [rbp+18h] BYREF
  __int64 v175; // [rsp+120h] [rbp+20h] BYREF
  __int64 v176; // [rsp+128h] [rbp+28h] BYREF
  __int64 v177; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v178)(__int64); // [rsp+138h] [rbp+38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+140h] [rbp+40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v181[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v182[272]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v183[2]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v184; // [rsp+390h] [rbp+290h]

  v3 = 0LL;
  v178 = a2;
  v162 = a1;
  v174 = 0LL;
  v165 = 0;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v181, 0, 0x108uLL);
  v170 = 0LL;
  v175 = 0LL;
  v171 = 0LL;
  memset(v182, 0, 0x108uLL);
  v176 = 0LL;
  v161 = 0;
  v184 = 0LL;
  memset(v163, 0, sizeof(v163));
  v150 = 0;
  v5 = 0LL;
  v169 = 0LL;
  PreviousAffinity = 0LL;
  v166 = 0;
  *(_OWORD *)v183 = 0LL;
  v151 = 0;
  v139 = 0;
  ClearEnumerationContext(v163);
  v155 = 0;
  v164 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v155);
  if ( !v155 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        3,
        31,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
    }
    *(_QWORD *)(a1 + 280) &= ~0x8000000uLL;
    return (unsigned int)-1073741823;
  }
  LOBYTE(v156) = *(_QWORD *)(a1 + 336) != 0LL;
  v8 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v172 = 0LL;
  v8(WdfDriverGlobals, qword_1400155D8, 0LL);
  LODWORD(v168) = GetPerfDomain(a1, v163, &v166);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(1400 * (_DWORD)v168), 1919119952LL);
  v177 = Pool2;
  v11 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_323;
  }
  LOBYTE(Pool2) = 0;
  LOBYTE(v154) = 0;
  LOBYTE(v10) = 0;
  v159 = Pool2;
  v160 = v10;
  LOBYTE(Pool2) = 1;
  v140 = 1;
  v12 = 1;
  v143 = 1;
  LOBYTE(v157) = 0;
  LOBYTE(v158) = 0;
  v147 = 0;
  v142 = 0;
  v141 = 0;
  IsSupported = 0;
  v149 = 0;
  v138 = 0;
  v145 = 0;
  v161 = 1000;
  v144 = 0;
  v152 = Pool2;
  KeInitializeAffinityEx2(v181, 32LL);
  ResetEnumerationContext((__int64 *)v163);
  for ( i = EnumerateNextDevice((__int64 *)v163, &DeferredContext);
        !i;
        i = EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v181, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v2) = 0;
  v167 = v2;
  ResetEnumerationContext((__int64 *)v163);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
  {
    v14 = DeferredContext;
    if ( !*((_DWORD *)DeferredContext + 20) )
    {
      v3 = *((_QWORD *)DeferredContext + 74);
      KeInitializeAffinityEx2(v182, 32LL);
      if ( (int)GetPackageAffinity((__int64)v14, (__int64)v182) >= 0 )
        v167 = KeIsEqualAffinityEx(v182, v181) != 0;
      break;
    }
  }
  v15 = ResetEnumerationContext((__int64 *)v163);
  LOBYTE(v15) = v183[0];
  v16 = v11 + 124;
  v153 = v15;
  while ( 1 )
  {
    v17 = EnumerateNextDevice((__int64 *)v163, &DeferredContext);
    if ( v17 )
      break;
    v20 = *((_QWORD *)DeferredContext + 74);
    if ( *(_BYTE *)(v20 + 272) == v19 || *(_BYTE *)(v20 + 296) == v19 )
      v142 = v18;
    if ( *(_BYTE *)(v20 + 344) == v19
      || *(_BYTE *)(v20 + 152) == v19
      || *(_BYTE *)(v20 + 176) == v19
      || *(_BYTE *)(v20 + 128) == v19
      || *(_BYTE *)(v20 + 200) == v19
      || *(_BYTE *)(v20 + 416) == v19 )
    {
      v141 = v18;
    }
    v21 = (unsigned __int8)v157;
    if ( *(_BYTE *)(v20 + 104) == v19 )
      v21 = v18;
    v22 = *(_BYTE *)(v20 + 8) == v19;
    v157 = v21;
    v23 = (unsigned __int8)v158;
    if ( v22 )
      v23 = v18;
    v158 = v23;
    if ( *(_BYTE *)(v20 + 392) == v19 || *(_BYTE *)(v20 + 368) == v19 || *(_BYTE *)(v20 + 224) == v19 )
      v147 = v18;
    *(_QWORD *)(v16 + 20) = v20;
    IsSupported = CpcRegisterIsSupportedEx(v20 + 344);
    *(_BYTE *)v16 = IsSupported;
    *(_BYTE *)(v16 + 1) = CpcRegisterIsSupportedEx(v20 + 128);
    *(_BYTE *)(v16 + 2) = CpcRegisterIsSupportedEx(v20 + 152);
    *(_BYTE *)(v16 + 3) = CpcRegisterIsSupportedEx(v20 + 176);
    *(_BYTE *)(v16 + 6) = CpcRegisterIsSupportedEx(v20 + 200);
    *(_BYTE *)(v16 + 7) = CpcRegisterIsSupportedEx(v20 + 104);
    v149 = CpcRegisterIsSupportedEx(v24);
    v25 = CpcRegisterIsSupportedEx(v20 + 416);
    v28 = (unsigned __int8)v159;
    if ( v25 )
      v28 = v27;
    *(_BYTE *)(v16 + 4) = v25;
    v159 = v28;
    v29 = CpcRegisterIsSupportedEx(v26);
    v31 = (unsigned __int8)v160;
    if ( v29 )
      v31 = v30;
    *(_BYTE *)(v16 + 5) = v29;
    v160 = v31;
    if ( qword_140015818 )
    {
      if ( (unsigned __int8)qword_140015818(v20, &v169) )
      {
        *(_BYTE *)(v16 + 1224) = 1;
        v32 = v169;
        *(_OWORD *)(v16 + 1228) = *(_OWORD *)(v169 + 80);
        *(_QWORD *)(v16 + 1244) = *(_QWORD *)(v32 + 96);
        *(_QWORD *)(v16 + 1252) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - *(_BYTE *)(v16 + 1229)) << *(_BYTE *)(v16 + 1230);
        GenAddr = ReadGenAddrEx((unsigned __int8 *)(v169 + 56));
        v34 = *(unsigned __int8 *)(v16 + 1229);
        *(_DWORD *)(v16 + 1260) = GenAddr;
        v35 = (unsigned int)(GenAddr - 1);
        if ( v35 > (1LL << v34) - 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x20u,
              (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
              v34,
              v35);
          goto LABEL_91;
        }
      }
    }
    *(_QWORD *)(v16 + 1212) = CpcFindResourcePriorityDescriptor(*(_DWORD **)(v20 + 536));
    if ( qword_140015810 )
      v36 = (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))qword_140015810(v20);
    else
      v36 = v172;
    if ( !v36 )
      v36 = GetCpcDifferentialFeedback;
    v37 = (unsigned __int8)v156;
    if ( v36 == (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64 *))qword_1400157E8 )
      v37 = 0;
    v172 = v36;
    v156 = v37;
    if ( !qword_140015820 || !(unsigned __int8)qword_140015820(v20, 0LL) )
      v143 = 0;
    v38 = v138;
    v39 = 0LL;
    v153 = _mm_cvtsi128_si32((__m128i)0LL);
    v184 = 0LL;
    v40 = 0;
    v41 = 0LL;
    *(_OWORD *)v183 = 0LL;
    while ( v40 < 5 )
    {
      if ( v40 )
      {
        switch ( v40 )
        {
          case 1u:
            v42 = v20 + 152;
            break;
          case 2u:
            v42 = v20 + 176;
            break;
          case 3u:
            v42 = v20 + 416;
            break;
          default:
            v42 = v20 + 200;
            break;
        }
      }
      else
      {
        v42 = v20 + 128;
      }
      if ( CpcRegisterIsSupportedEx(v42) )
      {
        v138 = 1;
        if ( *v43 == 10 )
          goto LABEL_74;
        if ( CpcRegisterIsSupportedEx((__int64)v183) )
        {
          if ( (_BYTE)v153 != v46
            || *(__int64 *)((char *)v183 + 4) != *(_QWORD *)(v45 + 4)
            || v47 != *(_BYTE *)(v45 + 3) )
          {
LABEL_74:
            v12 = 0;
            v140 = 0;
            goto LABEL_78;
          }
        }
        else
        {
          v39 = *(__m128i *)v45;
          v41 = *(_QWORD *)(v45 + 16);
          v48 = _mm_cvtsi128_si32(*(__m128i *)v45);
          *(_OWORD *)v183 = *(_OWORD *)v45;
          LOBYTE(v153) = v48;
          v184 = v41;
        }
        v38 = 1;
      }
      v40 = v44 + 1;
    }
    v138 = v38;
    v140 = v12;
    if ( v38 )
    {
      v138 = v38;
      v140 = v12;
      if ( v12 )
      {
        *(__m128i *)(v16 + 28) = v39;
        v138 = v38;
        *(_QWORD *)(v16 + 44) = v41;
        v140 = v12;
      }
    }
LABEL_78:
    if ( qword_140015838 )
    {
      v136 = &v150;
      v134 = &v171;
      v133 = &v176;
      v49 = qword_140015838(DeferredContext, v16 - 124, &v170, &v175);
      v50 = (unsigned __int8)v152;
      if ( v49 < 0 )
        v50 = 0;
      v152 = v50;
    }
    GetCpcRegisterDefinitionTable(v20, &v174, &v165);
    if ( v165 )
    {
      v51 = v174;
      v52 = v165;
      LOBYTE(v53) = v154;
      do
      {
        v54 = *v51;
        v51 += 6;
        v53 = (unsigned __int8)v53;
        if ( *(_BYTE *)(v54 + v20) == 10 )
          v53 = 1;
        --v52;
      }
      while ( v52 );
      v154 = v53;
    }
    v16 += 1400LL;
  }
  if ( !v170 || !v171 )
  {
    LOBYTE(v17) = 0;
    v152 = v17;
  }
  if ( (_BYTE)v154 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140015C30,
      0LL);
    ResetEnumerationContext((__int64 *)v163);
    v55 = v11 + 144;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
    {
      if ( *(_BYTE *)(v55 - 20) )
      {
        v56 = *(_QWORD *)v55;
        v57 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v55 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v139 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v139 = 1;
        }
        if ( (*(_DWORD *)(v57[32] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(*(_QWORD *)(v162 + 256));
          if ( started < 0 )
          {
            v59 = v162;
LABEL_114:
            ResetEnumerationContext((__int64 *)v163);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
            {
              if ( (*(_DWORD *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
              {
                v60 = *(_QWORD *)(v59 + 256);
                (*(void (__fastcall **)(_QWORD))(v60 + 136))(*(_QWORD *)(v60 + 72));
                *(_DWORD *)(v60 + 144) &= ~1u;
              }
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_140015C30);
            goto LABEL_323;
          }
        }
        WriteGenAddrMaybeHiddenEx((__int64)v57, v56 + 344, 1LL);
      }
      v55 += 1400LL;
    }
    ResetEnumerationContext((__int64 *)v163);
    v59 = v162;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
      {
        started = ExecutePccCommand(*(_QWORD *)(v59 + 256));
        if ( started < 0 )
          goto LABEL_114;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_140015C30);
  }
  ResetEnumerationContext((__int64 *)v163);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
  {
    v62 = (__int64 *)(v11 + 144);
    do
    {
      v63 = *v62;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v63 + 32) == v61
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (unsigned __int8 *)(v63 + 32)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v64) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v64,
            1,
            33,
            (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
        }
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
          if ( (unsigned int)dword_1400150F8 > 5 && tlgKeywordOn((__int64)&dword_1400150F8, 0x400000000000LL) )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_1400150F8,
              (unsigned __int8 *)dword_140012783,
              v65,
              v66,
              (ULONG)2,
              (struct _EVENT_DATA_DESCRIPTOR *)v183);
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v63 + 32) = *(_QWORD *)(v3 + 32);
        *(_DWORD *)(v63 + 40) = *(_DWORD *)(v3 + 40);
        if ( *(_BYTE *)(v63 + 8) == 10 )
        {
          *(_QWORD *)(v63 + 8) = *(_QWORD *)(v3 + 8);
          *(_DWORD *)(v63 + 16) = *(_DWORD *)(v3 + 16);
        }
        if ( *(_BYTE *)(v63 + 56) == 10 )
        {
          *(_QWORD *)(v63 + 56) = *(_QWORD *)(v3 + 56);
          *(_DWORD *)(v63 + 64) = *(_DWORD *)(v3 + 64);
        }
        if ( *(_BYTE *)(v63 + 80) == 10 )
        {
          *(_QWORD *)(v63 + 80) = *(_QWORD *)(v3 + 80);
          *(_DWORD *)(v63 + 88) = *(_DWORD *)(v3 + 88);
        }
        if ( *(_BYTE *)(v63 + 440) == 10 )
        {
          *(_QWORD *)(v63 + 440) = *(_QWORD *)(v3 + 440);
          *(_DWORD *)(v63 + 448) = *(_DWORD *)(v3 + 448);
        }
        if ( *(_BYTE *)(v63 + 104) == 10 )
        {
          *(_QWORD *)(v63 + 104) = *(_QWORD *)(v3 + 104);
          *(_DWORD *)(v63 + 112) = *(_DWORD *)(v3 + 112);
        }
      }
      v62 += 175;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) );
    v5 = 0LL;
    v11 = v177;
  }
  ResetEnumerationContext((__int64 *)v163);
  for ( j = v11 + 132; ; j += 1400LL )
  {
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
    {
      if ( *(_QWORD *)(v11 + 40) >= *(_QWORD *)(v11 + 48) )
      {
        if ( *(_QWORD *)(v11 + 56) >= *(_QWORD *)(v11 + 64) )
        {
          v89 = v156;
          v90 = v162;
          v91 = (int)v168;
          inited = AllocateAndInitKernelPerfStatesRegistration(v162, (int)v168, (unsigned int)((_BYTE)v156 != 0) + 1);
          v173 = inited;
          v5 = inited;
          if ( inited )
          {
            v93 = v152;
            v94 = v166;
            *(_WORD *)(inited + 4) = v166;
            if ( v93 )
            {
              *(_QWORD *)(inited + 472) = v170;
              *(_QWORD *)(inited + 480) = v175;
              if ( v167 && v176 )
              {
                v95 = v138;
                if ( v94 == 254 )
                {
                  *(_QWORD *)(inited + 488) = v176;
                  *(_QWORD *)(inited + 104) = v11;
                }
              }
              else
              {
                v95 = v138;
              }
            }
            else
            {
              v95 = v138;
              if ( v138 )
              {
                if ( v140 )
                {
                  v22 = (_BYTE)v153 == 0;
                  *(_QWORD *)(inited + 472) = PerfControlCpcSingleRegister;
                  v96 = PerfControlCpcSingleRegisterHidden;
                  if ( v22 )
                    v96 = PerfControlCpcSingleRegister;
                }
                else
                {
                  *(_QWORD *)(inited + 472) = PerfControlCpc;
                  v96 = (void *)qword_1400157D8;
                  if ( !qword_1400157D8 || !CpcHiddenProcessorMitigationReported )
                    v96 = PerfControlCpcHidden;
                }
              }
              else
              {
                v96 = AcpiCStateIdleComplete;
                *(_QWORD *)(v5 + 472) = AcpiCStateIdleComplete;
              }
              *(_QWORD *)(v5 + 480) = v96;
            }
            *(_QWORD *)(v5 + 448) = PerfTargetDefaultHandler;
            v97 = PerfSelectionCpc;
            if ( v93 )
              v97 = v171;
            *(_QWORD *)(v5 + 456) = v97;
            if ( (_BYTE)v154 )
            {
              if ( v142 )
                *(_QWORD *)(v5 + 496) = CpcReadFeedback;
              v98 = v141;
              if ( v141 )
              {
                *(_QWORD *)(v5 + 504) = CpcAcquirePerformance;
                *(_QWORD *)(v5 + 512) = CpcCommitPerformance;
              }
              if ( v147 )
              {
                *(_QWORD *)(v5 + 424) = AcquirePccSubspace;
                *(_QWORD *)(v5 + 432) = ExecutePccWrite;
              }
              v99 = *(_DWORD *)(*(_QWORD *)(v90 + 256) + 84LL);
              if ( v99 )
              {
                v93 = v152;
                *(_DWORD *)(v5 + 40) = 0x989680 / (v99 >> 1);
              }
            }
            else
            {
              v98 = v141;
            }
            if ( IsSupported || _bittest64((const signed __int64 *)(v90 + 280), 0x26u) )
              *(_QWORD *)(v5 + 440) = CpcReinitializeHandler;
            *(_BYTE *)(v5 + 6) = 0;
            v100 = v95 || v93;
            v101 = v164;
            *(_BYTE *)(v5 + 7) = v100;
            *(_BYTE *)(v5 + 8) = v143;
            *(_BYTE *)(v5 + 52) = v144;
            v102 = v155;
            if ( v101 )
              v102 = v101;
            *(_DWORD *)(v5 + 20) = v102;
            *(_DWORD *)(v5 + 24) = *(_DWORD *)(v11 + 100);
            v103 = *(_DWORD *)(v11 + 108);
            *(_DWORD *)(v5 + 28) = v103;
            v104 = *(_DWORD *)(v11 + 112);
            *(_DWORD *)(v5 + 32) = v104;
            if ( !v103 )
              *(_DWORD *)(v5 + 28) = 1;
            if ( !v104 )
              *(_DWORD *)(v5 + 32) = 1;
            *(_QWORD *)(v5 + 56) = *(_QWORD *)(v11 + 64);
            *(_QWORD *)(v5 + 64) = *(_QWORD *)(v11 + 48);
            v105 = *(_QWORD *)(v90 + 344);
            if ( v105 )
              *(_QWORD *)(v5 + 376) = v105;
            v22 = (_BYTE)v159 == 0;
            *(_QWORD *)(v5 + 392) = *(_QWORD *)(v90 + 352);
            if ( !v22 )
              *(_BYTE *)(v5 + 9) = 1;
            if ( (_BYTE)v160 )
            {
              if ( v93 )
                *(_BYTE *)(v5 + 10) = 1;
              else
                *(_QWORD *)(v5 + 408) = CpcSetAutonomousActivityWindow;
            }
            if ( v145 )
              *(_QWORD *)(v5 + 416) = CpcSetAutonomousMode;
            if ( v149 )
              *(_QWORD *)(v5 + 384) = CpcSetTimeWindow;
            if ( (*(_DWORD *)(v90 + 280) & 0x400000) != 0 && (v94 == 254 || v91 == 1) )
            {
              if ( v93 && v150 )
              {
                *(_BYTE *)(v5 + 11) = 1;
                *(_QWORD *)(v90 + 280) = *(_QWORD *)(v90 + 280);
                *(_BYTE *)(v5 + 12) = 1;
                *(_DWORD *)(v5 + 48) = v161;
              }
              else if ( byte_140015F40 && !v98 )
              {
                *(_WORD *)(v5 + 11) = 257;
                *(_DWORD *)(v5 + 48) = 1000;
              }
            }
            if ( v151 )
            {
              v106 = *(unsigned int *)(v5 + 20);
              *(_BYTE *)(v5 + 13) = 1;
              v107 = *(_QWORD *)(v11 + 48);
              v108 = (v107 >> 1) + v106;
              LODWORD(v106) = v108 / v107;
              *(_DWORD *)(v5 + 72) = v106;
              *(_DWORD *)(v5 + 76) = *(_DWORD *)(v11 + 40) * v106;
              *(_DWORD *)(v5 + 80) = *(_DWORD *)(v11 + 48) * v106;
              *(_DWORD *)(v5 + 84) = *(_DWORD *)(v11 + 64) * v106;
              *(_DWORD *)(v5 + 88) = *(_DWORD *)(v11 + 1344);
            }
            if ( *(_DWORD *)(v5 + 88) )
              *(_QWORD *)(v5 + 464) = PerfPriorityCpc;
            v109 = *(_QWORD *)(v11 + 72);
            v110 = *(_QWORD *)(v11 + 48);
            v111 = *(_QWORD *)(v5 + 568);
            if ( v110 == v109 )
              LODWORD(v112) = 0x10000;
            else
              v112 = (v109 << 16) / v110;
            *(_DWORD *)(v111 + 8) = v112;
            *(_QWORD *)v111 = PerfReadWrappingCounter;
            *(_DWORD *)(v111 + 12) = 1;
            *(_BYTE *)(v111 + 17) = 1;
            *(_BYTE *)(v111 + 16) = v142 == 0;
            if ( v89 )
            {
              v113 = *(_QWORD *)(v5 + 568);
              *(_QWORD *)(v113 + 32) = 0x10000LL;
              *(_QWORD *)(v113 + 24) = PerfReadWrappingCounter;
              *(_WORD *)(v113 + 40) = 257;
            }
            DisplayKernelPerfStates(v5, (__int64)PerfReadWrappingCounter, v110);
            v164 = *(_QWORD *)(v5 + 576);
            v168 = *(_QWORD **)(v5 + 584);
            ResetEnumerationContext((__int64 *)v163);
            if ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
            {
              v114 = v164;
              v115 = v11 + 64;
              do
              {
                v116 = *(_QWORD *)(v115 + 80);
                v117 = 100;
                v118 = DeferredContext;
                v164 = v116;
                if ( *(_BYTE *)(v115 + 67) )
                {
                  v119 = v116 + 104;
                  if ( *(_BYTE *)(v116 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
                  {
                    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                    v120 = &PreviousAffinity;
                    if ( v139 )
                      v120 = 0LL;
                    KeSetSystemGroupAffinityThread(&Affinity, v120);
                    v139 = 1;
                  }
                  GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v118, v119);
                  if ( GenAddrMaybeHidden > *(_QWORD *)(v115 - 16) )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v122) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v122,
                        1,
                        44,
                        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)(v115 - 16);
                  }
                  if ( GenAddrMaybeHidden < *(_QWORD *)v115 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v122) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v122,
                        1,
                        45,
                        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)v115;
                  }
                  v117 = *(_DWORD *)(v115 + 48);
                  *(_QWORD *)(v115 + 24) = GenAddrMaybeHidden;
                  v123 = 100 * GenAddrMaybeHidden / *(_QWORD *)(v115 - 16);
                  if ( (unsigned int)v123 > v117 )
                    v117 = v123;
                  *(_DWORD *)(v115 + 52) = v117;
                  if ( v117 != v118[185] )
                    ProcLibCapChange(v162, (unsigned int)v118[116], (unsigned int)v118[128], v117);
                }
                else
                {
                  *(_QWORD *)(v115 + 24) = *(_QWORD *)(v115 - 16);
                }
                InitCommonPerfStateContext((__int64)v118, (_QWORD *)(v115 - 64), v114, v117, v117 < 0x64 ? 2 : 0);
                v124 = v164;
                v125 = v168;
                *(_QWORD *)(v162 + 216) = v115 - 64;
                *v125 = v115 + 136;
                *(_QWORD *)(v115 + 184) = v172;
                *(_QWORD *)(v115 + 192) = v124;
                v126 = *(_BYTE *)(v124 + 297);
                if ( v126 < 0x40u )
                  *(_QWORD *)(v115 + 168) = (1LL << v126) - 1;
                v127 = *(_BYTE *)(v124 + 273);
                if ( v127 < 0x40u )
                  *(_QWORD *)(v115 + 176) = (1LL << v127) - 1;
                LogicalProcessorIndex = GetLogicalProcessorIndex((__int64)v118);
                v130 = (_QWORD *)(v129 + 8);
                *(_DWORD *)(v115 + 200) = LogicalProcessorIndex;
                v168 = v130;
                if ( (_BYTE)v156 )
                {
                  *v130 = v115 + 664;
                  *(_DWORD *)(v115 + 728) = *(_DWORD *)(v115 + 200);
                  *(_QWORD *)(v115 + 712) = *((_QWORD *)v118 + 42);
                  v168 = v130 + 1;
                }
                v114 += 32LL;
                v115 += 1400LL;
              }
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) );
              v5 = v173;
              v11 = v177;
              v90 = v162;
            }
            if ( v139 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            v131 = v178;
            *(_BYTE *)(v5 + 15) = 1;
            started = v131(v5);
            if ( started >= 0 )
            {
              ResetEnumerationContext((__int64 *)v163);
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
              {
                *((_QWORD *)DeferredContext + 31) = v11;
                v11 += 1400LL;
              }
              if ( _bittest64((const signed __int64 *)(v90 + 280), 0x26u) )
              {
                ResetEnumerationContext((__int64 *)v163);
                while ( !(unsigned int)EnumerateNextDevice((__int64 *)v163, &DeferredContext) )
                {
                  if ( !*((_DWORD *)DeferredContext + 20) )
                    CpcConnectNativeInterrupt((struct _DEVICE_OBJECT **)DeferredContext);
                }
              }
              v11 = 0LL;
              started = 0;
            }
            goto LABEL_323;
          }
          goto LABEL_6;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v74 = 43;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v74 = 42;
      }
LABEL_162:
      LOBYTE(v68) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v68,
        1,
        v74,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
      goto LABEL_91;
    }
    v69 = *(_QWORD *)(j + 12);
    v70 = DeferredContext;
    if ( (*(_BYTE *)(v69 + 8) == 127
       || *(_BYTE *)(v69 + 32) == 127
       || *(_BYTE *)(v69 + 56) == 127
       || *(_BYTE *)(v69 + 80) == 127
       || *(_BYTE *)(v69 + 440) == 127
       || *(_BYTE *)(v69 + 368) == 127)
      && !*((_DWORD *)DeferredContext + 20) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v71 = &PreviousAffinity;
      if ( v139 )
        v71 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v71);
      v139 = 1;
    }
    *(_BYTE *)j = v142;
    *(_BYTE *)(j + 1) = v157;
    *(_BYTE *)(j + 2) = v158;
    *(_BYTE *)(j + 3) = v141;
    if ( CpcRegisterIsSupportedEx(v69 + 488) && (*v72 != 126 || *(_DWORD *)(v69 + 492)) )
    {
      v73 = ReadGenAddrMaybeHiddenEx((__int64)v70, (__int64)v72);
      v164 = v73;
      if ( !(_DWORD)v73 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v74 = 34;
        goto LABEL_162;
      }
    }
    else
    {
      LODWORD(v73) = v155;
    }
    *(_DWORD *)(j - 36) = v73;
    *(_QWORD *)(j - 92) = ReadGenAddrMaybeHiddenEx((__int64)v70, v69 + 8);
    v75 = ReadGenAddrMaybeHiddenEx((__int64)v70, v69 + 32);
    *(_QWORD *)(j - 84) = v75;
    if ( !v75 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_91;
      v74 = 35;
      goto LABEL_162;
    }
    v76 = ReadGenAddrMaybeHiddenEx((__int64)v70, v69 + 56);
    v77 = *(_QWORD *)(j - 84);
    *(_QWORD *)(j - 76) = v76;
    if ( v76 > v77 )
      *(_QWORD *)(j - 76) = v77;
    *(_QWORD *)(j - 68) = ReadGenAddrMaybeHiddenEx((__int64)v70, v69 + 80);
    *(_QWORD *)(j - 60) = ReadGenAddrMaybeHiddenEx((__int64)v70, v69 + 440);
    if ( CpcRegisterIsSupportedEx(v69 + 368) )
    {
      v80 = ReadGenAddrMaybeHiddenEx((__int64)v70, v69 + 368) != 0;
      v144 = v80;
      if ( *(_BYTE *)(v69 + 368) == 126 )
      {
        v145 = 0;
        v144 = v80;
      }
      else
      {
        v145 = 1;
      }
    }
    v81 = *(_QWORD *)(j + 1204);
    if ( v81 )
      *(_DWORD *)(j + 1212) = ReadGenAddrMaybeHiddenEx((__int64)v70, v81 + 56);
    if ( j - 132 != v11 )
      break;
LABEL_187:
    v84 = *(_QWORD *)(j - 84);
    v85 = 100LL * *(_QWORD *)(j - 92) / v84;
    *(_DWORD *)(j - 32) = v85;
    *(_DWORD *)(j - 28) = v85;
    v86 = 100LL * *(_QWORD *)(j - 76) / v84;
    v87 = 100LL * *(_QWORD *)(j - 68) / v84;
    if ( !(_DWORD)v87 )
      LODWORD(v87) = 1;
    *(_DWORD *)(j - 20) = v87;
    if ( !(_DWORD)v86 )
      LODWORD(v86) = 1;
    *(_DWORD *)(j - 24) = v86;
  }
  v82 = *(_QWORD *)(j - 92);
  v83 = *(_QWORD *)(v11 + 40);
  if ( v82 != v83 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v88 = 36;
    goto LABEL_197;
  }
  v82 = *(_QWORD *)(j - 84);
  v83 = *(_QWORD *)(v11 + 48);
  if ( v82 != v83 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v88 = 37;
    goto LABEL_197;
  }
  v82 = *(_QWORD *)(j - 68);
  v83 = *(_QWORD *)(v11 + 64);
  if ( v82 != v83 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v88 = 38;
LABEL_197:
    v137 = v83;
    v135 = v82;
LABEL_194:
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v88,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v135,
      v137);
    goto LABEL_91;
  }
  if ( *(_QWORD *)(j - 76) == *(_QWORD *)(v11 + 56) )
    goto LABEL_182;
  if ( !v143 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v137 = *(_QWORD *)(v11 + 56);
    v88 = 39;
    v135 = *(_QWORD *)(j - 76);
    goto LABEL_194;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v136) = HIDWORD(*(_QWORD *)(v11 + 56));
    HIDWORD(v134) = HIDWORD(*(_QWORD *)(j - 76));
    WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v81, v78, v79, (int)v133);
  }
  *(_QWORD *)(j - 76) = *(_QWORD *)(v11 + 56);
LABEL_182:
  if ( !*(_QWORD *)(j + 1204) || !*(_QWORD *)(v11 + 1336) || *(_DWORD *)(j + 1212) == *(_DWORD *)(v11 + 1344) )
    goto LABEL_187;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v136) = *(_DWORD *)(v11 + 1344);
    LODWORD(v134) = *(_DWORD *)(j + 1212);
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x29u,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v134,
      v136);
  }
LABEL_91:
  started = -1073741811;
LABEL_323:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400155D8);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, (ULONG)1919119952);
  if ( v11 )
    ExFreePoolWithTag((PVOID)v11, (ULONG)1919119952);
  return (unsigned int)started;
}
