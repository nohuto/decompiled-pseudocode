/*
 * XREFs of ?NotifyMemorySegmentHasData@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140037C80
 * Callers:
 *     ?NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x1400379E0 (-NotifyMemorySegmentIdle@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140037B00 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     PurgeSegments @ 0x1400FEE38 (PurgeSegments.c)
 *     ?CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ @ 0x140104FA0 (-CheckMemorySegmentsFState@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_GLOBAL::NotifyMemorySegmentHasData(VIDMM_GLOBAL *this)
{
  return (*((__int64 (__fastcall **)(_QWORD))this + 5008))(*((_QWORD *)this + 5009));
}
