/*
 * XREFs of DbgkpLkmdSnapDataEx @ 0x1405B65AC
 * Callers:
 *     DbgkpLkmdEnumApcOrDpcDataCallback @ 0x1405B6540 (DbgkpLkmdEnumApcOrDpcDataCallback.c)
 *     DbgkpLkmdSnapData @ 0x1405B6580 (DbgkpLkmdSnapData.c)
 *     DbgkpLkmdSnapGlobals @ 0x1405B65E4 (DbgkpLkmdSnapGlobals.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1405B66C0 (DbgkpLkmdSnapKernelStack.c)
 *     DbgkpLkmdSnapKernelStackSegmentCallback @ 0x1405B6820 (DbgkpLkmdSnapKernelStackSegmentCallback.c)
 *     DbgkpLkmdSnapObject @ 0x1405B6888 (DbgkpLkmdSnapObject.c)
 *     KeEnumerateProcessorDpcs @ 0x1405F3A30 (KeEnumerateProcessorDpcs.c)
 *     DbgkCaptureLiveDump @ 0x14078DBB8 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdSnapThreadInContext @ 0x14078E5DC (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DbgkpLkmdSnapDataEx(__int64 a1, __int64 a2)
{
  return guard_dispatch_icall_no_overrides(a1 + 0x4000, a2);
}
