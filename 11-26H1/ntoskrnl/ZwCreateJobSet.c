/*
 * XREFs of ZwCreateJobSet @ 0x140724A90
 * Callers:
 *     DifZwCreateJobSetWrapper @ 0x14069F8D0 (DifZwCreateJobSetWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateJobSet(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
