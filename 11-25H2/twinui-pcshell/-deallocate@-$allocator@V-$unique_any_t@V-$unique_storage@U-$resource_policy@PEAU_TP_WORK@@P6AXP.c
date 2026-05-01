/*
 * XREFs of ?deallocate@?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAXQEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_K@Z @ 0x1805B7758
 * Callers:
 *     _std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const_&__::_1_::catch$3 @ 0x1806D2AF5 (_std--vector_winrt--Windows--Foundation--Uri_std--allocator_winrt--Windows--Foundation--Uri___--.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IRdpShellExtension__std::allocator_Microsoft::WRL::ComPtr_IRdpShellExtension_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IRdpShellExtension__const_&__::_1_::catch$1 @ 0x1806DCBDA (_std--vector_Microsoft--WRL--ComPtr_IRdpShellExtension__std--allocator_Microsoft--WRL--ComPtr_IR.c)
 *     _std::vector_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void_(__cdecl_)(_TP_WORK__)_&wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t______std::allocator_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void_(__cdecl_)(_TP_WORK__)_&wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t_________::_Emplace_reallocate_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void_(__cdecl_)(_TP_WORK__)_&wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t________::_1_::catch$1 @ 0x1806DCC14 (_std--vector_wil--unique_any_t_wil--details--unique_storage_wil--details--resource_policy__TP_WO.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(8 * a3));
}
