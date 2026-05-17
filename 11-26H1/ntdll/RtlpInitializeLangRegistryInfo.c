/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x1800ED7C0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1801431B0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18000844C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(__int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo(a1);
  return result;
}
