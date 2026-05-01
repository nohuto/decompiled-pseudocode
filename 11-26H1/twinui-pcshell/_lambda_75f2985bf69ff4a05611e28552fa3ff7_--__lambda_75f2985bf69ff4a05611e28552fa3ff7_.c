/*
 * XREFs of _lambda_75f2985bf69ff4a05611e28552fa3ff7_::__lambda_75f2985bf69ff4a05611e28552fa3ff7_ @ 0x1805988C0
 * Callers:
 *     _TouchEdgeGripperWindow::StartDismissAnimation_::_1_::dtor$21 @ 0x1806F802D (_TouchEdgeGripperWindow--StartDismissAnimation_--_1_--dtor$21.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 */

void __fastcall lambda_75f2985bf69ff4a05611e28552fa3ff7_::__lambda_75f2985bf69ff4a05611e28552fa3ff7_(_QWORD **a1)
{
  if ( *a1 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1);
}
