/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x1405CC088
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14078C108 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpReleaseResources @ 0x1405D164C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405D236C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405D2554 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart(2LL);
  IopLiveDumpTraceInterfaceEnd(P, 2LL, 0LL, 0LL);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
