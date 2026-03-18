/*
 * XREFs of ZwReplaceKey @ 0x14069E1A0
 * Callers:
 *     DifZwReplaceKeyWrapper @ 0x14063B2E0 (DifZwReplaceKeyWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwReplaceKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
