/*
 * XREFs of ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180152F9C
 * Callers:
 *     ServiceStart @ 0x180153674 (ServiceStart.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x1801240A4 (-InitializeAudioThreadpool@@YAJXZ.c)
 *     McGenEventRegister_EtwEventRegister @ 0x180153470 (McGenEventRegister_EtwEventRegister.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
unsigned int __fastcall MyServiceInitialization(
        struct SERVICE_STATUS_HANDLE__ *a1,
        __int64 a2,
        const unsigned __int16 **a3)
{
  unsigned int result; // eax
  struct IAudioService *v5; // rax
  DWORD Instance; // ebx
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // eax
  int v10; // ebx
  DWORD ThreadId; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  HIDWORD(v12) = HIDWORD(a3);
  LODWORD(v12) = 4;
  ThreadId = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DevApiIsRunningInVM",
          0x18u,
          0LL,
          &ThreadId,
          (LPDWORD)&v12)
    && ThreadId )
  {
    return -2147019873;
  }
  result = CoInitializeEx(0LL, 0);
  if ( result <= 1 )
  {
    v5 = g_AudioService;
    *((_QWORD *)g_AudioService + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 7) = 0LL;
    *((_DWORD *)v5 + 16) = 0;
    McGenEventRegister_EtwEventRegister();
    Instance = CoCreateInstance(
                 &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
                 0LL,
                 3u,
                 &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                 (LPVOID *)&g_DeviceEnumerator);
    if ( !Instance )
    {
      v12 = 0LL;
      if ( ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, GUID *, __int64 *))g_DeviceEnumerator->lpVtbl->QueryInterface)(
             g_DeviceEnumerator,
             &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0,
             &v12) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 88LL))(v12, Instance + 1);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
      g_WorkerEventPort = CreateIoCompletionPort((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 0LL, 0);
      if ( g_WorkerEventPort || (Instance = GetLastError()) == 0 )
      {
        Instance = InitializeAudioThreadpool();
        if ( !Instance )
        {
          ThreadId = 0;
          g_EventWorkerThreadHandle = CreateThread(
                                        0LL,
                                        0LL,
                                        (LPTHREAD_START_ROUTINE)EventWorkerThread,
                                        0LL,
                                        0,
                                        &ThreadId);
          if ( !g_EventWorkerThreadHandle )
            Instance = GetLastError();
        }
      }
    }
    v7 = (**(__int64 (__fastcall ***)(struct IAudioService *, _QWORD))g_AudioService)(g_AudioService, Instance);
    v8 = v7;
    if ( !v7 )
    {
      v9 = (*(__int64 (__fastcall **)(struct IAudioService *, struct SERVICE_STATUS_HANDLE__ *))(*(_QWORD *)g_AudioService
                                                                                               + 8LL))(
             g_AudioService,
             a1);
      v8 = v9;
      if ( !v9 )
        v8 = (*(unsigned int (__fastcall **)(struct IAudioService *, _QWORD))(*(_QWORD *)g_AudioService + 16LL))(
               g_AudioService,
               0LL);
    }
    v10 = (*(__int64 (__fastcall **)(struct IAudioService *, __int64))(*(_QWORD *)g_AudioService + 24LL))(
            g_AudioService,
            v8);
    CoUninitialize();
    return v10;
  }
  return result;
}
