/*
 * XREFs of s_apmSetPersistedDefaultAudioEndpoint @ 0x180104400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x18002B5E0 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800B0110 (--1-$out_param_t@V-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTa.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BCFBC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_apmSetPersistedDefaultAudioEndpoint(
        RPC_BINDING_HANDLE Binding,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  struct _TP_TIMER *v9; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  unsigned int v12; // eax
  int v13; // ebx
  bool v14; // dl
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // eax
  int v22; // edi
  int MMDeviceFromInterfaceId; // eax
  __int64 v24; // rax
  HRESULT v25; // eax
  unsigned __int64 i; // rbx
  int v27; // eax
  __int64 *v29; // [rsp+38h] [rbp-41h] BYREF
  __int64 v30; // [rsp+40h] [rbp-39h] BYREF
  unsigned int Pid; // [rsp+48h] [rbp-31h] BYREF
  unsigned int *v32; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-21h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-19h] BYREF
  unsigned int **v35; // [rsp+68h] [rbp-11h] BYREF
  __int64 v36; // [rsp+70h] [rbp-9h] BYREF
  char v37; // [rsp+78h] [rbp-1h]
  struct _TP_TIMER *pv[7]; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v9 = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  v11 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v11 + 1),
    v10,
    (struct _TP_TIMER *)L"s_apmSetPersistedDefaultAudioEndpoint",
    v9);
  Pid = 0;
  v12 = I_RpcBindingInqLocalClientPID(Binding, &Pid);
  if ( !v12 )
  {
    v14 = Pid == GetCurrentProcessId();
    v15 = g_ADGProcess && Pid == LODWORD(g_ADGProcess[2].OwningThread);
    if ( v14 || v15 )
    {
      v16 = 88LL;
      goto LABEL_37;
    }
    if ( a4 > 2 )
    {
      v16 = 93LL;
LABEL_37:
      v13 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)0x80070057LL);
      goto LABEL_38;
    }
    v17 = *(_QWORD *)g_PolicyManager;
    v29 = 0LL;
    v18 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 **))(v17 + 40))(
            g_PolicyManager,
            a2,
            &v29);
    v13 = v18;
    if ( v18 < 0 )
    {
      v19 = (unsigned int)v18;
      v20 = 98LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)v19);
LABEL_28:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
      goto LABEL_38;
    }
    if ( !v29 )
    {
      v13 = -2147024809;
      v19 = 2147942487LL;
      v20 = 99LL;
      goto LABEL_13;
    }
    v21 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64))(*v29 + 24))(v29, a3, a4, a5);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x65,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
        (const char *)(unsigned int)v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
      v13 = v22;
      goto LABEL_38;
    }
    v30 = 0LL;
    if ( a5 )
    {
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v30);
      MMDeviceFromInterfaceId = mmdDevGetMMDeviceFromInterfaceId(a5, &v30);
      v13 = MMDeviceFromInterfaceId;
      if ( MMDeviceFromInterfaceId < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)MMDeviceFromInterfaceId);
LABEL_27:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
        goto LABEL_28;
      }
      v33 = 0LL;
      v32 = 0LL;
      v24 = *v29;
      v35 = &v32;
      v36 = 0LL;
      v37 = 1;
      v13 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64 *, __int64 *))(v24 + 56))(v29, &v33, &v36);
      wil::details::out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v35);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)(unsigned int)v13);
LABEL_26:
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v32,
          0LL);
        goto LABEL_27;
      }
      if ( v33 )
      {
        ppv = 0LL;
        v25 = CoCreateInstance(
                &GUID_06cca63e_9941_441b_b004_39f999ada412,
                0LL,
                0x17u,
                &GUID_6ca19947_8747_46ab_879e_349c4dbb88fb,
                &ppv);
        v13 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x78,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
            (const char *)(unsigned int)v25);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
          goto LABEL_26;
        }
        for ( i = 0LL; i < v33; ++i )
        {
          v27 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 88LL))(
                  ppv,
                  v30,
                  a4,
                  v32[i]);
          if ( v27 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              124LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
              (const char *)(unsigned int)v27);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
      }
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v32,
        0LL);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v29);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    return 0LL;
  }
  v13 = wil::details::in1diag3::Return_Win32(
          retaddr,
          (void *)0x54,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
          (const char *)v12);
LABEL_38:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v13;
}
