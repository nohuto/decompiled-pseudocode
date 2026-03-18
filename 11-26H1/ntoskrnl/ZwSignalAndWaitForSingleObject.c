/*
 * XREFs of ZwSignalAndWaitForSingleObject @ 0x140726D10
 * Callers:
 *     DifZwSignalAndWaitForSingleObjectWrapper @ 0x1406BCEA0 (DifZwSignalAndWaitForSingleObjectWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSignalAndWaitForSingleObject(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
