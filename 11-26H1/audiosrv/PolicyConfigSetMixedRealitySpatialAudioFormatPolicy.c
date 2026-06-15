/*
 * XREFs of PolicyConfigSetMixedRealitySpatialAudioFormatPolicy @ 0x18010E1D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigSetMixedRealitySpatialAudioFormatPolicy(__int64 a1, unsigned int a2)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v4; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  int v7; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v4,
    (struct _TP_TIMER *)L"PolicyConfigSetMixedRealitySpatialAudioFormatPolicy",
    pftDueTime);
  v10 = 0LL;
  if ( a2 < 2 )
  {
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
           g_PolicyManager,
           a1,
           &v10);
    if ( v7 >= 0 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v10 + 520LL))(v10, a2);
  }
  else
  {
    v7 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v10);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v7;
}
