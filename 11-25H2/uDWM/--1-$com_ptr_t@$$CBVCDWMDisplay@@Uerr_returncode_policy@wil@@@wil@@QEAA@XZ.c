/*
 * XREFs of ??1?$com_ptr_t@$$CBVCDWMDisplay@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800666C0
 * Callers:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180065E98 (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 *     ?IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x18006601C (-IsModeChangeToSecondScreenOnlyOrRevert@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@.c)
 *     ?CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z @ 0x1800AF318 (-CapturePrimary@CDisplayAnimatedVisual@@IEAAJ_KPEAPEAVCAnimatedTransitionVisual@@@Z.c)
 *     ??1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ @ 0x1800B07CC (--1CDisplayDuplicateToExtendAnimatedVisual@@MEAA@XZ.c)
 *     ?StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ @ 0x1800B4A30 (-StartImpl@CDisplaySecondaryOnlyToExtendAnimatedVisual@@EEAAJXZ.c)
 *     _CDisplayModeChangeHelper::IsNewConnectVariant_::_1_::dtor$0 @ 0x1800EC08F (_CDisplayModeChangeHelper--IsNewConnectVariant_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsNewConnectVariant_::_1_::dtor$1 @ 0x1800EC0A1 (_CDisplayModeChangeHelper--IsNewConnectVariant_--_1_--dtor$1.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$0 @ 0x1800EC0B3 (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$0.c)
 *     _CDisplayModeChangeHelper::IsModeChangeToSecondScreenOnlyOrRevert_::_1_::dtor$1 @ 0x1800EC0C5 (_CDisplayModeChangeHelper--IsModeChangeToSecondScreenOnlyOrRevert_--_1_--dtor$1.c)
 *     _CDisplaySecondaryOnlyToExtendAnimatedVisual::StartImpl_::_1_::dtor$0 @ 0x1800ED0A3 (_CDisplaySecondaryOnlyToExtendAnimatedVisual--StartImpl_--_1_--dtor$0.c)
 *     _CDisplayAnimatedVisual::CapturePrimary_::_1_::dtor$1 @ 0x1800ED0B5 (_CDisplayAnimatedVisual--CapturePrimary_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x180068014 (-Release@CDWMDisplay@@QEBAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>::~com_ptr_t<CDWMDisplay const,wil::err_returncode_policy>(
        CDWMDisplay **a1)
{
  CDWMDisplay *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return CDWMDisplay::Release(v1);
  return result;
}
