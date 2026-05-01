/*
 * XREFs of ?OnWindowChangedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034C32C
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034BF40 (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18017F43C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18018A2D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_08e8638bac8a5583dd11800f2748f271___ @ 0x18033CF24 (Windows--Internal--ComTaskPool--QueueTask__lambda_08e8638bac8a5583dd11800f2748f271___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_44e8b172701ba47fc413d8c47dbd2684___ @ 0x18033CFAC (Windows--Internal--ComTaskPool--QueueTask__lambda_44e8b172701ba47fc413d8c47dbd2684___.c)
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x180343C98 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling@@@details@wil@@QEAA_NXZ @ 0x180352B38 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEve.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _QWORD *v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **); // rdi
  int v13; // edi
  __int64 v14; // rdx
  char IsEnabled; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v22; // [rsp+20h] [rbp-50h] BYREF
  GamingOverlayExperienceManager *v23; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v24[3]; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v25; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-20h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v27; // [rsp+58h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v28 = 0LL;
  wil::EnterCriticalSection(&v28, (struct _RTL_CRITICAL_SECTION *)((char *)this + 528));
  v26 = 0;
  v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, RTL_SRWLOCK **), unsigned int *))(*a2)[6])(
         a2,
         &v26);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7BF,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_22;
  }
  v7 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  wil::AcquireSRWLockExclusive(&v25, (RTL_SRWLOCK *)this + 195);
  v27 = 0LL;
  GamingOverlayExperienceManager::FindWindowW((__int64)this, &v27, v8, &v26);
  if ( v27 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 197) )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C6,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80070490LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
    goto LABEL_22;
  }
  v9 = *v27;
  v10 = 0LL;
  if ( *v27 )
  {
    v7 = *v27;
    v22 = *v27;
    winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v9);
    v10 = v11;
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v25);
  if ( v10 == *((_QWORD *)this + 54) )
  {
    LODWORD(v27) = 0;
    v25 = 0LL;
    v12 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
    v13 = v12(
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
            &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
            &v25);
    if ( v13 < 0 )
    {
      v14 = 1998LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v13);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
      if ( v7 )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v22);
      v6 = v13;
      goto LABEL_22;
    }
    v13 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***))v25->Ptr
           + 6))(
            v25,
            &v27);
    if ( v13 < 0 )
    {
      v14 = 1999LL;
      goto LABEL_10;
    }
    *((_QWORD *)this + 55) = (int)v27;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_GamingOverlayVisibilityRevokedEventHandling>::GetImpl'::`2'::impl);
    v18 = *((_DWORD *)this + 379);
    if ( IsEnabled )
    {
      v19 = *((_QWORD *)this + 55);
      v20 = *((_QWORD *)this + 56);
      v24[0] = this;
      v24[1] = v20;
      v24[2] = v19;
      Windows::Internal::ComTaskPool::QueueTask__lambda_44e8b172701ba47fc413d8c47dbd2684___(v19, v16, v18, (__int64)v24);
    }
    else
    {
      v23 = this;
      Windows::Internal::ComTaskPool::QueueTask__lambda_08e8638bac8a5583dd11800f2748f271___(v17, v16, v18, &v23);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v25);
  }
  if ( v7 )
    winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v22);
  v6 = 0;
LABEL_22:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v28);
  return v6;
}
