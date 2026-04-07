/*
 * XREFs of ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800770D8
 * Callers:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800069FC (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180006B90 (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800AED08 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B0074 (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4540 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     _CDisplayModeChangeHelper::IsNewConnectVariant_::_1_::dtor$0 @ 0x1800E6D5A (_CDisplayModeChangeHelper--IsNewConnectVariant_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsNewConnectVariant_::_1_::dtor$1 @ 0x1800E6D6C (_CDisplayModeChangeHelper--IsNewConnectVariant_--_1_--dtor$1.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$0 @ 0x1800E6D7E (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$1 @ 0x1800E6D90 (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$1.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$0 @ 0x1800E8FF3 (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$1 @ 0x1800E9005 (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$1.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl_::_1_::dtor$0 @ 0x1800E904F (_CDisplaySecondaryOnlyToExtendAnimatedVisual--StartImpl_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180008418 (-Release@CDWMDisplay@@QEBAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(
        CDWMDisplay **a1)
{
  CDWMDisplay *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CDWMDisplay::Release(v1);
  return result;
}
