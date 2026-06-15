/*
 * XREFs of s_apmRegisterProxyAudioProcess @ 0x180109DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_apmRegisterProxyAudioProcess(__int64 a1)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v3; // edi
  int v4; // esi
  struct AudioSrvTelemetryProvider *v5; // rax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = 0;
  v5 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v5 + 1),
    v3,
    (struct _TP_TIMER *)L"s_apmRegisterProxyAudioProcess",
    pftDueTime);
  if ( (unsigned int)IsApmRegisterProxyAudioProcessSupported() )
  {
    if ( g_PolicyManager )
    {
      v8 = 0LL;
      v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                       + 32LL))(
             g_PolicyManager,
             a1,
             &v8);
      if ( v4 >= 0 )
        v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64))(*(_QWORD *)g_PolicyManager + 216LL))(
               g_PolicyManager,
               v8);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
    }
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    return (unsigned int)v4;
  }
  else
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    return 2147500033LL;
  }
}
