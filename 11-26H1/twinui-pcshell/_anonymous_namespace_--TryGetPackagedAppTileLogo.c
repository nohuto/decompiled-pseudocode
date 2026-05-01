/*
 * XREFs of _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1805EB290
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1805EB83C (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 *     _anonymous_namespace_::TryGetTargetDisplayInformation @ 0x1805EBC60 (_anonymous_namespace_--TryGetTargetDisplayInformation.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x1800276DC (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065220 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1800AD488 (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800F7C64 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180173FA4 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1801AEAFC (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028D400 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x18028D46C (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$GetAsString@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAPEAG@Z @ 0x1805DE8AC (--$GetAsString@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ @ 0x1805E2FB8 (--0LogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@QEAA@XZ.c)
 *     ?CreateForPackageFullName@MRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@SA@AEBUUser@System@Windows@5@AEBUhstring@param@5@@Z @ 0x1805E523C (-CreateForPackageFullName@MRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@SA@AEBUUser@System@.c)
 *     ?CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAccessStream@2345@@Z @ 0x1805E5338 (-CreateFromStream@RandomAccessStreamReference@Streams@Storage@Windows@winrt@@SA@AEBUIRandomAcces.c)
 *     ?CreateTileImageResource@?$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@AEBUguid@3@_KAEBUhstring@param@3@_N@Z @ 0x1805E545C (-CreateTileImageResource@-$consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper@UIMRTHelper@Unif.c)
 *     _anonymous_namespace_::GetLogoTileScaleFactor @ 0x1805E6394 (_anonymous_namespace_--GetLogoTileScaleFactor.c)
 *     _anonymous_namespace_::GetLogoTileTheme @ 0x1805E6400 (_anonymous_namespace_--GetLogoTileTheme.c)
 *     ?IsOriginalSizePreferred@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1805E7170 (-IsOriginalSizePreferred@-$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UI.c)
 *     ?IsUnplated@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBA@_N@Z @ 0x1805E72C8 (-IsUnplated@-$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@L.c)
 *     _anonymous_namespace_::TryLoadLogoImageStream @ 0x1805EBEC8 (_anonymous_namespace_--TryLoadLogoImageStream.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall anonymous_namespace_::TryGetPackagedAppTileLogo(__int64 a1, __int128 *a2, _OWORD *a3)
{
  void **v4; // rax
  void **v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int LogoTileTheme; // eax
  int v11; // eax
  int v12; // eax
  const struct winrt::Windows::Storage::Streams::IRandomAccessStream *v13; // rax
  __int64 v14; // rcx
  __int64 v16[2]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v17[24]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  struct IUnknownVtbl *lpVtbl; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v22[32]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v23[4]; // [rsp+B8h] [rbp-48h] BYREF
  struct IUnknown v24; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int16 *v27; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v28; // [rsp+F8h] [rbp-8h] BYREF

  *(_QWORD *)v17 = a1;
  *(_OWORD *)v17 = *a3;
  v21 = *a2;
  TryGetAppsFolderItem(&v18, (SecondaryTileIdentifierHelpers **)&v21, (__int64)v17);
  if ( v18 )
  {
    v26 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(&v26, v18, 1u, (__int64)&unk_1807BD1C8, 2u) >= 0 )
    {
      v4 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v28);
      *(_OWORD *)v17 = PKEY_Tile_SmallLogoPath;
      *(_DWORD *)&v17[16] = 2;
      if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
                  &v26,
                  (__int128 *)v17,
                  (PWSTR *)v4) >= 0 )
      {
        v5 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v27);
        *(_OWORD *)v17 = PKEY_AppUserModel_PackageFullName;
        *(_DWORD *)&v17[16] = 21;
        if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetAsString<_tagpropertykey>(
                    &v26,
                    (__int128 *)v17,
                    (PWSTR *)v5) >= 0 )
        {
          winrt::param::hstring::hstring((winrt::param::hstring *)v22, v27);
          v16[0] = 0LL;
          winrt::WindowsInternal::Shell::UnifiedTile::MRTHelper::CreateForPackageFullName(
            (const struct winrt::Windows::System::User *)&v21,
            (const struct winrt::param::hstring *)v16,
            (__int64)v22);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v16);
          winrt::param::hstring::hstring((winrt::param::hstring *)v23, v28);
          *(_OWORD *)v17 = 0LL;
          winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_IMRTHelper<winrt::WindowsInternal::Shell::UnifiedTile::IMRTHelper>::CreateTileImageResource(
            (__int64 **)&v21,
            v20,
            (__int128 *)v17,
            v6,
            v23);
          winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::LogoOptions::LogoOptions(&v24);
          winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::IsUnplated(
            (__int64 *)&v24,
            v7);
          winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::IsOriginalSizePreferred(
            (__int64 *)&v24,
            v8);
          LogoTileTheme = anonymous_namespace_::GetLogoTileTheme(v9);
          *(_DWORD *)v17 = 0;
          *(_OWORD *)&v17[8] = 0LL;
          v11 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *, _QWORD))v24.lpVtbl->QueryInterface + 15))(
                  v24.lpVtbl,
                  LogoTileTheme);
          winrt::check_hresult((int *)&v25, v11, (__int64)v17);
          anonymous_namespace_::GetLogoTileScaleFactor();
          *(_DWORD *)v17 = 0;
          *(_OWORD *)&v17[8] = 0LL;
          v12 = (*((__int64 (__fastcall **)(struct IUnknownVtbl *))v24.lpVtbl->QueryInterface + 7))(v24.lpVtbl);
          winrt::check_hresult((int *)&v25, v12, (__int64)v17);
          lpVtbl = v24.lpVtbl;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&lpVtbl);
          v16[0] = v20[0];
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v16);
          anonymous_namespace_::TryLoadLogoImageStream(&v25, v16, &lpVtbl);
          if ( v25 )
          {
            v13 = winrt::Windows::Storage::Streams::RandomAccessStreamReference::CreateFromStream(
                    (const struct winrt::Windows::Storage::Streams::IRandomAccessStream *)v17,
                    (__int64)&v25);
            v14 = *(_QWORD *)v13;
            *(_QWORD *)v13 = 0LL;
            *(_QWORD *)a1 = v14;
            *(_BYTE *)(a1 + 8) = 1;
            *(_BYTE *)(a1 + 16) = 1;
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v17);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v20);
            winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v27);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
            Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v26);
            winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v18);
            return a1;
          }
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v25);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v20);
          winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
        }
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v27);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v28);
    Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v26);
  }
  if ( v18 )
    winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v18);
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}
