/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1405B3D9C
 * Callers:
 *     DbgkpLkmdEnumApcOrDpcDataCallback @ 0x1405B3D30 (DbgkpLkmdEnumApcOrDpcDataCallback.c)
 *     DbgkpLkmdSnapData @ 0x1405B3D70 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapGlobals @ 0x1405B3DD4 (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1405B3EB0 (DbgkpLkmdSnapKernelStack.c)
 *     DbgkpLkmdSnapKernelStackSegmentCallback @ 0x1405B4010 (DbgkpLkmdSnapKernelStackSegmentCallback.c)
 *     DbgkpLkmdSnapObject @ 0x1405B4078 (DbgkpLkmdSnapObject.c)
 *     KeEnumerateProcessorDpcs @ 0x1405F10C0 (KeEnumerateProcessorDpcs.c)
 *     DbgkCaptureLiveDump @ 0x14078B088 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14078BAAC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
}
