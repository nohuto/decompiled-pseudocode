/*
 * XREFs of RIMOnPnpNotification @ 0x14005B7D0
 * Callers:
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x14005B780 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnPnpNotification @ 0x14017A0F0 (NtRIMOnPnpNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x14005DF20 (RawInputManagerObjectResolveHandle.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x14005DFAC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMDoOnPnpNotification @ 0x140091548 (RIMDoOnPnpNotification.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     rimOnPnpRemoveComplete @ 0x1400930E8 (rimOnPnpRemoveComplete.c)
 *     RimDeviceTypeToRimInputType @ 0x140096120 (RimDeviceTypeToRimInputType.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140097328 (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x140098988 (rimSignalReadComplete.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimStackAttachAndProcessInput @ 0x1400A05C4 (rimStackAttachAndProcessInput.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401685BC (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1401785D8 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1401A62D4 (WPP_RECORDER_AND_TRACE_SF_qqSd.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1, __int64 a2, int a3)
{
  char v4; // bl
  bool v5; // di
  unsigned int v6; // r12d
  _BYTE *v7; // rsi
  char *v8; // rdi
  int v9; // edx
  int v10; // r8d
  __int64 v11; // r14
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rbx
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  __int64 j; // rbx
  int v19; // eax
  __int64 k; // rdi
  int v21; // eax
  __int64 m; // rbx
  __int64 n; // rbx
  int v24; // eax
  __int64 v25; // rbp
  char v26; // bl
  bool v27; // di
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // edx
  int v32; // r8d
  char v33; // bl
  bool v34; // di
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v39; // di
  bool v40; // bp
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  int v44; // edx
  int v45; // r8d
  CTouchProcessor *v46; // rcx
  char v47; // bl
  bool v48; // bp
  __int64 UserSessionState; // rax
  int v50; // r8d
  int v51; // edx
  char v52; // bl
  bool v53; // di
  NTSTATUS v54; // eax
  int v55; // ecx
  char v56; // r14
  char v57; // di
  bool v58; // bp
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  char v62; // di
  bool v63; // bp
  unsigned int v64; // eax
  int v65; // eax
  char v66; // bl
  bool v67; // bp
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  __int64 v71; // rax
  int v72; // r8d
  int v73; // edx
  char v74; // r14
  bool v75; // r15
  int v76; // eax
  struct _KTHREAD *v77; // rcx
  char v78; // al
  __int64 v79; // rdi
  char v80; // bl
  int v81; // edx
  int v82; // ecx
  int v83; // r8d
  __int64 v84; // rax
  int v85; // r8d
  int v86; // edx
  char v87; // bl
  bool v88; // di
  __int64 v89; // rax
  int v90; // r8d
  int v91; // edx
  __int64 i; // rbx
  int v93; // eax
  char v94; // di
  bool v95; // bp
  __int64 v96; // rax
  int v97; // r8d
  int v98; // edx
  __int64 v99; // rax
  int v100; // r8d
  int v101; // edx
  int v102; // r8d
  char v103; // di
  bool v104; // bp
  __int64 v105; // rax
  int v106; // r8d
  int v107; // edx
  char v108; // di
  bool v109; // bp
  __int64 v110; // rax
  int v111; // r8d
  int v112; // edx
  unsigned int v113; // eax
  unsigned __int64 v114; // rax
  __int64 v115; // rax
  int v116; // r8d
  int v117; // edx
  int BugCheckParameter4; // [rsp+20h] [rbp-88h]
  int AccessMode; // [rsp+28h] [rbp-80h]
  int Handle; // [rsp+30h] [rbp-78h]
  int v121; // [rsp+38h] [rbp-70h]
  int v122; // [rsp+B8h] [rbp+10h]
  PVOID Object; // [rsp+C0h] [rbp+18h] BYREF
  int v124; // [rsp+C8h] [rbp+20h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v4 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v4 = 0;
  }
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, (_DWORD)WPP_GLOBAL_Control, a3);
    LOBYTE(v50) = v5;
    LOBYTE(v51) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v51,
      v50,
      *(_QWORD *)(UserSessionState + 19368),
      4,
      1,
      57,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
  }
  v122 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  v6 = v122;
  if ( v122 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v7 = Object;
    v8 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( v7[81] || v7[82] )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v52 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v52 = 0;
      }
      v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v115 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
        LOBYTE(v116) = v53;
        LOBYTE(v117) = v52;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v117,
          v116,
          *(_QWORD *)(v115 + 19368),
          3,
          1,
          69,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
      }
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v7, 0LL, 0LL);
    }
    if ( v7[392] )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v66 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v66 = 0;
      }
      v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v66 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v68 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
        LOBYTE(v69) = v67;
        LOBYTE(v70) = v66;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v70,
          v69,
          *(_QWORD *)(v68 + 19368),
          4,
          1,
          58,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
          (char)v7);
      }
      v7[392] = 0;
      RIMUnlockExclusive((__int64)v8);
      v122 = rimDoScheduledUserModeRimPnpRegistration(v7);
      RIMLockExclusive((__int64)v8);
    }
    if ( v7[393] )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v87 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v87 = 0;
      }
      v88 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v87 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v89 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v9, v10);
        LOBYTE(v90) = v88;
        LOBYTE(v91) = v87;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v91,
          v90,
          *(_QWORD *)(v89 + 19368),
          4,
          1,
          59,
          (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
          (char)v7);
      }
      v7[393] = 0;
      if ( *((_DWORD *)v7 + 264) )
      {
        LODWORD(Object) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1780LL);
      }
      for ( i = *((_QWORD *)v7 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v93 = *(_DWORD *)(i + 168);
        if ( (v93 & 0x2000) == 0 && (v93 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 168) = v93 | 8;
          rimOnPnpRemoveComplete(v7, i);
        }
      }
    }
    v11 = (__int64)(v7 + 760);
    RIMLockExclusive((__int64)(v7 + 760));
    v14 = *((_QWORD *)v7 + 53);
    if ( v14 )
    {
      do
      {
        v15 = *(_DWORD *)(v14 + 168);
        if ( (v15 & 0x2000) == 0 && *(_BYTE *)(v14 + 188) && (v15 & 0x80u) == 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v94 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v94 = 0;
          }
          v95 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v94 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v96 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
            LOBYTE(v97) = v95;
            LOBYTE(v98) = v94;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v98,
              v97,
              *(_QWORD *)(v96 + 19368),
              4,
              1,
              60,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
              (char)v7,
              v14);
          }
          RIMStartDeviceSpecificRead(v7, v14);
        }
        v14 = *(_QWORD *)(v14 + 40);
      }
      while ( v14 );
      v11 = (__int64)(v7 + 760);
    }
    RIMUnlockExclusive(v11);
    for ( j = *((_QWORD *)v7 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      if ( *((_QWORD *)v7 + 104) || *((_DWORD *)v7 + 264) )
      {
        v19 = *(_DWORD *)(j + 168);
        if ( (v19 & 0x2000) != 0 && (v19 & 0x80000) != 0 )
        {
          if ( *(_QWORD *)(j + 328) )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1835LL);
          }
          if ( *((_DWORD *)v7 + 264)
            || (v54 = ObOpenObjectByPointer(
                        *(PVOID *)(j + 32),
                        0,
                        0LL,
                        3u,
                        ExRawInputManagerObjectType,
                        0,
                        (PHANDLE)(j + 328)),
                v56 = v54,
                v54 >= 0) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v62 = 0;
            }
            v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v71 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
              LOBYTE(v72) = v63;
              LOBYTE(v73) = v62;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v73,
                v72,
                *(_QWORD *)(v71 + 19368),
                4,
                1,
                61,
                (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                (char)v7,
                j);
            }
            rimDoRimDevChange(v7, j, 2LL);
            v64 = *(_DWORD *)(j + 168) & 0xFFF7FFFF;
            *(_DWORD *)(j + 168) = v64;
            if ( *((_DWORD *)v7 + 264) )
              v64 |= 0x1000000u;
            v65 = v64 | 0x4000000;
            *(_DWORD *)(j + 168) = v65;
            if ( (v65 & 0x400) != 0 )
            {
              v124 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1874LL);
            }
          }
          else
          {
            v16 = (int)WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (v55 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v55 & 1) == 0)
              || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v57 = 0;
            }
            v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v59 = W32GetUserSessionState(v55, (_DWORD)WPP_GLOBAL_Control, v17);
              LOBYTE(v60) = v58;
              LOBYTE(v61) = v57;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v61,
                v60,
                *(_QWORD *)(v59 + 19368),
                3,
                1,
                62,
                (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                v56);
            }
          }
        }
      }
    }
    for ( k = *((_QWORD *)v7 + 53); k; k = *(_QWORD *)(k + 40) )
    {
      if ( *((_QWORD *)v7 + 104) || *((_DWORD *)v7 + 264) )
      {
        v21 = *(_DWORD *)(k + 168);
        if ( (v21 & 0x2000) != 0 && (v21 & 0x4000000) != 0 )
        {
          *(_DWORD *)(k + 168) = v21 & 0xFBFFFFFF;
          RIMLockExclusive((__int64)(v7 + 760));
          if ( (*(_DWORD *)(k + 168) & 0x400) != 0 )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1899LL);
          }
          v46 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v47 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v47 = 0;
          }
          v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v99 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v44, v45);
            LOBYTE(v100) = v48;
            LOBYTE(v101) = v47;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v101,
              v100,
              *(_QWORD *)(v99 + 19368),
              4,
              1,
              63,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
              (char)v7,
              k);
          }
          if ( (*(_DWORD *)(k + 184) & 0x80u) == 0 )
          {
            if ( v7[776] && *(_DWORD *)(k + 48) <= 1u )
            {
              if ( (*(_DWORD *)(k + 168) & 0x2000) != 0 )
                RIMTransferInjectionDeviceDataFifoToDataBuffer(v46, k);
              v7[776] = 0;
              v102 = k + 480;
              if ( *(_DWORD *)(k + 48) != 1 )
                v102 = k + 452;
              rimStackAttachAndProcessInput((_DWORD)v7, k, v102, k + 240, 0);
              rimSignalReadComplete(
                (struct RawInputManagerObject *)v7,
                (struct RIMDEV *)k,
                (struct _IO_STATUS_BLOCK *)(k + 240));
            }
          }
          else
          {
            rimProcessAnyQueuedCompleteFrames(v7, k);
          }
          RIMUnlockExclusive((__int64)(v7 + 760));
        }
      }
    }
    for ( m = *((_QWORD *)v7 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( (*((_QWORD *)v7 + 104) || *((_DWORD *)v7 + 264)) && (*(_DWORD *)(m + 168) & 0x200000) != 0 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v39 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v39 = 0;
        }
        v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
          LOBYTE(v42) = v40;
          LOBYTE(v43) = v39;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v43,
            v42,
            *(_QWORD *)(v41 + 19368),
            4,
            1,
            64,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
            (char)v7,
            m);
        }
        rimDoRimDevChange(v7, m, 5LL);
        *(_DWORD *)(m + 168) &= ~0x200000u;
      }
    }
LABEL_30:
    for ( n = *((_QWORD *)v7 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      if ( *((_QWORD *)v7 + 104) || *((_DWORD *)v7 + 264) )
      {
        v24 = *(_DWORD *)(n + 168);
        if ( (v24 & 0x2000) != 0 && (v24 & 0x100000) != 0 )
        {
          if ( *(_QWORD *)(n + 328) || *((_DWORD *)v7 + 264) )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v108 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v108 = 0;
            }
            v109 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v108 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v110 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
              LOBYTE(v111) = v109;
              LOBYTE(v112) = v108;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v112,
                v111,
                *(_QWORD *)(v110 + 19368),
                4,
                1,
                65,
                (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
                (char)v7,
                n);
            }
            rimDoRimDevChange(v7, n, 3LL);
            v113 = *(_DWORD *)(n + 168) & 0xFFEFFFFF;
            *(_DWORD *)(n + 168) = v113;
            if ( *((_DWORD *)v7 + 264) )
            {
              *(_DWORD *)(n + 168) = v113 | 0x2000000;
              if ( *(_QWORD *)(n + 328) )
              {
                LODWORD(Object) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1985LL);
              }
            }
            else
            {
              NtClose(*(HANDLE *)(n + 328));
            }
            v114 = *(_QWORD *)(n + 32);
            *(_QWORD *)(n + 328) = 0LL;
            RIMFreeDev(
              (struct RawInputManagerObject *)v7,
              (struct RIMDEV *)((v114 + 72) & ((unsigned __int128)-(__int128)v114 >> 64)));
            goto LABEL_30;
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v103 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v103 = 0;
          }
          v104 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v103 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v105 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
            LOBYTE(v106) = v104;
            LOBYTE(v107) = v103;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v107,
              v106,
              *(_QWORD *)(v105 + 19368),
              3,
              1,
              66,
              (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids);
          }
        }
      }
    }
    v25 = *((_QWORD *)v7 + 53);
    v6 = v122;
    if ( v25 )
    {
      do
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v26 = 0;
        }
        v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (unsigned int)&WPP_RECORDER_INITIALIZED, v17);
          LOBYTE(v29) = v27;
          LOBYTE(v30) = v26;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v30,
            v29,
            *(_QWORD *)(v28 + 19368),
            4,
            1,
            67,
            (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
            (char)v7,
            v25);
        }
        if ( (*(_DWORD *)(v25 + 168) & 0x10) != 0 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v74 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v74 = 0;
          }
          v75 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v74 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v78 = RimDeviceTypeToRimInputType(v25, *(unsigned int *)(v25 + 48));
            v79 = *(_QWORD *)(v25 + 200);
            v80 = v78;
            v84 = W32GetUserSessionState(v82, v81, v83);
            LOBYTE(v85) = v75;
            LOBYTE(v86) = v74;
            WPP_RECORDER_AND_TRACE_SF_qqSd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v86,
              v85,
              *(_QWORD *)(v84 + 19368),
              BugCheckParameter4,
              AccessMode,
              Handle,
              v121,
              (char)v7,
              v25,
              v79,
              v80);
          }
          v76 = *(_DWORD *)(v25 + 168);
          if ( (v76 & 0x20) != 0 && (v76 & 0x40) == 0 )
          {
            LODWORD(Object) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2025LL);
          }
          if ( (*(_DWORD *)(v25 + 168) & 0x2000) != 0 )
          {
            v124 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2026LL);
          }
          v77 = *(struct _KTHREAD **)(v25 + 296);
          if ( !v77 || v77 == KeGetCurrentThread() )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2029LL);
          RIMDoOnPnpNotification((struct RawInputManagerObject *)v7);
          *(_DWORD *)(v25 + 168) &= ~0x10u;
          KeSetEvent(*(PRKEVENT *)(v25 + 336), 1, 0);
        }
        v25 = *(_QWORD *)(v25 + 40);
      }
      while ( v25 );
      v6 = v122;
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v7);
    RIMUnlockExclusive((__int64)(v7 + 104));
    ObfDereferenceObject(v7);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v33;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 19368),
      4,
      1,
      70,
      (__int64)&WPP_b10fc1abd6f53a0dbee04020d1a989a7_Traceguids,
      v6);
  }
  return v6;
}
