/*
 * XREFs of rimObsDeliverInputToObserver @ 0x1401F38FC
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x140034480 (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400BE5B8 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140036548 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006101C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x1400A015C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x14019DF44 (rimObsCheckForExistingDeviceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverObject@@@Z @ 0x1401A16D4 (-DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverOb.c)
 *     rimObsCopyMessage @ 0x1401F3768 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x1401F4338 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(struct RIMDEV *a1, struct RawInputManagerInputObserverObject *a2)
{
  char v4; // r12
  char v5; // bl
  bool v6; // di
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  struct RawInputManagerInputObserverObject **v10; // rdx
  char v11; // bl
  bool v12; // di
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  struct RawInputManagerInputObserverObject *v19; // r14
  char v20; // bl
  bool v21; // di
  __int64 v22; // rax
  int v23; // r8d
  int v24; // edx
  bool v25; // r13
  char v26; // bl
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  char v30; // bl
  bool v31; // r14
  __int64 v32; // rax
  int v33; // r8d
  int v34; // edx
  bool v35; // cf
  char v36; // bl
  bool v37; // r14
  __int64 v38; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // r12
  char *v43; // rax
  char v44; // bl
  bool v45; // di
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  void **v49; // r15
  __int64 v50; // rdx
  char v51; // di
  bool v52; // r14
  int v53; // ebx
  __int64 v54; // rax
  int v55; // r8d
  int v56; // edx
  unsigned int v57; // r9d
  int v58; // edx
  char v59; // bl
  bool v60; // r14
  __int64 v61; // rax
  int v62; // r8d
  int v63; // edx
  char v64; // bl
  bool v65; // r14
  __int64 v66; // rax
  int v67; // r8d
  int v68; // edx
  void *v69; // rcx
  char v70; // bl
  bool v71; // di
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  char v75; // bl
  bool v76; // r14
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  __int64 v80; // rdx
  char v81; // bl
  bool v82; // si
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  __int64 v87; // [rsp+48h] [rbp-41h]
  __int64 v88; // [rsp+50h] [rbp-39h] BYREF
  HANDLE v89; // [rsp+58h] [rbp-31h]
  __int64 v90; // [rsp+60h] [rbp-29h]
  __int64 v91; // [rsp+68h] [rbp-21h]
  __int64 v92; // [rsp+70h] [rbp-19h]
  char *v93; // [rsp+78h] [rbp-11h]
  __int64 v94; // [rsp+80h] [rbp-9h] BYREF
  int v95; // [rsp+88h] [rbp-1h]
  int v96; // [rsp+8Ch] [rbp+3h]
  __int128 v97; // [rsp+90h] [rbp+7h]
  __int128 v98; // [rsp+A0h] [rbp+17h]
  HANDLE Handle; // [rsp+F8h] [rbp+6Fh] BYREF

  v4 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v5 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v5 = 0;
  }
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v9,
      v8,
      *(_QWORD *)(UserSessionState + 69144),
      4,
      1,
      20,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      (char)a1,
      a2);
  }
  InputTraceLogging::RIM::DeliverInputToObserver(a1, a2);
  RIMLockExclusive((__int64)a2 + 176);
  Handle = rimObsCheckForExistingDeviceHandle((__int64)a2, *((PVOID *)a1 + 4));
  if ( Handle == (HANDLE)-1LL )
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
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(v13 + 69144),
        4,
        1,
        21,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v16 = ObOpenObjectByPointer(*((PVOID *)a1 + 4), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v16 < 0 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v30 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v30 = 0;
      }
      v31 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v32 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v33) = v31;
        LOBYTE(v34) = v30;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v34,
          v33,
          *(_QWORD *)(v32 + 69144),
          3,
          1,
          24,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
    else
    {
      v17 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x65684F52u);
      v19 = (struct RawInputManagerInputObserverObject *)v17;
      if ( !v17 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v20 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v20 = 0;
        }
        v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v22 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
          LOBYTE(v23) = v21;
          LOBYTE(v24) = v20;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v24,
            v23,
            *(_QWORD *)(v22 + 69144),
            2,
            1,
            22,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        v16 = -1073741670;
        ObCloseHandle(Handle, *((_BYTE *)a2 + 72));
        goto LABEL_112;
      }
      *(_QWORD *)(v17 + 16) = Handle;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v4 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = (char)Handle;
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control, v18);
        LOBYTE(v28) = v25;
        LOBYTE(v29) = v4;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69144),
          4,
          1,
          23,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v26);
      }
      v10 = (struct RawInputManagerInputObserverObject **)*((_QWORD *)a2 + 17);
      if ( *v10 != (struct RawInputManagerInputObserverObject *)((char *)a2 + 128) )
        __fastfail(3u);
      *(_QWORD *)v19 = (char *)a2 + 128;
      *((_QWORD *)v19 + 1) = v10;
      *v10 = v19;
      *((_QWORD *)a2 + 17) = v19;
    }
    if ( v16 < 0 )
      goto LABEL_112;
  }
  v35 = *((_DWORD *)a2 + 26) < 0x30u;
  HIDWORD(v88) = 0;
  HIDWORD(v90) = 0;
  HIDWORD(v92) = 0;
  if ( v35 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 515);
  v16 = *((_DWORD *)a1 + 60);
  if ( v16 >= 0 )
  {
    if ( *((_QWORD *)a1 + 31) > 0xFFFFFFCFuLL )
    {
      v16 = -1073741675;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v36 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v36 = 0;
      }
      v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v38 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
        LOBYTE(v39) = v37;
        LOBYTE(v40) = v36;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v40,
          v39,
          *(_QWORD *)(v38 + 69144),
          3,
          1,
          25,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      goto LABEL_112;
    }
    v41 = *((unsigned int *)a1 + 12);
    v42 = *((_QWORD *)a1 + 31) + 48LL;
    v91 = *((_QWORD *)a1 + 31);
    v89 = Handle;
    LODWORD(v88) = 0;
    LODWORD(v90) = v16;
    LODWORD(v92) = v41;
    v93 = 0LL;
    if ( (_DWORD)v41 )
    {
      v41 = (unsigned int)(v41 - 1);
      if ( (_DWORD)v41 )
      {
        if ( (_DWORD)v41 == 1 )
          v93 = *(char **)(*((_QWORD *)a1 + 55) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 563);
LABEL_63:
        if ( *((_DWORD *)a2 + 22) == 1 )
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v44 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v44 = 0;
          }
          v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
            LOBYTE(v47) = v45;
            LOBYTE(v48) = v44;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v48,
              v47,
              *(_QWORD *)(v46 + 69144),
              4,
              1,
              27,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v49 = (void **)*((_QWORD *)a2 + 12);
          v16 = rimObsCopyMessage((int *)&v88, *((_DWORD *)a2 + 18), v49, *((_DWORD *)a2 + 26));
          if ( v16 == -1073741789 )
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v51 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v51 = 0;
            }
            v52 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v53 = *((_DWORD *)a2 + 26);
              v54 = W32GetUserSessionState(WPP_GLOBAL_Control, v50);
              LODWORD(v87) = v42;
              LOBYTE(v55) = v52;
              LOBYTE(v56) = v51;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v56,
                v55,
                *(_QWORD *)(v54 + 69144),
                3,
                1,
                28,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v53,
                v87,
                v88,
                v89,
                v90,
                v91,
                v92,
                v93);
            }
            v57 = *((_DWORD *)a2 + 26);
            v58 = *((_DWORD *)a2 + 18);
            v94 = 1LL;
            v95 = 0;
            v96 = v42;
            v97 = 0LL;
            v98 = 0LL;
            rimObsCopyMessage((int *)&v94, v58, v49, v57);
            v16 = rimObsPushInputMessage(a2, &v88);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v59 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v59 = 0;
            }
            v60 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v59 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v61 = W32GetUserSessionState(WPP_GLOBAL_Control, v50);
              LOBYTE(v62) = v60;
              LOBYTE(v63) = v59;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v63,
                v62,
                *(_QWORD *)(v61 + 69144),
                4,
                1,
                29,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
          }
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v64 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v64 = 0;
          }
          v65 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v64 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v66 = W32GetUserSessionState(WPP_GLOBAL_Control, v50);
            LOBYTE(v67) = v65;
            LOBYTE(v68) = v64;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v68,
              v67,
              *(_QWORD *)(v66 + 69144),
              4,
              1,
              30,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v69 = (void *)*((_QWORD *)a2 + 10);
          *((_DWORD *)a2 + 22) = 0;
          ZwSetEvent(v69, 0LL);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v70 = 0;
          }
          v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v72 = W32GetUserSessionState(WPP_GLOBAL_Control, v41);
            LOBYTE(v73) = v71;
            LOBYTE(v74) = v70;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v74,
              v73,
              *(_QWORD *)(v72 + 69144),
              4,
              1,
              31,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v16 = rimObsPushInputMessage(a2, &v88);
          if ( v16 == -1073741756 )
            v16 = 0;
        }
        goto LABEL_112;
      }
      v43 = (char *)a1 + 480;
    }
    else
    {
      v43 = (char *)a1 + 452;
    }
    v93 = v43;
    goto LABEL_63;
  }
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v75 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v75 = 0;
  }
  v76 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v75 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v77 = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
    LOBYTE(v78) = v76;
    LOBYTE(v79) = v75;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v79,
      v78,
      *(_QWORD *)(v77 + 69144),
      3,
      1,
      26,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v16);
  }
LABEL_112:
  RIMUnlockExclusive((__int64)a2 + 176);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v81 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v81 = 0;
  }
  v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v81 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v83 = W32GetUserSessionState(WPP_GLOBAL_Control, v80);
    LOBYTE(v84) = v82;
    LOBYTE(v85) = v81;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v85,
      v84,
      *(_QWORD *)(v83 + 69144),
      4,
      1,
      32,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v16);
  }
  return (unsigned int)v16;
}
