/*
 * XREFs of ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180490580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800584A4 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailDeviceSource@@@Z @ 0x1800E908C (--$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft.c)
 *     ??$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@SmartCookie@@QEAAJPEAUIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotification@@PEAK@ZP81@EAAJK@ZPEAVVirtualDesktopDataSource@@@Z @ 0x1801EA694 (--$Register@UIVirtualDesktopNotificationService@@P81@EAAJPEAUIVirtualDesktopNotific_ea_1801EA694.c)
 *     ?VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z @ 0x180228D58 (-VirtualDesktopCollection_CreateInstance@@YAJPEAUIThumbnailDeviceSource@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@3@@Z @ 0x18027F3E0 (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSyst.c)
 *     ??$As@UIVirtualDesktopCollectionInternal@@@?$ComPtr@UIVirtualDesktopCollection@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18048F52C (--$As@UIVirtualDesktopCollectionInternal@@@-$ComPtr@UIVirtualDesktopCollection@Multitasking@Comp.c)
 *     ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x180490BF8 (-UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopDataSource::Initialize(
        VirtualDesktopDataSource *this,
        struct IVirtualDesktopManagerInternal *a2,
        struct IVirtualDesktopNotificationService *a3)
{
  VirtualDesktopDataSource *v6; // rbx
  __int64 *v7; // r15
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  int v12; // eax
  const struct _GUID *v13; // rdx
  int v14; // eax
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  const char *v19; // r9
  unsigned int v20; // esi
  void *v21; // rcx
  RTL_SRWLOCK *v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h] BYREF
  VirtualDesktopDataSource *v24; // [rsp+40h] [rbp-38h]
  char v25; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  void *v28; // [rsp+98h] [rbp+20h] BYREF

  wil::AcquireSRWLockExclusive(&v22, (RTL_SRWLOCK *)this + 31);
  v6 = (VirtualDesktopDataSource *)*winrt::impl::root_implements<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem,std::map<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::abi_guard::abi_guard(
                                      &v27,
                                      (__int64)this - 32);
  v24 = v6;
  v25 = 1;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 11, (__int64)a2);
  v7 = (__int64 *)((char *)this + 96);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 12, (__int64)a3);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 29);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<ThumbnailDeviceFactory,IThumbnailDeviceSource,>((_QWORD *)this + 29);
  v11 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v8);
    VirtualDesktopDataSource::UninitializeInternal(v6);
LABEL_8:
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    return v11;
  }
  if ( *v7 )
  {
    v12 = SmartCookie::Register<IVirtualDesktopNotificationService,long (IVirtualDesktopNotificationService::*)(IVirtualDesktopNotification *,unsigned long *),long (IVirtualDesktopNotificationService::*)(unsigned long),VirtualDesktopDataSource *>(
            (__int64)this + 104,
            *v7,
            v9,
            v10,
            (unsigned __int64)this - 32);
    v11 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x99,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
        (const char *)(unsigned int)v12);
      VirtualDesktopDataSource::UninitializeInternal(v6);
      goto LABEL_8;
    }
  }
  v28 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
  v14 = VirtualDesktopCollection_CreateInstance(*((struct IThumbnailDeviceSource **)this + 29), v13, &v28);
  v11 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    VirtualDesktopDataSource::UninitializeInternal(v6);
    goto LABEL_8;
  }
  v27 = 0LL;
  v16 = Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollection>::As<IVirtualDesktopCollectionInternal>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v28,
          &v27);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA2,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    v25 = 0;
    VirtualDesktopDataSource::UninitializeInternal(v6);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    return v17;
  }
  try
  {
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v27 + 32LL))(
            v27,
            *((_QWORD *)this + 11),
            *v7);
  }
  catch ( ... )
  {
    LODWORD(v27) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xA6,
                     (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                     v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    if ( v25 )
      VirtualDesktopDataSource::UninitializeInternal(v24);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    return (unsigned int)v27;
  }
  v20 = v18;
  if ( v18 >= 0 )
  {
    v21 = v28;
    v28 = 0LL;
    v23 = *((_QWORD *)this + 30);
    *((_QWORD *)this + 30) = v21;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v28);
    v25 = 0;
    VirtualDesktopDataSource::UninitializeInternal(v6);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v22);
    return v20;
  }
}
