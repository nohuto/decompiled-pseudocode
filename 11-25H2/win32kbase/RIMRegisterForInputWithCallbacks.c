/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x140154130
 * Callers:
 *     RIMRegisterForInputEx @ 0x1401540C0 (RIMRegisterForInputEx.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x14020F150 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     rimConvertUserToKernelEventHandle @ 0x14003557C (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnregisterForInput @ 0x14009DC10 (RIMUnregisterForInput.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimCheckForRegistrationConflicts @ 0x1400CD204 (rimCheckForRegistrationConflicts.c)
 *     RawInputManagerObjectCreate @ 0x14013785C (RawInputManagerObjectCreate.c)
 *     CreateKernelSemaphore @ 0x14013AA50 (CreateKernelSemaphore.c)
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x1401409BC (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     RIMCheckPressureDefaultSetting @ 0x14014BEC8 (RIMCheckPressureDefaultSetting.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1401D65E4 (RIMIDEAdoptOrphanedRimDevs.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDd @ 0x1401DC620 (WPP_RECORDER_AND_TRACE_SF_qDd.c)
 *     rimConvertUserToKernelSemaphoreHandle @ 0x1401E72D4 (rimConvertUserToKernelSemaphoreHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1401E73C4 (rimConvertUserToKernelTimerHandle.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401F0B64 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDiscoverSpecificDevice @ 0x1401F0D54 (RIMDiscoverSpecificDevice.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        ULONG64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        HANDLE *a13)
{
  void *v15; // rcx
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx
  bool v19; // bl
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  char v23; // bl
  bool v24; // r14
  __int64 v25; // rax
  int v26; // edx
  int v27; // r8d
  char v28; // bl
  bool v29; // r12
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  bool v33; // bl
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  int v38; // eax
  struct _KSEMAPHORE *KernelSemaphore; // r15
  struct _KSEMAPHORE *v40; // r14
  char *v41; // rcx
  unsigned int v42; // r13d
  __int64 v43; // rax
  char *v44; // rcx
  int v45; // r14d
  int v46; // r13d
  int v47; // eax
  bool v48; // sf
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // r13
  char *v53; // r15
  unsigned int v54; // r9d
  char *v55; // rdx
  GUID **v56; // rcx
  char *v57; // r10
  _DWORD *v58; // r13
  signed __int64 v59; // r11
  signed __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  BOOL v66; // edx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  unsigned int i; // eax
  const void *v71; // rdx
  struct _UNICODE_STRING *v72; // rax
  ULONG64 v73; // rax
  int v74; // ecx
  WCHAR *v75; // rdx
  ULONG64 v76; // r8
  char *v77; // rcx
  char *v78; // rbx
  _QWORD *v79; // rdx
  char **v80; // r12
  char v81; // bl
  bool v82; // r15
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  char **v86; // rbx
  __int64 v87; // r13
  int TableContext; // [rsp+20h] [rbp-168h]
  int v89; // [rsp+28h] [rbp-160h]
  int v90; // [rsp+30h] [rbp-158h]
  __int16 v91; // [rsp+30h] [rbp-158h]
  int v92; // [rsp+38h] [rbp-150h]
  bool v93; // [rsp+60h] [rbp-128h]
  bool v94; // [rsp+60h] [rbp-128h]
  bool v95; // [rsp+60h] [rbp-128h]
  char v96; // [rsp+68h] [rbp-120h]
  int v97; // [rsp+6Ch] [rbp-11Ch]
  bool v98; // [rsp+74h] [rbp-114h]
  unsigned int v99; // [rsp+78h] [rbp-110h]
  PVOID Object; // [rsp+88h] [rbp-100h] BYREF
  int v102; // [rsp+90h] [rbp-F8h]
  HANDLE v103; // [rsp+98h] [rbp-F0h] BYREF
  PVOID Buffer; // [rsp+A0h] [rbp-E8h]
  unsigned int v105; // [rsp+A8h] [rbp-E0h]
  struct _KSEMAPHORE *v106; // [rsp+B0h] [rbp-D8h]
  unsigned int v107; // [rsp+B8h] [rbp-D0h]
  HANDLE *v108; // [rsp+C0h] [rbp-C8h]
  void *v109; // [rsp+C8h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-B8h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+E0h] [rbp-A8h]
  HANDLE Handle; // [rsp+E8h] [rbp-A0h] BYREF
  HANDLE v113; // [rsp+F0h] [rbp-98h] BYREF
  HANDLE v114; // [rsp+F8h] [rbp-90h] BYREF
  UNICODE_STRING SourceString; // [rsp+100h] [rbp-88h] BYREF
  __int64 v116; // [rsp+110h] [rbp-78h]
  ULONG64 v117; // [rsp+118h] [rbp-70h]
  __int64 v118; // [rsp+120h] [rbp-68h]
  char v119; // [rsp+128h] [rbp-60h] BYREF
  __int128 v120; // [rsp+130h] [rbp-58h]

  v116 = a4;
  v99 = a3;
  v107 = a1;
  v117 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v109 = a6;
  v118 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v108 = a13;
  Handle = (HANDLE)-1LL;
  v113 = (HANDLE)-1LL;
  v114 = (HANDLE)-1LL;
  v103 = (HANDLE)-1LL;
  v120 = 0LL;
  v102 = a12 == 0;
  v98 = 0;
  v15 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (LOBYTE(v15) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  v96 = (char)v15;
  v93 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v15, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v17) = v93;
    LOBYTE(v18) = v96;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v18,
      v17,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      11,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    a3 = v99;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    v19 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v94 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      LOBYTE(v21) = v94;
      LOBYTE(v22) = v19;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(v20 + 19336),
        2,
        1,
        12,
        (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
        a1);
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v23 = 0;
    }
    v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    v91 = 13;
LABEL_59:
    LOBYTE(v27) = v24;
    LOBYTE(v26) = v23;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v26,
      v27,
      *(_QWORD *)(v25 + 19336),
      4,
      1,
      v91,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_qDd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(v30 + 19336),
          TableContext,
          v89,
          v90,
          v92,
          a2,
          a1,
          v99);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v91 = 15;
      goto LABEL_59;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      v33 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v34 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
        LOBYTE(v35) = v95;
        LOBYTE(v36) = v33;
        WPP_RECORDER_AND_TRACE_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v36,
          v35,
          *(_QWORD *)(v34 + 19336),
          2,
          1,
          16,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          a1,
          v99);
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v23 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v23 = 0;
      }
      v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 3221225485LL;
      v25 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
      v91 = 17;
      goto LABEL_59;
    }
    if ( a12 )
    {
      v38 = rimCheckForRegistrationConflicts(a1, (__int64)&WPP_RECORDER_INITIALIZED);
      if ( v38 == 1 )
        return 3221225506LL;
      v98 = v38 == 0;
    }
  }
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v106 = KernelSemaphore;
  if ( !KernelSemaphore )
    return 3221225495LL;
  v40 = CreateKernelSemaphore(0, 0x7FFFFFFF);
  Buffer = v40;
  if ( !v40 )
  {
    v41 = (char *)KernelSemaphore;
LABEL_179:
    GreDeleteFastMutex(v41);
    return 3221225495LL;
  }
  v42 = 0;
  Object = &v119;
  do
  {
    v43 = Win32AllocPoolZInitImpl(64LL, 0x68uLL, 0x63704152u);
    v44 = (char *)Object;
    *(_QWORD *)Object = v43;
    if ( !v43 )
    {
      v86 = (char **)&v119;
      v87 = 3LL;
      do
      {
        if ( *v86 )
          GreDeleteFastMutex(*v86);
        ++v86;
        --v87;
      }
      while ( v87 );
      GreDeleteFastMutex((char *)KernelSemaphore);
      v41 = (char *)v40;
      goto LABEL_179;
    }
    ++v42;
    Object = v44 + 8;
  }
  while ( v42 <= 2 );
  v45 = rimConvertUserToKernelEventHandle(v109, &Handle);
  v46 = rimConvertUserToKernelTimerHandle(v118, &v113);
  v47 = rimConvertUserToKernelSemaphoreHandle(*(_QWORD *)&SourceString.Length, &v114);
  v48 = v45 < 0;
  if ( v45 < 0 )
  {
LABEL_133:
    if ( !v48 )
      v45 = v46;
    v52 = 3LL;
    goto LABEL_136;
  }
  if ( v46 < 0 || v47 < 0 )
  {
    v48 = v45 < 0;
    goto LABEL_133;
  }
  KeEnterCriticalRegion();
  v45 = RawInputManagerObjectCreate(a12 != 0, v49, v50, v51, &v103);
  KeLeaveCriticalRegion();
  v52 = 3LL;
  if ( v45 < 0 )
    goto LABEL_150;
  Object = 0LL;
  v45 = RawInputManagerObjectResolveHandle((char *)v103, 3u, 1, &Object);
  v97 = v45;
  if ( v45 < 0 )
    goto LABEL_136;
  v53 = (char *)Object;
  *((_QWORD *)Object + 9) = v103;
  *((_WORD *)v53 + 40) = 0;
  v53[82] = 0;
  *((_DWORD *)v53 + 21) = v107;
  *((_QWORD *)v53 + 15) = a5;
  *((_QWORD *)v53 + 13) = 0LL;
  *((_QWORD *)v53 + 14) = 0LL;
  *((_QWORD *)v53 + 95) = 0LL;
  *((_QWORD *)v53 + 96) = 0LL;
  *((_QWORD *)v53 + 53) = 0LL;
  *((_DWORD *)v53 + 102) = 0;
  *((_QWORD *)v53 + 52) = 0LL;
  *((_QWORD *)v53 + 55) = v53 + 432;
  *((_QWORD *)v53 + 54) = v53 + 432;
  *((_QWORD *)v53 + 57) = v53 + 448;
  *((_QWORD *)v53 + 56) = v53 + 448;
  RIMCheckPressureDefaultSetting((__int64)v53);
  *((_DWORD *)v53 + 264) = v102;
  *((_QWORD *)v53 + 133) = v106;
  *((_DWORD *)v53 + 268) = 0;
  v106 = 0LL;
  *((_QWORD *)v53 + 137) = Buffer;
  *((_DWORD *)v53 + 276) = 0;
  Buffer = 0LL;
  v54 = 0;
  v55 = &v119;
  v56 = &off_14025C4C0;
  v57 = v53 + 248;
  v58 = v53 + 296;
  v59 = v53 - (char *)&off_14025C4C0;
  v60 = v53 - &v119;
  do
  {
    *(_OWORD *)((char *)v56 + v59 + 128) = *(_OWORD *)v56;
    *(_OWORD *)((char *)v56 + v59 + 144) = *((_OWORD *)v56 + 1);
    *(_QWORD *)&v55[v60 + 224] = 0LL;
    *(_QWORD *)&v55[v60 + 312] = *(_QWORD *)v55;
    *v58 = 0;
    *(_QWORD *)v55 = 0LL;
    *((_DWORD *)v57 + 2) = v54;
    *(_QWORD *)v57 = v53;
    ++v54;
    ++v58;
    v56 += 4;
    v55 += 8;
    v57 += 16;
  }
  while ( v54 <= 2 );
  *((_QWORD *)v53 + 42) = v113;
  *((_QWORD *)v53 + 50) = a9;
  *((_QWORD *)v53 + 43) = Handle;
  v53[392] = v98;
  v53[393] = 0;
  *((_QWORD *)v53 + 44) = 0LL;
  *((_QWORD *)v53 + 45) = 0LL;
  *((_QWORD *)v53 + 46) = v114;
  *((_QWORD *)v53 + 48) = v53 + 376;
  *((_QWORD *)v53 + 47) = v53 + 376;
  v53[776] = 0;
  *((_QWORD *)v53 + 113) = 0LL;
  v61 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  *((_QWORD *)v53 + 112) = (v61 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v61) >> 1)) >> 9;
  v62 = ((unsigned __int64)(5000 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  *((_QWORD *)v53 + 116) = (v62 + ((unsigned __int64)(5000 * gliQpcFreq.QuadPart - v62) >> 1)) >> 9;
  *((_QWORD *)v53 + 103) = a10;
  *((_QWORD *)v53 + 104) = a11;
  *((_WORD *)v53 + 356) = 0;
  *(_QWORD *)(v53 + 716) = 1LL;
  *((_QWORD *)v53 + 100) = 0LL;
  *((_QWORD *)v53 + 92) = v53 + 728;
  *((_QWORD *)v53 + 91) = v53 + 728;
  *((_QWORD *)v53 + 94) = v53 + 744;
  *((_QWORD *)v53 + 93) = v53 + 744;
  *((_QWORD *)v53 + 99) = v53 + 784;
  *((_QWORD *)v53 + 98) = v53 + 784;
  *((_QWORD *)v53 + 102) = v53 + 808;
  *((_QWORD *)v53 + 101) = v53 + 808;
  *((_QWORD *)v53 + 136) = v53 + 1080;
  *((_QWORD *)v53 + 135) = v53 + 1080;
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)v53 + 9,
    (PRTL_AVL_COMPARE_ROUTINE)rimUserMemAllocNodeCompare,
    rimUserMemAllocNodeAlloc,
    (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  v63 = v99;
  *((_DWORD *)v53 + 22) = v99;
  v52 = 3LL;
  if ( !v99 )
  {
LABEL_95:
    v66 = a12 != 0;
    goto LABEL_96;
  }
  if ( a2 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
    v63 = v99;
  }
  *(_QWORD *)&SourceString.Length = v63;
  v64 = 4 * v63;
  if ( v64 > 0xFFFFFFFF )
  {
    v45 = -1073741811;
    v97 = -1073741811;
    goto LABEL_95;
  }
  v65 = Win32AllocPoolZInitImpl(256LL, (unsigned int)v64, 0x70617552u);
  *((_QWORD *)v53 + 12) = v65;
  v66 = a12 != 0;
  if ( !v65 )
  {
    v45 = -1073741801;
    v97 = -1073741801;
LABEL_96:
    v72 = (struct _UNICODE_STRING *)a2;
    goto LABEL_97;
  }
  if ( !a12 )
  {
    v67 = 0LL;
    v68 = *(_QWORD *)&SourceString.Length;
    v69 = v116;
    do
    {
      *(_DWORD *)(v67 + *((_QWORD *)v53 + 12)) = *(_DWORD *)(v69 + v67);
      v67 += 4LL;
      --v68;
    }
    while ( v68 );
    goto LABEL_95;
  }
  for ( i = 0; ; i = v105 + 1 )
  {
    v105 = i;
    if ( i >= v99 )
      break;
    v71 = (const void *)(v116 + 4LL * i);
    if ( (unsigned __int64)v71 >= MmUserProbeAddress )
      v71 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory((void *)(*((_QWORD *)v53 + 12) + 4LL * i), v71, 4uLL);
  }
  v72 = (struct _UNICODE_STRING *)a2;
  v66 = a12 != 0;
LABEL_97:
  if ( !v72 )
  {
    if ( v45 >= 0 && !v53[392] )
      RIMDiscoverDevicesOfInputType(v53);
    RIMIDEAdoptOrphanedRimDevs(v53);
    goto LABEL_131;
  }
  SourceString = 0LL;
  p_DestinationString = 0LL;
  DestinationString = 0LL;
  if ( !v66 )
  {
    p_DestinationString = v72;
    goto LABEL_118;
  }
  v73 = a2;
  if ( a2 >= MmUserProbeAddress )
    v73 = MmUserProbeAddress;
  v74 = *(_DWORD *)v73;
  v102 = v74;
  *(_DWORD *)&SourceString.Length = v74;
  v75 = *(WCHAR **)(v73 + 8);
  SourceString.Buffer = v75;
  if ( ((unsigned __int8)v75 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v76 = (ULONG64)v75 + (unsigned __int16)v74 + 2;
  if ( v76 <= (unsigned __int64)v75 || v76 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v74 > HIWORD(v102) )
  {
    if ( (v74 & 1) == 0 )
      goto LABEL_116;
    goto LABEL_115;
  }
  if ( (v74 & 1) != 0 )
  {
LABEL_115:
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 521LL);
LABEL_116:
    ExRaiseAccessViolation();
  }
  if ( (_WORD)v74 )
  {
    DestinationString.MaximumLength = v74;
    DestinationString.Length = v74;
    DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v74, 0x706D7452u);
    if ( DestinationString.Buffer )
    {
      RtlCopyUnicodeString(&DestinationString, &SourceString);
      p_DestinationString = &DestinationString;
    }
    v45 = v97;
  }
  else
  {
    v45 = -1073741801;
  }
  v53 = (char *)Object;
LABEL_118:
  if ( v45 >= 0 )
  {
    RIMLockExclusive((__int64)(v53 + 104));
    v45 = RIMDiscoverSpecificDevice((struct RawInputManagerObject *)v53);
    RIMUnlockExclusive((__int64)(v53 + 104));
    if ( v45 < 0 )
    {
      if ( *((_QWORD *)v53 + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 558LL);
      v77 = (char *)*((_QWORD *)v53 + 52);
      if ( v77 )
      {
        GreDeleteFastMutex(v77);
        *((_QWORD *)v53 + 52) = 0LL;
      }
      *((_QWORD *)v53 + 42) = -1LL;
      *((_QWORD *)v53 + 43) = -1LL;
      *((_QWORD *)v53 + 46) = -1LL;
    }
  }
  if ( DestinationString.Buffer )
    GreDeleteFastMutex((char *)DestinationString.Buffer);
LABEL_131:
  InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)v53);
  ObfDereferenceObject(v53);
  KernelSemaphore = v106;
LABEL_136:
  if ( v45 >= 0 )
  {
    v78 = &v119;
    do
    {
      if ( *(_QWORD *)v78 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 609LL);
      v78 += 8;
      --v52;
    }
    while ( v52 );
    if ( KernelSemaphore )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 612LL);
    if ( Buffer )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 613LL);
    if ( a12 )
    {
      v79 = v108;
      if ( (unsigned __int64)v108 >= MmUserProbeAddress )
        v79 = (_QWORD *)MmUserProbeAddress;
      *v79 = v103;
    }
    else
    {
      *v108 = v103;
    }
    goto LABEL_166;
  }
LABEL_150:
  v80 = (char **)&v119;
  do
  {
    if ( *v80 )
      GreDeleteFastMutex(*v80);
    ++v80;
    --v52;
  }
  while ( v52 );
  if ( KernelSemaphore )
    GreDeleteFastMutex((char *)KernelSemaphore);
  if ( Buffer )
    GreDeleteFastMutex((char *)Buffer);
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v113 != (HANDLE)-1LL )
    ZwClose(v113);
  if ( v114 != (HANDLE)-1LL )
    ZwClose(v114);
  if ( v103 != (HANDLE)-1LL )
    ObCloseHandle(v103, 1);
LABEL_166:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v81 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v81 = 0;
  }
  v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v81 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v83 = W32GetUserSessionState(WPP_GLOBAL_Control, &WPP_RECORDER_INITIALIZED);
    LOBYTE(v84) = v82;
    LOBYTE(v85) = v81;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v85,
      v84,
      *(_QWORD *)(v83 + 19336),
      4,
      1,
      20,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v45);
  }
  return (unsigned int)v45;
}
