/*
 * XREFs of ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUMouseInputProcessingState@@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x14009F5B4
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingState@@AEAU_MousePacketPerf@@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x14009F170 (-ProcessMouseInputData@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@PEAUMouseInputProcessingStat.c)
 * Callees:
 *     EtwTraceMouseInputCoalesced @ 0x1400642C0 (EtwTraceMouseInputCoalesced.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1400818C4 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA?AW4RawMouseProcessingOptions@@XZ @ 0x1401203D8 (-ComputeRawMouseProcessingOptions@MouseInputDataEx@CMouseProcessor@@QEBA-AW4RawMouseProcessingOp.c)
 *     ?ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140121B28 (-ComputeMouseDataInputSource@MouseInputDataEx@CMouseProcessor@@QEBAXPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     ?QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z @ 0x14012D190 (-QueueEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GG@Z.c)
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x14012E480 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 *     ?ComputeCoalescingStrategy@CMouseProcessor@@AEBA?AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@AEBUtagINPUT_MESSAGE_SOURCE@@W4RawMouseProcessingOptions@@PEBUMouseInputProcessingState@@@Z @ 0x140133154 (-ComputeCoalescingStrategy@CMouseProcessor@@AEBA-AW4CoalescingStrategy@1@PEBVMouseInputDataEx@1@.c)
 *     ?CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z @ 0x14015F9F4 (-CoalesceInput@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     IsEditionComputeInjectorUIPISupported @ 0x1401639A8 (IsEditionComputeInjectorUIPISupported.c)
 *     ApiSetEditionInitiateMouseEventProcessing @ 0x14017C054 (ApiSetEditionInitiateMouseEventProcessing.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14019C400 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  __int128 v10; // xmm6
  char v11; // r15
  bool v12; // al
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  __int64 v16; // xmm0_8
  int v17; // eax
  __int64 v18; // rax
  struct W32_PUSH_LOCK *v19; // rbx
  unsigned int v20; // edx
  unsigned int v21; // r12d
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rcx
  int v25; // r8d
  char v26; // r12
  bool v27; // r13
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // edx
  int v32; // r8d
  CTouchProcessor *v33; // rcx
  char v34; // r12
  bool v35; // r13
  __int64 v36; // rax
  int v37; // r8d
  int v38; // edx
  int v39; // edx
  __int64 v40; // rsi
  int v41; // r8d
  CTouchProcessor *v42; // rcx
  bool v43; // si
  __int64 v44; // rax
  int v45; // r8d
  int v46; // edx
  unsigned int v47; // edx
  int v48; // edx
  int v49; // r8d
  char v50; // si
  bool v51; // r12
  __int64 UserSessionState; // rax
  int v53; // r8d
  int v54; // edx
  unsigned int v55; // edx
  __int64 v56; // rcx
  char v57; // r12
  bool v58; // r13
  __int64 v59; // rax
  int v60; // r8d
  int v61; // edx
  unsigned int v62; // edx
  int v63; // ecx
  int v64; // r8d
  __int64 v65; // rcx
  bool v66; // zf
  int v67; // eax
  bool v68; // [rsp+40h] [rbp-40h]
  bool v69; // [rsp+41h] [rbp-3Fh]
  unsigned int v70; // [rsp+44h] [rbp-3Ch]
  __int128 v71; // [rsp+50h] [rbp-30h] BYREF
  int v72; // [rsp+60h] [rbp-20h]
  char v73; // [rsp+C0h] [rbp+40h]

  v8 = a3;
  v68 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16);
  v9 = 0;
  v69 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 256);
  v73 = 0;
  v10 = 0LL;
  v71 = 0LL;
  v11 = 1;
  if ( v68 && (int)IsEditionComputeInjectorUIPISupported() >= 0 )
  {
    v12 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1);
    if ( a5 )
    {
      if ( v12 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3245LL);
      v10 = *(_OWORD *)a5;
      v73 = 1;
    }
    else if ( !v12 )
    {
      v73 = 1;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
      if ( CurrentProcessWin32Process )
      {
        v15 = -*(_QWORD *)CurrentProcessWin32Process;
        CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      }
      v16 = *(_QWORD *)(CurrentProcessWin32Process + 864);
      v17 = *(_DWORD *)(CurrentProcessWin32Process + 872);
      *(_QWORD *)&v71 = v16;
      DWORD2(v71) = v17;
      v18 = PsGetCurrentProcessWin32Process(v15);
      if ( v18 )
        v18 &= -(__int64)(*(_QWORD *)v18 != 0LL);
      HIDWORD(v71) = *(int *)(v18 + 12) < 0;
      v10 = v71;
    }
  }
  *(_QWORD *)&v71 = 0LL;
  CMouseProcessor::MouseInputDataEx::ComputeMouseDataInputSource(a2, (struct tagINPUT_MESSAGE_SOURCE *)&v71);
  v19 = (CMouseProcessor *)((char *)this + 3008);
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), v20);
  v70 = CMouseProcessor::MouseInputDataEx::ComputeRawMouseProcessingOptions(a2);
  v21 = v70;
  v22 = CMouseProcessor::ComputeCoalescingStrategy(this, a2, &v71, v70, v8);
  switch ( v22 )
  {
    case 0:
      v23 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 1LL);
      if ( !v23 )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
        {
          v50 = 0;
        }
        v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v48, v49);
          LOBYTE(v53) = v51;
          LOBYTE(v54) = v50;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v54,
            v53,
            *(_QWORD *)(UserSessionState + 69136),
            2,
            6,
            20,
            (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
        }
        InputTraceLogging::Mouse::DropInput(*((_QWORD *)a2 + 7), 5LL);
        W32ReleasePushLockExclusiveEx(v19, v55);
        v56 = 1LL;
        LOBYTE(v9) = *((_DWORD *)a2 + 22) != 0;
        goto LABEL_98;
      }
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v57 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v57 = 0;
      }
      v58 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v57 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v59 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v48, v49);
        LOBYTE(v60) = v58;
        LOBYTE(v61) = v57;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v61,
          v60,
          *(_QWORD *)(v59 + 69136),
          4,
          6,
          21,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      goto LABEL_72;
    case 1:
      v40 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 0LL);
      if ( (*(_DWORD *)(v40 + 120) & 0x800) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3314LL);
      *(_DWORD *)(v40 + 120) |= 0x10000u;
      v42 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
      {
        v11 = 0;
      }
      v43 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v44 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v39, v41);
        LOBYTE(v45) = v43;
        LOBYTE(v46) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v46,
          v45,
          *(_QWORD *)(v44 + 69136),
          4,
          6,
          23,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      EtwTraceMouseInputCoalesced((__int64)v42);
      InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
      W32ReleasePushLockExclusiveEx(v19, v47);
      return;
    case 2:
      v23 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 0LL);
      if ( (*(_DWORD *)(v23 + 120) & 0x800) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3332LL);
      *(_DWORD *)(v23 + 120) |= 0x10000u;
      v33 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
        || (v34 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v34 = 0;
      }
      v35 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v36 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v31, v32);
        LOBYTE(v37) = v35;
        LOBYTE(v38) = v34;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v38,
          v37,
          *(_QWORD *)(v36 + 69136),
          4,
          6,
          24,
          (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
      }
      EtwTraceMouseInputCoalesced((__int64)v33);
      InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
LABEL_72:
      v8 = a3;
      v21 = v70;
LABEL_73:
      *(_WORD *)(v23 + 24) = *(_WORD *)a2;
      *(_WORD *)(v23 + 28) = *((_WORD *)a2 + 2);
      *(_WORD *)(v23 + 30) = *((_WORD *)a2 + 3);
      *(_DWORD *)(v23 + 32) = *((_DWORD *)a2 + 2);
      *(_WORD *)(v23 + 36) = *((_WORD *)a2 + 1);
      *(_QWORD *)(v23 + 112) = v71;
      *(_DWORD *)(v23 + 172) = *((_DWORD *)a2 + 18);
      *(_QWORD *)(v23 + 164) = *((_QWORD *)a2 + 10);
      goto LABEL_74;
  }
  if ( v22 != 3 )
  {
    v23 = 0LL;
    goto LABEL_73;
  }
  v23 = CMouseProcessor::CMouseQueue::GetItemForWrite((char *)this + 56, 0LL);
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (v24 = *((unsigned int *)WPP_GLOBAL_Control + 11), (v24 & 0x20) == 0)
    || (v26 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v26 = 0;
  }
  v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = W32GetUserSessionState(v24, (_DWORD)WPP_GLOBAL_Control, v25);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v29,
      *(_QWORD *)(v28 + 69136),
      4,
      6,
      22,
      (__int64)&WPP_b5af1d68772133993d2785280b719723_Traceguids);
  }
  EtwTraceMouseInputCoalesced(v24);
  InputTraceLogging::Mouse::CoalesceInput(*((_QWORD *)a2 + 7));
  v8 = a3;
  v21 = v70;
  if ( ((*(_BYTE *)(v23 + 120) | (unsigned __int8)v70) & 0x10) == 0 )
  {
    if ( *((_WORD *)a2 + 2) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3361LL);
    if ( *(_WORD *)(v23 + 28) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3362LL);
    if ( (*((_BYTE *)a2 + 2) & 1) == 0
      && (*(_BYTE *)(v23 + 36) & 1) == 0
      && ((*(_DWORD *)(v23 + 120) | v70) & 0x2000) == 0 )
    {
      *((_DWORD *)a3 + 2) += *(_DWORD *)(v23 + 44) + *(_DWORD *)(v23 + 76);
      *((_DWORD *)a3 + 3) += *(_DWORD *)(v23 + 48) + *(_DWORD *)(v23 + 80);
    }
  }
LABEL_74:
  *(_OWORD *)v23 = *(_OWORD *)((char *)a2 + 24);
  *(_QWORD *)(v23 + 16) = *((_QWORD *)a2 + 5);
  *(_DWORD *)(v23 + 40) = *((_DWORD *)a2 + 5);
  *(_QWORD *)(v23 + 60) = 0LL;
  *(_QWORD *)(v23 + 76) = 0LL;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 0x8000) )
  {
    *(_QWORD *)&v71 = *(_QWORD *)((char *)a2 + 12);
    v65 = v71;
    *(_QWORD *)(v23 + 52) = v71;
    *(_QWORD *)(v23 + 44) = 0LL;
  }
  else
  {
    v65 = *(_QWORD *)(W32GetUserSessionState(v63, v62, v64) + 19216);
    *(_QWORD *)(v23 + 52) = v65;
    *(_QWORD *)&v71 = *(_QWORD *)((char *)a2 + 12);
    *(_QWORD *)(v23 + 44) = v71;
    if ( a4 )
      *(_QWORD *)(v23 + 60) = *(_QWORD *)a4;
  }
  *(_QWORD *)(v23 + 68) = v65;
  if ( *((_DWORD *)v8 + 2) || *((_DWORD *)v8 + 3) )
  {
    if ( (*((_BYTE *)a2 + 2) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3409LL);
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3410LL);
    *(_QWORD *)(v23 + 76) = *((_QWORD *)v8 + 1);
    *((_QWORD *)v8 + 1) = 0LL;
  }
  v66 = (*(_DWORD *)(v23 + 120) & 0x10000) == 0;
  *(_OWORD *)(v23 + 88) = *((_OWORD *)a2 + 3);
  *(_QWORD *)(v23 + 104) = *((_QWORD *)a2 + 8);
  *(_DWORD *)(v23 + 120) = v21;
  if ( !v66 )
  {
    if ( (v21 & 0x800) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3431LL);
    *(_DWORD *)(v23 + 120) |= 0x10000u;
  }
  if ( v73 )
  {
    if ( !v68 || CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3438LL);
    LOBYTE(v72) = 1;
    v67 = v72;
    *(_OWORD *)(v23 + 124) = v10;
    *(_DWORD *)(v23 + 140) = v67;
  }
  if ( a6 )
  {
    *(_DWORD *)(v23 + 120) |= 0x4000u;
    *(struct tagPOINT *)(v23 + 68) = *a6;
  }
  W32ReleasePushLockExclusiveEx(v19, v62);
  InputTraceLogging::Mouse::QueueEvent(
    *(_QWORD *)(v23 + 96),
    (const struct tagPOINT *)(v23 + 52),
    *(_WORD *)(v23 + 28),
    *(_WORD *)(v23 + 30));
  if ( v69 )
  {
    LOBYTE(v9) = *((_DWORD *)a2 + 22) != 0;
    v56 = 0LL;
LABEL_98:
    ApiSetEditionInitiateMouseEventProcessing(v56, v9);
  }
}
