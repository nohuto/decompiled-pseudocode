/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x180008980 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 *     ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x180009160 (-CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800158D0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x180016B20 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045074 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180045C40 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180051910 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18005774C (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18006E69C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x180080090 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x180082E80 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180085C14 (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18008C5C4 (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     ?Cleanup@CWaitForService@@QEAAXXZ @ 0x180098088 (-Cleanup@CWaitForService@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800A6994 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800AC45C (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800ADB74 (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800B006C (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  int v2; // r15d
  char v3; // r13
  char v4; // r14
  __int64 (*v5)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v6; // rcx
  int v7; // eax
  signed int v8; // ebx
  HRESULT v9; // eax
  int Instance; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  const unsigned __int16 *v14; // rdx
  HANDLE v15; // rsi
  __int64 v16; // rdx
  DWORD v17; // r12d
  char v18; // r15
  CDesktopManager *v19; // rcx
  char v20; // al
  __int64 v21; // r8
  char v22; // cl
  DWORD v23; // r8d
  bool v24; // si
  DWORD v25; // eax
  int v26; // eax
  int v27; // eax
  int updated; // eax
  signed int v29; // eax
  signed int LastError; // eax
  const unsigned __int16 *v31; // r8
  CDesktopManager *v32; // rcx
  CDesktopManager *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  unsigned int dwFlags; // [rsp+28h] [rbp-E0h]
  bool v38[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v39; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v40; // [rsp+40h] [rbp-C8h]
  struct _RTL_CRITICAL_SECTION *v41; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v42[2]; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+60h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Msg[8]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v46[12]; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE pHandles[3]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v48[16]; // [rsp+120h] [rbp+18h] BYREF

  v2 = -2147221008;
  hObject = 0LL;
  Msg[0].QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v3 = 0;
  v38[1] = 0;
  v4 = 0;
  v39 = 0;
  v46[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 280) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    dwFlags = 2182;
    goto LABEL_70;
  }
  v7 = CDesktopManager::RegisterWindowClass(v6, v5, &v39);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x888u, 0LL);
    goto LABEL_57;
  }
  v9 = CoInitializeEx(0LL, 4u);
  v2 = v9;
  LODWORD(v40) = v9;
  v8 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x88Fu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x890u, 0LL);
    goto LABEL_73;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v8 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Instance, 0x892u, 0LL);
    goto LABEL_73;
  }
  if ( (int)CDesktopManager::InitializeComObjects(
              (CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance,
              v11,
              v12,
              v13) < 0 )
    CWaitForService::WaitFor((CWaitForService *)v46, v14);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v29 = GetLastError();
    v8 = v29;
    if ( v29 > 0 )
      v8 = (unsigned __int16)v29 | 0x80070000;
    dwFlags = 2206;
LABEL_70:
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, dwFlags, 0LL);
    goto LABEL_73;
  }
  v4 = 1;
  v42[0] = 0;
  while ( 1 )
  {
    do
    {
      v15 = hObject;
      if ( !hObject && (int)MilCompositionEngine_GetComposedEventId(v42) >= 0 )
      {
        OpenComposedEvent(v42[0], v16, &hObject);
        v15 = hObject;
      }
      memset(&Msg[1], 0, 48);
      pHandles[0] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 72LL);
      pHandles[1] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL);
      pHandles[2] = v15;
      v17 = 3;
      v18 = 0;
      v41 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        v20 = CDesktopManager::CheckForActiveAnimations(v19);
        v18 = v20;
        v38[1] = v15 && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) | (unsigned __int8)v20;
        if ( (unsigned __int8)EtwEventEnabled(
                                Microsoft_Windows_Dwm_Udwm_Provider_Context[0],
                                &UdwmAllAnimationFinished_Info) )
        {
          if ( v18 )
          {
            CDesktopManager::s_fFireAnimationFinished = 1;
          }
          else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
          {
            if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
              McGenEventWrite_EtwEventWriteTransfer(
                Microsoft_Windows_Dwm_Udwm_Provider_Context,
                (__int64)&UdwmAllAnimationFinished_Info,
                v21,
                1LL,
                (__int64)v48);
            CDesktopManager::s_fFireAnimationFinished = 0;
          }
        }
      }
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
      if ( !v38[1] && v3 )
      {
        v22 = 1;
        v23 = 64;
LABEL_29:
        v17 = 2;
        v3 = 0;
        goto LABEL_30;
      }
      v22 = 0;
      v23 = 64;
      if ( !v38[1] )
        goto LABEL_29;
      if ( !v3 )
      {
        Msg[0].QuadPart = -1LL;
        v3 = 1;
        v23 = 0;
        v24 = 0;
        v38[0] = 0;
        goto LABEL_33;
      }
LABEL_30:
      v24 = 0;
      v38[0] = 0;
      if ( v22 )
      {
        v24 = v18;
        goto LABEL_50;
      }
      if ( !v3 )
        v23 = -1;
LABEL_33:
      v25 = MsgWaitForMultipleObjectsEx(v17, pHandles, v23, 0x1CFFu, 6u);
      if ( v25 == v17 )
      {
        while ( PeekMessageW((LPMSG)&Msg[1], 0LL, 0, 0, 1u) )
        {
          if ( Msg[2].LowPart == 18 )
            goto LABEL_56;
          DispatchMessageW((const MSG *)&Msg[1]);
          if ( !Msg[1].QuadPart )
            CDesktopManager::HandleThreadMessage(Msg[2].LowPart, (HWND)Msg[3].QuadPart, Msg[4].LowPart);
        }
      }
      else if ( v25 < 2 )
      {
        v41 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v38[0] = 0;
        v27 = CGraphicsDeviceManager::ValidateDXGIAdapterAndDevice(
                *((wil::details ***)CDesktopManager::s_pDesktopManagerInstance + 7),
                v38);
        v8 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x92Bu, 0LL);
          goto LABEL_60;
        }
        v24 = !v38[0];
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
      }
      else if ( v3 && ((v25 - 2) & 0xFFFFFEFF) == 0 )
      {
        v26 = CDesktopManager::ProcessAnimationTick(Msg, &Frequency, v38);
        v8 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v26, 0x933u, 0LL);
          goto LABEL_56;
        }
        v24 = v38[0];
      }
LABEL_50:
      if ( Msg[2].LowPart == 18 )
        goto LABEL_56;
    }
    while ( !v24 );
    v41 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
      v8 = updated;
      if ( updated < 0 )
        break;
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x94Cu, 0LL);
LABEL_60:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
LABEL_56:
  v2 = v40;
LABEL_57:
  if ( hObject )
    CloseHandle(hObject);
LABEL_73:
  CWaitForService::Cleanup((CWaitForService *)v46);
  if ( v4 )
  {
    v41 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0, v31);
      if ( v39 )
        UnregisterClassW((LPCWSTR)v39, g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v32);
      v33 = CDesktopManager::s_pDesktopManagerInstance;
      v34 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
      if ( v34 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v34 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 33));
        v33 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) = 0LL;
      }
      v35 = *((_QWORD *)v33 + 34);
      if ( v35 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35 + 16LL))(*((_QWORD *)v33 + 34));
        v33 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34) = 0LL;
      }
      if ( *((_QWORD *)v33 + 22) )
      {
        CAnimationEngine::Cleanup(*((CAnimationEngine **)v33 + 22));
        v33 = CDesktopManager::s_pDesktopManagerInstance;
      }
      if ( *((_QWORD *)v33 + 22) )
      {
        CAnimationEngine::Release(*((CAnimationEngine **)v33 + 22));
        v33 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
      }
      CDisplayBroker::Shutdown(*((CDisplayBroker **)v33 + 27));
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v41);
  }
  if ( v2 >= 0 )
    CoUninitialize();
  if ( v8 < 0 )
  {
    v8 = -2003302654;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003302654, 0x981u, 0LL);
  }
  return (unsigned int)v8;
}
