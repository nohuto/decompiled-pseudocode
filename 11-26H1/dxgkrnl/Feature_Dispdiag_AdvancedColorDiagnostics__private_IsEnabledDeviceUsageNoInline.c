/*
 * XREFs of Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x1400989A8
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 * Callees:
 *     Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback @ 0x1400989E4 (Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback.c)
 */

__int64 Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Dispdiag_AdvancedColorDiagnostics__private_featureState & 0x10) != 0 )
    return Feature_Dispdiag_AdvancedColorDiagnostics__private_featureState & 1;
  else
    return Feature_Dispdiag_AdvancedColorDiagnostics__private_IsEnabledFallback(
             (unsigned int)Feature_Dispdiag_AdvancedColorDiagnostics__private_featureState,
             3LL);
}
