/*
 * XREFs of ZwSuspendThread @ 0x140726DF0
 * Callers:
 *     DifZwSuspendThreadWrapper @ 0x1406BD4C0 (DifZwSuspendThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSuspendThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
