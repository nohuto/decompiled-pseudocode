/*
 * XREFs of IoDiscardDeferredLiveDumpData @ 0x1405CE89C
 * Callers:
 *     DbgkpWerCleanupContext @ 0x14078EC38 (DbgkpWerCleanupContext.c)
 * Callees:
 *     IopLiveDumpReleaseResources @ 0x1405D3E34 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1405D4B5C (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1405D4D44 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoDiscardDeferredLiveDumpData(PVOID P)
{
  IopLiveDumpTraceInterfaceStart(2LL);
  IopLiveDumpTraceInterfaceEnd(P, 2LL, 0LL, 0LL);
  IopLiveDumpReleaseResources(P);
  ExFreePoolWithTag(P, 0x706D644Cu);
  return 0LL;
}
