/*
 * XREFs of ?OnPTPDeferredMouseInputTimer@CHidInput@@EEAAJXZ @ 0x1401B0910
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14009DD20 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14009DEC0 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     InitiatePTPMouseProcessing @ 0x14013C610 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::OnPTPDeferredMouseInputTimer(CHidInput *this)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  __int64 v4; // rdx
  void **v6; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v6, "OnPTPDeferredMouseInputTimer", 0LL);
  InitiatePTPMouseProcessing(v2, v1, v3);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
    (InputTraceLogging::ThreadLockedPerfRegion *)&v6,
    v4);
  return 0LL;
}
