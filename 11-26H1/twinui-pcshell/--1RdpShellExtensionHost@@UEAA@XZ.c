/*
 * XREFs of ??1RdpShellExtensionHost@@UEAA@XZ @ 0x1806739F4
 * Callers:
 *     ??1?$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAA@XZ @ 0x1806738C4 (--1-$module_count_wrapper@VRdpShellExtensionHost@@@details@wil@@UEAA@XZ.c)
 *     ??_GRdpShellExtensionHost@@UEAAPEAXI@Z @ 0x180673D6C (--_GRdpShellExtensionHost@@UEAAPEAXI@Z.c)
 *     _winrt::impl::heap_implements_wil::details::module_count_wrapper_RdpShellExtensionHost___::heap_implements_wil::details::module_count_wrapper_RdpShellExtensionHost____::_1_::dtor$1 @ 0x180705899 (_winrt--impl--heap_implements_wil--details--module_count_wrapper_RdpShellExtensionHost___--heap_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@0@@Z @ 0x1806731D4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIRdpShellExtension@@@WRL@Microsoft@@@std@@@std@@YAXPEA.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@@std@@YAXPEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAV12@AEAV?$allocator@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$01@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@0@@Z @ 0x18067320C (--$_Destroy_range@V-$allocator@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_TP_WORK.c)
 */

void __fastcall RdpShellExtensionHost::~RdpShellExtensionHost(RdpShellExtensionHost *this)
{
  struct _TP_WORK **v2; // rcx
  __int64 *v3; // rcx

  v2 = (struct _TP_WORK **)*((_QWORD *)this + 25);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<2>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,_TP_WORK *,0,std::nullptr_t>>>>>(
      v2,
      *((struct _TP_WORK ***)this + 26));
    std::_Deallocate<16>(
      *((void **)this + 25),
      (struct std::nothrow_t *)((*((_QWORD *)this + 27) - *((_QWORD *)this + 25)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v3 = (__int64 *)*((_QWORD *)this + 22);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IRdpShellExtension>>>(v3, *((__int64 **)this + 23));
    std::_Deallocate<16>(
      *((void **)this + 22),
      (struct std::nothrow_t *)((*((_QWORD *)this + 24) - *((_QWORD *)this + 22)) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
  }
  winrt::immersive_shell_component::~immersive_shell_component(this);
}
