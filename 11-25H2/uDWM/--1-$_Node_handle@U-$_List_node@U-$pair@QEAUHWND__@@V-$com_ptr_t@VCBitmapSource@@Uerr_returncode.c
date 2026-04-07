/*
 * XREFs of ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x1800D9D7C
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::PreTransition_::_1_::dtor$3 @ 0x1800ED6DB (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--PreTransition_-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18003E6C0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_G?$pair@QEAUHWND__@@V?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAAPEAXI@Z @ 0x1800DA01C (--_G-$pair@QEAUHWND__@@V-$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA.c)
 */

void __fastcall std::_Node_handle<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,std::_Node_handle_map_base,HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::~_Node_handle<std::_List_node<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>,void *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>,std::_Node_handle_map_base,HWND__ *,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>(
        void **a1)
{
  char *v2; // rcx

  v2 = (char *)*a1;
  if ( v2 )
  {
    std::pair<HWND__ * const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>::`scalar deleting destructor'(v2 + 16);
    std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
    *a1 = 0LL;
  }
}
