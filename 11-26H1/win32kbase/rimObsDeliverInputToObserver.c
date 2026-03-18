/*
 * XREFs of rimObsDeliverInputToObserver @ 0x14020F380
 * Callers:
 *     rimObsDeliverToExclusiveObservers @ 0x140099E6C (rimObsDeliverToExclusiveObservers.c)
 *     rimObsDeliverToNonExclusiveObservers @ 0x1400A11F4 (rimObsDeliverToNonExclusiveObservers.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14006F7DC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x140070478 (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x140099638 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimObsCheckForExistingDeviceHandle @ 0x1401BC69C (rimObsCheckForExistingDeviceHandle.c)
 *     ?DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverObject@@@Z @ 0x1401C5478 (-DeliverInputToObserver@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURawInputManagerInputObserverOb.c)
 *     rimObsCopyMessage @ 0x14020F238 (rimObsCopyMessage.c)
 *     rimObsPushInputMessage @ 0x14020FDC0 (rimObsPushInputMessage.c)
 */

__int64 __fastcall rimObsDeliverInputToObserver(
        struct RIMDEV *a1,
        struct RawInputManagerInputObserverObject *a2,
        int a3)
{
  char v5; // r12
  char v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  struct RawInputManagerInputObserverObject **v11; // rdx
  int v12; // r8d
  char v13; // bl
  bool v14; // di
  __int64 v15; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // edi
  __int64 v19; // rax
  int v20; // edx
  struct RawInputManagerInputObserverObject *v21; // r14
  char v22; // bl
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // edx
  int v28; // r8d
  char v29; // bl
  bool v30; // si
  __int64 v31; // rax
  int v32; // r8d
  int v33; // edx
  bool v35; // r13
  char v36; // bl
  __int64 v37; // rax
  int v38; // r8d
  int v39; // edx
  char v40; // bl
  bool v41; // r14
  __int64 v42; // rax
  int v43; // r8d
  int v44; // edx
  bool v45; // cf
  char v46; // bl
  bool v47; // si
  __int64 v48; // rax
  int v49; // r8d
  int v50; // edx
  int v51; // edx
  __int64 v52; // r12
  char *v53; // rax
  char v54; // bl
  bool v55; // di
  __int64 v56; // rax
  int v57; // r8d
  int v58; // edx
  void **v59; // r14
  int v60; // edx
  int v61; // r8d
  char v62; // di
  bool v63; // si
  int v64; // ebx
  __int64 v65; // rax
  int v66; // r8d
  int v67; // edx
  unsigned int v68; // r9d
  int v69; // edx
  char v70; // bl
  bool v71; // si
  __int64 v72; // rax
  int v73; // r8d
  int v74; // edx
  char v75; // bl
  bool v76; // si
  __int64 v77; // rax
  int v78; // r8d
  int v79; // edx
  void *v80; // rcx
  char v81; // bl
  bool v82; // di
  __int64 v83; // rax
  int v84; // r8d
  int v85; // edx
  char v86; // bl
  bool v87; // si
  __int64 v88; // rax
  int v89; // r8d
  int v90; // edx
  __int64 v91; // [rsp+48h] [rbp-41h]
  __int64 Src; // [rsp+50h] [rbp-39h] BYREF
  HANDLE v93; // [rsp+58h] [rbp-31h]
  __int64 v94; // [rsp+60h] [rbp-29h]
  __int64 v95; // [rsp+68h] [rbp-21h]
  __int64 v96; // [rsp+70h] [rbp-19h]
  char *v97; // [rsp+78h] [rbp-11h]
  __int64 v98; // [rsp+80h] [rbp-9h] BYREF
  int v99; // [rsp+88h] [rbp-1h]
  int v100; // [rsp+8Ch] [rbp+3h]
  __int128 v101; // [rsp+90h] [rbp+7h]
  __int128 v102; // [rsp+A0h] [rbp+17h]
  HANDLE Handle; // [rsp+F8h] [rbp+6Fh] BYREF

  v5 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v6 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v6 = 0;
  }
  v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)a2, a3);
    LOBYTE(v9) = v7;
    LOBYTE(v10) = v6;
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v10,
      v9,
      *(_QWORD *)(UserSessionState + 69136),
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
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v13 = 0;
    }
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v15 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v11, v12);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(v15 + 69136),
        4,
        1,
        21,
        (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
    }
    v18 = ObOpenObjectByPointer(*((PVOID *)a1 + 4), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v18 < 0 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v40 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v40 = 0;
      }
      v41 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v42 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v11, v12);
        LOBYTE(v43) = v41;
        LOBYTE(v44) = v40;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v44,
          v43,
          *(_QWORD *)(v42 + 69136),
          3,
          1,
          24,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
    }
    else
    {
      v19 = Win32AllocPoolZInitImpl(256LL, 0x18uLL, 0x65684F52u);
      v21 = (struct RawInputManagerInputObserverObject *)v19;
      if ( !v19 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v22 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v22 = 0;
        }
        v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v24 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v12);
          LOBYTE(v25) = v23;
          LOBYTE(v26) = v22;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v26,
            v25,
            *(_QWORD *)(v24 + 69136),
            2,
            1,
            22,
            (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
        }
        v18 = -1073741670;
        ObCloseHandle(Handle, *((_BYTE *)a2 + 72));
        goto LABEL_26;
      }
      *(_QWORD *)(v19 + 16) = Handle;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v5 = 0;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = (char)Handle;
        v37 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v12);
        LOBYTE(v38) = v35;
        LOBYTE(v39) = v5;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v39,
          v38,
          *(_QWORD *)(v37 + 69136),
          4,
          1,
          23,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v36);
      }
      v11 = (struct RawInputManagerInputObserverObject **)*((_QWORD *)a2 + 17);
      if ( *v11 != (struct RawInputManagerInputObserverObject *)((char *)a2 + 128) )
        __fastfail(3u);
      *(_QWORD *)v21 = (char *)a2 + 128;
      *((_QWORD *)v21 + 1) = v11;
      *v11 = v21;
      *((_QWORD *)a2 + 17) = v21;
    }
    if ( v18 < 0 )
      goto LABEL_26;
  }
  v45 = *((_DWORD *)a2 + 26) < 0x30u;
  HIDWORD(Src) = 0;
  HIDWORD(v94) = 0;
  HIDWORD(v96) = 0;
  if ( v45 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 515);
  v18 = *((_DWORD *)a1 + 60);
  if ( v18 >= 0 )
  {
    if ( *((_QWORD *)a1 + 31) > 0xFFFFFFCFuLL )
    {
      v18 = -1073741675;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v46 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
      {
        v46 = 0;
      }
      v47 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v48 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v11, v12);
        LOBYTE(v49) = v47;
        LOBYTE(v50) = v46;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v50,
          v49,
          *(_QWORD *)(v48 + 69136),
          3,
          1,
          25,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      goto LABEL_26;
    }
    v51 = *((_DWORD *)a1 + 12);
    v52 = *((_QWORD *)a1 + 31) + 48LL;
    v95 = *((_QWORD *)a1 + 31);
    v93 = Handle;
    LODWORD(Src) = 0;
    LODWORD(v94) = v18;
    LODWORD(v96) = v51;
    v97 = 0LL;
    if ( v51 )
    {
      if ( --v51 )
      {
        if ( v51 == 1 )
          v97 = *(char **)(*((_QWORD *)a1 + 55) + 24LL);
        else
          MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 563);
LABEL_71:
        if ( *((_DWORD *)a2 + 22) == 1 )
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v54 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v54 = 0;
          }
          v55 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v56 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v51, v12);
            LOBYTE(v57) = v55;
            LOBYTE(v58) = v54;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v58,
              v57,
              *(_QWORD *)(v56 + 69136),
              4,
              1,
              27,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v59 = (void **)*((_QWORD *)a2 + 12);
          v18 = rimObsCopyMessage(&Src, *((_DWORD *)a2 + 18), v59, *((_DWORD *)a2 + 26));
          if ( v18 == -1073741789 )
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
            {
              v62 = 0;
            }
            v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v64 = *((_DWORD *)a2 + 26);
              v65 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v60, v61);
              LODWORD(v91) = v52;
              LOBYTE(v66) = v63;
              LOBYTE(v67) = v62;
              WPP_RECORDER_AND_TRACE_SF_Dd(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v67,
                v66,
                *(_QWORD *)(v65 + 69136),
                3,
                1,
                28,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
                v64,
                v91,
                Src,
                v93,
                v94,
                v95,
                v96,
                v97);
            }
            v68 = *((_DWORD *)a2 + 26);
            v69 = *((_DWORD *)a2 + 18);
            v98 = 1LL;
            v99 = 0;
            v100 = v52;
            v101 = 0LL;
            v102 = 0LL;
            rimObsCopyMessage(&v98, v69, v59, v68);
            v18 = rimObsPushInputMessage(a2, &Src);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
              || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
              || (v70 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
            {
              v70 = 0;
            }
            v71 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v70 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v72 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v60, v61);
              LOBYTE(v73) = v71;
              LOBYTE(v74) = v70;
              WPP_RECORDER_AND_TRACE_SF_(
                *((_QWORD *)WPP_GLOBAL_Control + 3),
                v74,
                v73,
                *(_QWORD *)(v72 + 69136),
                4,
                1,
                29,
                (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
            }
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
            v77 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v60, v61);
            LOBYTE(v78) = v76;
            LOBYTE(v79) = v75;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v79,
              v78,
              *(_QWORD *)(v77 + 69136),
              4,
              1,
              30,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v80 = (void *)*((_QWORD *)a2 + 10);
          *((_DWORD *)a2 + 22) = 0;
          ZwSetEvent(v80, 0LL);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
            || (v81 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
          {
            v81 = 0;
          }
          v82 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v81 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v83 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v51, v12);
            LOBYTE(v84) = v82;
            LOBYTE(v85) = v81;
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v85,
              v84,
              *(_QWORD *)(v83 + 69136),
              4,
              1,
              31,
              (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
          }
          v18 = rimObsPushInputMessage(a2, &Src);
          if ( v18 == -1073741756 )
            v18 = 0;
        }
        goto LABEL_26;
      }
      v53 = (char *)a1 + 480;
    }
    else
    {
      v53 = (char *)a1 + 452;
    }
    v97 = v53;
    goto LABEL_71;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v86 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
  {
    v86 = 0;
  }
  v87 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v86 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v88 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, (_DWORD)v11, v12);
    LOBYTE(v89) = v87;
    LOBYTE(v90) = v86;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v90,
      v89,
      *(_QWORD *)(v88 + 69136),
      3,
      1,
      26,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v18);
  }
LABEL_26:
  RIMUnlockExclusive((__int64)a2 + 176);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
    || (v29 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v29 = 0;
  }
  v30 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v31 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v27, v28);
    LOBYTE(v32) = v30;
    LOBYTE(v33) = v29;
    WPP_RECORDER_AND_TRACE_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v33,
      v32,
      *(_QWORD *)(v31 + 69136),
      4,
      1,
      32,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v18);
  }
  return (unsigned int)v18;
}
