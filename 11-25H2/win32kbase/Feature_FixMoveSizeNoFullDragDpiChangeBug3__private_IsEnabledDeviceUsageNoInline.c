/*
 * XREFs of Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x140222CEC
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14019045C (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 * Callees:
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback @ 0x140222D24 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback.c)
 */

__int64 Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 0x10) != 0 )
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState & 1;
  else
    return Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledFallback(
             (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_featureState,
             3LL);
}
