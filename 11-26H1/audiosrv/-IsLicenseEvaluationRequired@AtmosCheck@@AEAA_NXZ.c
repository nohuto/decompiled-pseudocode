/*
 * XREFs of ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180065228
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180064CB0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     _lambda_4f236b1e81c6618792afd531ba269699_::operator() @ 0x180154FF4 (_lambda_4f236b1e81c6618792afd531ba269699_--operator().c)
 *     _lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_::operator() @ 0x18015530C (_lambda_a5ab363fcb9b7ea3ea21f546eba5c54f_--operator().c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x180155E5C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180064E88 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x1800B0DB0 (-IsDolbyLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800B5998 (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ @ 0x180155AB8 (-EnableAllSpatialCapabilities@AtmosCheck@@AEAAXXZ.c)
 *     ?IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z @ 0x1801564B4 (-IsLogLicenseResult@AtmosCheck@@AEAA_NPEAUSpatialLicenseResult@@@Z.c)
 */

char __fastcall AtmosCheck::IsLicenseEvaluationRequired(AtmosCheck *this)
{
  char v2; // r8
  bool IsLogLicenseResult; // bl
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]

  if ( !AtmosCheck::IsDolbyLicenseCheckEnabledOnCurrentPlatform(this) )
  {
    *((_DWORD *)this + 47) = 1;
    v2 = 0;
LABEL_3:
    AtmosCheck::TraceResult(this, 0, v2);
    return 0;
  }
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
    && (unsigned int)IsDolbyLicenseCheckSkippedOnCurrentPlatform() )
  {
    *((_DWORD *)this + 47) = 2;
    v6 = 0LL;
    v7 = 0;
    v5 = 0LL;
    IsLogLicenseResult = AtmosCheck::IsLogLicenseResult(this, (struct SpatialLicenseResult *)&v5);
    AtmosCheck::EnableAllSpatialCapabilities(this);
    v2 = IsLogLicenseResult;
    goto LABEL_3;
  }
  return 1;
}
