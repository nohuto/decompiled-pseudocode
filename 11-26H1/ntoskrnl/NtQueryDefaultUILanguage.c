/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140B297E0
 * Callers:
 *     DifNtQueryDefaultUILanguageWrapper @ 0x1406853B0 (DifNtQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     NtQueryInstallUILanguage @ 0x140B29800 (NtQueryInstallUILanguage.c)
 */

NTSTATUS __cdecl NtQueryDefaultUILanguage(LANGID *DefaultUILanguageId)
{
  return NtQueryInstallUILanguage(DefaultUILanguageId);
}
