/*
 * XREFs of NtQueryDefaultUILanguage @ 0x140B27B50
 * Callers:
 *     DifNtQueryDefaultUILanguageWrapper @ 0x1406817D0 (DifNtQueryDefaultUILanguageWrapper.c)
 * Callees:
 *     NtQueryInstallUILanguage @ 0x140B27B70 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall NtQueryDefaultUILanguage(__int64 a1)
{
  return NtQueryInstallUILanguage(a1);
}
