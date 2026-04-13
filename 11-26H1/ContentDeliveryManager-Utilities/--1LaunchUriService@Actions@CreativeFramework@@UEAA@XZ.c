/*
 * XREFs of ??1LaunchUriService@Actions@CreativeFramework@@UEAA@XZ @ 0x18009A474
 * Callers:
 *     ??_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x18009A7C0 (--_GLaunchUriService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::LaunchUriService::~LaunchUriService(
        CreativeFramework::Actions::LaunchUriService *this)
{
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 13);
  std::wstring::_Tidy((_QWORD *)this + 9, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 5, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
