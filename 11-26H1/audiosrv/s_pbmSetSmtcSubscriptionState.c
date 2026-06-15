/*
 * XREFs of s_pbmSetSmtcSubscriptionState @ 0x180071260
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall s_pbmSetSmtcSubscriptionState(__int64 a1, unsigned int a2, unsigned int a3)
{
  struct _FILETIME v3; // rbx
  __int64 v5; // r12
  int v8; // edi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-30h]
  const wchar_t *v13; // [rsp+48h] [rbp-28h]
  struct _FILETIME v14; // [rsp+50h] [rbp-20h]
  char v15; // [rsp+58h] [rbp-18h]
  __int64 v16; // [rsp+5Ch] [rbp-14h]
  struct _FILETIME pftDueTime; // [rsp+B8h] [rbp+48h] BYREF

  v3 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v8 = 0;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v14 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"s_pbmSetSmtcSubscriptionState";
  v15 = 0;
  v16 = 0LL;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v5
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v5) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v5 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v5) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmSmtcSubscriptionStateSupported() )
  {
    v8 = PbmSetSmtcSubscriptionState(a1, a2, a3);
  }
  else if ( g_PolicyManager )
  {
    pftDueTime = 0LL;
    v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct _FILETIME *))(*(_QWORD *)g_PolicyManager
                                                                                              + 32LL))(
           g_PolicyManager,
           a1,
           &pftDueTime);
    if ( v8 >= 0 )
      v8 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct _FILETIME, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 112LL))(
             g_PolicyManager,
             pftDueTime,
             a2,
             a3);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pftDueTime);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v8;
}
