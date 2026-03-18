/*
 * XREFs of ZwReadRequestData @ 0x140723E70
 * Callers:
 *     DifZwReadRequestDataWrapper @ 0x1406B5F10 (DifZwReadRequestDataWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReadRequestData(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
