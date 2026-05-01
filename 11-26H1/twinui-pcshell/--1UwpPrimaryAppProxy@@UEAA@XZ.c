/*
 * XREFs of ??1UwpPrimaryAppProxy@@UEAA@XZ @ 0x1804EFB50
 * Callers:
 *     ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x1804EFE10 (--_GUwpPrimaryAppProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1802C1CE0 (-_Tidy@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-.c)
 */

void __fastcall UwpPrimaryAppProxy::~UwpPrimaryAppProxy(UwpPrimaryAppProxy *this)
{
  std::vector<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>::_Tidy((__int64)this + 48);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 1);
  *(_QWORD *)this = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
}
