/*
 * XREFs of AudioVolumeSetChannelVolumeLevelScalar @ 0x18011B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180015D70 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180027320 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeSetChannelVolumeLevelScalar(
        _QWORD *a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _TP_TIMER *pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  __int64 v11; // r8
  struct _TP_TIMER *pv[7]; // [rsp+30h] [rbp-98h] BYREF
  __int128 v14; // [rsp+68h] [rbp-60h]
  __int128 v15; // [rsp+78h] [rbp-50h] BYREF

  v14 = *a2;
  v15 = v14;
  EtwEventActivityIdControl(4LL, &v15);
  pftDueTime = (struct _TP_TIMER *)g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v10 + 1),
    v9,
    (struct _TP_TIMER *)L"AudioVolumeSetChannelVolumeLevelScalar",
    pftDueTime);
  LODWORD(pftDueTime) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)*a1 + 96LL))(
                          *a1,
                          a3,
                          v11,
                          a5,
                          a6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v15);
  return (unsigned int)pftDueTime;
}
