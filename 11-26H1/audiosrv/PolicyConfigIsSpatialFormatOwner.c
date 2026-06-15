/*
 * XREFs of PolicyConfigIsSpatialFormatOwner @ 0x18010D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigIsSpatialFormatOwner(__int64 a1, __int128 *a2, __int64 a3, _DWORD *a4)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v6; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-58h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v9 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v9 + 1),
    v6,
    (struct _TP_TIMER *)L"PolicyConfigIsSpatialFormatOwner",
    pftDueTime);
  v10 = 0;
  if ( a4 )
  {
    v11 = *(_QWORD *)g_PolicyConfig;
    v13 = *a2;
    *a4 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int128 *, __int64))(v11 + 296))(g_PolicyConfig, &v13, a3);
  }
  else
  {
    v10 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAFE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)0x80004003LL);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
