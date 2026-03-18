/*
 * XREFs of ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x14006964C
 * Callers:
 *     ?GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z @ 0x1400662E4 (-GenerateRoutedReleasedMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KKHHVCInputDest@@@Z.c)
 *     ?GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z @ 0x140067994 (-GeneratePointerInputMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@KHHKKH@Z.c)
 *     ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1401A0A94 (-GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z.c)
 *     ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1401A0FDC (-GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z.c)
 *     ?GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A26D4 (-GenerateEnterMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1401A3748 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x1402153E0 (-GenerateRoutedToMessages@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x14004F22C (IsPointerInputMessage.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1400685B8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x14006A864 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x14006CD40 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?CanCallerAccessDestination@CInputDest@@QEBA_NXZ @ 0x14006D708 (-CanCallerAccessDestination@CInputDest@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14009B880 (--1CInputDest@@QEAA@XZ.c)
 *     ?PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z @ 0x1400CB6D4 (-PointerFlagsToMessage@CTouchProcessor@@AEAAII@Z.c)
 *     ?Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z @ 0x1400CFD00 (-Set@LastWokenThread@@YAXPEBUtagTHREADINFO@@W4LastWokenThreadPurpose@@_N@Z.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x14010136C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     McTemplateK0hh_EtwWriteTransfer @ 0x140148DA0 (McTemplateK0hh_EtwWriteTransfer.c)
 *     ?GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z @ 0x14014BD8C (-GenerateMessage@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@G_KIPEAUHWND__@@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x140173EB4 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ApiSetInkProcessorOnPointerMessagePosted @ 0x140199EB0 (ApiSetInkProcessorOnPointerMessagePosted.c)
 *     ApiSetEditionHandleHungWindow @ 0x14019D220 (ApiSetEditionHandleHungWindow.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GenerateMessage(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const struct CPointerInputFrame *a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        CInputDest *a9)
{
  __int64 v9; // rsi
  CTouchProcessor *v10; // rcx
  unsigned int v11; // ebx
  char v12; // di
  unsigned __int16 v13; // r14
  unsigned int v14; // ebp
  unsigned __int16 v15; // r13
  int v16; // edx
  int v17; // r8d
  HWND WindowHandle; // rax
  CInputDest *v19; // rcx
  __int64 v20; // r9
  HWND v21; // r10
  void *v22; // r8
  HWND v23; // rax
  CTouchProcessor *v24; // rcx
  __int64 v25; // r8
  int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // r14d
  CTouchProcessor *v31; // rcx
  struct tagTHREADINFO *ThreadInfo; // rax
  char v33; // si
  bool v34; // bp
  __int64 v35; // rax
  int v36; // r8d
  int v37; // edx
  char v38; // si
  bool v39; // bp
  __int64 UserSessionState; // rax
  int v41; // r8d
  int v42; // edx
  void *v43; // r8
  int v44; // [rsp+20h] [rbp-88h]
  int v45; // [rsp+20h] [rbp-88h]
  __int16 v46; // [rsp+30h] [rbp-78h]
  unsigned __int16 v47; // [rsp+50h] [rbp-58h]
  unsigned __int64 v48; // [rsp+58h] [rbp-50h]

  v9 = a2;
  v48 = a3;
  v10 = WPP_GLOBAL_Control;
  v11 = 0;
  v12 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
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
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  v13 = *(_WORD *)(v9 + 160);
  v14 = a5;
  v15 = *(_WORD *)(v9 + 172);
  v47 = v13;
  if ( a5 )
  {
    if ( !IsPointerInputMessage(a5) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10439LL);
  }
  else
  {
    v14 = CTouchProcessor::PointerFlagsToMessage(v10, *(_DWORD *)(v9 + 180));
    if ( !v14 )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v38 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v38 = 0;
      }
      v39 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, v17);
        LOBYTE(v41) = v39;
        LOBYTE(v42) = v38;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v42,
          v41,
          *(_QWORD *)(UserSessionState + 69136),
          4,
          4,
          278,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v16 || v12 )
      {
        v22 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
        v46 = 279;
        goto LABEL_43;
      }
      goto LABEL_34;
    }
  }
  if ( *(_DWORD *)a9 )
    goto LABEL_18;
  if ( !*(_DWORD *)(v9 + 444) )
    goto LABEL_16;
  WindowHandle = CInputDest::GetWindowHandle((CInputDest *)(v9 + 352));
  if ( WindowHandle == v21 )
  {
    if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 || CInputDest::CanCallerAccessDestination(v19) )
LABEL_16:
      CInputDest::operator=((__int64)a9, v9 + 352);
  }
  else
  {
    if ( a8 || (*(_DWORD *)v9 & 0x800) != 0 )
      v20 = 1LL;
    if ( !(unsigned __int8)CInputDest::SetupFromInputDestAndWindow(a9, v9 + 352, v21, v20) )
      CInputDest::~CInputDest(a9);
  }
  if ( *(_DWORD *)a9 )
  {
LABEL_18:
    if ( *((_DWORD *)a9 + 23) )
    {
      v23 = CInputDest::GetWindowHandle(a9);
      InputTraceLogging::Pointer::GenerateMessage(a4, v15, v48, v14, v23);
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      {
        LOWORD(v44) = v15;
        McTemplateK0hh_EtwWriteTransfer(v24, &BeginPointerMessageGeneration, v25, v13, v44);
      }
      v29 = CTouchProcessor::PostPointerMessage(v24, a9, a4, (const struct CPointerInfoNode *)v9, v48, v14, a6, a7, a8);
      if ( v29 )
      {
        ApiSetInkProcessorOnPointerMessagePosted(v14, v48);
        v26 = 73728;
        if ( (*(_DWORD *)(v9 + 180) & 0x12000) == 0x12000 )
        {
          PoLatencySensitivityHint(2LL);
          ThreadInfo = CInputDest::GetThreadInfo(a9);
          if ( ThreadInfo )
          {
            LastWokenThread::Set(ThreadInfo, 1LL, 0LL);
            ApiSetEditionHandleHungWindow(a9);
          }
        }
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000) != 0 )
      {
        LOWORD(v45) = v15;
        McTemplateK0hh_EtwWriteTransfer(v27, &EndPointerMessageGeneration, v28, v47, v45);
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v26) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v12 = 0;
      if ( (_BYTE)v26 || v12 )
      {
        v43 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
        LOBYTE(v43) = v12;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v26,
          (_DWORD)v43,
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5,
          4,
          283,
          (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      }
      v11 = v29;
      goto LABEL_34;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10501LL);
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v12 = 0;
    if ( (_BYTE)v16 || v12 )
    {
      v22 = &WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids;
      v46 = 282;
LABEL_43:
      LOBYTE(v22) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v31 + 3),
        v16,
        (_DWORD)v22,
        *((_QWORD *)v31 + 8),
        5,
        4,
        v46,
        (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
      goto LABEL_34;
    }
    goto LABEL_34;
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (v33 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v33 = 0;
  }
  v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v35 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v16, (_DWORD)v22);
    LOBYTE(v36) = v34;
    LOBYTE(v37) = v33;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v37,
      v36,
      *(_QWORD *)(v35 + 69136),
      4,
      4,
      280,
      (__int64)&WPP_7aaf1b8f4b8436b77a593dc891fe032a_Traceguids);
  }
  v31 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v12 = 0;
  if ( (_BYTE)v16 || v12 )
  {
    v46 = 281;
    goto LABEL_43;
  }
LABEL_34:
  CInputDest::~CInputDest(a9);
  return v11;
}
