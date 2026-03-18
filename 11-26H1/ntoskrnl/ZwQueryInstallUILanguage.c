/*
 * XREFs of ZwQueryInstallUILanguage @ 0x140725F90
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x1406B22E0 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x1408A9C44 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
