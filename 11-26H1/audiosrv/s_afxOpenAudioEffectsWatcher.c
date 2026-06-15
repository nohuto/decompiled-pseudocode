/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800BFC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z @ 0x180078A84 (-DeriveAudioServerStreamCategory@@YAJW4_AUDIO_STREAM_CATEGORY@@KPEAK@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatcher@@@Z @ 0x1800BF148 (-GetWatcher@AudioEffectsWatcherFactory@@YAJPEBGKHW4DiscoverySettings@@PEAPEAUIAudioEffectsWatche.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        _QWORD *a6,
        _QWORD *a7)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v11; // edi
  struct AudioSrvTelemetryProvider *v12; // rax
  HRESULT v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int Watcher; // eax
  __int64 v17; // rbx
  unsigned int v19; // [rsp+30h] [rbp-51h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-49h]
  struct _TP_TIMER *pv[7]; // [rsp+40h] [rbp-41h] BYREF
  int v22[2]; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+47h]

  v20 = a7;
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v11 = g_AudioSrvWatchDogTimerInMs;
  v12 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v12 + 1),
    v11,
    (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher",
    pftDueTime);
  v13 = CoInitializeEx(0LL, 0);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v19 = 0;
    v15 = DeriveAudioServerStreamCategory(a3, 0, &v19);
    v14 = v15;
    if ( v15 >= 0 )
    {
      *(_QWORD *)v22 = 0LL;
      Watcher = AudioEffectsWatcherFactory::GetWatcher(a2, v19, a4, 7, (struct IUnknown **)v22);
      v14 = Watcher;
      if ( Watcher >= 0 )
      {
        v17 = *(_QWORD *)v22;
        *a5 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)v22 + 32LL))(*(_QWORD *)v22, v22);
        *a6 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 40LL))(v17, v22);
        *(_QWORD *)v22 = 0LL;
        *v20 = v17;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
        CoUninitialize();
        v14 = 0;
        goto LABEL_9;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)Watcher);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
        (const char *)(unsigned int)v15);
    }
    CoUninitialize();
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioeffectsdiscovery.cpp",
      (const char *)(unsigned int)v13);
  }
LABEL_9:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
