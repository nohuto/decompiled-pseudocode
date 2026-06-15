/*
 * XREFs of AudioServerDisconnect @ 0x180023400
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800235E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180023C5C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerDisconnect(GUID **a1)
{
  GUID v2; // xmm0
  struct _FILETIME v3; // rbx
  __int64 v4; // rsi
  struct _TP_TIMER *ThreadpoolTimer; // rax
  LPCRITICAL_SECTION v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rcx
  struct _FILETIME pftDueTime[2]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-9h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp+7h]
  const wchar_t *v13; // [rsp+50h] [rbp+Fh]
  struct _FILETIME v14; // [rsp+58h] [rbp+17h]
  char v15; // [rsp+60h] [rbp+1Fh]
  __int64 v16; // [rsp+64h] [rbp+23h]
  GUID v17; // [rsp+70h] [rbp+2Fh]
  GUID v18; // [rsp+80h] [rbp+3Fh] BYREF

  if ( *a1 )
    v2 = (*a1)[16];
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v2;
  v17 = v2;
  v18 = v2;
  EtwEventActivityIdControl(4LL, &v18);
  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v14 = v3;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"AudioServerDisconnect";
  v15 = 0;
  v16 = 0LL;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v4
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v4) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v4 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v4) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(*a1);
  v6 = g_ADGProcess;
  v7 = g_ADGProcess;
  *a1 = 0LL;
  EnterCriticalSection(v7);
  if ( LODWORD(v6[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v6);
  LeaveCriticalSection(v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v18);
  return 0LL;
}
