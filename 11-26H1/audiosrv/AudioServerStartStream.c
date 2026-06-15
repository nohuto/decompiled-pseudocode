/*
 * XREFs of AudioServerStartStream @ 0x1800658F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180114220 (-StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z.c)
 */

__int64 __fastcall AudioServerStartStream(GUID *a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  GUID v7; // xmm0
  struct _FILETIME v8; // rbx
  __int64 v9; // r12
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int started; // eax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-19h]
  const wchar_t *v17; // [rsp+48h] [rbp-11h]
  struct _FILETIME v18; // [rsp+50h] [rbp-9h]
  char v19; // [rsp+58h] [rbp-1h]
  __int64 v20; // [rsp+5Ch] [rbp+3h]
  GUID v21; // [rsp+68h] [rbp+Fh]
  GUID v22; // [rsp+78h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = 0;
  if ( a1 )
    v7 = a1[16];
  else
    v7 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v7;
  v21 = v7;
  v22 = v7;
  EtwEventActivityIdControl(4LL, &v22);
  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  v18 = v8;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"AudioServerStartStream";
  v19 = 0;
  v20 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(((unsigned __int64)(((unsigned __int128)(10000
                                                                                * v9
                                                                                * (__int128)0x5555555555555555LL) >> 64)
                                                           - 10000 * v9) >> 63)
                                       + ((__int64)(((unsigned __int128)(10000 * v9 * (__int128)0x5555555555555555LL) >> 64)
                                                  - 10000 * v9) >> 1));
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  started = CVADServer::StartStream(a1, a2, a3);
  v12 = started;
  if ( started < 0 )
  {
    v3 = -2005139336;
    if ( started != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBDB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)started);
      v3 = v12;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v22);
  return v3;
}
