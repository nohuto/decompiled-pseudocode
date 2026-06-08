/*
 * XREFs of InitCpcStatesInternal @ 0x140036530
 * Callers:
 *     RegisterKernelCpc @ 0x140038D80 (RegisterKernelCpc.c)
 *     RegisterHvCpcCounters @ 0x14003E520 (RegisterHvCpcCounters.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001008 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140001034 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x140001C64 (ReadGenAddrMaybeHiddenEx.c)
 *     ReadGenAddrEx @ 0x140001C90 (ReadGenAddrEx.c)
 *     WPP_RECORDER_SF_DD @ 0x140002F34 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x140003440 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1400040CC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1400048EC (ResetEnumerationContext.c)
 *     CpcRegisterIsSupportedEx @ 0x1400057A0 (CpcRegisterIsSupportedEx.c)
 *     ReadGenAddrHiddenEx @ 0x140005D88 (ReadGenAddrHiddenEx.c)
 *     ClearEnumerationContext @ 0x140005F9C (ClearEnumerationContext.c)
 *     WriteGenAddrMaybeHiddenEx @ 0x1400087B0 (WriteGenAddrMaybeHiddenEx.c)
 *     CpcFindResourcePriorityDescriptor @ 0x140008984 (CpcFindResourcePriorityDescriptor.c)
 *     GetCpcRegisterDefinitionTable @ 0x140008C78 (GetCpcRegisterDefinitionTable.c)
 *     WPP_RECORDER_SF_ii @ 0x14000DDEC (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_iii @ 0x14000DF18 (WPP_RECORDER_SF_iii.c)
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     memset @ 0x140010740 (memset.c)
 *     GetRegistryDwordValue @ 0x1400288D0 (GetRegistryDwordValue.c)
 *     StartPccCommand @ 0x14002989C (StartPccCommand.c)
 *     AllocateAndInitKernelPerfStatesRegistration @ 0x140029A24 (AllocateAndInitKernelPerfStatesRegistration.c)
 *     DisplayKernelPerfStates @ 0x140029FA4 (DisplayKernelPerfStates.c)
 *     ExecutePccCommand @ 0x14002A0F0 (ExecutePccCommand.c)
 *     ProcLibTraceNoPayloadEvent @ 0x14002C7B8 (ProcLibTraceNoPayloadEvent.c)
 *     CpcConnectNativeInterrupt @ 0x14002DA68 (CpcConnectNativeInterrupt.c)
 *     GetLogicalProcessorIndex @ 0x140036238 (GetLogicalProcessorIndex.c)
 *     GetPackageAffinity @ 0x140036360 (GetPackageAffinity.c)
 *     ProcLibCapChange @ 0x1400436DC (ProcLibCapChange.c)
 *     GetPerfDomain @ 0x1400463E0 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x140047E50 (InitCommonPerfStateContext.c)
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
  int v18; // r11d
  __int64 v19; // rbx
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // r9
  int v26; // r11d
  int v27; // ecx
  char v28; // al
  int v29; // r11d
  int v30; // ecx
  __int64 v31; // rax
  int GenAddr; // eax
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  void (__fastcall *v35)(__int64, __int64, unsigned __int64 *, unsigned __int64 *); // rcx
  int v36; // eax
  char v37; // r8
  __m128i v38; // xmm1
  unsigned int v39; // r9d
  __int64 v40; // xmm0_8
  __int64 v41; // rdx
  _BYTE *v42; // rdx
  int v43; // r9d
  __int64 v44; // rdx
  char v45; // r8
  char v46; // r10d^3
  char v47; // al
  int v48; // eax
  int v49; // ecx
  unsigned int *v50; // rcx
  __int64 v51; // r8
  int v52; // edx
  __int64 v53; // rax
  __int64 v54; // r15
  __int64 v55; // r12
  _QWORD *v56; // rbx
  struct _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v58; // r12
  __int64 v59; // rbx
  __int64 *v60; // rdi
  __int64 v61; // rbx
  int v62; // edx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 j; // rbx
  int v66; // edx
  __int64 v67; // rdi
  PVOID v68; // r13
  struct _GROUP_AFFINITY *v69; // rdx
  _BYTE *v70; // rcx
  __int64 v71; // rax
  int v72; // r9d
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  bool v78; // al
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  int v83; // eax
  unsigned __int64 v84; // r8
  unsigned __int64 v85; // rax
  unsigned __int16 v86; // r9
  char v87; // r12
  __int64 v88; // rbx
  int v89; // edi
  __int64 inited; // rax
  char v91; // dl
  int v92; // r8d
  char v93; // r9
  void *v94; // rax
  unsigned __int64 (__fastcall *v95)(__int64, __int64, __int64); // rax
  char v96; // r10
  unsigned int v97; // ecx
  bool v98; // al
  int v99; // ecx
  int v100; // eax
  int v101; // eax
  int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // rtt
  __int64 v107; // rax
  unsigned __int64 v108; // r8
  __int64 v109; // rcx
  unsigned __int64 v110; // rax
  __int64 v111; // rax
  int v112; // esi
  __int64 v113; // rdi
  __int64 v114; // rax
  unsigned int v115; // r12d
  _DWORD *v116; // r13
  __int64 v117; // rbx
  struct _GROUP_AFFINITY *v118; // rdx
  unsigned __int64 GenAddrMaybeHidden; // rax
  int v120; // edx
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  _QWORD *v123; // r11
  unsigned __int8 v124; // cl
  unsigned __int8 v125; // cl
  int LogicalProcessorIndex; // eax
  __int64 v127; // r11
  _QWORD *v128; // r11
  __int64 (__fastcall *v129)(__int64); // rax
  __int64 *v131; // [rsp+20h] [rbp-E0h]
  unsigned __int64 (__fastcall **v132)(__int64, __int64, __int64); // [rsp+28h] [rbp-D8h]
  __int64 v133; // [rsp+28h] [rbp-D8h]
  char *v134; // [rsp+30h] [rbp-D0h]
  __int64 v135; // [rsp+30h] [rbp-D0h]
  char v136; // [rsp+60h] [rbp-A0h]
  char v137; // [rsp+61h] [rbp-9Fh]
  char v138; // [rsp+62h] [rbp-9Eh]
  char v139; // [rsp+63h] [rbp-9Dh]
  char v140; // [rsp+64h] [rbp-9Ch]
  char v141; // [rsp+65h] [rbp-9Bh]
  bool v142; // [rsp+66h] [rbp-9Ah]
  char v143; // [rsp+67h] [rbp-99h]
  PVOID DeferredContext; // [rsp+70h] [rbp-90h] BYREF
  char v145; // [rsp+78h] [rbp-88h]
  char IsSupported; // [rsp+79h] [rbp-87h]
  char v147; // [rsp+7Ah] [rbp-86h]
  char v148; // [rsp+7Bh] [rbp-85h] BYREF
  char v149; // [rsp+7Ch] [rbp-84h]
  int v150; // [rsp+80h] [rbp-80h]
  int v151; // [rsp+84h] [rbp-7Ch]
  int v152; // [rsp+88h] [rbp-78h]
  int v153; // [rsp+8Ch] [rbp-74h] BYREF
  int v154; // [rsp+90h] [rbp-70h]
  int v155; // [rsp+94h] [rbp-6Ch]
  int v156; // [rsp+98h] [rbp-68h]
  int v157; // [rsp+9Ch] [rbp-64h]
  int v158; // [rsp+A0h] [rbp-60h]
  int v159; // [rsp+A4h] [rbp-5Ch]
  __int64 v160; // [rsp+A8h] [rbp-58h]
  _OWORD v161[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v162; // [rsp+D0h] [rbp-30h]
  unsigned int v163; // [rsp+D8h] [rbp-28h] BYREF
  int v164; // [rsp+DCh] [rbp-24h] BYREF
  BOOL v165; // [rsp+E0h] [rbp-20h]
  _QWORD *v166; // [rsp+E8h] [rbp-18h]
  __int64 v167; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v168; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 (__fastcall *v169)(__int64, __int64, __int64); // [rsp+100h] [rbp+0h] BYREF
  void (__fastcall *v170)(__int64, __int64, unsigned __int64 *, unsigned __int64 *); // [rsp+108h] [rbp+8h]
  __int64 v171; // [rsp+110h] [rbp+10h]
  unsigned int *v172; // [rsp+118h] [rbp+18h] BYREF
  __int64 v173; // [rsp+120h] [rbp+20h] BYREF
  __int64 v174; // [rsp+128h] [rbp+28h] BYREF
  __int64 v175; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v176)(__int64); // [rsp+138h] [rbp+38h]
  struct _GROUP_AFFINITY Affinity; // [rsp+140h] [rbp+40h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v179[272]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v180[272]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v181[2]; // [rsp+380h] [rbp+280h] BYREF
  __int64 v182; // [rsp+390h] [rbp+290h]

  v3 = 0LL;
  v176 = a2;
  v160 = a1;
  v172 = 0LL;
  v163 = 0;
  DeferredContext = 0LL;
  Affinity = 0LL;
  memset(v179, 0, 0x108uLL);
  v168 = 0LL;
  v173 = 0LL;
  v169 = 0LL;
  memset(v180, 0, 0x108uLL);
  v174 = 0LL;
  v159 = 0;
  v182 = 0LL;
  memset(v161, 0, sizeof(v161));
  v148 = 0;
  v5 = 0LL;
  v167 = 0LL;
  PreviousAffinity = 0LL;
  v164 = 0;
  *(_OWORD *)v181 = 0LL;
  v149 = 0;
  v137 = 0;
  ClearEnumerationContext(v161);
  v153 = 0;
  v162 = 0LL;
  GetRegistryDwordValue(
    (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
    (__int64)L"~MHz",
    &v153);
  if ( !v153 )
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
  LOBYTE(v154) = *(_QWORD *)(a1 + 336) != 0LL;
  v8 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v170 = 0LL;
  v8(WdfDriverGlobals, qword_1400191A8, 0LL);
  LODWORD(v166) = GetPerfDomain(a1, v161, &v164);
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(1400 * (_DWORD)v166), 1919119952LL);
  v175 = Pool2;
  v11 = Pool2;
  if ( !Pool2 )
  {
LABEL_6:
    started = -1073741670;
    goto LABEL_323;
  }
  LOBYTE(Pool2) = 0;
  LOBYTE(v152) = 0;
  LOBYTE(v10) = 0;
  v157 = Pool2;
  v158 = v10;
  LOBYTE(Pool2) = 1;
  v138 = 1;
  v12 = 1;
  v141 = 1;
  LOBYTE(v155) = 0;
  LOBYTE(v156) = 0;
  v145 = 0;
  v140 = 0;
  v139 = 0;
  IsSupported = 0;
  v147 = 0;
  v136 = 0;
  v143 = 0;
  v159 = 1000;
  v142 = 0;
  v150 = Pool2;
  KeInitializeAffinityEx2(v179, 32LL);
  ResetEnumerationContext((__int64 *)v161);
  for ( i = EnumerateNextDevice((__int64 *)v161, &DeferredContext);
        !i;
        i = EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
  {
    if ( !*((_DWORD *)DeferredContext + 20) )
      KeAddProcessorAffinityEx(v179, *((unsigned int *)DeferredContext + 14));
  }
  LOBYTE(v2) = 0;
  v165 = v2;
  ResetEnumerationContext((__int64 *)v161);
  while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
  {
    v14 = DeferredContext;
    if ( !*((_DWORD *)DeferredContext + 20) )
    {
      v3 = *((_QWORD *)DeferredContext + 74);
      KeInitializeAffinityEx2(v180, 32LL);
      if ( (int)GetPackageAffinity((__int64)v14, (__int64)v180) >= 0 )
        v165 = KeIsEqualAffinityEx(v180, v179) != 0;
      break;
    }
  }
  v15 = ResetEnumerationContext((__int64 *)v161);
  LOBYTE(v15) = v181[0];
  v16 = v11 + 124;
  v151 = v15;
  while ( 1 )
  {
    v17 = EnumerateNextDevice((__int64 *)v161, &DeferredContext);
    if ( v17 )
      break;
    v19 = *((_QWORD *)DeferredContext + 74);
    if ( *(_BYTE *)(v19 + 272) == 10 || *(_BYTE *)(v19 + 296) == 10 )
      v140 = v18;
    if ( *(_BYTE *)(v19 + 344) == 10
      || *(_BYTE *)(v19 + 152) == 10
      || *(_BYTE *)(v19 + 176) == 10
      || *(_BYTE *)(v19 + 128) == 10
      || *(_BYTE *)(v19 + 200) == 10
      || *(_BYTE *)(v19 + 416) == 10 )
    {
      v139 = v18;
    }
    v20 = (unsigned __int8)v155;
    if ( *(_BYTE *)(v19 + 104) == 10 )
      v20 = v18;
    v21 = *(_BYTE *)(v19 + 8) == 10;
    v155 = v20;
    v22 = (unsigned __int8)v156;
    if ( v21 )
      v22 = v18;
    v156 = v22;
    if ( *(_BYTE *)(v19 + 392) == 10 || *(_BYTE *)(v19 + 368) == 10 || *(_BYTE *)(v19 + 224) == 10 )
      v145 = v18;
    *(_QWORD *)(v16 + 20) = v19;
    IsSupported = CpcRegisterIsSupportedEx(v19 + 344);
    *(_BYTE *)v16 = IsSupported;
    *(_BYTE *)(v16 + 1) = CpcRegisterIsSupportedEx(v19 + 128);
    *(_BYTE *)(v16 + 2) = CpcRegisterIsSupportedEx(v19 + 152);
    *(_BYTE *)(v16 + 3) = CpcRegisterIsSupportedEx(v19 + 176);
    *(_BYTE *)(v16 + 6) = CpcRegisterIsSupportedEx(v19 + 200);
    *(_BYTE *)(v16 + 7) = CpcRegisterIsSupportedEx(v19 + 104);
    v147 = CpcRegisterIsSupportedEx(v23);
    v24 = CpcRegisterIsSupportedEx(v19 + 416);
    v27 = (unsigned __int8)v157;
    if ( v24 )
      v27 = v26;
    *(_BYTE *)(v16 + 4) = v24;
    v157 = v27;
    v28 = CpcRegisterIsSupportedEx(v25);
    v30 = (unsigned __int8)v158;
    if ( v28 )
      v30 = v29;
    *(_BYTE *)(v16 + 5) = v28;
    v158 = v30;
    if ( qword_1400193E8 )
    {
      if ( (unsigned __int8)qword_1400193E8(v19, &v167) )
      {
        *(_BYTE *)(v16 + 1224) = 1;
        v31 = v167;
        *(_OWORD *)(v16 + 1228) = *(_OWORD *)(v167 + 80);
        *(_QWORD *)(v16 + 1244) = *(_QWORD *)(v31 + 96);
        *(_QWORD *)(v16 + 1252) = 0xFFFFFFFFFFFFFFFFuLL >> (64 - *(_BYTE *)(v16 + 1229)) << *(_BYTE *)(v16 + 1230);
        GenAddr = ReadGenAddrEx((unsigned __int8 *)(v167 + 56));
        v33 = *(unsigned __int8 *)(v16 + 1229);
        *(_DWORD *)(v16 + 1260) = GenAddr;
        v34 = (unsigned int)(GenAddr - 1);
        if ( v34 > (1LL << v33) - 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_ii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              1u,
              0x20u,
              (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
              v33,
              v34);
          goto LABEL_91;
        }
      }
    }
    *(_QWORD *)(v16 + 1212) = CpcFindResourcePriorityDescriptor(*(_DWORD **)(v19 + 536));
    if ( qword_1400193E0 )
      v35 = (void (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))qword_1400193E0(v19);
    else
      v35 = v170;
    if ( !v35 )
      v35 = GetCpcDifferentialFeedback;
    v36 = (unsigned __int8)v154;
    if ( v35 == (void (__fastcall *)(__int64, __int64, unsigned __int64 *, unsigned __int64 *))qword_1400193B8 )
      v36 = 0;
    v170 = v35;
    v154 = v36;
    if ( !qword_1400193F0 || !(unsigned __int8)qword_1400193F0(v19, 0LL) )
      v141 = 0;
    v37 = v136;
    v38 = 0LL;
    v151 = _mm_cvtsi128_si32((__m128i)0LL);
    v182 = 0LL;
    v39 = 0;
    v40 = 0LL;
    *(_OWORD *)v181 = 0LL;
    while ( v39 < 5 )
    {
      if ( v39 )
      {
        switch ( v39 )
        {
          case 1u:
            v41 = v19 + 152;
            break;
          case 2u:
            v41 = v19 + 176;
            break;
          case 3u:
            v41 = v19 + 416;
            break;
          default:
            v41 = v19 + 200;
            break;
        }
      }
      else
      {
        v41 = v19 + 128;
      }
      if ( CpcRegisterIsSupportedEx(v41) )
      {
        v136 = 1;
        if ( *v42 == 10 )
          goto LABEL_74;
        if ( CpcRegisterIsSupportedEx((__int64)v181) )
        {
          if ( (_BYTE)v151 != v45
            || *(__int64 *)((char *)v181 + 4) != *(_QWORD *)(v44 + 4)
            || v46 != *(_BYTE *)(v44 + 3) )
          {
LABEL_74:
            v12 = 0;
            v138 = 0;
            goto LABEL_78;
          }
        }
        else
        {
          v38 = *(__m128i *)v44;
          v40 = *(_QWORD *)(v44 + 16);
          v47 = _mm_cvtsi128_si32(*(__m128i *)v44);
          *(_OWORD *)v181 = *(_OWORD *)v44;
          LOBYTE(v151) = v47;
          v182 = v40;
        }
        v37 = 1;
      }
      v39 = v43 + 1;
    }
    v136 = v37;
    v138 = v12;
    if ( v37 )
    {
      v136 = v37;
      v138 = v12;
      if ( v12 )
      {
        *(__m128i *)(v16 + 28) = v38;
        v136 = v37;
        *(_QWORD *)(v16 + 44) = v40;
        v138 = v12;
      }
    }
LABEL_78:
    if ( qword_140019408 )
    {
      v134 = &v148;
      v132 = &v169;
      v131 = &v174;
      v48 = qword_140019408(DeferredContext, v16 - 124, &v168, &v173);
      v49 = (unsigned __int8)v150;
      if ( v48 < 0 )
        v49 = 0;
      v150 = v49;
    }
    GetCpcRegisterDefinitionTable(v19, &v172, &v163);
    if ( v163 )
    {
      v50 = v172;
      v51 = v163;
      LOBYTE(v52) = v152;
      do
      {
        v53 = *v50;
        v50 += 6;
        v52 = (unsigned __int8)v52;
        if ( *(_BYTE *)(v53 + v19) == 10 )
          v52 = 1;
        --v51;
      }
      while ( v51 );
      v152 = v52;
    }
    v16 += 1400LL;
  }
  if ( !v168 || !v169 )
  {
    LOBYTE(v17) = 0;
    v150 = v17;
  }
  if ( (_BYTE)v152 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_140019800,
      0LL);
    ResetEnumerationContext((__int64 *)v161);
    v54 = v11 + 144;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
    {
      if ( *(_BYTE *)(v54 - 20) )
      {
        v55 = *(_QWORD *)v54;
        v56 = DeferredContext;
        if ( *(_BYTE *)(*(_QWORD *)v54 + 344LL) == 127 && !*((_DWORD *)DeferredContext + 20) )
        {
          KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
          p_PreviousAffinity = &PreviousAffinity;
          if ( v137 )
            p_PreviousAffinity = 0LL;
          KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
          v137 = 1;
        }
        if ( (*(_DWORD *)(v56[32] + 144LL) & 1) == 0 )
        {
          started = StartPccCommand(*(_QWORD *)(v160 + 256));
          if ( started < 0 )
          {
            v58 = v160;
LABEL_114:
            ResetEnumerationContext((__int64 *)v161);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
            {
              if ( (*(_DWORD *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
              {
                v59 = *(_QWORD *)(v58 + 256);
                (*(void (__fastcall **)(_QWORD))(v59 + 136))(*(_QWORD *)(v59 + 72));
                *(_DWORD *)(v59 + 144) &= ~1u;
              }
            }
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
              WdfDriverGlobals,
              qword_140019800);
            goto LABEL_323;
          }
        }
        WriteGenAddrMaybeHiddenEx((__int64)v56, (char *)(v55 + 344), 1LL);
      }
      v54 += 1400LL;
    }
    ResetEnumerationContext((__int64 *)v161);
    v58 = v160;
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)DeferredContext + 32) + 144LL) & 1) != 0 )
      {
        started = ExecutePccCommand(*(_QWORD *)(v58 + 256));
        if ( started < 0 )
          goto LABEL_114;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_140019800);
  }
  ResetEnumerationContext((__int64 *)v161);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
  {
    v60 = (__int64 *)(v11 + 144);
    do
    {
      v61 = *v60;
      if ( *((_DWORD *)DeferredContext + 20) == 2
        && *(_BYTE *)(v61 + 32) == 10
        && !ReadGenAddrHiddenEx(*((unsigned int *)DeferredContext + 21), (unsigned __int8 *)(v61 + 32)) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v62) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v62,
            1,
            33,
            (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
        }
        if ( !CpcHiddenProcessorMitigationReported )
        {
          ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
          if ( (unsigned int)dword_140018C60 > 5 && tlgKeywordOn((__int64)&dword_140018C60, 0x400000000000LL) )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140018C60,
              (unsigned __int8 *)dword_140014F03,
              v63,
              v64,
              (ULONG)2,
              (struct _EVENT_DATA_DESCRIPTOR *)v181);
          CpcHiddenProcessorMitigationReported = 1;
        }
        *(_QWORD *)(v61 + 32) = *(_QWORD *)(v3 + 32);
        *(_DWORD *)(v61 + 40) = *(_DWORD *)(v3 + 40);
        if ( *(_BYTE *)(v61 + 8) == 10 )
        {
          *(_QWORD *)(v61 + 8) = *(_QWORD *)(v3 + 8);
          *(_DWORD *)(v61 + 16) = *(_DWORD *)(v3 + 16);
        }
        if ( *(_BYTE *)(v61 + 56) == 10 )
        {
          *(_QWORD *)(v61 + 56) = *(_QWORD *)(v3 + 56);
          *(_DWORD *)(v61 + 64) = *(_DWORD *)(v3 + 64);
        }
        if ( *(_BYTE *)(v61 + 80) == 10 )
        {
          *(_QWORD *)(v61 + 80) = *(_QWORD *)(v3 + 80);
          *(_DWORD *)(v61 + 88) = *(_DWORD *)(v3 + 88);
        }
        if ( *(_BYTE *)(v61 + 440) == 10 )
        {
          *(_QWORD *)(v61 + 440) = *(_QWORD *)(v3 + 440);
          *(_DWORD *)(v61 + 448) = *(_DWORD *)(v3 + 448);
        }
        if ( *(_BYTE *)(v61 + 104) == 10 )
        {
          *(_QWORD *)(v61 + 104) = *(_QWORD *)(v3 + 104);
          *(_DWORD *)(v61 + 112) = *(_DWORD *)(v3 + 112);
        }
      }
      v60 += 175;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) );
    v5 = 0LL;
    v11 = v175;
  }
  ResetEnumerationContext((__int64 *)v161);
  for ( j = v11 + 132; ; j += 1400LL )
  {
    if ( (unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
    {
      if ( *(_QWORD *)(v11 + 40) >= *(_QWORD *)(v11 + 48) )
      {
        if ( *(_QWORD *)(v11 + 56) >= *(_QWORD *)(v11 + 64) )
        {
          v87 = v154;
          v88 = v160;
          v89 = (int)v166;
          inited = AllocateAndInitKernelPerfStatesRegistration(v160, (int)v166, (unsigned int)((_BYTE)v154 != 0) + 1);
          v171 = inited;
          v5 = inited;
          if ( inited )
          {
            v91 = v150;
            v92 = v164;
            *(_WORD *)(inited + 4) = v164;
            if ( v91 )
            {
              *(_QWORD *)(inited + 472) = v168;
              *(_QWORD *)(inited + 480) = v173;
              if ( v165 && v174 )
              {
                v93 = v136;
                if ( v92 == 254 )
                {
                  *(_QWORD *)(inited + 488) = v174;
                  *(_QWORD *)(inited + 104) = v11;
                }
              }
              else
              {
                v93 = v136;
              }
            }
            else
            {
              v93 = v136;
              if ( v136 )
              {
                if ( v138 )
                {
                  v21 = (_BYTE)v151 == 0;
                  *(_QWORD *)(inited + 472) = PerfControlCpcSingleRegister;
                  v94 = PerfControlCpcSingleRegisterHidden;
                  if ( v21 )
                    v94 = PerfControlCpcSingleRegister;
                }
                else
                {
                  *(_QWORD *)(inited + 472) = PerfControlCpc;
                  v94 = (void *)qword_1400193A8;
                  if ( !qword_1400193A8 || !CpcHiddenProcessorMitigationReported )
                    v94 = PerfControlCpcHidden;
                }
              }
              else
              {
                v94 = AcpiCStateIdleComplete;
                *(_QWORD *)(v5 + 472) = AcpiCStateIdleComplete;
              }
              *(_QWORD *)(v5 + 480) = v94;
            }
            *(_QWORD *)(v5 + 448) = PerfTargetDefaultHandler;
            v95 = PerfSelectionCpc;
            if ( v91 )
              v95 = v169;
            *(_QWORD *)(v5 + 456) = v95;
            if ( (_BYTE)v152 )
            {
              if ( v140 )
                *(_QWORD *)(v5 + 496) = CpcReadFeedback;
              v96 = v139;
              if ( v139 )
              {
                *(_QWORD *)(v5 + 504) = CpcAcquirePerformance;
                *(_QWORD *)(v5 + 512) = CpcCommitPerformance;
              }
              if ( v145 )
              {
                *(_QWORD *)(v5 + 424) = AcquirePccSubspace;
                *(_QWORD *)(v5 + 432) = ExecutePccWrite;
              }
              v97 = *(_DWORD *)(*(_QWORD *)(v88 + 256) + 84LL);
              if ( v97 )
              {
                v91 = v150;
                *(_DWORD *)(v5 + 40) = 0x989680 / (v97 >> 1);
              }
            }
            else
            {
              v96 = v139;
            }
            if ( IsSupported || _bittest64((const signed __int64 *)(v88 + 280), 0x26u) )
              *(_QWORD *)(v5 + 440) = CpcReinitializeHandler;
            *(_BYTE *)(v5 + 6) = 0;
            v98 = v93 || v91;
            v99 = v162;
            *(_BYTE *)(v5 + 7) = v98;
            *(_BYTE *)(v5 + 8) = v141;
            *(_BYTE *)(v5 + 52) = v142;
            v100 = v153;
            if ( v99 )
              v100 = v99;
            *(_DWORD *)(v5 + 20) = v100;
            *(_DWORD *)(v5 + 24) = *(_DWORD *)(v11 + 100);
            v101 = *(_DWORD *)(v11 + 108);
            *(_DWORD *)(v5 + 28) = v101;
            v102 = *(_DWORD *)(v11 + 112);
            *(_DWORD *)(v5 + 32) = v102;
            if ( !v101 )
              *(_DWORD *)(v5 + 28) = 1;
            if ( !v102 )
              *(_DWORD *)(v5 + 32) = 1;
            *(_QWORD *)(v5 + 56) = *(_QWORD *)(v11 + 64);
            *(_QWORD *)(v5 + 64) = *(_QWORD *)(v11 + 48);
            v103 = *(_QWORD *)(v88 + 344);
            if ( v103 )
              *(_QWORD *)(v5 + 376) = v103;
            v21 = (_BYTE)v157 == 0;
            *(_QWORD *)(v5 + 392) = *(_QWORD *)(v88 + 352);
            if ( !v21 )
              *(_BYTE *)(v5 + 9) = 1;
            if ( (_BYTE)v158 )
            {
              if ( v91 )
                *(_BYTE *)(v5 + 10) = 1;
              else
                *(_QWORD *)(v5 + 408) = CpcSetAutonomousActivityWindow;
            }
            if ( v143 )
              *(_QWORD *)(v5 + 416) = CpcSetAutonomousMode;
            if ( v147 )
              *(_QWORD *)(v5 + 384) = CpcSetTimeWindow;
            if ( (*(_DWORD *)(v88 + 280) & 0x400000) != 0 && (v92 == 254 || v89 == 1) )
            {
              if ( v91 && v148 )
              {
                *(_BYTE *)(v5 + 11) = 1;
                *(_QWORD *)(v88 + 280) = *(_QWORD *)(v88 + 280);
                *(_BYTE *)(v5 + 12) = 1;
                *(_DWORD *)(v5 + 48) = v159;
              }
              else if ( byte_140019B10 && !v96 )
              {
                *(_WORD *)(v5 + 11) = 257;
                *(_DWORD *)(v5 + 48) = 1000;
              }
            }
            if ( v149 )
            {
              v104 = *(unsigned int *)(v5 + 20);
              *(_BYTE *)(v5 + 13) = 1;
              v105 = *(_QWORD *)(v11 + 48);
              v106 = (v105 >> 1) + v104;
              LODWORD(v104) = v106 / v105;
              *(_DWORD *)(v5 + 72) = v104;
              *(_DWORD *)(v5 + 76) = *(_DWORD *)(v11 + 40) * v104;
              *(_DWORD *)(v5 + 80) = *(_DWORD *)(v11 + 48) * v104;
              *(_DWORD *)(v5 + 84) = *(_DWORD *)(v11 + 64) * v104;
              *(_DWORD *)(v5 + 88) = *(_DWORD *)(v11 + 1344);
            }
            if ( *(_DWORD *)(v5 + 88) )
              *(_QWORD *)(v5 + 464) = PerfPriorityCpc;
            v107 = *(_QWORD *)(v11 + 72);
            v108 = *(_QWORD *)(v11 + 48);
            v109 = *(_QWORD *)(v5 + 568);
            if ( v108 == v107 )
              LODWORD(v110) = 0x10000;
            else
              v110 = (v107 << 16) / v108;
            *(_DWORD *)(v109 + 8) = v110;
            *(_QWORD *)v109 = PerfReadWrappingCounter;
            *(_DWORD *)(v109 + 12) = 1;
            *(_BYTE *)(v109 + 17) = 1;
            *(_BYTE *)(v109 + 16) = v140 == 0;
            if ( v87 )
            {
              v111 = *(_QWORD *)(v5 + 568);
              *(_QWORD *)(v111 + 32) = 0x10000LL;
              *(_QWORD *)(v111 + 24) = PerfReadWrappingCounter;
              *(_WORD *)(v111 + 40) = 257;
            }
            DisplayKernelPerfStates(v5, (__int64)PerfReadWrappingCounter, v108);
            v162 = *(_QWORD *)(v5 + 576);
            v166 = *(_QWORD **)(v5 + 584);
            ResetEnumerationContext((__int64 *)v161);
            if ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
            {
              v112 = v162;
              v113 = v11 + 64;
              do
              {
                v114 = *(_QWORD *)(v113 + 80);
                v115 = 100;
                v116 = DeferredContext;
                v162 = v114;
                if ( *(_BYTE *)(v113 + 67) )
                {
                  v117 = v114 + 104;
                  if ( *(_BYTE *)(v114 + 104) == 127 && !*((_DWORD *)DeferredContext + 20) )
                  {
                    KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
                    v118 = &PreviousAffinity;
                    if ( v137 )
                      v118 = 0LL;
                    KeSetSystemGroupAffinityThread(&Affinity, v118);
                    v137 = 1;
                  }
                  GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx((__int64)v116, v117);
                  if ( GenAddrMaybeHidden > *(_QWORD *)(v113 - 16) )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v120) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v120,
                        1,
                        44,
                        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)(v113 - 16);
                  }
                  if ( GenAddrMaybeHidden < *(_QWORD *)v113 )
                  {
                    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    {
                      LOBYTE(v120) = 3;
                      WPP_RECORDER_SF_(
                        WPP_GLOBAL_Control->DeviceExtension,
                        v120,
                        1,
                        45,
                        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
                    }
                    GenAddrMaybeHidden = *(_QWORD *)v113;
                  }
                  v115 = *(_DWORD *)(v113 + 48);
                  *(_QWORD *)(v113 + 24) = GenAddrMaybeHidden;
                  v121 = 100 * GenAddrMaybeHidden / *(_QWORD *)(v113 - 16);
                  if ( (unsigned int)v121 > v115 )
                    v115 = v121;
                  *(_DWORD *)(v113 + 52) = v115;
                  if ( v115 != v116[185] )
                    ProcLibCapChange(v160, (unsigned int)v116[116], (unsigned int)v116[128], v115);
                }
                else
                {
                  *(_QWORD *)(v113 + 24) = *(_QWORD *)(v113 - 16);
                }
                InitCommonPerfStateContext((_DWORD)v116, v113 - 64, v112, v115, v115 < 0x64 ? 2 : 0);
                v122 = v162;
                v123 = v166;
                *(_QWORD *)(v160 + 216) = v113 - 64;
                *v123 = v113 + 136;
                *(_QWORD *)(v113 + 184) = v170;
                *(_QWORD *)(v113 + 192) = v122;
                v124 = *(_BYTE *)(v122 + 297);
                if ( v124 < 0x40u )
                  *(_QWORD *)(v113 + 168) = (1LL << v124) - 1;
                v125 = *(_BYTE *)(v122 + 273);
                if ( v125 < 0x40u )
                  *(_QWORD *)(v113 + 176) = (1LL << v125) - 1;
                LogicalProcessorIndex = GetLogicalProcessorIndex((__int64)v116);
                v128 = (_QWORD *)(v127 + 8);
                *(_DWORD *)(v113 + 200) = LogicalProcessorIndex;
                v166 = v128;
                if ( (_BYTE)v154 )
                {
                  *v128 = v113 + 664;
                  *(_DWORD *)(v113 + 728) = *(_DWORD *)(v113 + 200);
                  *(_QWORD *)(v113 + 712) = *((_QWORD *)v116 + 42);
                  v166 = v128 + 1;
                }
                v112 += 32;
                v113 += 1400LL;
              }
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) );
              v5 = v171;
              v11 = v175;
              v88 = v160;
            }
            if ( v137 )
              KeRevertToUserGroupAffinityThread(&PreviousAffinity);
            v129 = v176;
            *(_BYTE *)(v5 + 15) = 1;
            started = v129(v5);
            if ( started >= 0 )
            {
              ResetEnumerationContext((__int64 *)v161);
              while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
              {
                *((_QWORD *)DeferredContext + 31) = v11;
                v11 += 1400LL;
              }
              if ( _bittest64((const signed __int64 *)(v88 + 280), 0x26u) )
              {
                ResetEnumerationContext((__int64 *)v161);
                while ( !(unsigned int)EnumerateNextDevice((__int64 *)v161, &DeferredContext) )
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
        v72 = 43;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v72 = 42;
      }
LABEL_162:
      LOBYTE(v66) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v66,
        1,
        v72,
        (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids);
      goto LABEL_91;
    }
    v67 = *(_QWORD *)(j + 12);
    v68 = DeferredContext;
    if ( (*(_BYTE *)(v67 + 8) == 127
       || *(_BYTE *)(v67 + 32) == 127
       || *(_BYTE *)(v67 + 56) == 127
       || *(_BYTE *)(v67 + 80) == 127
       || *(_BYTE *)(v67 + 440) == 127
       || *(_BYTE *)(v67 + 368) == 127)
      && !*((_DWORD *)DeferredContext + 20) )
    {
      KeProcessorGroupAffinity(&Affinity, *((unsigned int *)DeferredContext + 14));
      v69 = &PreviousAffinity;
      if ( v137 )
        v69 = 0LL;
      KeSetSystemGroupAffinityThread(&Affinity, v69);
      v137 = 1;
    }
    *(_BYTE *)j = v140;
    *(_BYTE *)(j + 1) = v155;
    *(_BYTE *)(j + 2) = v156;
    *(_BYTE *)(j + 3) = v139;
    if ( CpcRegisterIsSupportedEx(v67 + 488) && (*v70 != 126 || *(_DWORD *)(v67 + 492)) )
    {
      v71 = ReadGenAddrMaybeHiddenEx((__int64)v68, (__int64)v70);
      v162 = v71;
      if ( !(_DWORD)v71 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_91;
        v72 = 34;
        goto LABEL_162;
      }
    }
    else
    {
      LODWORD(v71) = v153;
    }
    *(_DWORD *)(j - 36) = v71;
    *(_QWORD *)(j - 92) = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 8);
    v73 = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 32);
    *(_QWORD *)(j - 84) = v73;
    if ( !v73 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_91;
      v72 = 35;
      goto LABEL_162;
    }
    v74 = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 56);
    v75 = *(_QWORD *)(j - 84);
    *(_QWORD *)(j - 76) = v74;
    if ( v74 > v75 )
      *(_QWORD *)(j - 76) = v75;
    *(_QWORD *)(j - 68) = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 80);
    *(_QWORD *)(j - 60) = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 440);
    if ( CpcRegisterIsSupportedEx(v67 + 368) )
    {
      v78 = ReadGenAddrMaybeHiddenEx((__int64)v68, v67 + 368) != 0;
      v142 = v78;
      if ( *(_BYTE *)(v67 + 368) == 126 )
      {
        v143 = 0;
        v142 = v78;
      }
      else
      {
        v143 = 1;
      }
    }
    v79 = *(_QWORD *)(j + 1204);
    if ( v79 )
      *(_DWORD *)(j + 1212) = ReadGenAddrMaybeHiddenEx((__int64)v68, v79 + 56);
    if ( j - 132 != v11 )
      break;
LABEL_187:
    v82 = *(_QWORD *)(j - 84);
    v83 = 100LL * *(_QWORD *)(j - 92) / v82;
    *(_DWORD *)(j - 32) = v83;
    *(_DWORD *)(j - 28) = v83;
    v84 = 100LL * *(_QWORD *)(j - 76) / v82;
    v85 = 100LL * *(_QWORD *)(j - 68) / v82;
    if ( !(_DWORD)v85 )
      LODWORD(v85) = 1;
    *(_DWORD *)(j - 20) = v85;
    if ( !(_DWORD)v84 )
      LODWORD(v84) = 1;
    *(_DWORD *)(j - 24) = v84;
  }
  v80 = *(_QWORD *)(j - 92);
  v81 = *(_QWORD *)(v11 + 40);
  if ( v80 != v81 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v86 = 36;
    goto LABEL_197;
  }
  v80 = *(_QWORD *)(j - 84);
  v81 = *(_QWORD *)(v11 + 48);
  if ( v80 != v81 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v86 = 37;
    goto LABEL_197;
  }
  v80 = *(_QWORD *)(j - 68);
  v81 = *(_QWORD *)(v11 + 64);
  if ( v80 != v81 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v86 = 38;
LABEL_197:
    v135 = v81;
    v133 = v80;
LABEL_194:
    WPP_RECORDER_SF_ii(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v86,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v133,
      v135);
    goto LABEL_91;
  }
  if ( *(_QWORD *)(j - 76) == *(_QWORD *)(v11 + 56) )
    goto LABEL_182;
  if ( !v141 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_91;
    v135 = *(_QWORD *)(v11 + 56);
    v86 = 39;
    v133 = *(_QWORD *)(j - 76);
    goto LABEL_194;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v134) = HIDWORD(*(_QWORD *)(v11 + 56));
    HIDWORD(v132) = HIDWORD(*(_QWORD *)(j - 76));
    WPP_RECORDER_SF_iii((__int64)WPP_GLOBAL_Control->DeviceExtension, v79, v76, v77, (int)v131);
  }
  *(_QWORD *)(j - 76) = *(_QWORD *)(v11 + 56);
LABEL_182:
  if ( !*(_QWORD *)(j + 1204) || !*(_QWORD *)(v11 + 1336) || *(_DWORD *)(j + 1212) == *(_DWORD *)(v11 + 1344) )
    goto LABEL_187;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v134) = *(_DWORD *)(v11 + 1344);
    LODWORD(v132) = *(_DWORD *)(j + 1212);
    WPP_RECORDER_SF_DD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x29u,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v132,
      v134);
  }
LABEL_91:
  started = -1073741811;
LABEL_323:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1400191A8);
  if ( v5 )
    ExFreePoolWithTag((PVOID)v5, (ULONG)1919119952);
  if ( v11 )
    ExFreePoolWithTag((PVOID)v11, (ULONG)1919119952);
  return (unsigned int)started;
}
