/*
 * XREFs of ZwChangeThreadState @ 0x140724710
 * Callers:
 *     DifZwChangeThreadStateWrapper @ 0x14069CF60 (DifZwChangeThreadStateWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwChangeThreadState(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
