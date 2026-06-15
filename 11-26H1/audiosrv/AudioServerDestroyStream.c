/*
 * XREFs of AudioServerDestroyStream @ 0x180064490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180064650 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerDestroyStream(CVADServer *this, unsigned __int64 a2)
{
  GUID v4; // xmm0
  struct _FILETIME v5; // rbx
  __int64 v6; // r14
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v8; // eax
  unsigned int v9; // ebx
  struct _FILETIME pftDueTime[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-9h]
  const wchar_t *v14; // [rsp+48h] [rbp-1h]
  struct _FILETIME v15; // [rsp+50h] [rbp+7h]
  char v16; // [rsp+58h] [rbp+Fh]
  __int64 v17; // [rsp+5Ch] [rbp+13h]
  GUID v18; // [rsp+68h] [rbp+1Fh]
  GUID v19; // [rsp+78h] [rbp+2Fh] BYREF

  if ( this )
    v4 = (GUID)*((_OWORD *)this + 16);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v4;
  v18 = v4;
  v19 = v4;
  EtwEventActivityIdControl(4LL, &v19);
  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v15 = v5;
  CurrentThreadId = GetCurrentThreadId();
  v14 = L"AudioServerDestroyStream";
  v16 = 0;
  v17 = 0LL;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v6
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v6) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v6 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v6) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  v8 = CVADServer::DestroyStream(this, a2);
  v9 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerDestroyStream", 3138, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v19);
  return v9;
}
