/*
 * XREFs of ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x140212980
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     InitiatePTPMouseProcessing @ 0x1400F81F0 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::OnPTPDeferredMouseInputTimer(CHidInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 *v4; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v4, "OnPTPDeferredMouseInputTimer", 0LL);
  InitiatePTPMouseProcessing(v2, v1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v4);
  return 0LL;
}
