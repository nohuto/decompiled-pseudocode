/*
 * XREFs of AudioServerSetAllVolumes @ 0x180024DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z @ 0x180024CA0 (-SetAllVolumes@CVADServer@@UEAAJIPEBMPEAH@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerSetAllVolumes(CVADServer *this, unsigned int a2, const float *a3, int *a4)
{
  GUID v8; // xmm0
  struct _FILETIME v9; // rbx
  __int64 v10; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v12; // eax
  unsigned int v13; // ebx
  struct _FILETIME pftDueTime[2]; // [rsp+20h] [rbp-49h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-29h]
  const wchar_t *v18; // [rsp+48h] [rbp-21h]
  struct _FILETIME v19; // [rsp+50h] [rbp-19h]
  char v20; // [rsp+58h] [rbp-11h]
  __int64 v21; // [rsp+5Ch] [rbp-Dh]
  GUID v22; // [rsp+68h] [rbp-1h]
  GUID v23; // [rsp+78h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( this )
    v8 = (GUID)*((_OWORD *)this + 16);
  else
    v8 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v8;
  v22 = v8;
  v23 = v8;
  EtwEventActivityIdControl(4LL, &v23);
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v19 = v9;
  CurrentThreadId = GetCurrentThreadId();
  v18 = L"AudioServerSetAllVolumes";
  v20 = 0;
  v21 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v10
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v10) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v10 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v10) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  v12 = CVADServer::SetAllVolumes((struct _RTL_CRITICAL_SECTION *)this, a2, a3, a4);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v12);
  else
    v13 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v23);
  return v13;
}
