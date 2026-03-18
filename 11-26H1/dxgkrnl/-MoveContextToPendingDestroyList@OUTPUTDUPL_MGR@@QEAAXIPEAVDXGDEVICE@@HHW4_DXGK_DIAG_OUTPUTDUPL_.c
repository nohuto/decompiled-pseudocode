/*
 * XREFs of ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x14036BD68
 * Callers:
 *     ?ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14019312C (-ProcessAdapterReset@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     _lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_::_lambda_invoker_cdecl_ @ 0x1401EC960 (_lambda_d4bbb312c60d17faf4ca5c1aba8d94c2_--_lambda_invoker_cdecl_.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401EEC70 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1401EECC0 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x14029BEC8 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3D.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x14036B558 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 *     ?ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14036BA6C (-ProcessModeChange@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z @ 0x14036BB20 (-ProcessDesktopSwitch@OUTPUTDUPL_MGR@@QEAAXI@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x14036BB68 (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x14036BBE8 (-ProcessDestroyDevice@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1403A9ED8 (-RemoveVidPnOwnership@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1403EC5CC (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x140430DD8 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140039054 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z @ 0x1401EDE70 (-NotifyDWMOfDDAChange@OUTPUTDUPL_MGR@@AEAAXK@Z.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401EF878 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1402B1A60 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ @ 0x14036C388 (-GetProducerDevice@OUTPUTDUPL_CONTEXT@@QEAAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        __int64 a1,
        unsigned int a2,
        struct DXGDEVICE *a3,
        int a4,
        int a5,
        int a6)
{
  __int64 v7; // rdi
  ADAPTER_DISPLAY *v8; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 CurrentProcess; // rax
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int CurrentProcessSessionId; // eax
  unsigned int CurrentThreadId; // eax
  __int64 v22; // rcx
  unsigned int v23; // r15d
  OUTPUTDUPL_CONTEXT **i; // rdi
  __int64 v25; // rbx
  unsigned int ProcessSessionId; // eax
  OUTPUTDUPL_MGR *v28; // rcx
  OUTPUTDUPL_CONTEXT *v29; // rax
  OUTPUTDUPL_CONTEXT **v30; // rcx
  __int64 v31; // rdx
  _BYTE v32[16]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v33[8]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v34; // [rsp+70h] [rbp-49h]
  int v35; // [rsp+78h] [rbp-41h]
  _OWORD v36[4]; // [rsp+80h] [rbp-39h] BYREF

  v7 = a2;
  v8 = *(ADAPTER_DISPLAY **)a1;
  if ( v8 && !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(v8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2387;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(m_pDisplayCore == NULL) || (m_pDisplayCore->IsCoreResourceSharedOwner())",
      2387LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v35 = 0;
  v34 = a1 + 24;
  if ( a1 != -24 && *(struct _KTHREAD **)(a1 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1495LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v33);
  v11 = *(_QWORD *)(a1 + 16) + 72 * v7;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, (struct DXGFASTMUTEX *const)v11, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  memset(v36, 0, sizeof(v36));
  LODWORD(v36[0]) = 15;
  v12 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)&v36[0] + 1) = v12 * KeQueryTimeIncrement();
  CurrentProcess = PsGetCurrentProcess(v13);
  v15 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  DWORD1(v36[2]) &= ~0x80000000;
  v36[1] = v15;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v17, v16, v18, v19);
  DWORD1(v36[2]) = DWORD1(v36[2]) & 0x80000000 | CurrentProcessSessionId & 0x7FFFFFFF;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  DWORD1(v36[0]) = 64;
  v23 = 0;
  LODWORD(v36[2]) = CurrentThreadId;
  HIDWORD(v36[3]) = a6;
  LODWORD(v36[3]) = 1;
  DWORD1(v36[3]) = v7;
  for ( i = *(OUTPUTDUPL_CONTEXT ***)(v11 + 48); v23 < *(_DWORD *)(a1 + 8); ++i )
  {
    if ( *i )
    {
      if ( *((_DWORD *)*i + 72) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2416;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(*ppCurrentContext)->IsPendingDestroy() == FALSE",
          2416LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !a3 || OUTPUTDUPL_CONTEXT::GetProducerDevice(*i) == a3 )
      {
        if ( !a4 || (v25 = *((_QWORD *)*i + 3), PsGetCurrentProcess(v22) == v25) )
        {
          if ( !a5 || !*((_DWORD *)*i + 82) )
          {
            if ( *((_DWORD *)*i + 79) )
            {
              if ( !*(_DWORD *)(v11 + 64) )
              {
                WdLogSingleEntry0(1LL);
                WdLogGlobalForLineNumber = 2439;
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"pContextList->cActiveContexts > 0",
                  2439LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              if ( (*(_DWORD *)(v11 + 64))-- == 1 )
              {
                ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)*i + 3));
                OUTPUTDUPL_MGR::NotifyDWMOfDDAChange(v28, ProcessSessionId);
              }
            }
            OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(*i);
            v29 = *i;
            v30 = (OUTPUTDUPL_CONTEXT **)(a1 + 56);
            v31 = *(_QWORD *)(a1 + 56);
            if ( *(_QWORD *)(v31 + 8) != a1 + 56 )
              __fastfail(3u);
            *(_QWORD *)v29 = v31;
            *((_QWORD *)v29 + 1) = v30;
            *(_QWORD *)(v31 + 8) = v29;
            *v30 = v29;
            *i = 0LL;
            DWORD2(v36[3]) = v23;
            OUTPUTDUPL_MGR::LogEtwAndDiagnostics(
              (DXGDIAGNOSTICS **)a1,
              1,
              (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v36,
              1);
          }
        }
      }
    }
    ++v23;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v32);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33);
}
