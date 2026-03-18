/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14069B9C0
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x140638280 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
