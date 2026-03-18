/*
 * XREFs of ZwNotifyChangeMultipleKeys @ 0x140725890
 * Callers:
 *     DifZwNotifyChangeMultipleKeysWrapper @ 0x1406AAE00 (DifZwNotifyChangeMultipleKeysWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwNotifyChangeMultipleKeys(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
