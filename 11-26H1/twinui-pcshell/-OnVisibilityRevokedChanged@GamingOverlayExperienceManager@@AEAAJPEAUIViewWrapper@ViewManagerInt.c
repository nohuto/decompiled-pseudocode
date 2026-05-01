/*
 * XREFs of ?OnVisibilityRevokedChanged@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034FE0C
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034FC60 (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x18002A230 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_37ea9a7f778882ac614e7780505f270e___ @ 0x18033CB84 (Windows--Internal--ComTaskPool--QueueTask__lambda_37ea9a7f778882ac614e7780505f270e___.c)
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x180346944 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 *     ?VisibilityRevoked@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180355F30 (-VisibilityRevoked@-$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOv.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::OnVisibilityRevokedChanged(
        GamingOverlayExperienceManager *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v7; // rbx
  __int64 v8; // r8
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v9; // r9
  __int64 v10; // rsi
  __int64 v11; // r9
  void *v12; // r8
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v13; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-50h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v19; // [rsp+28h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp-20h]
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v24; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v20 = 0LL;
  wil::EnterCriticalSection(&v20, (struct _RTL_CRITICAL_SECTION *)((char *)this + 584));
  v25 = 0;
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))a2->lpVtbl[2].QueryInterface)(a2, &v25);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83B,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  v7 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  wil::AcquireSRWLockExclusive(&v18, (RTL_SRWLOCK *)this + 203);
  v24 = 0LL;
  GamingOverlayExperienceManager::FindWindowW((__int64)this, &v24, v8, &v25);
  if ( v24 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 205) )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x842,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80070490LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
    goto LABEL_20;
  }
  v9 = *v24;
  v10 = 0LL;
  if ( *v24 )
  {
    v7 = *v24;
    v19 = *v24;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v9);
    v10 = v11;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v18);
  if ( v10 == *((_QWORD *)this + 59) && *((_QWORD *)this + 62) )
  {
    v18 = 0LL;
    winrt::copy_from_abi((winrt *)&v18, a2, v12);
    v24 = 0LL;
    if ( v18 )
    {
      (*(void (__fastcall **)(RTL_SRWLOCK *, void *, winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***))v18->Ptr)(
        v18,
        &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>,
        &v24);
      v13 = v24;
    }
    else
    {
      v13 = 0LL;
    }
    if ( !v13 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x84B,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x8000FFFFLL);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
      if ( v7 )
        winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v19);
      v6 = -2147418113;
      goto LABEL_20;
    }
    v14 = winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>::VisibilityRevoked(&v24);
    *(_QWORD *)&v21 = this;
    DWORD2(v21) = v14 + 2;
    v22 = *((_QWORD *)this + 63);
    v23 = *((_QWORD *)this + 62);
    Windows::Internal::ComTaskPool::QueueTask__lambda_37ea9a7f778882ac614e7780505f270e___(
      v16,
      v15,
      *((_DWORD *)this + 395),
      &v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v24);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18);
  }
  if ( v7 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v19);
  v6 = 0;
LABEL_20:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
  return v6;
}
