/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x14069DF60
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405E3BE0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x1408B7284 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
