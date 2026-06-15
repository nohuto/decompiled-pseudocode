/*
 * XREFs of AudioVolumeDisconnect @ 0x1800542B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioVolumeDisconnect(_QWORD *a1)
{
  struct _FILETIME v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v6; // rbx
  union _RTL_RUN_ONCE *v8; // [rsp+20h] [rbp-50h] BYREF
  int v9; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-30h]
  const wchar_t *v12; // [rsp+48h] [rbp-28h]
  struct _FILETIME v13; // [rsp+50h] [rbp-20h]
  char v14; // [rsp+58h] [rbp-18h]
  __int64 v15; // [rsp+5Ch] [rbp-14h]
  unsigned __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+38h] BYREF

  v2 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v8 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v9 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v8);
  }
  v4 = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  pv[1] = v4;
  CurrentThreadId = GetCurrentThreadId();
  v12 = L"AudioVolumeDisconnect";
  v13 = v2;
  v14 = 0;
  v15 = 0LL;
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      fPending = ((unsigned __int64)(((unsigned __int128)(10000 * v3 * (__int128)0x5555555555555555LL) >> 64)
                                   - 10000 * v3) >> 63)
               + ((__int64)(((unsigned __int128)(10000 * v3 * (__int128)0x5555555555555555LL) >> 64) - 10000 * v3) >> 1);
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&fPending, (unsigned int)v3 / 3, 0);
    }
  }
  v6 = *a1;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_65ee0b4b100c35d101a73a70e6d7f7c6_Traceguids, *a1);
  }
  *a1 = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return 0LL;
}
