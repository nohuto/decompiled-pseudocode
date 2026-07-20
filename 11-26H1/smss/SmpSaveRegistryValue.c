/*
 * XREFs of SmpSaveRegistryValue @ 0x1400193B0
 * Callers:
 *     SmpConfigureDosDevices @ 0x1400137B0 (SmpConfigureDosDevices.c)
 *     SmpConfigureExcludeKnownDlls @ 0x140013920 (SmpConfigureExcludeKnownDlls.c)
 *     SmpConfigureExecute @ 0x140013990 (SmpConfigureExecute.c)
 *     SmpConfigureExistingPageFiles @ 0x1400139F0 (SmpConfigureExistingPageFiles.c)
 *     SmpConfigureFileRenames @ 0x140013A20 (SmpConfigureFileRenames.c)
 *     SmpConfigureKnownDlls @ 0x140013A70 (SmpConfigureKnownDlls.c)
 *     SmpConfigureOneTimeExecute @ 0x140013CB0 (SmpConfigureOneTimeExecute.c)
 *     SmpConfigureSubSystems @ 0x140013E80 (SmpConfigureSubSystems.c)
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140008210 (SmpSaveRegistryValue_U.c)
 */

__int64 __fastcall SmpSaveRegistryValue(
        struct _UNICODE_STRING **a1,
        const WCHAR *a2,
        const WCHAR *a3,
        char a4,
        struct _UNICODE_STRING **a5)
{
  struct _UNICODE_STRING *p_DestinationString; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v11 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&v11, a2);
  p_DestinationString = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    p_DestinationString = &DestinationString;
  }
  return SmpSaveRegistryValue_U(a1, &v11, p_DestinationString, a4, a5);
}
