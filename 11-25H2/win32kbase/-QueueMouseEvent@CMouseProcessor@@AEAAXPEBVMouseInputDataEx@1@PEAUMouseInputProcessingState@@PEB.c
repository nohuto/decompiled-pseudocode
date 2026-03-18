/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x140191E90
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14005ECCC (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x14005E4A4 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140060388 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z @ 0x1400F37D8 (-QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x140124B90 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     EtwTraceMouseInputCoalesced @ 0x140128ED0 (EtwTraceMouseInputCoalesced.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x14012C0D4 (IsEditionComputeInjectorUIPISupported.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14015BD98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?ComputeCoalescingStrategy@CMouseProcessor@@AEBA?AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@AEBUtagINPUT_MESSAGE_SOURCE@@W4RawMouseProcessingOptions@@PEBUMouseInputProcessingState@@@Z @ 0x14018F3DC (-ComputeCoalescingStrategy@CMouseProcessor@@AEBA-AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x14018F744 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x140190004 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x140195A04 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::QueueMouseEvent(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct MouseInputProcessingState *a3,
        const struct _SUBPIXELS *a4,
        const struct tagUIPI_INFO_INT *a5,
        const struct tagPOINT *a6)
{
  struct MouseInputProcessingState *v8; // r13
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int128 v12; // xmm6
  char v13; // r15
  bool v14; // al
  __int64 v15; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // xmm0_8
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  struct W32_PUSH_LOCK *v22; // rbx
  int v23; // r12d
  int v24; // eax
  _WORD *v25; // rsi
  __int64 v26; // rcx
  char v27; // r12
  bool v28; // r13
  __int64 v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  void *v36; // rcx
  char v37; // r12
  bool v38; // r13
  __int64 v39; // rax
  int v40; // r8d
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  _WORD *v46; // rsi
  void *v47; // rcx
  bool v48; // si
  __int64 v49; // rax
  int v50; // r8d
  int v51; // edx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  char v56; // si
  bool v57; // r12
  __int64 UserSessionState; // rax
  int v59; // r8d
  int v60; // edx
  __int64 v61; // rcx
  char v62; // r12
  bool v63; // r13
  __int64 v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rcx
  bool v70; // zf
  int v71; // eax
  bool v72; // [rsp+40h] [rbp-40h]
  bool v73; // [rsp+41h] [rbp-3Fh]
  int v74; // [rsp+44h] [rbp-3Ch]
  __int128 v75; // [rsp+50h] [rbp-30h] BYREF
  int v76; // [rsp+60h] [rbp-20h]
  char v77; // [rsp+C0h] [rbp+40h]

  v8 = a3;
  v72 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
  v9 = 0;
  v73 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 256);
  v77 = 0;
  v12 = 0LL;
  v75 = 0LL;
  v13 = 1;
  if ( v72 && (int)IsEditionComputeInjectorUIPISupported(v11, v10) >= 0 )
  {
    v14 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1);
    if ( a5 )
    {
      if ( v14 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3235LL);
      v12 = *(_OWORD *)a5;
      v77 = 1;
    }
    else if ( !v14 )
    {
      v77 = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      if ( CurrentProcessWin32Process )
      {
        v17 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      v18 = *(_QWORD *)(CurrentProcessWin32Process + 864);
      v19 = *(_DWORD *)(CurrentProcessWin32Process + 872);
      *(_QWORD *)&v75 = v18;
      DWORD2(v75) = v19;
      v20 = PsGetCurrentProcessWin32Process(v17);
      v21 = v20;
      if ( v20 )
        v21 = -(__int64)(*(_QWORD *)v20 != 0LL) & v20;
      HIDWORD(v75) = *(int *)(v21 + 12) < 0;
      v12 = v75;
    }
  }
  *(_QWORD *)&v75 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v75);
  v22 = (CMouseProcessor *)((char *)this + 3008);
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0);
  v74 = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions((__int64)a2);
  v23 = v74;
  v24 = CMouseProcessor::ComputeCoalescingStrategy((__int64)this, (__int64)a2, &v75, v74, (__int64)v8);
  switch ( v24 )
  {
    case 0:
      v25 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 1);
      if ( !v25 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || (v56 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v56 = 0;
        }
        v57 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v56 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v55);
          LOBYTE(v59) = v57;
          LOBYTE(v60) = v56;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v60,
            v59,
            *(_QWORD *)(UserSessionState + 69144),
            2,
            6,
            20,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        InputTraceLogging::Mouse::DropInput();
        W32ReleasePushLockExclusiveEx(v22, 0LL);
        v61 = 1LL;
        LOBYTE(v9) = *((_DWORD *)a2 + 22) != 0;
        goto LABEL_98;
      }
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v62 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v62 = 0;
      }
      v63 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v62 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v64 = W32GetUserSessionState(WPP_GLOBAL_Control, v55);
        LOBYTE(v65) = v63;
        LOBYTE(v66) = v62;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v66,
          v65,
          *(_QWORD *)(v64 + 69144),
          4,
          6,
          21,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      goto LABEL_72;
    case 1:
      v46 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 0);
      if ( (*((_DWORD *)v46 + 30) & 0x800) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3304LL);
      *((_DWORD *)v46 + 30) |= 0x10000u;
      v47 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v13 = 0;
      }
      v48 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v49 = W32GetUserSessionState(WPP_GLOBAL_Control, v45);
        LOBYTE(v50) = v48;
        LOBYTE(v51) = v13;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v51,
          v50,
          *(_QWORD *)(v49 + 69144),
          4,
          6,
          23,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      EtwTraceMouseInputCoalesced((__int64)v47);
      InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v52, v53, v54);
      W32ReleasePushLockExclusiveEx(v22, 0LL);
      return;
    case 2:
      v25 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 0);
      if ( (*((_DWORD *)v25 + 30) & 0x800) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3322LL);
      *((_DWORD *)v25 + 30) |= 0x10000u;
      v36 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v37 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v39 = W32GetUserSessionState(WPP_GLOBAL_Control, v35);
        LOBYTE(v40) = v38;
        LOBYTE(v41) = v37;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v41,
          v40,
          *(_QWORD *)(v39 + 69144),
          4,
          6,
          24,
          (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
      }
      EtwTraceMouseInputCoalesced((__int64)v36);
      InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v42, v43, v44);
LABEL_72:
      v8 = a3;
      v23 = v74;
LABEL_73:
      v25[12] = *(_WORD *)a2;
      v25[14] = *((_WORD *)a2 + 2);
      v25[15] = *((_WORD *)a2 + 3);
      *((_DWORD *)v25 + 8) = *((_DWORD *)a2 + 2);
      v25[18] = *((_WORD *)a2 + 1);
      *((_QWORD *)v25 + 14) = v75;
      *((_DWORD *)v25 + 43) = *((_DWORD *)a2 + 18);
      *(_QWORD *)(v25 + 82) = *((_QWORD *)a2 + 10);
      goto LABEL_74;
  }
  if ( v24 != 3 )
  {
    v25 = 0LL;
    goto LABEL_73;
  }
  v25 = CMouseProcessor::CMouseQueue::GetItemForWrite((CMouseProcessor *)((char *)this + 56), 0);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (v26 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v26 & 0x20) == 0)
    || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v27 = 0;
  }
  v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v29 = W32GetUserSessionState(v26, WPP_GLOBAL_Control);
    LOBYTE(v30) = v28;
    LOBYTE(v31) = v27;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v31,
      v30,
      *(_QWORD *)(v29 + 69144),
      4,
      6,
      22,
      (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
  }
  EtwTraceMouseInputCoalesced(v26);
  InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7), v32, v33, v34);
  v8 = a3;
  v23 = v74;
  if ( ((*((_BYTE *)v25 + 120) | (unsigned __int8)v74) & 0x10) == 0 )
  {
    if ( *((_WORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3351LL);
    if ( v25[14] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3352LL);
    if ( (*((_BYTE *)a2 + 2) & 1) == 0 && (v25[18] & 1) == 0 && ((*((_DWORD *)v25 + 30) | v74) & 0x2000) == 0 )
    {
      *((_DWORD *)a3 + 2) += *((_DWORD *)v25 + 11) + *((_DWORD *)v25 + 19);
      *((_DWORD *)a3 + 3) += *((_DWORD *)v25 + 12) + *((_DWORD *)v25 + 20);
    }
  }
LABEL_74:
  *(_OWORD *)v25 = *(_OWORD *)((char *)a2 + 24);
  *((_QWORD *)v25 + 2) = *((_QWORD *)a2 + 5);
  *((_DWORD *)v25 + 10) = *((_DWORD *)a2 + 5);
  *(_QWORD *)(v25 + 30) = 0LL;
  *(_QWORD *)(v25 + 38) = 0LL;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x8000) )
  {
    *(_QWORD *)&v75 = *(_QWORD *)((char *)a2 + 12);
    v69 = v75;
    *(_QWORD *)(v25 + 26) = v75;
    *(_QWORD *)(v25 + 22) = 0LL;
  }
  else
  {
    v69 = *(_QWORD *)(W32GetUserSessionState(v68, v67) + 19184);
    *(_QWORD *)(v25 + 26) = v69;
    *(_QWORD *)&v75 = *(_QWORD *)((char *)a2 + 12);
    *(_QWORD *)(v25 + 22) = v75;
    if ( a4 )
      *(_QWORD *)(v25 + 30) = *(_QWORD *)a4;
  }
  *(_QWORD *)(v25 + 34) = v69;
  if ( *((_DWORD *)v8 + 2) || *((_DWORD *)v8 + 3) )
  {
    if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3399LL);
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3400LL);
    *(_QWORD *)(v25 + 38) = *((_QWORD *)v8 + 1);
    *((_QWORD *)v8 + 1) = 0LL;
  }
  v70 = (*((_DWORD *)v25 + 30) & 0x10000) == 0;
  *(_OWORD *)(v25 + 44) = *((_OWORD *)a2 + 3);
  *((_QWORD *)v25 + 13) = *((_QWORD *)a2 + 8);
  *((_DWORD *)v25 + 30) = v23;
  if ( !v70 )
  {
    if ( (v23 & 0x800) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3421LL);
    *((_DWORD *)v25 + 30) |= 0x10000u;
  }
  if ( v77 )
  {
    if ( !v72 || CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3428LL);
    LOBYTE(v76) = 1;
    v71 = v76;
    *(_OWORD *)(v25 + 62) = v12;
    *((_DWORD *)v25 + 35) = v71;
  }
  if ( a6 )
  {
    *((_DWORD *)v25 + 30) |= 0x4000u;
    *(struct tagPOINT *)(v25 + 34) = *a6;
  }
  W32ReleasePushLockExclusiveEx(v22, 0LL);
  InputTraceLogging::Mouse::QueueEvent(
    *((_QWORD *)v25 + 12),
    (const struct tagPOINT *)(v25 + 26),
    (unsigned __int16)v25[14],
    (unsigned __int16)v25[15]);
  if ( v73 )
  {
    LOBYTE(v9) = *((_DWORD *)a2 + 22) != 0;
    v61 = 0LL;
LABEL_98:
    ApiSetEditionInitiateMouseEventProcessing(v61, v9);
  }
}
