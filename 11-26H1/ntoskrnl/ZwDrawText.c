/*
 * XREFs of ZwDrawText @ 0x140725090
 * Callers:
 *     DifZwDrawTextWrapper @ 0x1406A4CB0 (DifZwDrawTextWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDrawText(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
