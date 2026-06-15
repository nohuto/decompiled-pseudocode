/*
 * XREFs of AudioSessionSetAllVolumes @ 0x1800779A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionSetAllVolumes(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  struct _FILETIME v7; // rbx
  __int64 v9; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD pv[2]; // [rsp+30h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-30h]
  const wchar_t *v17; // [rsp+48h] [rbp-28h]
  struct _FILETIME v18; // [rsp+50h] [rbp-20h]
  char v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+5Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct _FILETIME pftDueTime; // [rsp+A0h] [rbp+30h] BYREF

  v5 = *a1;
  v7 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v18 = v7;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"AudioSessionSetAllVolumes";
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v9
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v9) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v9 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v9) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v5 + 344LL))(
          v5,
          a2,
          a3,
          a4,
          a5);
  v13 = v12;
  if ( v12 >= 0 )
    v13 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v12);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
