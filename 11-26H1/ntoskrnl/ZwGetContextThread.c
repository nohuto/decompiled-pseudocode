/*
 * XREFs of ZwGetContextThread @ 0x140725350
 * Callers:
 *     DifZwGetContextThreadWrapper @ 0x1406A7500 (DifZwGetContextThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwGetContextThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
