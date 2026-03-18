/*
 * XREFs of RIMOnPnpNotification @ 0x140039E20
 * Callers:
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x140039DB0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     NtRIMOnPnpNotification @ 0x14013BD70 (NtRIMOnPnpNotification.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x14002E4F0 (RawInputManagerObjectResolveHandle.c)
 *     rimOnPnpRemoveComplete @ 0x14002E724 (rimOnPnpRemoveComplete.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     rimSignalReadComplete @ 0x140035980 (rimSignalReadComplete.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RimDeviceTypeToRimInputType @ 0x140099344 (RimDeviceTypeToRimInputType.c)
 *     rimStackAttachAndProcessInput @ 0x1400E69D8 (rimStackAttachAndProcessInput.c)
 *     ??B?$SGINPUTTRACINGgRimLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x1400E7F08 (--B-$SGINPUTTRACINGgRimLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1401086C0 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMDoOnPnpNotification @ 0x140113F30 (RIMDoOnPnpNotification.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x140183228 (rimProcessAnyQueuedCompleteFrames.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1401DC718 (WPP_RECORDER_AND_TRACE_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1401EAD20 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1401ECF1C (rimDoScheduledUserModeRimPnpRegistration.c)
 */

__int64 __fastcall RIMOnPnpNotification(char *a1)
{
  char v2; // bl
  bool v3; // di
  __int64 UserSessionState; // rax
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // r12d
  PVOID v8; // rsi
  char *v9; // rdi
  __int64 v10; // rdx
  char v11; // bl
  bool v12; // bp
  __int64 v13; // rax
  void *v14; // rdx
  int v15; // r8d
  char v16; // bl
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 i; // rbx
  int v22; // eax
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rbx
  int v26; // eax
  char v27; // di
  bool v28; // bp
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  void *v32; // rdx
  __int64 j; // rbx
  int v34; // eax
  NTSTATUS v35; // eax
  __int64 v36; // rcx
  char v37; // r14
  char v38; // di
  bool v39; // bp
  __int64 v40; // rax
  int v41; // r8d
  int v42; // edx
  char v43; // di
  bool v44; // bp
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  unsigned int v48; // eax
  int v49; // eax
  __int64 k; // rbx
  int v51; // eax
  __int64 v52; // rdx
  void *v53; // rcx
  char v54; // di
  bool v55; // bp
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  int v59; // r8d
  __int64 m; // rbx
  char v61; // di
  bool v62; // bp
  __int64 v63; // rax
  int v64; // r8d
  int v65; // edx
  __int64 n; // rbx
  int v67; // eax
  char v68; // di
  bool v69; // bp
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  char v73; // di
  bool v74; // bp
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  unsigned int v78; // eax
  unsigned __int64 v79; // rax
  __int64 v80; // rbp
  char v81; // bl
  bool v82; // di
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  char v86; // r14
  bool v87; // r15
  char v88; // al
  __int64 v89; // rdi
  char v90; // bl
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rax
  int v94; // r8d
  int v95; // edx
  int v96; // eax
  struct _KTHREAD *v97; // rcx
  __int64 v98; // rdx
  char v99; // bl
  bool v100; // di
  int v101; // eax
  void *v102; // rdx
  int v103; // r8d
  char v104; // bl
  bool v105; // di
  __int64 v106; // rax
  int v107; // r8d
  int v108; // edx
  int ObjectType; // [rsp+20h] [rbp-88h]
  int AccessMode; // [rsp+28h] [rbp-80h]
  int Handle; // [rsp+30h] [rbp-78h]
  int v113; // [rsp+38h] [rbp-70h]
  PVOID Object; // [rsp+68h] [rbp-40h] BYREF
  int v115; // [rsp+B8h] [rbp+10h]

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v5) = v3;
    LOBYTE(v6) = v2;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v6,
      v5,
      *(_QWORD *)(UserSessionState + 19336),
      4,
      1,
      58,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
  }
  v115 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  v7 = v115;
  if ( v115 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v8 = Object;
    v9 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v8 + 81) || *((_BYTE *)v8 + 82) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v99 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v99 = 0;
      }
      v100 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v99 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v101 = SGINPUTTRACINGgRimLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *();
        v102 = &WPP_10bcc0214e9c3055c3963919738232ce_Traceguids;
        LOBYTE(v103) = v100;
        LOBYTE(v102) = v99;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v102,
          v103,
          v101,
          3,
          1,
          70,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
      }
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v8, 0LL, 0LL);
    }
    if ( *((_BYTE *)v8 + 392) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v11 = 0;
      }
      v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        v14 = &WPP_10bcc0214e9c3055c3963919738232ce_Traceguids;
        LOBYTE(v15) = v12;
        LOBYTE(v14) = v11;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          (_DWORD)v14,
          v15,
          *(_QWORD *)(v13 + 19336),
          4,
          1,
          59,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          (char)v8);
      }
      *((_BYTE *)v8 + 392) = 0;
      RIMUnlockExclusive((__int64)v9);
      v115 = rimDoScheduledUserModeRimPnpRegistration(v8);
      RIMLockExclusive((__int64)v9);
    }
    if ( *((_BYTE *)v8 + 393) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v16 = 0;
      }
      v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v19) = v17;
        LOBYTE(v20) = v16;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v20,
          v19,
          *(_QWORD *)(v18 + 19336),
          4,
          1,
          60,
          (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
          (char)v8);
      }
      *((_BYTE *)v8 + 393) = 0;
      if ( *((_DWORD *)v8 + 264) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1820LL);
      for ( i = *((_QWORD *)v8 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v22 = *(_DWORD *)(i + 168);
        if ( (v22 & 0x2000) == 0 && (v22 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 168) = v22 | 8;
          rimOnPnpRemoveComplete((char)v8, i);
        }
      }
    }
    v23 = (__int64)v8 + 760;
    RIMLockExclusive((__int64)v8 + 760);
    v25 = *((_QWORD *)v8 + 53);
    if ( v25 )
    {
      do
      {
        v26 = *(_DWORD *)(v25 + 168);
        if ( (v26 & 0x2000) == 0 && *(_BYTE *)(v25 + 188) && (v26 & 0x80u) == 0 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v27 = 0;
          }
          v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = W32GetUserSessionState(WPP_GLOBAL_Control, v24);
            LOBYTE(v30) = v28;
            LOBYTE(v31) = v27;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v31,
              v30,
              *(_QWORD *)(v29 + 19336),
              4,
              1,
              61,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
              (char)v8,
              v25);
          }
          RIMStartDeviceSpecificRead((__int64)v8, v25);
        }
        v25 = *(_QWORD *)(v25 + 40);
      }
      while ( v25 );
      v23 = (__int64)v8 + 760;
    }
    RIMUnlockExclusive(v23);
    for ( j = *((_QWORD *)v8 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      if ( *((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264) )
      {
        v34 = *(_DWORD *)(j + 168);
        if ( (v34 & 0x2000) != 0 && (v34 & 0x80000) != 0 )
        {
          if ( *(_QWORD *)(j + 328) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1875LL);
          if ( *((_DWORD *)v8 + 264)
            || (v35 = ObOpenObjectByPointer(
                        *(PVOID *)(j + 32),
                        0,
                        0LL,
                        3u,
                        ExRawInputManagerObjectType,
                        0,
                        (PHANDLE)(j + 328)),
                v37 = v35,
                v35 >= 0) )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v43 = 0;
            }
            v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v45 = W32GetUserSessionState(WPP_GLOBAL_Control, v32);
              LOBYTE(v46) = v44;
              LOBYTE(v47) = v43;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v47,
                v46,
                *(_QWORD *)(v45 + 19336),
                4,
                1,
                62,
                (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
                (char)v8,
                j);
            }
            rimDoRimDevChange((__int64)v8, j, 2u);
            v48 = *(_DWORD *)(j + 168) & 0xFFF7FFFF;
            *(_DWORD *)(j + 168) = v48;
            if ( *((_DWORD *)v8 + 264) )
              v48 |= 0x1000000u;
            v49 = v48 | 0x4000000;
            *(_DWORD *)(j + 168) = v49;
            if ( (v49 & 0x400) != 0 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1914LL);
          }
          else
          {
            v32 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (v36 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v36 & 1) == 0)
              || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v38 = 0;
            }
            v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v40 = W32GetUserSessionState(v36, WPP_GLOBAL_Control);
              LOBYTE(v41) = v39;
              LOBYTE(v42) = v38;
              WPP_RECORDER_AND_TRACE_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v42,
                v41,
                *(_QWORD *)(v40 + 19336),
                3,
                1,
                63,
                (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
                v37);
            }
          }
        }
      }
    }
    for ( k = *((_QWORD *)v8 + 53); k; k = *(_QWORD *)(k + 40) )
    {
      if ( *((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264) )
      {
        v51 = *(_DWORD *)(k + 168);
        if ( (v51 & 0x2000) != 0 && (v51 & 0x4000000) != 0 )
        {
          *(_DWORD *)(k + 168) = v51 & 0xFBFFFFFF;
          RIMLockExclusive((__int64)v8 + 760);
          if ( (*(_DWORD *)(k + 168) & 0x400) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1939LL);
          v53 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v54 = 0;
          }
          v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v56 = W32GetUserSessionState(WPP_GLOBAL_Control, v52);
            LOBYTE(v57) = v55;
            LOBYTE(v58) = v54;
            WPP_RECORDER_AND_TRACE_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v58,
              v57,
              *(_QWORD *)(v56 + 19336),
              4,
              1,
              64,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
              (char)v8,
              k);
          }
          if ( (*(_DWORD *)(k + 184) & 0x80u) == 0 )
          {
            if ( *((_BYTE *)v8 + 776) && *(_DWORD *)(k + 48) <= 1u )
            {
              if ( (*(_DWORD *)(k + 168) & 0x2000) != 0 )
                RIMTransferInjectionDeviceDataFifoToDataBuffer(v53, k);
              *((_BYTE *)v8 + 776) = 0;
              v59 = k + 480;
              if ( *(_DWORD *)(k + 48) != 1 )
                v59 = k + 452;
              rimStackAttachAndProcessInput((_DWORD)v8, k, v59, k + 240, 0);
              rimSignalReadComplete(
                (struct RawInputManagerObject *)v8,
                (LARGE_INTEGER *)k,
                (struct _IO_STATUS_BLOCK *)(k + 240));
            }
          }
          else
          {
            rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v8);
          }
          RIMUnlockExclusive((__int64)v8 + 760);
        }
      }
    }
    for ( m = *((_QWORD *)v8 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( (*((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264)) && (*(_DWORD *)(m + 168) & 0x200000) != 0 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v61 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v61 = 0;
        }
        v62 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v61 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v63 = W32GetUserSessionState(WPP_GLOBAL_Control, v32);
          LOBYTE(v64) = v62;
          LOBYTE(v65) = v61;
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v65,
            v64,
            *(_QWORD *)(v63 + 19336),
            4,
            1,
            65,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
            (char)v8,
            m);
        }
        rimDoRimDevChange((__int64)v8, m, 5u);
        *(_DWORD *)(m + 168) &= ~0x200000u;
      }
    }
LABEL_116:
    for ( n = *((_QWORD *)v8 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      if ( *((_QWORD *)v8 + 104) || *((_DWORD *)v8 + 264) )
      {
        v67 = *(_DWORD *)(n + 168);
        if ( (v67 & 0x2000) != 0 && (v67 & 0x100000) != 0 )
        {
          if ( *(_QWORD *)(n + 328) || *((_DWORD *)v8 + 264) )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v73 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v73 = 0;
            }
            v74 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v73 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v75 = W32GetUserSessionState(WPP_GLOBAL_Control, v32);
              LOBYTE(v76) = v74;
              LOBYTE(v77) = v73;
              WPP_RECORDER_AND_TRACE_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v77,
                v76,
                *(_QWORD *)(v75 + 19336),
                4,
                1,
                66,
                (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
                (char)v8,
                n);
            }
            rimDoRimDevChange((__int64)v8, n, 3u);
            v78 = *(_DWORD *)(n + 168) & 0xFFEFFFFF;
            *(_DWORD *)(n + 168) = v78;
            if ( *((_DWORD *)v8 + 264) )
            {
              *(_DWORD *)(n + 168) = v78 | 0x2000000;
              if ( *(_QWORD *)(n + 328) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2025LL);
            }
            else
            {
              NtClose(*(HANDLE *)(n + 328));
            }
            v79 = *(_QWORD *)(n + 32);
            *(_QWORD *)(n + 328) = 0LL;
            RIMFreeDev(
              (struct RawInputManagerObject *)v8,
              (struct RIMDEV *)((v79 + 72) & ((unsigned __int128)-(__int128)v79 >> 64)));
            goto LABEL_116;
          }
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v68 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
          {
            v68 = 0;
          }
          v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v68 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v70 = W32GetUserSessionState(WPP_GLOBAL_Control, v32);
            LOBYTE(v71) = v69;
            LOBYTE(v72) = v68;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v72,
              v71,
              *(_QWORD *)(v70 + 19336),
              3,
              1,
              67,
              (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids);
          }
        }
      }
    }
    v80 = *((_QWORD *)v8 + 53);
    v7 = v115;
    if ( v80 )
    {
      do
      {
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
          WPP_RECORDER_AND_TRACE_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v85,
            v84,
            *(_QWORD *)(v83 + 19336),
            4,
            1,
            68,
            (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
            (char)v8,
            v80);
        }
        if ( (*(_DWORD *)(v80 + 168) & 0x10) != 0 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v86 = 0;
          }
          v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v86 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v88 = RimDeviceTypeToRimInputType(v80, *(unsigned int *)(v80 + 48));
            v89 = *(_QWORD *)(v80 + 200);
            v90 = v88;
            v93 = W32GetUserSessionState(v92, v91);
            LOBYTE(v94) = v87;
            LOBYTE(v95) = v86;
            WPP_RECORDER_AND_TRACE_SF_qqSd(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v95,
              v94,
              *(_QWORD *)(v93 + 19336),
              ObjectType,
              AccessMode,
              Handle,
              v113,
              (char)v8,
              v80,
              v89,
              v90);
          }
          v96 = *(_DWORD *)(v80 + 168);
          if ( (v96 & 0x20) != 0 && (v96 & 0x40) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2065LL);
          if ( (*(_DWORD *)(v80 + 168) & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2066LL);
          v97 = *(struct _KTHREAD **)(v80 + 296);
          if ( !v97 || (v8 = Object, v97 == KeGetCurrentThread()) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2069LL);
          RIMDoOnPnpNotification((struct RawInputManagerObject *)v8);
          *(_DWORD *)(v80 + 168) &= ~0x10u;
          KeSetEvent(*(PRKEVENT *)(v80 + 336), 1, 0);
        }
        v80 = *(_QWORD *)(v80 + 40);
      }
      while ( v80 );
      v7 = v115;
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v8);
    RIMUnlockExclusive((__int64)v8 + 104);
    ObfDereferenceObject(v8);
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v104 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v104 = 0;
  }
  v105 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v104 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v106 = W32GetUserSessionState(WPP_GLOBAL_Control, v98);
    LOBYTE(v107) = v105;
    LOBYTE(v108) = v104;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v108,
      v107,
      *(_QWORD *)(v106 + 19336),
      4,
      1,
      71,
      (__int64)&WPP_10bcc0214e9c3055c3963919738232ce_Traceguids,
      v7);
  }
  return v7;
}
