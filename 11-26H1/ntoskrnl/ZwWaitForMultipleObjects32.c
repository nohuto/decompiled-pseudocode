/*
 * XREFs of ZwWaitForMultipleObjects32 @ 0x140723730
 * Callers:
 *     DifZwWaitForMultipleObjects32Wrapper @ 0x1406BF4A0 (DifZwWaitForMultipleObjects32Wrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwWaitForMultipleObjects32(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
