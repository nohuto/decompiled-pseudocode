/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x140048F20
 * Callers:
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140048EB0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x140048F7C (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140049048 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x14009DF14 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  DelayZonePalmRejection *Instance; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v6,
    "OnFlushDelayZonePalmRejectInputTimerNotification",
    0LL);
  Instance = DelayZonePalmRejection::GetInstance();
  DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(Instance);
  v4 = v6;
  if ( v6 )
  {
    *((_QWORD *)PtiCurrent(v3, v2) + 47) = *(_QWORD *)(v4 + 48);
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
  }
  return 0LL;
}
