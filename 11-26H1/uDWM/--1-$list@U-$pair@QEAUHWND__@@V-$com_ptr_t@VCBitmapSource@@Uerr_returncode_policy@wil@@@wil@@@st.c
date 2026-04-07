/*
 * XREFs of ??1?$list@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x1800852E8
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::WindowJointResizeTransition_::_1_::dtor$13 @ 0x1800E746C (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--Wi_ea_1800E746C.c)
 *     _CBitmapSource::CBitmapSource_::_1_::dtor$8 @ 0x1800E8C3C (_CBitmapSource--CBitmapSource_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180085370 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Ue.c)
 */

void __fastcall std::list<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>::~list<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>(
        void **a1)
{
  std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16>(*a1, 0x20uLL);
}
