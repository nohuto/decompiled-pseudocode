/*
 * XREFs of ??4?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBitmapSource@@@Z @ 0x18001BA84
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180004D7C (-Create@CBitmapSource@@SAJPEBV1@AEBUtagRECT@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z @ 0x180072CA8 (-SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x180077110 (-OnGlobalTimeUpdatedImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     ?Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z @ 0x18008523C (-Get@CFallbackBitmapSource@@SAJPEAPEAVCBitmapSource@@@Z.c)
 *     ?SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800965FC (-SetBitmap@CAnimatedTransitionVisual@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?RegisterBitmap@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAXPEAUHWND__@@PEAVCBitmapSource@@@Z @ 0x1800D74F0 (-RegisterBitmap@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@UEAAX.c)
 *     ?TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobalTimeTrackVisual@@PEAPEAVCAnimatedTransitionVisual@@_N@Z @ 0x1800DC210 (-TransferScreenVisual@TransitionState@implementation@Transitions@Udwm@winrt@@UEAAJPEAPEAVCGlobal.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject **__fastcall wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>::operator=(
        CBaseObject **a1,
        CBaseObject *a2)
{
  CBaseObject *v2; // r8

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    CBaseObject::AddRef(a2);
  if ( v2 )
    CBaseObject::Release(v2);
  return a1;
}
