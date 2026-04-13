/*
 * XREFs of _CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::dtor$0 @ 0x1800BE405
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys_::_1_::dtor_0()
{
  return wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>();
}
