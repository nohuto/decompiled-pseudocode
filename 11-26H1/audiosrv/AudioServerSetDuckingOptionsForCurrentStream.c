/*
 * XREFs of AudioServerSetDuckingOptionsForCurrentStream @ 0x180116C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180025ED4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x180113854 (-SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z.c)
 */

__int64 __fastcall AudioServerSetDuckingOptionsForCurrentStream(struct _RTL_CRITICAL_SECTION *this, int a2)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v5; // edi
  struct AudioSrvTelemetryProvider *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v11; // [rsp+68h] [rbp-30h] BYREF
  _BYTE v12[16]; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)&v11, this);
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v6 + 1),
    v5,
    (struct _TP_TIMER *)L"AudioServerSetDuckingOptionsForCurrentStream",
    pftDueTime);
  v7 = CVADServer::SetDuckingOptionsForCurrentStream(this, a2 != 0);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C1,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v12);
  return v8;
}
