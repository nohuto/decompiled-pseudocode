/*
 * XREFs of ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024D2C4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18024C550 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800303B8 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800B3920 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C1DD0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?StartActivity@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802A5910 (-StartActivity@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802A6E34 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ?Stop@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXI_K@Z @ 0x1802AED38 (-Stop@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXI_K@Z.c)
 *     ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802C4C10 (--1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??$TextInputHostTerminated@I@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAX$$QEAI@Z @ 0x180465AEC (--$TextInputHostTerminated@I@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA.c)
 *     TerminateAppByName @ 0x180473658 (TerminateAppByName.c)
 *     _alloca_probe @ 0x1806CCB80 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::TerminateStaleInputApp(TouchKeyboardExperienceManager *this)
{
  ULONGLONG TickCount64; // r12
  unsigned int v3; // r14d
  KeyboardHosting *v4; // rcx
  HRESULT LastError; // ebx
  LPVOID v6; // rbx
  __int64 (__fastcall *v7)(LPVOID, SID *, GUID *, __int64 *); // rdi
  int v8; // eax
  const char *v9; // r9
  DWORD *v10; // rdi
  __int64 v11; // rsi
  char *v12; // rbx
  const wchar_t *FileNameW; // rax
  size_t v14; // rdx
  const char *v15; // r9
  ULONGLONG v16; // rax
  __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  DWORD cbNeeded[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[42]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD idProcess[1024]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR ImageFileName[264]; // [rsp+11A0h] [rbp+10A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+13E8h] [rbp+12E8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TerminateStaleInputApp");
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::StartActivity((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21);
  TickCount64 = GetTickCount64();
  v3 = 0;
  if ( !KeyboardHosting::IsRunningOnServerSku(v4) )
  {
    memset_0(idProcess, 0, sizeof(idProcess));
    cbNeeded[0] = 0;
    K32EnumProcesses(idProcess, 0x1000u, cbNeeded);
    if ( !cbNeeded[0] )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xF60,
                    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                    v9);
      goto LABEL_23;
    }
    if ( cbNeeded[0] >> 2 )
    {
      v10 = idProcess;
      v11 = cbNeeded[0] >> 2;
      do
      {
        v12 = (char *)OpenProcess(0x401u, 0, *v10);
        ppv = v12;
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( K32GetProcessImageFileNameW(v12, ImageFileName, 0x104u) )
          {
            FileNameW = PathFindFileNameW(ImageFileName);
            v14 = -1LL;
            do
              ++v14;
            while ( FileNameW[v14] );
            if ( std::_Traits_equal<std::char_traits<unsigned short>>(FileNameW, v14, L"TextInputHost.exe", 17LL) )
            {
              if ( !TerminateProcess(v12, 0) )
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0xF6E,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v15);
              LODWORD(v18) = *((_DWORD *)this + 251);
              TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::TextInputHostTerminated<unsigned int>(
                v21,
                &v18);
              ++v3;
            }
          }
        }
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&ppv);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_22;
  }
  ppv = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  LastError = CoCreateInstance(&CLSID_ShellServiceHost, 0LL, 0x404u, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &ppv);
  if ( LastError >= 0 )
  {
    v18 = 0LL;
    v6 = ppv;
    v7 = *(__int64 (__fastcall **)(LPVOID, SID *, GUID *, __int64 *))(*(_QWORD *)ppv + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    LastError = v7(v6, &SID_ProcessLifetimeManagerControl, &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d, &v18);
    if ( LastError < 0 )
    {
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      goto LABEL_7;
    }
    v8 = TerminateAppByName(v18, L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!InputApp");
    LastError = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF59,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
LABEL_22:
    v16 = GetTickCount64();
    TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::Stop(
      (TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21,
      v3,
      v16 - TickCount64);
    LastError = 0;
    goto LABEL_23;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
LABEL_23:
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21);
  return (unsigned int)LastError;
}
