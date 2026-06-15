/*
 * XREFs of AudioSessionSetVolume @ 0x1800D1130
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionSetVolume(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  struct _TP_TIMER *pv[8]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *a1;
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v9 + 1),
    v8,
    (struct _TP_TIMER *)L"AudioSessionSetVolume",
    pftDueTime);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v4 + 296LL))(v4, v10, a3, a4);
  v12 = v11;
  if ( v11 >= 0 )
    v12 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x802,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v11);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
