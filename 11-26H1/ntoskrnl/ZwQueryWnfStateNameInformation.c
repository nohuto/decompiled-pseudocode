/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x140726230
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14061F790 (RtlRaiseCustomSystemEventTrigger.c)
 *     DifZwQueryWnfStateNameInformationWrapper @ 0x1406B51B0 (DifZwQueryWnfStateNameInformationWrapper.c)
 *     DbgkpStartSystemErrorHandler @ 0x14078AF7C (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
