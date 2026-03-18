/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x14005C740
 * Callers:
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1401297B8 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputEx @ 0x140191BF0 (RIMRegisterForInputEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     CreateKernelSemaphore @ 0x14005D890 (CreateKernelSemaphore.c)
 *     rimConvertUserToKernelSemaphoreHandle @ 0x14005D8EC (rimConvertUserToKernelSemaphoreHandle.c)
 *     rimConvertUserToKernelEventHandle @ 0x14005D9DC (rimConvertUserToKernelEventHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x14005DAAC (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x14005DBA8 (RIMCheckPressureDefaultSetting.c)
 *     RawInputManagerObjectCreate @ 0x14005DD34 (RawInputManagerObjectCreate.c)
 *     ?RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z @ 0x14005DE4C (-RawInputManagerObjectUsed@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x14005E0A4 (RIMIDEAdoptOrphanedRimDevs.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimCheckForRegistrationConflicts @ 0x1400D7DD4 (rimCheckForRegistrationConflicts.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RIMUnregisterForInput @ 0x140129F90 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1401BB0E0 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDiscoverSpecificDevice @ 0x1401BC738 (RIMDiscoverSpecificDevice.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDd @ 0x140202B10 (WPP_RECORDER_AND_TRACE_SF_qDd.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x1402D2164 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x1402D21A0 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x1402D231C (RtlWriteULong64ToUser.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        unsigned int a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        HANDLE *a13)
{
  char *v14; // r8
  char v16; // r12
  void *KernelSemaphore; // r15
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int i; // r13d
  int v22; // r15d
  int v23; // r13d
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v28; // sf
  int v29; // edx
  int v30; // r8d
  int v31; // r9d
  __int64 v32; // r13
  char *v33; // r14
  unsigned int v34; // r9d
  __int128 *v35; // rdx
  GUID **v36; // rcx
  char *v37; // r11
  _DWORD *v38; // r13
  signed __int64 v39; // rbx
  signed __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  BOOL v46; // ecx
  char *v47; // rax
  unsigned __int64 ULong64FromUser; // rax
  ULONG64 v49; // rcx
  char **v50; // rbx
  char v51; // bl
  bool v52; // r14
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  char **v59; // rbx
  __int64 v60; // r13
  char *v61; // rcx
  char *v62; // rcx
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  int v66; // eax
  __int64 UserSessionState; // rax
  int v68; // r8d
  int v69; // edx
  bool v70; // r14
  bool v71; // r13
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  char v75; // bl
  bool v76; // r14
  int v77; // edx
  int v78; // r8d
  __int64 v79; // r9
  char v80; // r14
  bool v81; // r12
  __int64 v82; // rax
  int v83; // r8d
  int v84; // edx
  bool v85; // r14
  __int64 v86; // rax
  int v87; // r8d
  int v88; // edx
  unsigned int j; // ebx
  int TableContext; // [rsp+20h] [rbp-158h]
  int v91; // [rsp+28h] [rbp-150h]
  int v92; // [rsp+30h] [rbp-148h]
  __int16 v93; // [rsp+30h] [rbp-148h]
  int v94; // [rsp+38h] [rbp-140h]
  bool v95; // [rsp+60h] [rbp-118h]
  bool v96; // [rsp+60h] [rbp-118h]
  bool v97; // [rsp+6Ch] [rbp-10Ch]
  char *Buffer; // [rsp+88h] [rbp-F0h]
  HANDLE v101; // [rsp+90h] [rbp-E8h] BYREF
  PVOID v102; // [rsp+98h] [rbp-E0h]
  PVOID Object; // [rsp+A0h] [rbp-D8h] BYREF
  HANDLE *v104; // [rsp+A8h] [rbp-D0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v106; // [rsp+C0h] [rbp-B8h]
  __int64 v107; // [rsp+C8h] [rbp-B0h]
  __int128 v108; // [rsp+D0h] [rbp-A8h]
  unsigned int v109; // [rsp+E0h] [rbp-98h]
  int v110; // [rsp+E4h] [rbp-94h]
  HANDLE Handle; // [rsp+E8h] [rbp-90h] BYREF
  HANDLE v112; // [rsp+F0h] [rbp-88h] BYREF
  HANDLE v113[2]; // [rsp+F8h] [rbp-80h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+108h] [rbp-70h]
  UNICODE_STRING SourceString; // [rsp+110h] [rbp-68h] BYREF
  __int128 v116; // [rsp+120h] [rbp-58h] BYREF
  __int64 v117; // [rsp+130h] [rbp-48h]

  *(_QWORD *)&DestinationString.Length = a4;
  v14 = a2;
  v113[1] = a2;
  *(_QWORD *)&v108 = a4;
  v107 = a6;
  v106 = a7;
  Object = a8;
  v104 = a13;
  Handle = (HANDLE)-1LL;
  v112 = (HANDLE)-1LL;
  v113[0] = (HANDLE)-1LL;
  v101 = (HANDLE)-1LL;
  v116 = 0LL;
  v117 = 0LL;
  v97 = 0;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v16 = 0;
  }
  v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(
                         (_DWORD)WPP_GLOBAL_Control,
                         (unsigned int)&WPP_RECORDER_INITIALIZED,
                         (_DWORD)a2);
    LOBYTE(v68) = v95;
    LOBYTE(v69) = v16;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v69,
      v68,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      11,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    v14 = a2;
  }
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    v70 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v72 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)v14);
      LOBYTE(v73) = v71;
      LOBYTE(v74) = v70;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v74,
        v73,
        *(_QWORD *)(v72 + 19368),
        2,
        1,
        12,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
        a1);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v75 = 0;
    }
    v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v75 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225485LL;
    v79 = *(_QWORD *)(W32GetUserSessionState(
                        (_DWORD)WPP_GLOBAL_Control,
                        (unsigned int)&WPP_RECORDER_INITIALIZED,
                        (_DWORD)v14)
                    + 19368);
    v93 = 13;
    goto LABEL_158;
  }
  if ( v14 )
  {
    if ( a1 && ((a1 - 1) & a1) == 0 && !a3 )
      goto LABEL_8;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v80 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v80 = 0;
    }
    v81 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v80 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v82 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, (_DWORD)v14);
      LOBYTE(v83) = v81;
      LOBYTE(v84) = v80;
      WPP_RECORDER_AND_TRACE_SF_qDd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v84,
        v83,
        *(_QWORD *)(v82 + 19368),
        TableContext,
        v91,
        v92,
        v94,
        (char)a2,
        a1,
        a3);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v75 = 0;
    }
    v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = *(_QWORD *)(W32GetUserSessionState(
                          (_DWORD)WPP_GLOBAL_Control,
                          (unsigned int)&WPP_RECORDER_INITIALIZED,
                          (_DWORD)v14)
                      + 19368);
      v93 = 15;
LABEL_158:
      LOBYTE(v78) = v76;
      LOBYTE(v77) = v75;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v77,
        v78,
        v79,
        4,
        1,
        v93,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
    }
    return 3221225485LL;
  }
  if ( a3 )
  {
    if ( (a1 & 0x20) != 0 )
    {
      if ( a12 )
      {
        v66 = rimCheckForRegistrationConflicts(a1);
        if ( v66 == 1 )
          return 3221225506LL;
        v97 = v66 == 0;
      }
      goto LABEL_8;
    }
    v85 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v96 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v85 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v86 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, 0);
      LOBYTE(v87) = v96;
      LOBYTE(v88) = v85;
      WPP_RECORDER_AND_TRACE_SF_Dd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v88,
        v87,
        *(_QWORD *)(v86 + 19368),
        2,
        1,
        16,
        (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
        a1,
        a3);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v75 = 0;
    }
    v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v79 = *(_QWORD *)(W32GetUserSessionState(
                          (_DWORD)WPP_GLOBAL_Control,
                          (unsigned int)&WPP_RECORDER_INITIALIZED,
                          (_DWORD)v14)
                      + 19368);
      v93 = 17;
      goto LABEL_158;
    }
    return 3221225485LL;
  }
LABEL_8:
  KernelSemaphore = (void *)CreateKernelSemaphore(0, -1);
  v102 = KernelSemaphore;
  if ( !KernelSemaphore )
    return 3221225495LL;
  Buffer = (char *)CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !Buffer )
  {
    v61 = (char *)KernelSemaphore;
    goto LABEL_72;
  }
  for ( i = 0; ; ++i )
  {
    if ( i > 2 )
    {
      v22 = rimConvertUserToKernelEventHandle(v107, &Handle);
      v23 = rimConvertUserToKernelTimerHandle(v106, &v112);
      v24 = rimConvertUserToKernelSemaphoreHandle(Object, v113);
      v28 = v22 < 0;
      if ( v22 >= 0 )
      {
        if ( v23 >= 0 && v24 >= 0 )
        {
          KeEnterCriticalRegion();
          v22 = RawInputManagerObjectCreate(a12 != 0, v29, v30, v31, &v101);
          KeLeaveCriticalRegion();
          v32 = 3LL;
          if ( v22 < 0 || (Object = 0LL, v22 = RawInputManagerObjectResolveHandle(v101, 3LL, 1LL, &Object), v22 < 0) )
          {
LABEL_43:
            v50 = (char **)&v116;
            if ( v22 < 0 )
            {
              do
              {
                if ( *v50 )
                  GreDeleteFastMutex(*v50, v25, v26, v27);
                ++v50;
                --v32;
              }
              while ( v32 );
              if ( v102 )
                GreDeleteFastMutex((char *)v102, v25, v26, v27);
              if ( Buffer )
                GreDeleteFastMutex(Buffer, v25, v26, v27);
              if ( Handle != (HANDLE)-1LL )
                ZwClose(Handle);
              if ( v112 != (HANDLE)-1LL )
                ZwClose(v112);
              if ( v113[0] != (HANDLE)-1LL )
                ZwClose(v113[0]);
              if ( v101 != (HANDLE)-1LL )
                ObCloseHandle(v101, 1);
            }
            else
            {
              do
              {
                if ( *v50 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 609LL);
                ++v50;
                --v32;
              }
              while ( v32 );
              if ( v102 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 612LL);
              if ( Buffer )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 613LL);
              if ( a12 )
                RtlWriteULong64ToUser(v104, v101);
              else
                *v104 = v101;
            }
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v51 = 0;
            }
            v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v63 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v26);
              LOBYTE(v64) = v52;
              LOBYTE(v65) = v51;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v65,
                v64,
                *(_QWORD *)(v63 + 19368),
                4,
                1,
                20,
                (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                v22);
            }
            return (unsigned int)v22;
          }
          v33 = (char *)Object;
          *((_QWORD *)Object + 9) = v101;
          *((_WORD *)v33 + 40) = 0;
          v33[82] = 0;
          *((_DWORD *)v33 + 21) = a1;
          *((_QWORD *)v33 + 15) = a5;
          *((_QWORD *)v33 + 13) = 0LL;
          *((_QWORD *)v33 + 14) = 0LL;
          *((_QWORD *)v33 + 95) = 0LL;
          *((_QWORD *)v33 + 96) = 0LL;
          *((_QWORD *)v33 + 53) = 0LL;
          *((_DWORD *)v33 + 102) = 0;
          *((_QWORD *)v33 + 52) = 0LL;
          *((_QWORD *)v33 + 55) = v33 + 432;
          *((_QWORD *)v33 + 54) = v33 + 432;
          *((_QWORD *)v33 + 57) = v33 + 448;
          *((_QWORD *)v33 + 56) = v33 + 448;
          RIMCheckPressureDefaultSetting(v33);
          *((_DWORD *)v33 + 264) = a12 == 0;
          *((_QWORD *)v33 + 133) = v102;
          *((_DWORD *)v33 + 268) = 0;
          v102 = 0LL;
          *((_QWORD *)v33 + 137) = Buffer;
          *((_DWORD *)v33 + 276) = 0;
          Buffer = 0LL;
          v34 = 0;
          v35 = &v116;
          v36 = &off_140253E90;
          v37 = v33 + 248;
          v38 = v33 + 296;
          v39 = v33 - (char *)&off_140253E90;
          v40 = v33 - (char *)&v116;
          do
          {
            *(_OWORD *)((char *)v36 + v39 + 128) = *(_OWORD *)v36;
            *(_OWORD *)((char *)v36 + v39 + 144) = *((_OWORD *)v36 + 1);
            *(_QWORD *)((char *)v35 + v40 + 224) = 0LL;
            *(_QWORD *)((char *)v35 + v40 + 312) = *(_QWORD *)v35;
            *v38 = 0;
            *(_QWORD *)v35 = 0LL;
            *((_DWORD *)v37 + 2) = v34;
            *(_QWORD *)v37 = v33;
            ++v34;
            ++v38;
            v36 += 4;
            v35 = (__int128 *)((char *)v35 + 8);
            v37 += 16;
          }
          while ( v34 <= 2 );
          *((_QWORD *)v33 + 42) = v112;
          *((_QWORD *)v33 + 50) = a9;
          *((_QWORD *)v33 + 43) = Handle;
          v33[392] = v97;
          v33[393] = 0;
          *((_QWORD *)v33 + 44) = 0LL;
          *((_QWORD *)v33 + 45) = 0LL;
          *((HANDLE *)v33 + 46) = v113[0];
          *((_QWORD *)v33 + 48) = v33 + 376;
          *((_QWORD *)v33 + 47) = v33 + 376;
          v33[776] = 0;
          *((_QWORD *)v33 + 113) = 0LL;
          v41 = ((unsigned __int64)(500 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
          *((_QWORD *)v33 + 112) = (v41 + ((unsigned __int64)(500 * gliQpcFreq.QuadPart - v41) >> 1)) >> 9;
          v42 = ((unsigned __int64)(5000 * gliQpcFreq.QuadPart) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
          *((_QWORD *)v33 + 116) = (v42 + ((unsigned __int64)(5000 * gliQpcFreq.QuadPart - v42) >> 1)) >> 9;
          *((_QWORD *)v33 + 103) = a10;
          *((_QWORD *)v33 + 104) = a11;
          *((_WORD *)v33 + 356) = 0;
          *(_QWORD *)(v33 + 716) = 1LL;
          *((_QWORD *)v33 + 100) = 0LL;
          *((_QWORD *)v33 + 92) = v33 + 728;
          *((_QWORD *)v33 + 91) = v33 + 728;
          *((_QWORD *)v33 + 94) = v33 + 744;
          *((_QWORD *)v33 + 93) = v33 + 744;
          *((_QWORD *)v33 + 99) = v33 + 784;
          *((_QWORD *)v33 + 98) = v33 + 784;
          *((_QWORD *)v33 + 102) = v33 + 808;
          *((_QWORD *)v33 + 101) = v33 + 808;
          *((_QWORD *)v33 + 136) = v33 + 1080;
          *((_QWORD *)v33 + 135) = v33 + 1080;
          RtlInitializeGenericTableAvl(
            (PRTL_AVL_TABLE)v33 + 9,
            rimUserMemAllocNodeCompare,
            rimUserMemAllocNodeAlloc,
            rimUserMemAllocNodeFree,
            0LL);
          *((_DWORD *)v33 + 22) = a3;
          v32 = 3LL;
          if ( a3 )
          {
            if ( a2 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 458LL);
            if ( 4 * (unsigned __int64)a3 > 0xFFFFFFFF )
            {
              v22 = -1073741811;
            }
            else
            {
              v54 = Win32AllocPoolZInitImpl(256LL, 4 * a3, 0x70617552u);
              *((_QWORD *)v33 + 12) = v54;
              v46 = a12 != 0;
              if ( !v54 )
              {
                v22 = -1073741801;
                goto LABEL_21;
              }
              if ( a12 )
              {
                for ( j = 0; ; ++j )
                {
                  v109 = j;
                  if ( j >= a3 )
                    break;
                  RtlCopyFromUser(
                    (void *)(*((_QWORD *)v33 + 12) + 4LL * j),
                    (void *)(*(_QWORD *)&DestinationString.Length + 4LL * j),
                    4uLL);
                }
                v47 = a2;
                v46 = a12 != 0;
                goto LABEL_22;
              }
              v43 = 0LL;
              v44 = a3;
              v45 = *(_QWORD *)&DestinationString.Length;
              do
              {
                *(_DWORD *)(v43 + *((_QWORD *)v33 + 12)) = *(_DWORD *)(v45 + v43);
                v43 += 4LL;
                --v44;
              }
              while ( v44 );
            }
          }
          v46 = a12 != 0;
LABEL_21:
          v47 = a2;
LABEL_22:
          if ( v47 )
          {
            SourceString = 0LL;
            p_DestinationString = 0LL;
            DestinationString = 0LL;
            if ( v46 )
            {
              v108 = 0LL;
              LODWORD(v108) = RtlReadULongFromUser(a2, v43);
              ULong64FromUser = RtlReadULong64FromUser(a2 + 8);
              *((_QWORD *)&v108 + 1) = ULong64FromUser;
              SourceString = (UNICODE_STRING)v108;
              if ( (ULong64FromUser & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              v44 = (unsigned __int16)v108;
              v43 = (unsigned __int16)v108;
              v49 = ULong64FromUser + (unsigned __int16)v108 + 2LL;
              if ( v49 <= ULong64FromUser || v49 >= MmUserProbeAddress )
                ExRaiseAccessViolation();
              if ( (unsigned __int16)v108 > WORD1(v108) || (v108 & 1) != 0 )
              {
                if ( (v108 & 1) != 0 )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 521LL);
                ExRaiseAccessViolation();
              }
              if ( (_WORD)v108 )
              {
                DestinationString.MaximumLength = v108;
                DestinationString.Length = v108;
                DestinationString.Buffer = (PWSTR)Win32AllocPoolZInitImpl(256LL, (unsigned __int16)v108, 0x706D7452u);
                if ( DestinationString.Buffer )
                {
                  RtlCopyUnicodeString(&DestinationString, &SourceString);
                  p_DestinationString = &DestinationString;
                }
              }
              else
              {
                v22 = -1073741801;
                v110 = -1073741801;
              }
            }
            if ( v22 >= 0 )
            {
              RIMLockExclusive((__int64)(v33 + 104));
              v22 = RIMDiscoverSpecificDevice((struct RawInputManagerObject *)v33);
              RIMUnlockExclusive((__int64)(v33 + 104));
              if ( v22 < 0 )
              {
                if ( *((_QWORD *)v33 + 12) )
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 558LL);
                v62 = (char *)*((_QWORD *)v33 + 52);
                if ( v62 )
                {
                  GreDeleteFastMutex(v62, v43, v44, v45);
                  *((_QWORD *)v33 + 52) = 0LL;
                }
                *((_QWORD *)v33 + 42) = -1LL;
                *((_QWORD *)v33 + 43) = -1LL;
                *((_QWORD *)v33 + 46) = -1LL;
              }
            }
            if ( DestinationString.Buffer )
              GreDeleteFastMutex((char *)DestinationString.Buffer, v43, v44, v45);
          }
          else
          {
            if ( v22 >= 0 && !v33[392] )
              RIMDiscoverDevicesOfInputType(v33);
            RIMIDEAdoptOrphanedRimDevs(v33);
          }
          InputTraceLogging::RIM::RawInputManagerObjectUsed((const struct RawInputManagerObject *)v33);
          ObfDereferenceObject(v33);
          goto LABEL_43;
        }
        v28 = v22 < 0;
      }
      if ( !v28 )
        v22 = v23;
      v32 = 3LL;
      goto LABEL_43;
    }
    v55 = Win32AllocPoolZInitImpl(64LL, 0x68uLL, 0x63704152u);
    *((_QWORD *)&v116 + i) = v55;
    if ( !v55 )
      break;
  }
  v59 = (char **)&v116;
  v60 = 3LL;
  do
  {
    if ( *v59 )
      GreDeleteFastMutex(*v59, v56, v57, v58);
    ++v59;
    --v60;
  }
  while ( v60 );
  GreDeleteFastMutex((char *)KernelSemaphore, v56, v57, v58);
  v61 = Buffer;
LABEL_72:
  GreDeleteFastMutex(v61, v18, v19, v20);
  return 3221225495LL;
}
