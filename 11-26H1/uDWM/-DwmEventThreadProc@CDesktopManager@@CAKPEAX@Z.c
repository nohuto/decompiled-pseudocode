/*
 * XREFs of ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18001C670
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180013B20 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x18001CEC0 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ @ 0x18001E3CC (-CheckForActiveAnimations@CDesktopManager@@AEAA_NXZ.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001E430 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18002C6DC (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x18002D00C (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004ABD0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z @ 0x180053F38 (-ValidateDXGIAdapterAndDevice@CGraphicsDeviceManager@@QEAAJPEA_N@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x18006E268 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 *     ?CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z @ 0x180075D5C (-CreateInstance@CAnimationEngine@@SAJPEAPEAV1@@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180078474 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z @ 0x18007B2EC (-RegisterWindowClass@CDesktopManager@@SAJPEBGP6A_JPEAUHWND__@@I_K_J@ZPEAG@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Cleanup@CAnimationEngine@@QEAAXXZ @ 0x1800992F4 (-Cleanup@CAnimationEngine@@QEAAXXZ.c)
 *     ?AbandonActiveAnimations@CDesktopManager@@AEAAXXZ @ 0x1800AA43C (-AbandonActiveAnimations@CDesktopManager@@AEAAXXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x1800ABB28 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800AD09C (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?Shutdown@CDisplayBroker@@QEAAXXZ @ 0x1800AF8FC (-Shutdown@CDisplayBroker@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopManager::DwmEventThreadProc(PVOID Parameter)
{
  int v2; // edi
  void *v3; // r12
  char v4; // r14
  bool v5; // r15
  char v6; // si
  __int64 (*v7)(HWND, unsigned int, unsigned __int64, __int64); // rdx
  const unsigned __int16 *v8; // rcx
  signed int LastError; // eax
  signed int v10; // r13d
  int v11; // eax
  HRESULT v12; // eax
  int Instance; // eax
  const unsigned __int16 *v14; // rdx
  DWORD v15; // edi
  bool v16; // si
  CDesktopManager *v17; // rcx
  bool v18; // al
  int v19; // r8d
  char v20; // cl
  DWORD v21; // r8d
  bool v22; // bl
  DWORD v23; // eax
  int v24; // eax
  int updated; // eax
  int v27; // eax
  unsigned int v28; // edx
  signed int v29; // eax
  CDesktopManager *v30; // rcx
  CDesktopManager *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned int dwFlags; // [rsp+20h] [rbp-E0h]
  bool v35; // [rsp+30h] [rbp-D0h] BYREF
  char v36; // [rsp+31h] [rbp-CFh]
  unsigned __int16 v37; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v38; // [rsp+38h] [rbp-C8h] BYREF
  HRESULT v39; // [rsp+3Ch] [rbp-C4h]
  struct _RTL_CRITICAL_SECTION *v40; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER Frequency; // [rsp+48h] [rbp-B8h] BYREF
  union _LARGE_INTEGER v42; // [rsp+50h] [rbp-B0h] BYREF
  void *v43; // [rsp+58h] [rbp-A8h] BYREF
  tagMSG Msg; // [rsp+60h] [rbp-A0h] BYREF
  SC_HANDLE hSCObject[12]; // [rsp+90h] [rbp-70h] BYREF
  HANDLE pHandles[3]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v47[16]; // [rsp+108h] [rbp+8h] BYREF

  v2 = -2147221008;
  v3 = 0LL;
  v43 = 0LL;
  v42.QuadPart = 0LL;
  Frequency.QuadPart = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  hSCObject[0] = 0LL;
  *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 282) = GetCurrentThreadId();
  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Frequency) )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    if ( v10 >= 0 )
      v10 = -2003304445;
    dwFlags = 2167;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, dwFlags, 0LL);
    goto LABEL_43;
  }
  v11 = CDesktopManager::RegisterWindowClass(v8, v7, &v37);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x879u, 0LL);
    goto LABEL_43;
  }
  v12 = CoInitializeEx(0LL, 4u);
  v2 = v12;
  v39 = v12;
  v10 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x880u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x881u, 0LL);
    goto LABEL_43;
  }
  Instance = CAnimationEngine::CreateInstance((struct CAnimationEngine **)CDesktopManager::s_pDesktopManagerInstance + 22);
  v10 = Instance;
  if ( Instance < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Instance, 0x883u, 0LL);
    goto LABEL_43;
  }
  if ( (int)CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance) < 0 )
    CWaitForService::WaitFor((CWaitForService *)hSCObject, v14);
  SetLastError(0);
  if ( !SetEvent(Parameter) )
  {
    v29 = GetLastError();
    v10 = v29;
    if ( v29 > 0 )
      v10 = (unsigned __int16)v29 | 0x80070000;
    if ( v10 >= 0 )
      v10 = -2003304445;
    dwFlags = 2191;
    goto LABEL_7;
  }
  v36 = 1;
  v38 = 0;
  while ( 1 )
  {
    if ( !v3 && (int)MilCompositionEngine_GetComposedEventId(&v38) >= 0 )
    {
      OpenComposedEvent(v38, v28, &v43);
      v3 = v43;
    }
    memset(&Msg, 0, sizeof(Msg));
    pHandles[0] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 80LL);
    pHandles[1] = *(HANDLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7) + 88LL);
    pHandles[2] = v3;
    v15 = 3;
    v16 = 0;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      v18 = CDesktopManager::CheckForActiveAnimations(v17);
      v16 = v18;
      v5 = v3 && *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 24) | v18;
      if ( (unsigned __int8)EtwEventEnabled(Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmAllAnimationFinished_Info) )
      {
        if ( v16 )
        {
          CDesktopManager::s_fFireAnimationFinished = 1;
        }
        else if ( CDesktopManager::s_fFireAnimationFinished == 1 )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
            McGenEventWrite_EtwEventWriteTransfer(
              (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
              (unsigned int)&UdwmAllAnimationFinished_Info,
              v19,
              1,
              (__int64)v47);
          CDesktopManager::s_fFireAnimationFinished = 0;
        }
      }
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v5 && v4 )
    {
      v20 = 1;
      v21 = 64;
LABEL_54:
      v15 = 2;
      v4 = 0;
      goto LABEL_24;
    }
    v20 = 0;
    v21 = 64;
    if ( !v5 )
      goto LABEL_54;
    if ( !v4 )
    {
      v42.QuadPart = -1LL;
      v4 = 1;
      v21 = 0;
      v22 = 0;
      v35 = 0;
      goto LABEL_27;
    }
LABEL_24:
    v22 = 0;
    v35 = 0;
    if ( v20 )
    {
      v22 = v16;
      goto LABEL_33;
    }
    if ( !v4 )
      v21 = -1;
LABEL_27:
    v23 = MsgWaitForMultipleObjectsEx(v15, pHandles, v21, 0x1CFFu, 6u);
    if ( v23 != v15 )
    {
      if ( v23 < 2 )
      {
        v40 = &CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v35 = 0;
        v27 = CGraphicsDeviceManager::ValidateDXGIAdapterAndDevice(
                *((CGraphicsDeviceManager **)CDesktopManager::s_pDesktopManagerInstance + 7),
                &v35);
        v10 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x91Cu, 0LL);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v40);
          goto LABEL_40;
        }
        v22 = !v35;
        LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      }
      else if ( v4 && ((v23 - 2) & 0xFFFFFEFF) == 0 )
      {
        v24 = CDesktopManager::ProcessAnimationTick(&v42, &Frequency, &v35);
        v10 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x924u, 0LL);
          goto LABEL_40;
        }
        v22 = v35;
      }
      goto LABEL_33;
    }
    if ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      break;
LABEL_33:
    if ( Msg.message == 18 )
      goto LABEL_40;
    if ( v22 )
    {
      v40 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( CDesktopManager::s_pDesktopManagerInstance )
      {
        updated = CWindowList::UpdateScene(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 53));
        v10 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x93Du, 0LL);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v40);
          goto LABEL_40;
        }
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
  }
  while ( Msg.message != 18 )
  {
    DispatchMessageW(&Msg);
    if ( !Msg.hwnd )
      CDesktopManager::HandleThreadMessage(Msg.message, Msg.wParam, Msg.lParam);
    if ( !PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      goto LABEL_33;
  }
LABEL_40:
  if ( v3 )
    CloseHandle(v3);
  v2 = v39;
  v6 = v36;
LABEL_43:
  if ( hSCObject[0] )
  {
    CloseServiceHandle(hSCObject[0]);
    hSCObject[0] = 0LL;
  }
  if ( v6 )
  {
    v40 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
    {
      CDesktopManager::EnableLivePreviewInputHooks(0, 0);
      if ( v37 )
        UnregisterClassW((LPCWSTR)v37, g_hInstance);
      CDesktopManager::AbandonActiveAnimations(v30);
      v31 = CDesktopManager::s_pDesktopManagerInstance;
      v32 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
      if ( v32 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v32 + 16LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 33));
        v31 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33) = 0LL;
      }
      v33 = *((_QWORD *)v31 + 34);
      if ( v33 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 16LL))(*((_QWORD *)v31 + 34));
        v31 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 34) = 0LL;
      }
      if ( *((_QWORD *)v31 + 22) )
      {
        CAnimationEngine::Cleanup(*((CAnimationEngine **)v31 + 22));
        v31 = CDesktopManager::s_pDesktopManagerInstance;
      }
      if ( *((_QWORD *)v31 + 22) )
      {
        CAnimationEngine::Release(*((CAnimationEngine **)v31 + 22));
        v31 = CDesktopManager::s_pDesktopManagerInstance;
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) = 0LL;
      }
      CDisplayBroker::Shutdown(*((CDisplayBroker **)v31 + 27));
    }
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v40);
  }
  if ( v2 >= 0 )
    CoUninitialize();
  if ( v10 >= 0 )
    return (unsigned int)v10;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003302654, 0x972u, 0LL);
  return 2291664642LL;
}
