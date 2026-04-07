/*
 * XREFs of ??_G?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAPEAXI@Z @ 0x1800DA01C
 * Callers:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800D953C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_re.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D9D14 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmap.c)
 *     ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800D9D7C (--1-$_Node_handle@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode.c)
 *     ?PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransitionType@456@AEBUTransitionState@456@@Z @ 0x1800DA368 (-PreTransition@WindowJointResizeTransition@implementation@Private@Transitions@Udwm@winrt@@QEAAXW.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B134 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

__int64 __fastcall std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::`scalar deleting destructor'(
        __int64 a1)
{
  wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>((CBaseObject **)(a1 + 8));
  return a1;
}
