/*
 * XREFs of ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180350058
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034FC60 (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_37453213ccb91170a753d285a0f69d4d___ @ 0x18033CAF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_37453213ccb91170a753d285a0f69d4d___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8db9e4953a4814db6daa860a0787e122___ @ 0x18033CC14 (Windows--Internal--ComTaskPool--QueueTask__lambda_8db9e4953a4814db6daa860a0787e122___.c)
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x180346944 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling@@@details@wil@@QEAA_NXZ @ 0x180358B80 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEve.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GamingOverlayExperienceManager::OnWindowChangedViewEvent(
        GamingOverlayExperienceManager *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **),
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  _QWORD *v7; // rbx
  __int64 v8; // r8
  _QWORD *v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **); // rdi
  int v13; // edi
  __int64 v14; // rdx
  char IsEnabled; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  _QWORD *v20; // [rsp+20h] [rbp-50h] BYREF
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+28h] [rbp-48h] BYREF
  GamingOverlayExperienceManager *v22; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-38h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v24; // [rsp+50h] [rbp-20h] BYREF
  RTL_SRWLOCK *v25; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v26; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v21 = 0LL;
  wil::EnterCriticalSection(&v21, (struct _RTL_CRITICAL_SECTION *)((char *)this + 584));
  v26 = 0;
  v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **), unsigned int *))(*a2)[6])(
         a2,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F6,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  v7 = 0LL;
  v20 = 0LL;
  v25 = 0LL;
  wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)this + 203);
  v24 = 0LL;
  GamingOverlayExperienceManager::FindWindowW((__int64)this, &v24, v8, &v26);
  if ( v24 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 205) )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FD,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80070490LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    goto LABEL_22;
  }
  v9 = *v24;
  v10 = 0LL;
  if ( *v24 )
  {
    v7 = *v24;
    v20 = *v24;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v9);
    v10 = v11;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
  if ( v10 == *((_QWORD *)this + 59) )
  {
    LODWORD(v24) = 0;
    v25 = 0LL;
    v12 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v13 = v12(
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v25);
    if ( v13 < 0 )
    {
      v14 = 2053LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      if ( v7 )
        winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v20);
      v6 = v13;
      goto LABEL_22;
    }
    v13 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***))v25->Ptr
           + 6))(
            v25,
            &v24);
    if ( v13 < 0 )
    {
      v14 = 2054LL;
      goto LABEL_10;
    }
    *((_QWORD *)this + 62) = (int)v24;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::GetImpl'::`2'::impl);
    v18 = *((_DWORD *)this + 395);
    if ( IsEnabled )
    {
      v23[0] = this;
      v23[1] = *((_QWORD *)this + 63);
      v23[2] = *((_QWORD *)this + 62);
      Windows::Internal::ComTaskPool::QueueTask__lambda_37453213ccb91170a753d285a0f69d4d___(v17, v16, v18, (__int64)v23);
    }
    else
    {
      v22 = this;
      Windows::Internal::ComTaskPool::QueueTask__lambda_8db9e4953a4814db6daa860a0787e122___(v17, v16, v18, &v22);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  }
  if ( v7 )
    winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v20);
  v6 = 0;
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
  return v6;
}
