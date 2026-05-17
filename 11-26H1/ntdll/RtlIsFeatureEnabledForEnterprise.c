/*
 * XREFs of RtlIsFeatureEnabledForEnterprise @ 0x180148560
 * Callers:
 *     <none>
 * Callees:
 *     RtlpEcReadPolicyState @ 0x1801485E0 (RtlpEcReadPolicyState.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x180148688 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpEtcGetDwordFromRegistry @ 0x1801487D4 (RtlpEtcGetDwordFromRegistry.c)
 *     RtlpEtcIsValidFeatureId @ 0x180148858 (RtlpEtcIsValidFeatureId.c)
 */

char __fastcall RtlIsFeatureEnabledForEnterprise(int a1)
{
  char v3; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v4; // [rsp+40h] [rbp+18h] BYREF

  v3 = 1;
  v4 = 0;
  if ( (int)RtlpEtcGetDwordFromRegistry(
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\FeatureManagement\\EnterpriseTempControls\\Active",
              L"ActiveConfig",
              &v4) >= 0
    && (unsigned __int8)RtlpEtcIsValidFeatureId(
                          __ROR4__(_byteswap_ulong(a1 ^ 0x74161A4E) ^ 0x8FB23D4F, 255) ^ 0x833EA8FF,
                          v4)
    && (int)RtlpEcReadPolicyState(&v3) < 0 )
  {
    RtlpEcReadSkuUpdateManagementGroup(&v3);
  }
  return v3;
}
