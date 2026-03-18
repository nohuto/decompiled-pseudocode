/*
 * XREFs of ZwQueryDefaultLocale @ 0x140723690
 * Callers:
 *     DifZwQueryDefaultLocaleWrapper @ 0x1406AFE10 (DifZwQueryDefaultLocaleWrapper.c)
 *     NtInitializeNlsFiles @ 0x140AD4080 (NtInitializeNlsFiles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryDefaultLocale(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
