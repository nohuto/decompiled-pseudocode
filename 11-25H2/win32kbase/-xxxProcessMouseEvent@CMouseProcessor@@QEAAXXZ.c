/*
 * XREFs of ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878
 * Callers:
 *     xxxProcessMouseEvent @ 0x1402170E0 (xxxProcessMouseEvent.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     isRootPartition @ 0x14005E028 (isRootPartition.c)
 *     IsMouseIVEnabled @ 0x14005F180 (IsMouseIVEnabled.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400B6C3C (-ProcessEvent@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@GGAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1400C85A0 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1400CC698 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1400D99B0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1400F1FA0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1400F3600 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x14015BD98 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x14018F918 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ?_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z @ 0x140192AB8 (-_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x14019526C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1401A0250 (-CommitStagedChunkInput@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1402205A4 (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall CMouseProcessor::xxxProcessMouseEvent(CMouseProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  struct CMouseProcessor::RawMouseEvent *v4; // rdi
  __int64 v5; // rsi
  char *v6; // rdi
  CMouseProcessor *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  char v11; // bl
  bool v12; // si
  __int64 UserSessionState; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // esi
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // esi
  bool (__fastcall **v20)(const struct CMouseProcessor::CMouseEvent *); // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  void (*v23)(void); // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct ContainerMouseInput *v27; // r8
  void **v28; // [rsp+50h] [rbp-B8h] BYREF
  char *v29; // [rsp+58h] [rbp-B0h]
  int v30; // [rsp+60h] [rbp-A8h]
  __int64 *v31; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v32[3]; // [rsp+70h] [rbp-98h] BYREF
  char v33[2944]; // [rsp+88h] [rbp-80h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v31, "ProcessMouse", 0LL);
  EtwTraceStartProcessQueuedMouseEvents(v2);
  memset(v33, 0, sizeof(v33));
  `vector constructor iterator'(
    v33,
    184LL,
    16LL,
    (void (__fastcall *)(char *))CMouseProcessor::RawMouseEvent::RawMouseEvent);
  W32AcquirePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0);
  v3 = *((unsigned __int16 *)this + 1501);
  if ( *((_WORD *)this + 1501) )
  {
    v4 = (struct CMouseProcessor::RawMouseEvent *)v33;
    v5 = *((unsigned __int16 *)this + 1501);
    do
    {
      CMouseProcessor::CMouseQueue::_Dequeue((CMouseProcessor *)((char *)this + 56), v4);
      v4 = (struct CMouseProcessor::RawMouseEvent *)((char *)v4 + 184);
      --v5;
    }
    while ( v5 );
  }
  if ( *((_WORD *)this + 1501) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6986);
  W32ReleasePushLockExclusiveEx((CMouseProcessor *)((char *)this + 3008), 0LL);
  if ( v3 )
  {
    v6 = &v33[30];
    do
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
        v32,
        "ProcessMouseEvent",
        (const struct InputTraceLogging::ThreadLockedPerfRegion *)&v31);
      InputTraceLogging::Mouse::ProcessEvent(
        *(_QWORD *)(v6 + 66),
        (const struct tagPOINT *)(v6 + 22),
        *((unsigned __int16 *)v6 - 1),
        *(unsigned __int16 *)v6,
        (const struct tagINPUT_MESSAGE_SOURCE *)(v6 + 82));
      CMouseProcessor::ComputeUIPIForMouseEvent(v7, (struct CMouseProcessor::RawMouseEvent *)(v6 - 30));
      v29 = v6 - 30;
      v28 = &CMouseProcessor::CMouseEvent::`vftable';
      v30 = 0;
      if ( (v6[90] & 1) != 0
        || *(_DWORD *)(v6 + 86) == 1
        || (v10 = *(_QWORD *)(v6 + 146) != 0LL,
            *(_OWORD *)&v32[1] = *(_OWORD *)(v6 + 114),
            (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v32[1], v8, v10)) )
      {
        v16 = *((_DWORD *)v29 + 30);
        if ( (v16 & 0x8000) != 0 )
        {
          if ( !*((_QWORD *)v29 + 22) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7147);
        }
        else
        {
          if ( (v16 & 0x800) == 0 )
          {
            v17 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 3056);
            v18 = ((v16 & 0x40) != 0 ? 16 : 32) | 8;
            if ( (v16 & 0x80u) == 0 )
              v18 = (v16 & 0x40) != 0 ? 16 : 32;
            CInputGlobals::UpdateInputGlobals(v17, *((_QWORD *)v29 + 11), 3u, *((_WORD *)v29 + 14), 0, v18);
          }
          CMouseProcessor::CMouseRawInput::Initialize(
            (CMouseProcessor *)((char *)this + 3688),
            (const struct CMouseProcessor::CMouseEvent *)&v28);
          v19 = 0;
          v20 = &off_1402582C8;
          do
          {
            if ( !*v20 || (*v20)((const struct CMouseProcessor::CMouseEvent *)&v28) )
              ((void (__fastcall *)(CMouseProcessor *, void ***))v20[1])(this, &v28);
            ++v19;
            v20 += 2;
          }
          while ( v19 < 3 );
          if ( IsMouseIVEnabled() && isRootPartition(v22, v21) )
            CMouseProcessor::ContainerMouseInputBuffer::CommitStagedChunkInput(
              (CMouseProcessor *)((char *)this + 4080),
              (const struct CMouseProcessor::CMouseEvent *)&v28);
        }
        v23 = (void (*)(void))*((_QWORD *)v29 + 22);
        if ( v23 )
          v23();
      }
      else
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
          || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v11 = 0;
        }
        v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v8);
          LOBYTE(v14) = v12;
          LOBYTE(v15) = v11;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v15,
            v14,
            *(_QWORD *)(UserSessionState + 69144),
            3,
            6,
            15,
            (__int64)&WPP_ca9f085f289935b61fa73f917a9a7947_Traceguids);
        }
        InputTraceLogging::Mouse::DropInput();
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v32);
      v6 += 184;
      --v3;
    }
    while ( v3 );
  }
  if ( IsMouseIVEnabled() && isRootPartition(v25, v24) )
    CMouseProcessor::ContainerMouseInputBuffer::FlushInputDestinedForContainer(
      (CMouseProcessor *)((char *)this + 4080),
      v26,
      v27);
  EtwTraceStopProcessQueuedMouseEvents(v25);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v31);
}
