/*
 * XREFs of _CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor$4 @ 0x1806A939C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LSTATUS __fastcall CopilotHotkeyManager::InvokeCopilotOrCustomOption_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)(a2 + 144));
}
