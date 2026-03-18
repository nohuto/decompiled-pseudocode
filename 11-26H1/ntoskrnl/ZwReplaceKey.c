/*
 * XREFs of ZwReplaceKey @ 0x140726470
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x1406B71F0 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplaceKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
