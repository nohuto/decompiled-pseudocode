/*
 * XREFs of ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x14018826C
 * Callers:
 *     NtUserGetPointerInputTransform @ 0x140170EA0 (NtUserGetPointerInputTransform.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ValidateHwndEx @ 0x1400BAF40 (ValidateHwndEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400D3670 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1400D901C (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     ValidateHbwnd @ 0x140121970 (ValidateHbwnd.c)
 *     ApiSetGetInputTransformList @ 0x1401970FC (ApiSetGetInputTransformList.c)
 *     ApiSetHasInputTransform @ 0x1401971F8 (ApiSetHasInputTransform.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x140202B50 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
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
  __int64 v10; // rdx
  unsigned __int64 ThreadPointerData; // r15
  bool v12; // di
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  HWND v16; // rsi
  __int64 v17; // rdx
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rdx
  bool v23; // di
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  unsigned __int64 *v29; // rdi
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // r9d
  unsigned int PointerDataQPCTimeList; // r14d
  bool v34; // si
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rdx
  bool v40; // di
  __int64 v41; // rax
  int v42; // r8d
  int v43; // edx
  bool v44; // si
  int v45; // edx
  int v46; // r8d
  __int64 v47; // r9
  __int64 v48; // rdx
  __int16 v49; // [rsp+30h] [rbp-68h]
  _QWORD Buffer[9]; // [rsp+50h] [rbp-48h] BYREF
  HWND v51; // [rsp+A8h] [rbp+10h] BYREF
  int v52; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a4;
  Buffer[0] = 0LL;
  v51 = 0LL;
  v9 = 1;
  if ( a3 == 1 )
  {
    v52 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 14646LL);
  }
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct _LIST_ENTRY *)((char *)a2 + 1208),
                        a3,
                        0LL,
                        0LL,
                        &v51);
  if ( !ThreadPointerData )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v10);
      LOBYTE(v14) = v12;
      LOBYTE(v15) = v9;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v15,
        v14,
        *(_QWORD *)(UserSessionState + 69144),
        2,
        4,
        319,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids,
        a3);
    }
LABEL_50:
    v27 = 87;
LABEL_29:
    UserSetLastError(v27);
    return 0LL;
  }
  v16 = v51;
  if ( !ValidateHbwnd((__int64)v51, v10) && !ValidateHwndEx((__int64)v16, 1LL, 0) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control, v17);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69144),
        2,
        4,
        320,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    goto LABEL_50;
  }
  if ( !(unsigned int)ApiSetHasInputTransform(v16) )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = W32GetUserSessionState(WPP_GLOBAL_Control, v22);
      LOBYTE(v25) = v23;
      LOBYTE(v26) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v26,
        v25,
        *(_QWORD *)(v24 + 69144),
        2,
        4,
        321,
        (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    }
    v27 = 232;
    goto LABEL_29;
  }
  if ( (_DWORD)v6 == 1 )
  {
    v29 = Buffer;
  }
  else
  {
    v29 = (unsigned __int64 *)Win32AllocPoolZInitImpl(256LL, 8 * v6, 0x78697355u);
    if ( !v29 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v40 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v41 = W32GetUserSessionState(WPP_GLOBAL_Control, v39);
        LOBYTE(v42) = v40;
        LOBYTE(v43) = v9;
        WPP_RECORDER_AND_TRACE_SF_L(*((_QWORD *)WPP_GLOBAL_Control + 3), v43, v42, *(_QWORD *)(v41 + 69144), 2);
      }
      goto LABEL_50;
    }
  }
  v52 = 1;
  PointerDataQPCTimeList = CTouchProcessor::GetPointerDataQPCTimeList(this, ThreadPointerData, v6, v29, &v52);
  if ( !PointerDataQPCTimeList )
  {
    if ( !v52 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (v31 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v31 & 8) == 0)
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v9 = 0;
      }
      v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v35 = W32GetUserSessionState(v31, WPP_GLOBAL_Control);
        LOBYTE(v36) = v34;
        LOBYTE(v37) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v37,
          v36,
          *(_QWORD *)(v35 + 69144),
          2,
          4,
          323,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      v38 = 232;
      goto LABEL_68;
    }
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_67:
      v38 = 87;
LABEL_68:
      UserSetLastError(v38);
      goto LABEL_69;
    }
    v47 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v30) + 69144);
    v49 = 324;
LABEL_66:
    LOBYTE(v46) = v44;
    LOBYTE(v45) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v45,
      v46,
      v47,
      2,
      4,
      v49,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
    goto LABEL_67;
  }
  PointerDataQPCTimeList = ApiSetGetInputTransformList((_DWORD)v16, v6, (_DWORD)v29, v32, (__int64)a5);
  if ( !PointerDataQPCTimeList )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v9 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_67;
    v47 = *(_QWORD *)(W32GetUserSessionState(WPP_GLOBAL_Control, v48) + 69144);
    v49 = 325;
    goto LABEL_66;
  }
LABEL_69:
  if ( v29 != Buffer )
    GreDeleteFastMutex((char *)v29);
  return PointerDataQPCTimeList;
}
