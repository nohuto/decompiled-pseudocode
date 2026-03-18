/*
 * XREFs of ZwQueryInstallUILanguage @ 0x14069DCC0
 * Callers:
 *     DifZwQueryInstallUILanguageWrapper @ 0x140639D90 (DifZwQueryInstallUILanguageWrapper.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14081DF7C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryInstallUILanguage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
