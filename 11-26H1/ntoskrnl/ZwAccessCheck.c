/*
 * XREFs of ZwAccessCheck @ 0x1407233F0
 * Callers:
 *     DifZwAccessCheckWrapper @ 0x140698080 (DifZwAccessCheckWrapper.c)
 * Callees:
 *     <none>
 */

__int64 ZwAccessCheck()
{
  _disable();
  __readeflags();
  return KiServiceInternal();
}
