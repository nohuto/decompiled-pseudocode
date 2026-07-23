/*
 * XREFs of ZwQueryDefaultLocale @ 0x140728260
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x1406B39F0 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x140AD14E0 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryDefaultLocale(BOOLEAN UserProfile, PLCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
