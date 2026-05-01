/*
 * XREFs of _StartupNotification::StartupNotification_::_1_::dtor$1 @ 0x1806AAF48
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall StartupNotification::StartupNotification_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)(*(_QWORD *)(a2 + 80) + 8LL));
}
