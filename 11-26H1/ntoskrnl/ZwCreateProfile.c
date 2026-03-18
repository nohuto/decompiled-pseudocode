/*
 * XREFs of ZwCreateProfile @ 0x140724C30
 * Callers:
 *     DifZwCreateProfileWrapper @ 0x1406A1470 (DifZwCreateProfileWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateProfile(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
