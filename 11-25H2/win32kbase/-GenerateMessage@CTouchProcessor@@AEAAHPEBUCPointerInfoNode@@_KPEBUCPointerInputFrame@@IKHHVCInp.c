/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140187CD8
 * Callers:
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401876C8 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140187960 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x14020112C (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1402014A0 (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x140201A00 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140201C90 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x140201F50 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x140037980 (--1CInputDest@@QEAA@XZ.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x14009B120 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1400B7D64 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1400B8074 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     IsPointerInputMessage @ 0x1400F2584 (IsPointerInputMessage.c)
 *     EtwTraceEndPointerMessageGeneration @ 0x140109020 (EtwTraceEndPointerMessageGeneration.c)
 *     EtwTraceBeginPointerMessageGeneration @ 0x140109050 (EtwTraceBeginPointerMessageGeneration.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x14010A0D4 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x1401104C8 (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ApiSetEditionHandleHungWindow @ 0x140195700 (ApiSetEditionHandleHungWindow.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x140197268 (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1401F6E78 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x1401F6F4C (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1401F7170 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x140206CB4 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  __int64 v9; // rsi
  CTouchProcessor *v10; // rcx
  unsigned int v11; // ebx
  char v12; // di
  unsigned __int16 v13; // r15
  unsigned int v14; // r14d
  __int16 v15; // r13
  __int64 v16; // rdx
  void *v17; // r8
  char v18; // si
  bool v19; // r14
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  _QWORD *v23; // rcx
  HWND WindowHandle; // rax
  CInputDest *v25; // rcx
  __int64 v26; // r9
  HWND v27; // r10
  char v28; // si
  bool v29; // r14
  __int64 UserSessionState; // rax
  int v31; // r8d
  int v32; // edx
  HWND v33; // rax
  __int64 v34; // r8
  CTouchProcessor *v35; // rcx
  __int64 v36; // r8
  int v37; // r15d
  int v38; // ecx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v40; // r9
  int v41; // edx
  void *v42; // r8
  int v44; // [rsp+20h] [rbp-88h]
  __int16 v45; // [rsp+30h] [rbp-78h]
  unsigned __int16 v46; // [rsp+50h] [rbp-58h]
  unsigned __int64 v47; // [rsp+58h] [rbp-50h]

  v9 = a2;
  v47 = a3;
  v10 = (CTouchProcessor *)WPP_GLOBAL_Control;
  v11 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      277,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  v13 = *(_WORD *)(v9 + 160);
  v14 = a5;
  v15 = *(_WORD *)(v9 + 172);
  v46 = v13;
  if ( a5 )
  {
    if ( !IsPointerInputMessage(a5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10456LL);
LABEL_14:
    if ( *(_DWORD *)a9 )
      goto LABEL_63;
    if ( !*(_DWORD *)(v9 + 444) )
      goto LABEL_16;
    WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v9 + 352));
    if ( WindowHandle == v27 )
    {
      if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v25) )
LABEL_16:
        CInputDest::operator=(a9, v9 + 352);
    }
    else
    {
      if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 )
        v26 = 1LL;
      if ( !(unsigned __int8)CInputDest::SetupFromInputDestAndWindow(a9, v9 + 352, v27, v26, v44) )
        CInputDest::~CInputDest(a9);
    }
    if ( !*(_DWORD *)a9 )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v28 = 0;
      }
      v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
        LOBYTE(v31) = v29;
        LOBYTE(v32) = v28;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v32,
          v31,
          *(_QWORD *)(UserSessionState + 69144),
          4,
          4,
          280,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        v45 = 281;
        goto LABEL_74;
      }
      goto LABEL_91;
    }
LABEL_63:
    if ( *((_DWORD *)a9 + 23) )
    {
      v33 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v15, v47, v14, v33);
      EtwTraceBeginPointerMessageGeneration(v13, v15, v34);
      v37 = CTouchProcessor::PostPointerMessage(v35, a9, a4, (const struct CPointerInfoNode *)v9, v47, v14, a6, a7, a8);
      if ( v37 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v14, v47);
        v38 = *(_DWORD *)(v9 + 180);
        if ( (v38 & 0x2000) != 0 && (v38 & 0x10000) != 0 )
        {
          PoLatencySensitivityHint(2LL);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            LastWokenThread::Set((__int64)ThreadInfo, 1u, 0, v40);
            ApiSetEditionHandleHungWindow(a9);
          }
        }
      }
      EtwTraceEndPointerMessageGeneration(v46, v15, v36);
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v41) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v41) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v41 || v12 )
      {
        v42 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        LOBYTE(v42) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          (_DWORD)v42,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          283,
          (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
      }
      v11 = v37;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10518LL);
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        v17 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
        v45 = 282;
        goto LABEL_74;
      }
    }
    goto LABEL_91;
  }
  v14 = CTouchProcessor::PointerFlagsToMessage(v10, *(unsigned int *)(v9 + 180));
  if ( v14 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v18 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v18 = 0;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control, v16);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v22,
      v21,
      *(_QWORD *)(v20 + 69144),
      4,
      4,
      278,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)v16 || v12 )
  {
    v17 = &WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids;
    v45 = 279;
LABEL_74:
    LOBYTE(v17) = v12;
    WPP_RECORDER_AND_TRACE_SF_(
      v23[3],
      v16,
      (_DWORD)v17,
      v23[8],
      5,
      4,
      v45,
      (__int64)&WPP_5b7ffc6749e23cc7ef8b8ac6df240892_Traceguids);
  }
LABEL_91:
  CInputDest::~CInputDest(a9);
  return v11;
}
