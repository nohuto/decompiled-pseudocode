/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1402129C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x140211228 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPInertiaHandleEvent", 0LL);
  CPTPProcessor::EndInertiaForContainer(*((void **)this + 178), *((_QWORD *)this + 179));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
