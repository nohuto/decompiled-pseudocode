/*
 * XREFs of ??1?$_Node_handle@U?$_List_node@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@PEAX@std@@V?$allocator@U?$pair@QEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@2@U_Node_handle_map_base@2@PEAUHWND__@@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@QEAA@XZ @ 0x1800D6CD8
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::WindowJointResizeTransition::RegisterBitmap_::_1_::dtor$0 @ 0x1800E968A (_winrt--Udwm--Transitions--Private--implementation--WindowJointResizeTransition--RegisterBitmap_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18000CEFC (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x18001EBF8 (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Node_handle<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,std::_Node_handle_map_base,HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>::~_Node_handle<std::_List_node<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>,void *>,std::allocator<std::pair<HWND__ * const,winrt::Udwm::Transitions::UserResizeVisual>>,std::_Node_handle_map_base,HWND__ *,winrt::Udwm::Transitions::UserResizeVisual>(
        void **a1)
{
  __int64 *v2; // rcx

  v2 = (__int64 *)*a1;
  if ( v2 )
  {
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v2 + 3);
    std::_Deallocate<16>(*a1, 0x20uLL);
    *a1 = 0LL;
  }
}
