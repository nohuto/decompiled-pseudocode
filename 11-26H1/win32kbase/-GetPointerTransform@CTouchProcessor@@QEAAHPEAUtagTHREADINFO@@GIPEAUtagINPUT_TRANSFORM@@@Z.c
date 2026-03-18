/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140052DE8
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x140053640 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ApiSetEditionGetThreadPointerHookData @ 0x14004F7EC (ApiSetEditionGetThreadPointerHookData.c)
 *     ?FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x14004F970 (-FindThreadPointerData@CTouchProcessor@@QEAAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x140051640 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ValidateHbwnd @ 0x1400533C0 (ValidateHbwnd.c)
 *     ApiSetHasInputTransform @ 0x140053550 (ApiSetHasInputTransform.c)
 *     ApiSetGetInputTransformList @ 0x1400535C0 (ApiSetGetInputTransformList.c)
 *     ValidateHwndEx @ 0x14006E370 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400F7C80 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x140122850 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerTransform(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int16 a3,
        unsigned int a4,
        struct tagINPUT_TRANSFORM *a5)
{
  __int64 v6; // rbp
  char v9; // bl
  int v10; // edx
  __int64 ThreadPointerHookData; // rcx
  int v12; // r8d
  __int64 v13; // r15
  __int64 v14; // rsi
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  unsigned __int64 *v19; // rdi
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  unsigned int PointerDataQPCTimeList; // r14d
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  bool v29; // di
  __int64 v30; // rcx
  int v31; // edx
  int v32; // r8d
  bool v33; // di
  __int64 v34; // rax
  int v35; // r8d
  int v36; // edx
  bool v37; // di
  __int64 UserSessionState; // rax
  int v39; // r8d
  int v40; // edx
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // di
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  bool v48; // si
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int64 v52; // rcx
  bool v53; // si
  int v54; // edx
  int v55; // r8d
  __int64 v56; // r9
  __int16 v57; // [rsp+30h] [rbp-58h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-38h] BYREF
  int v59; // [rsp+A0h] [rbp+18h] BYREF

  v6 = a4;
  Buffer[0] = 0LL;
  v9 = 1;
  if ( a3 == 1 )
  {
    v59 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14570LL);
  }
  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData((__int64)a2 + 1208, a3);
  if ( !ThreadPointerHookData
    && (ThreadPointerHookData = (__int64)CTouchProcessor::FindThreadPointerData(
                                           this,
                                           (struct _LIST_ENTRY *)((char *)a2 + 1208),
                                           a3)) == 0
    || (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0
    || (v13 = *(_QWORD *)(ThreadPointerHookData + 24), v14 = *(_QWORD *)(ThreadPointerHookData + 40), !v13) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v37 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v10, v12);
      LOBYTE(v39) = v37;
      LOBYTE(v40) = v9;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v39,
        *(_QWORD *)(UserSessionState + 69136),
        2,
        4,
        319,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids,
        a3);
    }
    goto LABEL_21;
  }
  if ( !ValidateHbwnd(*(_QWORD *)(ThreadPointerHookData + 40)) && !ValidateHwndEx(v14, 1LL) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v41 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v15, v16);
      LOBYTE(v42) = v29;
      LOBYTE(v43) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v43,
        v42,
        *(_QWORD *)(v41 + 69136),
        2,
        4,
        320,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    goto LABEL_21;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v14) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v17, v18);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v46,
        *(_QWORD *)(v45 + 69136),
        2,
        4,
        321,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    }
    v30 = 232LL;
    goto LABEL_22;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v19 = Buffer;
    goto LABEL_12;
  }
  v19 = (unsigned __int64 *)Win32AllocPoolZInitImpl(256LL, 8 * v6, 0x78697355u);
  if ( !v19 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v34 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
      LOBYTE(v35) = v33;
      LOBYTE(v36) = v9;
      WPP_RECORDER_AND_TRACE_SF_L(*((_QWORD *)WPP_GLOBAL_Control + 3), v36, v35, *(_QWORD *)(v34 + 69136), 2);
    }
LABEL_21:
    v30 = 87LL;
LABEL_22:
    UserSetLastError(v30);
    return 0LL;
  }
LABEL_12:
  v59 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList((PERESOURCE *)this, v13, v6, v19, &v59);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v59 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (v21 = *((_DWORD *)WPP_GLOBAL_Control + 11), (v21 & 8) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v49 = W32GetUserSessionState(v21, (_DWORD)WPP_GLOBAL_Control, v22);
        LOBYTE(v50) = v48;
        LOBYTE(v51) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v51,
          v50,
          *(_QWORD *)(v49 + 69136),
          2,
          4,
          323,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v52 = 232LL;
      goto LABEL_57;
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_73:
      v52 = 87LL;
LABEL_57:
      UserSetLastError(v52);
      goto LABEL_14;
    }
    v56 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v20, v22) + 69136);
    v57 = 324;
LABEL_72:
    LOBYTE(v55) = v53;
    LOBYTE(v54) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v54,
      v55,
      v56,
      2,
      4,
      v57,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
    goto LABEL_73;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList(v14, v6, (_DWORD)v19, v23, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v53 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_73;
    v56 = *(_QWORD *)(W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v25, v26) + 69136);
    v57 = 325;
    goto LABEL_72;
  }
LABEL_14:
  if ( v19 != Buffer )
    GreDeleteFastMutex((char *)v19, v25, v26, v27);
  return PointerDataQPCTimeList;
}
