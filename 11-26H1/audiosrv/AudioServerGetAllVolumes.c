/*
 * XREFs of AudioServerGetAllVolumes @ 0x1800759D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180075B90 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerGetAllVolumes(CVADServer *this, unsigned int a2, float *a3)
{
  GUID v6; // xmm0
  struct _FILETIME v7; // rbx
  __int64 v8; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int AllVolumes; // eax
  unsigned int v11; // ebx
  struct _FILETIME pftDueTime[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-19h]
  const wchar_t *v16; // [rsp+48h] [rbp-11h]
  struct _FILETIME v17; // [rsp+50h] [rbp-9h]
  char v18; // [rsp+58h] [rbp-1h]
  __int64 v19; // [rsp+5Ch] [rbp+3h]
  GUID v20; // [rsp+68h] [rbp+Fh]
  GUID v21; // [rsp+78h] [rbp+1Fh] BYREF

  if ( this )
    v6 = (GUID)*((_OWORD *)this + 16);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v6;
  v20 = v6;
  v21 = v6;
  EtwEventActivityIdControl(4LL, &v21);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v17 = v7;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioServerGetAllVolumes";
  v18 = 0;
  v19 = 0LL;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v8
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v8) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v8 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v8) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  AllVolumes = CVADServer::GetAllVolumes(this, a2, a3);
  v11 = AllVolumes;
  if ( AllVolumes < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetAllVolumes", 3424, AllVolumes);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v21);
  return v11;
}
