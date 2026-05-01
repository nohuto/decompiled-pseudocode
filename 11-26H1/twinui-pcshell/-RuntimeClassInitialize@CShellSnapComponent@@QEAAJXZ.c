/*
 * XREFs of ?RuntimeClassInitialize@CShellSnapComponent@@QEAAJXZ @ 0x180207234
 * Callers:
 *     ??$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180207178 (--$MakeAndInitialize@VCShellSnapComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x18002694C (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18004A1A8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180054B64 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1801C5810 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ?CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B1A7C (-CSnapAssistController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B348C (-SnapServiceProvider_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@$$V@winrt@@YA?A_PXZ @ 0x1802B5370 (--$make@UImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winr.c)
 *     ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1802C3380 (--$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA-A_PXZ.c)
 *     ??$get_activation_factory@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@winrt@@@winrt@@YA?AUISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x18059C56C (--$get_activation_factory@UISnapLayoutManagerExtensionStatics@PlatformExtensions@Shell@Internal@.c)
 */

__int64 __fastcall CShellSnapComponent::RuntimeClassInitialize(CShellSnapComponent *this)
{
  void **v2; // rsi
  const struct _GUID *v3; // rcx
  int Instance; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  const struct _GUID *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  const char *v13; // r9
  __int64 *v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17[4]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-D8h]
  __int64 v19; // [rsp+38h] [rbp-D0h]
  _OWORD v20[5]; // [rsp+40h] [rbp-C8h] BYREF
  void *v21; // [rsp+90h] [rbp-78h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  GUID v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+B0h] [rbp-58h]
  __int64 v25; // [rsp+B8h] [rbp-50h]
  __int128 v26; // [rsp+C0h] [rbp-48h]
  __int64 v27; // [rsp+D0h] [rbp-38h]
  __int64 v28; // [rsp+D8h] [rbp-30h]
  _BYTE v29[32]; // [rsp+E0h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h] BYREF

  v2 = (void **)((char *)this + 248);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 31);
  Instance = CSnapAssistController_CreateInstance(v3, v2);
  v5 = Instance;
  if ( Instance >= 0 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
    v8 = SnapServiceProvider_CreateInstance(v7, (void **)this + 38);
    v9 = v8;
    if ( v8 >= 0 )
    {
      try
      {
        v10 = (__int64 *)winrt::make<winrt::Windows::Internal::Shell::SnapComponent::implementation::ImmersiveShellThreadDispatcher,>();
        winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 48, v10);
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
        v20[0] = GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab;
        v20[1] = 0LL;
        v20[2] = GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6;
        v20[3] = 0LL;
        v20[4] = GUID_91adc416_4c36_457e_9bab_7e545e723826;
        v21 = *v2;
        v22 = 0LL;
        v23 = GUID_fff59320_db70_4865_8fed_8b502d692f12;
        v24 = *((_QWORD *)this + 38);
        v25 = 0LL;
        v26 = winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>;
        v27 = *((_QWORD *)this + 48);
        v28 = 0LL;
        v11 = CImmersiveShellComponent::RegisterServiceInformation(
                (CShellSnapComponent *)((char *)this + 48),
                (__int64)v20,
                5uLL);
        v12 = v11;
        if ( v11 >= 0 )
        {
          *(_QWORD *)v17 = L"Windows.Internal.Shell.SnapComponent.DesktopSnapLayoutManager";
          *(_QWORD *)&v17[2] = 61LL;
          winrt::param::hstring::hstring((__int64)v29, (__int64 *)v17);
          v14 = (__int64 *)winrt::get_activation_factory<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>(
                             &v31,
                             v29);
          winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 227, v14);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v31);
          *(_OWORD *)v17 = *(_OWORD *)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtensionStatics>;
          v18 = *(_QWORD *)winrt::Windows::Foundation::IUnknown::as<IUnknown>((char *)this + 1816, &v31);
          if ( v31 )
            winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v31);
          v19 = 0LL;
          v15 = CImmersiveShellComponent::RegisterServiceInformation(
                  (CShellSnapComponent *)((char *)this + 48),
                  (__int64)v17,
                  1uLL);
          v16 = v15;
          if ( v15 >= 0 )
          {
            result = 0LL;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x13C,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
              (const char *)(unsigned int)v15);
            result = v16;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x131,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v11);
          result = v12;
        }
      }
      catch ( ... )
      {
        LODWORD(v31) = wil::details::in1diag3::Return_CaughtException(
                         retaddr,
                         (void *)0x140,
                         (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                         v13);
        return (unsigned int)v31;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x125,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x124,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    return v5;
  }
  return result;
}
