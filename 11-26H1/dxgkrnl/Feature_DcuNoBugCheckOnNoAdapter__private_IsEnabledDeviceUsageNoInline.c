/*
 * XREFs of Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline @ 0x14006798C
 * Callers:
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x1400678B0 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _lambda_89c28751b319d20abeaa919f1ef3608e_::operator() @ 0x1401C6B10 (_lambda_89c28751b319d20abeaa919f1ef3608e_--operator().c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1401C7910 (DxgkIddHandleSetDisplayConfig.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1402E91E4 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 * Callees:
 *     Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback @ 0x1400679C8 (Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback.c)
 */

__int64 Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DcuNoBugCheckOnNoAdapter__private_featureState & 0x10) != 0 )
    return Feature_DcuNoBugCheckOnNoAdapter__private_featureState & 1;
  else
    return Feature_DcuNoBugCheckOnNoAdapter__private_IsEnabledFallback(
             (unsigned int)Feature_DcuNoBugCheckOnNoAdapter__private_featureState,
             3LL);
}
