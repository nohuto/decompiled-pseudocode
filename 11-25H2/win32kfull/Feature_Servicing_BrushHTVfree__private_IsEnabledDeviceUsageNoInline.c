/*
 * XREFs of Feature_Servicing_BrushHTVfree__private_IsEnabledDeviceUsageNoInline @ 0x140321924
 * Callers:
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1400F6C80 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 * Callees:
 *     Feature_Servicing_BrushHTVfree__private_IsEnabledFallback @ 0x14032195C (Feature_Servicing_BrushHTVfree__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_BrushHTVfree__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_BrushHTVfree__private_featureState & 0x10) != 0 )
    return Feature_Servicing_BrushHTVfree__private_featureState & 1;
  else
    return Feature_Servicing_BrushHTVfree__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_BrushHTVfree__private_featureState,
             3LL);
}
