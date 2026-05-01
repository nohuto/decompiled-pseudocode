/*
 * XREFs of ??1StartupNotification@@QEAA@XZ @ 0x1805601E4
 * Callers:
 *     ??1StartupFolderNotification@@QEAA@XZ @ 0x1805601BC (--1StartupFolderNotification@@QEAA@XZ.c)
 *     ??1StartupRegKeyNotification@@QEAA@XZ @ 0x18056020C (--1StartupRegKeyNotification@@QEAA@XZ.c)
 *     _StartupRegKeyNotification::StartupRegKeyNotification_::_1_::dtor$3 @ 0x1806B32F3 (_StartupRegKeyNotification--StartupRegKeyNotification_--_1_--dtor$3.c)
 *     _StartupFolderNotification::StartupFolderNotification_::_1_::dtor$2 @ 0x1806CE916 (_StartupFolderNotification--StartupFolderNotification_--_1_--dtor$2.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupNotification::~StartupNotification(StartupNotification *this)
{
  std::wstring::_Tidy_deallocate((void **)this + 3);
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>((HKEY *)this + 1);
}
