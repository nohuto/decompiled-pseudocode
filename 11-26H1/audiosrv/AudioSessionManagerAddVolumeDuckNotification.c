/*
 * XREFs of AudioSessionManagerAddVolumeDuckNotification @ 0x180026610
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionManagerAddVolumeDuckNotification(__int64 a1, __int64 a2, __int64 a3)
{
  struct _FILETIME pftDueTime; // rbx
  RPC_STATUS v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int Pid; // [rsp+98h] [rbp+20h] BYREF

  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  Pid = 0;
  v6 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v7 = v6 != 0 ? v6 | 0x80010000 : 0;
  if ( (v7 & 0x80000000) == 0 )
  {
    if ( !g_DuckingManager
      || (v10 = (*(__int64 (__fastcall **)(struct IAudioDuckingManager *, __int64, _QWORD, __int64))(*(_QWORD *)g_DuckingManager + 32LL))(
                  g_DuckingManager,
                  a3,
                  Pid,
                  a2),
          v7 = v10,
          v10 >= 0) )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v8 = (unsigned int)v10;
    v9 = 1574LL;
  }
  else
  {
    v8 = v7;
    v9 = 1570LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)v8);
LABEL_8:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
