/*
 * XREFs of _std::vector_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void_(__cdecl_)(_TP_WORK__)_&wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t______std::allocator_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void_(__cdecl_)(_TP_WORK__)_&wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t_________::_Emplace_reallocate_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void_(__cdecl_)(_TP_WORK__)_&wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t________::_1_::catch$1 @ 0x1806DCC14
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAXQEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@_K@Z @ 0x1805B7758 (-deallocate@-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXP.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18064D1C8 (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_WORK.c)
 */

void __fastcall __noreturn std::vector_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void____cdecl____TP_WORK_____wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t______std::allocator_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void____cdecl____TP_WORK_____wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t_________::_Emplace_reallocate_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy__TP_WORK___void____cdecl____TP_WORK_____wil::details::DestroyThreadPoolWork_2_::Destroy_wistd::integral_constant_unsigned___int64_0___TP_WORK____TP_WORK___0_std::nullptr_t________::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>>(
    *(struct _TP_WORK ***)(a2 + 112),
    *(struct _TP_WORK ***)(a2 + 136));
  std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>::deallocate(
    v3,
    *(void **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
