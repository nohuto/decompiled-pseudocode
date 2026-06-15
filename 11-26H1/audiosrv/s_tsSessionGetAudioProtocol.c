/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180014E20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     atexit @ 0x1800B2494 (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800B89C0 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rbx
  struct _FILETIME v9; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int AudioProtocol; // ebx
  WINBOOL fPending; // [rsp+20h] [rbp-60h] BYREF
  LPVOID Context; // [rsp+28h] [rbp-58h] BYREF
  union _RTL_RUN_ONCE *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  _QWORD pv[2]; // [rsp+40h] [rbp-40h] BYREF
  DWORD v19; // [rsp+50h] [rbp-30h]
  const wchar_t *v20; // [rsp+58h] [rbp-28h]
  struct _FILETIME v21; // [rsp+60h] [rbp-20h]
  char v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+6Ch] [rbp-14h]

  if ( !(unsigned int)IsTSSessionGetAudioProtocolSupported() )
    return 2147500033LL;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = g_AudioHealthMonitor;
  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    qword_1801D6878 = 0LL;
    v16 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801D6870;
    qword_1801D6870 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    byte_1801D6880 = 0;
    dword_1801D6884 = 0;
    qword_1801D6888 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v17 = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v16);
  }
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v21 = v9;
  v19 = CurrentThreadId;
  v22 = 0;
  v23 = 0LL;
  v20 = L"s_tsSessionGetAudioProtocol";
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      Context = (LPVOID)(((unsigned __int64)(((unsigned __int128)(10000 * v8 * (__int128)0x5555555555555555LL) >> 64)
                                           - 10000 * v8) >> 63)
                       + ((__int64)(((unsigned __int128)(10000 * v8 * (__int128)0x5555555555555555LL) >> 64) - 10000 * v8) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, (PFILETIME)&Context, (unsigned int)v8 / 3, 0);
    }
  }
  AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  return AudioProtocol;
}
