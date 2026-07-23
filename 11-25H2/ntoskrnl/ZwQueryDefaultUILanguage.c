/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x14069B9C0
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x140638280 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}
