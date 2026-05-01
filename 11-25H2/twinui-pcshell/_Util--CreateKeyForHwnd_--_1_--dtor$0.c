/*
 * XREFs of _Util::CreateKeyForHwnd_::_1_::dtor$0 @ 0x1806DADAA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1801D38D0 (--1-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral.c)
 */

LSTATUS __fastcall Util::CreateKeyForHwnd_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  LSTATUS result; // eax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>(*(HKEY **)(a2 + 88));
  }
  return result;
}
