/*
 * XREFs of ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800D6D14
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PreTransition_::_1_::dtor$3 @ 0x1800E9678 (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--PreTransition_-.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Node_handle<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,std::_Node_handle_map_base,HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::~_Node_handle<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,std::_Node_handle_map_base,HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>(
        void **a1)
{
  CBaseObject **v2; // rcx

  v2 = (CBaseObject **)*a1;
  if ( v2 )
  {
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(v2 + 3);
    std::_Deallocate<16>(*a1, 0x20uLL);
    *a1 = 0LL;
  }
}
