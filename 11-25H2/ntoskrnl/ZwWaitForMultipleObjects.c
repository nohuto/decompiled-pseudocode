/*
 * XREFs of ZwWaitForMultipleObjects @ 0x14069BCA0
 * Callers:
 *     DifZwWaitForMultipleObjectsWrapper @ 0x14063DC10 (DifZwWaitForMultipleObjectsWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
