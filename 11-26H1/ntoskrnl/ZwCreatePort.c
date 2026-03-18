/*
 * XREFs of ZwCreatePort @ 0x140724BB0
 * Callers:
 *     DifZwCreatePortWrapper @ 0x1406A0A00 (DifZwCreatePortWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
