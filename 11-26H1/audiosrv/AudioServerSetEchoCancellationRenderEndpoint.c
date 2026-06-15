/*
 * XREFs of AudioServerSetEchoCancellationRenderEndpoint @ 0x180116D00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180025ED4 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ?SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z @ 0x180113A50 (-SetEchoCancellationRenderEndpoint@CVADServer@@UEAAJ_KPEBG@Z.c)
 */

__int64 __fastcall AudioServerSetEchoCancellationRenderEndpoint(CVADServer *this, __int64 a2, unsigned __int16 *a3)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v7; // edi
  struct AudioSrvTelemetryProvider *v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[16]; // [rsp+68h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v14, this);
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v8 + 1),
    v7,
    (struct _TP_TIMER *)L"AudioServerSetEchoCancellationRenderEndpoint",
    pftDueTime);
  v9 = CVADServer::SetEchoCancellationRenderEndpoint(this, a2, a3);
  v10 = 0;
  v11 = v9;
  if ( v9 < 0 )
  {
    v10 = -2005139336;
    if ( v9 != -2005139336 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1518,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v9);
      v10 = v11;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, v15);
  return v10;
}
