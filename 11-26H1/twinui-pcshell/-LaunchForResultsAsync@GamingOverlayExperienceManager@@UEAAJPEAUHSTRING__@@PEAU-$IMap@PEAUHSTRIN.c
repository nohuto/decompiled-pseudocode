/*
 * XREFs of ?LaunchForResultsAsync@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAVValueSet@Collections@Foundation@Windows@@@56@@Z @ 0x18034C310
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18002A230 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??4hstring@winrt@@QEAAAEAU01@AEBU01@@Z @ 0x18002E5B4 (--4hstring@winrt@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@Uhstring@5@U?$IMap@Uhstring@winrt@@U12@@Collections@345@@Z @ 0x18034D01C (-LaunchForResultsAsyncInternal@GamingOverlayExperienceManager@@AEAA-AU-$IAsyncOperation@UValueSe.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::LaunchForResultsAsync(
        __int64 a1,
        __int64 a2,
        struct IUnknown *a3,
        __int64 *a4)
{
  void *v7; // r8
  unsigned int v8; // r8d
  winrt::hstring *v9; // rax
  __int64 v10; // rax
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-58h] BYREF
  __int64 v14; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v15[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF
  struct winrt::impl::hstring_header *v18; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v17 = a2;
  *a4 = 0LL;
  v18 = 0LL;
  winrt::hstring::operator=(&v18, &v17, (unsigned int)a3);
  v14 = 0LL;
  winrt::copy_from_abi((winrt *)&v14, a3, v7);
  v16 = &v13;
  v13 = v14;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v13);
  try
  {
    v9 = winrt::hstring::hstring((winrt::hstring *)v15, (const struct winrt::hstring *)&v18, v8);
    GamingOverlayExperienceManager::LaunchForResultsAsyncInternal(a1 - 160, &v17, v9, &v13);
    v10 = v17;
    v17 = 0LL;
    *a4 = v10;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xF3D,
                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                     v11);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v14);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v18);
    return (unsigned int)v13;
  }
  return result;
}
