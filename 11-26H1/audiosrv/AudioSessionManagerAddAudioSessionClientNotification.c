/*
 * XREFs of AudioSessionManagerAddAudioSessionClientNotification @ 0x1800D2D60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionManagerAddAudioSessionClientNotification(__int64 *a1)
{
  __int64 v1; // rsi
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v3; // edi
  struct AudioSrvTelemetryProvider *v4; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  int v7; // eax
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = *a1;
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v4 + 1),
    v3,
    (struct _TP_TIMER *)L"AudioSessionManagerAddAudioSessionClientNotification",
    pftDueTime);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v1 + 8) + 112LL))(*(_QWORD *)(v1 + 8)) )
  {
    v5 = -2147024891;
    v6 = 1548LL;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)v1 + 96LL) + 16LL))(
           *(_QWORD *)(*(_QWORD *)v1 + 96LL),
           *(_QWORD *)(v1 + 8));
    v5 = v7;
    if ( v7 >= 0 )
    {
      *(_BYTE *)(v1 + 16) = 1;
      v5 = 0;
      goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v7);
    v6 = 1550LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v5);
LABEL_7:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v5;
}
