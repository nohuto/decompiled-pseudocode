/*
 * XREFs of ZwQueryDefaultUILanguage @ 0x140728840
 * Callers:
 *     DifZwQueryDefaultUILanguageWrapper @ 0x1406B3B60 (DifZwQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DefaultUILanguageId);
}
