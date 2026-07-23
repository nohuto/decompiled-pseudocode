/*
 * XREFs of CmFcpIsValidMemoryRange @ 0x1406E7458
 * Callers:
 *     CmFcpCountFeatureDescriptors @ 0x1406E7390 (CmFcpCountFeatureDescriptors.c)
 *     CmFcpPopulateModuleFeatures @ 0x1406E74B8 (CmFcpPopulateModuleFeatures.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
 */

bool __fastcall CmFcpIsValidMemoryRange(__int64 a1, unsigned __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !a1 || a2 > 0x1000 )
    return 0;
  if ( MmIsAddressValidEx(a1) )
    return MmIsAddressValidEx(a1 + a2 - 1) != 0;
  return v2;
}
