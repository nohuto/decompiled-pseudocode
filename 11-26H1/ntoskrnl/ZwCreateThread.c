/*
 * XREFs of ZwCreateThread @ 0x140723DB0
 * Callers:
 *     DifZwCreateThreadWrapper @ 0x1406A2420 (DifZwCreateThreadWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
