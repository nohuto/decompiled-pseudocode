/*
 * XREFs of ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x140212920
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x140038CEC (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1402152B4 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnDelayZonePalmRejectionTimerNotification(CHidInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  DelayZonePalmRejection *Instance; // rax
  char v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v6; // [rsp+40h] [rbp+18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    &v6,
    "OnDelayZonePalmRejectionTimerNotification",
    0LL);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v5);
  Instance = DelayZonePalmRejection::GetInstance(v2, v1);
  DelayZonePalmRejection::PalmRejectTimerProc(Instance);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v5);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v6);
  return 0LL;
}
