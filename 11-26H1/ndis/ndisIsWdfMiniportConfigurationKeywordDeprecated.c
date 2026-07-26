/*
 * XREFs of ndisIsWdfMiniportConfigurationKeywordDeprecated @ 0x140021280
 * Callers:
 *     NdisWdfReadConfiguration @ 0x14001FCC0 (NdisWdfReadConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisIsWdfMiniportConfigurationKeywordDeprecated(PCUNICODE_STRING String1)
{
  const UNICODE_STRING *i; // rbx

  for ( i = &stru_1400F4E60; i != &Ndis::ProtocolListValueName; ++i )
  {
    if ( RtlEqualUnicodeString(String1, i, 1u) )
      return 1;
  }
  return 0;
}
