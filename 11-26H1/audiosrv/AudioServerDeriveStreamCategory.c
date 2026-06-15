/*
 * XREFs of AudioServerDeriveStreamCategory @ 0x180073230
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

__int64 __fastcall AudioServerDeriveStreamCategory(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // r12
  __int64 v8; // r15
  unsigned int v9; // edi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v15; // [rsp+40h] [rbp-20h]
  struct _FILETIME v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+54h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v8 = a2;
  v9 = 0;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v16 = v4;
  CurrentThreadId = GetCurrentThreadId();
  v15 = L"AudioServerDeriveStreamCategory";
  v17 = 0;
  v18 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                             * v6
                                                                             * (__int128)0x5555555555555555LL) >> 64)
                                                        - 10000 * v6) >> 63)
                                    + ((__int64)(((unsigned __int128)(10000 * v6 * (__int128)0x5555555555555555LL) >> 64)
                                               - 10000 * v6) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  if ( (unsigned int)v8 > 0xE || a3 > 0x17 )
    goto LABEL_11;
  if ( (_DWORD)v8 )
  {
    if ( !a3 )
    {
      a3 = dword_18018C710[v8];
      goto LABEL_9;
    }
LABEL_11:
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1151,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    goto LABEL_10;
  }
LABEL_9:
  *a4 = a3;
LABEL_10:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
