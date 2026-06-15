/*
 * XREFs of AudioSessionDestroy @ 0x180015030
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x1800CCA44 (WPP_SF_d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionDestroy(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  struct _FILETIME v2; // r14
  __int64 v3; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned __int32 v7; // edi
  union _RTL_RUN_ONCE *v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h]
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD v12; // [rsp+40h] [rbp-30h]
  const wchar_t *v13; // [rsp+48h] [rbp-28h]
  struct _FILETIME v14; // [rsp+50h] [rbp-20h]
  char v15; // [rsp+58h] [rbp-18h]
  __int64 v16; // [rsp+5Ch] [rbp-14h]
  unsigned __int64 fPending; // [rsp+A0h] [rbp+30h] BYREF
  LPVOID Context; // [rsp+A8h] [rbp+38h] BYREF

  v1 = *a1;
  v2 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v9 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801D6878 = 0LL;
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v10 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v9);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v14 = v2;
  v12 = CurrentThreadId;
  v13 = L"AudioSessionDestroy";
  v15 = 0;
  v16 = 0LL;
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
  v7 = _InterlockedDecrement(v1 + 6);
  if ( !v7 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 104LL))(v1);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, v7, v9);
  }
  *a1 = 0LL;
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return 0LL;
}
