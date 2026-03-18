/*
 * XREFs of ?ProcessComposition@CComposition@@QEAAXXZ @ 0x18002E4D0
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x18002E3F4 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002DC58 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18002DDAC (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18002E388 (McTemplateU0qq_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z @ 0x18002F990 (-WaitForWork@CScheduler@@QEAAXPEAUIMessageLoopExtensions@@@Z.c)
 *     ?RenderAndPresent@CRenderTargetManager@@QEAAJXZ @ 0x180030310 (-RenderAndPresent@CRenderTargetManager@@QEAAJXZ.c)
 *     ?PostRender@CComposition@@IEAAJ_N@Z @ 0x180030DC0 (-PostRender@CComposition@@IEAAJ_N@Z.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180032404 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800F39E0 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x180114C30 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x180114CCC (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?Report@CProcessAttributionReporter@@QEAAXXZ @ 0x180114E78 (-Report@CProcessAttributionReporter@@QEAAXXZ.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180134138 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 *     ?CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ @ 0x18018F4B4 (-CaptureDxgkRingBuffer@CFailFastInScope@@AEAAXXZ.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     McTemplateU0xxxxq_EventWriteTransfer @ 0x18019BE20 (McTemplateU0xxxxq_EventWriteTransfer.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1801C0204 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1801C0264 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x1801D9E90 (-UpdateDXGIFactory@CDisplayManager@@IEAAJXZ.c)
 *     ?FlushRoundTripRequests@CComposition@@AEAAXXZ @ 0x1801E088C (-FlushRoundTripRequests@CComposition@@AEAAXXZ.c)
 *     ?Initialize@CProcessAttributionReporter@@SAXXZ @ 0x1802085F4 (-Initialize@CProcessAttributionReporter@@SAXXZ.c)
 *     McTemplateU0dxt_EventWriteTransfer @ 0x18021486C (McTemplateU0dxt_EventWriteTransfer.c)
 *     ?MilWerUnregisterMemoryBlock@@YAXPEBX@Z @ 0x18021DF94 (-MilWerUnregisterMemoryBlock@@YAXPEBX@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     ?CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z @ 0x18022DB98 (-CleanupComputeScribble@CRenderTargetManager@@QEAAX_N@Z.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x18022F660 (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?IncrementLastIndex@CDebugFrameCounter@@IEAAXXZ @ 0x18022F85C (-IncrementLastIndex@CDebugFrameCounter@@IEAAXXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x18022F8A4 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x18022FBB8 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     ?DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z @ 0x18028C864 (-DebugInspectBitmap@@YAJPEAUID2D1Bitmap@@@Z.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x18028CF2C (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ @ 0x180295650 (-ReleaseD3D12Resources@CDeviceManager@@QEAAXXZ.c)
 *     ?RecentDisplayChange@CDisplayManager@@IEAA_NXZ @ 0x180295898 (-RecentDisplayChange@CDisplayManager@@IEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::ProcessComposition(CComposition *this, __int64 a2, __int64 a3)
{
  volatile struct IUnknown *volatile v3; // rax
  char v4; // r13
  int v6; // r15d
  _QWORD *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rsi
  int v10; // r14d
  __int64 v11; // r8
  __int64 v12; // r12
  __int32 v13; // r12d
  __int64 v14; // r8
  HANDLE CurrentThread; // rax
  bool v16; // cc
  CDisplayManager *v17; // rcx
  int v18; // eax
  __int64 v19; // r8
  signed int v20; // esi
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rbx
  int v24; // r10d
  int v25; // ecx
  int v26; // ebx
  _QWORD *v27; // rcx
  __int64 *v28; // r8
  __int64 *i; // rdx
  int v30; // ebx
  int v31; // r14d
  int v32; // eax
  CDisplayManager *v33; // rcx
  __int64 v34; // r8
  int v35; // ebx
  int v36; // r14d
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rax
  bool v40; // al
  unsigned int v41; // eax
  __int64 v42; // rbx
  __int64 v43; // rsi
  int v44; // eax
  int v45; // eax
  CProcessResourceAttributionReporter *v46; // rbx
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v48; // rbx
  ULONGLONG v49; // rax
  unsigned __int64 v50; // rdx
  void *v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  signed int LastError; // eax
  __int64 v56; // rax
  __int64 v57; // rcx
  int updated; // eax
  int v59; // ebx
  DWORD CurrentThreadId; // eax
  int v61; // eax
  int v62; // r12d
  __int64 v63; // r13
  __int64 v64; // r15
  volatile struct IUnknown *v65; // rbx
  unsigned __int64 v66; // rax
  char v67; // bl
  __int64 v68; // rax
  int v69; // edx
  int v70; // ecx
  bool v71; // zf
  CDeviceManager *v72; // rcx
  __int64 v73; // rdx
  unsigned int v74; // r8d
  unsigned int v75; // eax
  __int64 v76; // rcx
  CDisplayManager *v77; // rcx
  unsigned int v78; // eax
  unsigned int v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+40h] [rbp-C0h]
  bool v81; // [rsp+41h] [rbp-BFh] BYREF
  struct ID3D11Texture2D *v82; // [rsp+48h] [rbp-B8h] BYREF
  void *v83; // [rsp+50h] [rbp-B0h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE PerformanceCount[20]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v86; // [rsp+114h] [rbp+14h]
  _BYTE v87[16]; // [rsp+120h] [rbp+20h] BYREF
  struct ID3D11Texture2D **v88; // [rsp+130h] [rbp+30h]
  __int64 v89; // [rsp+138h] [rbp+38h]
  _BYTE *v90; // [rsp+140h] [rbp+40h]
  __int64 v91; // [rsp+148h] [rbp+48h]

  v3 = g_pDebugInspectSurface;
  v4 = 0;
  while ( v3 )
  {
    v82 = 0LL;
    v65 = v3;
    *(_QWORD *)PerformanceCount = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v82);
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *, GUID *, struct ID3D11Texture2D **))v65->lpVtbl->QueryInterface)(
           v65,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v82) < 0 )
    {
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)PerformanceCount);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *, GUID *, _BYTE *))v65->lpVtbl->QueryInterface)(
             v65,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             PerformanceCount) >= 0 )
        DebugInspectBitmap(*(struct ID2D1Bitmap **)PerformanceCount);
    }
    else
    {
      DebugInspectTexture(v82, 0);
    }
    v3 = g_pDebugInspectSurface;
    if ( g_pDebugInspectSurface == v65 )
    {
      v3 = 0LL;
      g_pDebugInspectSurface = 0LL;
      __debugbreak();
    }
    if ( *(_QWORD *)PerformanceCount )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)PerformanceCount + 16LL))(*(_QWORD *)PerformanceCount);
      v3 = g_pDebugInspectSurface;
    }
    if ( v82 )
    {
      ((void (__fastcall *)(struct ID3D11Texture2D *))v82->lpVtbl->Release)(v82);
      v3 = g_pDebugInspectSurface;
    }
  }
  v6 = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Start,
      a3,
      1LL,
      PerformanceCount);
  v7 = (_QWORD *)((char *)this + 1000);
  if ( *((_BYTE *)this + 1008) && *((_BYTE *)this + 1009) )
  {
    v66 = CDebugFrameCounter::CurrentTime((CComposition *)((char *)this + 1000));
    *(_QWORD *)PerformanceCount = v66;
    if ( *((_BYTE *)this + 1010) )
    {
      if ( *(_DWORD *)v7 == -1 )
        *v7 = 0LL;
      *((_QWORD *)this + 129) = v66;
      *((_OWORD *)this + *((unsigned int *)this + 251) + 65) = *((_OWORD *)this + 64);
      v73 = *((unsigned int *)this + 251);
      v74 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 != (_DWORD)v73 )
      {
        v75 = *(_DWORD *)v7;
        do
        {
          if ( v7[2 * v75 + 5] >= (unsigned __int64)(*((_QWORD *)this + 129) - 10000000LL) )
            break;
          v76 = 2 * (v74 + 3LL);
          *((_QWORD *)this + 127) += *((_QWORD *)this + 2 * v74 + 130) - *(_QWORD *)((char *)this + v76 * 8 + 1000);
          v7[v76] = 0LL;
          v7[2 * v74 + 5] = 0LL;
          v74 = (unsigned __int8)(*(_DWORD *)v7 + 1);
          *(_DWORD *)v7 = v74;
          v75 = v74;
          v73 = *((unsigned int *)this + 251);
        }
        while ( v74 != (_DWORD)v73 );
      }
      *((_QWORD *)this + 127) += v7[2 * v73 + 6] - v7[2 * v73 + 5];
      CDebugFrameCounter::IncrementLastIndex((CComposition *)((char *)this + 1000));
    }
    CDebugFrameCounter::UpdateGlitchList((CComposition *)((char *)this + 1000), (unsigned __int64 *)PerformanceCount);
  }
  CScheduler::WaitForWork((CComposition *)((char *)this + 232), *((struct IMessageLoopExtensions **)this + 711));
  v9 = *((_QWORD *)this + 39);
  qword_1803DE848 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Start,
      v8,
      1LL,
      PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Compositor_Context,
      &WaitForCompositorClock_Start,
      v8,
      1LL,
      PerformanceCount);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, *((_QWORD *)this + 29));
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 1) != 0 )
  {
    v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    McTemplateU0dxt_EventWriteTransfer(v70, v69, v10, *(_QWORD *)(v68 + 8), v67);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    v89 = 4LL;
    v91 = 4LL;
    LODWORD(v82) = v10 == 0;
    *(_DWORD *)PerformanceCount = v10 == 4;
    v88 = &v82;
    v90 = PerformanceCount;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_WFVB_Stop,
      v11,
      3LL,
      v87);
  }
  if ( v10 == 1 )
    byte_1803DE93C = 1;
  qword_1803DE848 = GetTickCount64();
  *((_QWORD *)this + 37) = v12;
  v13 = _InterlockedExchange((volatile __int32 *)this + 63, 0);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 708) + 40LL))(*((_QWORD *)this + 708)) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PROCESS_FRAME_Start,
        v14,
        1LL,
        PerformanceCount);
    CurrentThread = GetCurrentThread();
    if ( QueryThreadCycleTime(CurrentThread, &CycleTime) )
    {
      qword_1803DE930 = CycleTime;
    }
    else
    {
      qword_1803DE930 = 0LL;
      CycleTime = 0LL;
    }
    if ( *((_BYTE *)this + 1008) )
    {
      *(_WORD *)((char *)this + 1009) = 1;
      *((_QWORD *)this + 129) = 0LL;
      *((_QWORD *)this + 128) = 0LL;
      *((_QWORD *)this + 128) = CDebugFrameCounter::CurrentTime((CComposition *)((char *)this + 1000));
    }
    v16 = CComposition::s_cRenderFailures <= 0x3C;
    *((_DWORD *)this + 1568) = 0;
    if ( !v16 )
    {
      v59 = CComposition::s_hrExpectedError;
      LOBYTE(v82) = 1;
      CurrentThreadId = GetCurrentThreadId();
      g_hrFailFastExpectedError = v59;
      g_dwFailFastForThreadId = CurrentThreadId;
      CFailFastInScope::CaptureDxgkRingBuffer((CFailFastInScope *)&v82);
      v4 = (char)v82;
    }
    v17 = qword_1803DE6D8;
    v80 = v4;
    if ( qword_1803DE6D8 )
    {
      if ( !(_BYTE)word_1803DE700 )
        goto LABEL_26;
      if ( (*(unsigned int (**)(void))(*(_QWORD *)qword_1803DE6D8 + 104LL))() )
      {
        LOBYTE(word_1803DE700) = 0;
        goto LABEL_26;
      }
      LOBYTE(word_1803DE700) = 1;
    }
    updated = CDisplayManager::UpdateDXGIFactory(v17);
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x26Fu, 0LL);
LABEL_26:
    v81 = 1;
    v18 = CComposition::PreRender((CRenderTargetManager **)this, &v81);
    v20 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x27Au, 0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RENDER_Start,
        v19,
        1LL,
        PerformanceCount);
    v21 = *((_QWORD *)this + 37);
    if ( byte_1803DE960 )
    {
      AcquireSRWLockExclusive(&SRWLock);
      GetCurrentThreadId();
      byte_1803DE960 = 0;
      dword_1803E2670 = 0;
      xmmword_1803DE940 = xmmword_1803DE950;
      ReleaseSRWLockExclusive(&SRWLock);
      ((void (*)(void))anonymous_namespace_::SealCurrentFrameSequence)();
    }
    v22 = v21 - qword_1803DE8D8;
    qword_1803DE8D8 = v21;
    v23 = 1000 * (v22 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v22 / g_qpcFrequency.QuadPart);
    if ( v23 >= (unsigned int)CCommonRegistryData::TelemetryFramesSequenceIdleIntervalMilliseconds )
      ((void (__fastcall *)(_QWORD, _QWORD))anonymous_namespace_::SealCurrentFrameSequence)(
        (LARGE_INTEGER)g_qpcFrequency.QuadPart,
        1000 * (v22 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart);
    if ( v23 > 0x2A )
    {
      ++dword_1803DE36C;
      byte_1803DE8D5 = 1;
    }
    else
    {
      byte_1803DE8D5 = 0;
    }
    v24 = dword_1803DE388;
    if ( !dword_1803DE388 )
    {
      *(_QWORD *)&xmmword_1803DE4D0 = v21;
      v57 = *((_QWORD *)qword_1803DE9E0 + 5);
      if ( 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(*(_QWORD *)(v57 + 24) - *(_QWORD *)(v57 + 16)) >> 5) )
        dword_1803DE39C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v57, v21);
    }
    v25 = dword_1803DE938 | dword_1803DE380;
    dword_1803DE380 |= dword_1803DE938;
    byte_1803DE8D0 = byte_1803DE93C;
    if ( byte_1803DE93C )
    {
      byte_1803DE93C = 0;
      dword_1803DE380 = v25 | 0x100;
    }
    dword_1803DE384 |= v13;
    dword_1803DE388 = v24 + 1;
    dword_1803DE938 = 0;
    v26 = MEMORY[0x7FFE02E4];
    if ( GetTickCount() - v26 < 0x3E8 )
      dword_1803DE380 |= 1u;
    dword_1803DE968 = dword_1803DE408;
    dword_1803DE970 = dword_1803DE410;
    dword_1803DE96C = dword_1803DE40C;
    dword_1803DE974 = dword_1803DE414;
    v27 = (_QWORD *)*((_QWORD *)this + 82);
    v28 = (__int64 *)v27[5];
    for ( i = (__int64 *)v27[4]; i != v28; *(_QWORD *)(v56 + 72) = 0LL )
    {
      v56 = *i;
      i += 13;
      *(_QWORD *)(v56 + 80) = 0LL;
    }
    if ( CSuperWetInkManager::s_cleanupScribble )
    {
      v71 = *v27 == 0LL;
      CSuperWetInkManager::s_cleanupScribble = 0;
      if ( v71 )
        CRenderTargetManager::CleanupComputeScribble(*((CRenderTargetManager **)g_pComposition + 77), 0);
    }
    if ( CSuperWetInkManager::s_lostDevice )
    {
      CSuperWetInkManager::s_lostDevice = 0;
      CRenderTargetManager::CleanupComputeScribble(*((CRenderTargetManager **)g_pComposition + 77), 1);
      CDeviceManager::ReleaseD3D12Resources(v72);
    }
    v30 = *((_DWORD *)this + 1482);
    v31 = 0;
    if ( v30 )
    {
      v63 = 0LL;
      v64 = *((unsigned int *)this + 1482);
      do
      {
        v61 = CCachedVisualImage::Snapshot(*(CCachedVisualImage **)(*((_QWORD *)this + 738) + v63));
        v62 = v61;
        if ( v61 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x7A2u, 0LL);
        if ( !v31 || v31 >= 0 && v62 < 0 )
          v31 = v62;
        v63 += 8LL;
        --v64;
      }
      while ( v64 );
      *((_DWORD *)this + 1482) = 0;
      DynArrayImpl<0>::ShrinkToSize((char *)this + 5904, 8LL);
      v6 = 1;
      if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
        McTemplateU0qq_EventWriteTransfer(
          (__int64)&Microsoft_Windows_Dwm_Compositor_Context,
          (__int64)&RenderCVISnapshots,
          (unsigned int)v31,
          v30);
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x281u, 0LL);
      v4 = v80;
    }
    if ( !v20 || v20 >= 0 && v31 < 0 )
      v20 = v31;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      *(_QWORD *)PerformanceCount = 0LL;
      QueryPerformanceCounter((LARGE_INTEGER *)PerformanceCount);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxxxq_EventWriteTransfer(v53, v52, *(_QWORD *)PerformanceCount);
    }
    v32 = CRenderTargetManager::RenderAndPresent(*((CRenderTargetManager **)this + 77));
    v35 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x28Du, 0LL);
    if ( !v20 || v20 >= 0 && v35 < 0 )
      v20 = v35;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      *(_DWORD *)PerformanceCount = 1;
      v88 = (struct ID3D11Texture2D **)PerformanceCount;
      v89 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_RENDER_Stop,
        v34,
        2LL,
        v87);
    }
    if ( v20 >= 0 )
    {
      if ( CComposition::s_cRenderFailures )
        --CComposition::s_cRenderFailures;
      v36 = *((_DWORD *)this + 216);
      goto LABEL_67;
    }
    if ( v20 == -2003304306 || v20 == -2003304309 )
    {
LABEL_66:
      v36 = *((_DWORD *)this + 216);
      if ( v20 == -2003304307 )
      {
        if ( v36 == 2 )
        {
          CMmcssTask::Apply((LPCRITICAL_SECTION)((char *)this + 728), 0);
          CComposition::UpdateMmcssPartners(this);
          goto LABEL_73;
        }
        goto LABEL_109;
      }
LABEL_67:
      if ( *(_BYTE *)(*((_QWORD *)this + 77) + 753LL) )
      {
        v6 = 2;
        if ( v36 == 2 )
          goto LABEL_95;
        CMmcssTask::Revert((CComposition *)((char *)this + 728));
        CComposition::UpdateMmcssPartners(this);
      }
      else
      {
        v6 = 0;
        if ( v36 == 2 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 728));
          v38 = *((_QWORD *)this + 96);
          if ( v38 && *(_WORD *)v38 && !*(_QWORD *)(v38 + 136) )
          {
            SetLastError(0);
            v54 = (*((__int64 (__fastcall **)(_QWORD, __int64))this + 98))(
                    *((_QWORD *)this + 96),
                    *((_QWORD *)this + 96) + 128LL);
            *(_QWORD *)(*((_QWORD *)this + 96) + 136LL) = v54;
            if ( !v54 )
            {
              LastError = GetLastError();
              if ( LastError > 0 )
                LastError = (unsigned __int16)LastError | 0x80070000;
              v79 = 265;
              goto LABEL_180;
            }
            SetLastError(0);
            if ( !(*((unsigned int (__fastcall **)(_QWORD, _QWORD))this + 100))(
                    *(_QWORD *)(*((_QWORD *)this + 96) + 136LL),
                    *(unsigned int *)(*((_QWORD *)this + 96) + 132LL)) )
            {
              LastError = GetLastError();
              if ( LastError > 0 )
                LastError = (unsigned __int16)LastError | 0x80070000;
              v79 = 269;
LABEL_180:
              if ( LastError >= 0 )
                LastError = -2003304445;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, LastError, v79, 0LL);
            }
          }
          v39 = *((_QWORD *)this + 96);
          v40 = v39 && *(_QWORD *)(v39 + 136);
          *((_BYTE *)this + 808) = v40;
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 728));
          CComposition::UpdateMmcssPartners(this);
LABEL_73:
          *((_DWORD *)this + 216) = v6;
          v86 = 0LL;
          v41 = *((_DWORD *)this + 238);
          *(_DWORD *)PerformanceCount = 5;
          *(_OWORD *)&PerformanceCount[4] = 0LL;
          *(_DWORD *)&PerformanceCount[8] = v36;
          *(_DWORD *)&PerformanceCount[12] = v6;
          if ( v41 )
          {
            v42 = 0LL;
            v43 = v41;
            do
            {
              v44 = CChannelContext::PostMessageToChannel(
                      *(CChannelContext **)(v42 + *((_QWORD *)this + 116)),
                      (const struct MIL_MESSAGE *)PerformanceCount);
              if ( v44 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x816u, 0LL);
              v42 += 8LL;
              --v43;
            }
            while ( v43 );
          }
LABEL_78:
          if ( v6 != 2 )
          {
LABEL_79:
            v45 = CComposition::PostRender(this, v81);
            if ( v45 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x298u, 0LL);
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
            {
              if ( qword_1803DEA58 )
                CProcessAttributionReporter::Report(qword_1803DEA58);
              else
                CProcessAttributionReporter::Initialize();
            }
            v46 = qword_1803DEA60;
            TickCount64 = GetTickCount64();
            if ( TickCount64 - *(_QWORD *)v46 >= 0x3E8 )
            {
              *(_QWORD *)v46 = TickCount64;
              CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v46);
            }
            v48 = qword_1803DEA68;
            v49 = GetTickCount64();
            v50 = v49 - *(_QWORD *)v48;
            if ( v50 >= 0x3E8 )
            {
              *(_QWORD *)v48 = v49;
              *((_DWORD *)v48 + 2) = v50;
              CEnergyReporter::SendReportToE3(v48);
            }
            if ( v4 )
            {
              v51 = v83;
              g_dwFailFastForThreadId = 0;
              g_hrFailFastExpectedError = 0;
              if ( v83 )
              {
                MilWerUnregisterMemoryBlock(v83);
                operator delete(v51);
              }
            }
            return;
          }
LABEL_95:
          if ( *((_DWORD *)this + 246) )
            CComposition::FlushRoundTripRequests(this);
          goto LABEL_79;
        }
      }
LABEL_109:
      if ( v6 == v36 )
        goto LABEL_78;
      goto LABEL_73;
    }
    if ( CComposition::s_cRenderFailures > 0x3C )
    {
      memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
      pExceptionRecord.ExceptionInformation[0] = CComposition::s_hrExpectedError;
      pExceptionRecord.ExceptionCode = v20;
      pExceptionRecord.NumberParameters = 1;
      RaiseFailFastException(&pExceptionRecord, 0LL, 1u);
    }
    if ( v20 == -2003304442 || v20 == -2003304307 )
    {
      if ( CDisplayManager::DriverUpdateInProgress(v33) )
        goto LABEL_66;
      if ( v20 != -2003304442 )
      {
        v78 = CComposition::s_cRenderFailures + 12;
        goto LABEL_176;
      }
      if ( CDisplayManager::RecentDisplayChange(v77) )
        goto LABEL_66;
    }
    v78 = CComposition::s_cRenderFailures + 2;
LABEL_176:
    CComposition::s_cRenderFailures = v78;
    CComposition::s_hrExpectedError = v20;
    goto LABEL_66;
  }
  CComposition::ScheduleCompositionPass(this, 0LL, 0x800000LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_VBLANK_LOOP_Stop,
      v37,
      1LL,
      PerformanceCount);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 708) + 48LL))(*((_QWORD *)this + 708));
}
