/*
 * XREFs of ZwCreateProcess @ 0x140724BF0
 * Callers:
 *     DifZwCreateProcessWrapper @ 0x1406A10B0 (DifZwCreateProcessWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
