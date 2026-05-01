/*
 * XREFs of ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F9E4
 * Callers:
 *     ?OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034FC60 (-OnViewEventMultiWindow@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1800E6A6C (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18016FC90 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18017FA08 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180210F00 (-UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@QEAAJXZ @ 0x180237B8C (-OnViewDestroyed@GameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@Q.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$map_impl@_KUhstring@winrt@@V?$map@_KUhstring@winrt@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUhstring@winrt@@@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1802879A8 (-unconditional_release_ref@-$com_ptr@U-$map_impl@_KUhstring@winrt@@V-$map@_KUhstring@winrt@@U-$l.c)
 *     ??4?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1802B48B0 (--4-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@win.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_97dc554ce66a88bbd45238defe821186___ @ 0x18033CCA4 (Windows--Internal--ComTaskPool--QueueTask__lambda_97dc554ce66a88bbd45238defe821186___.c)
 *     ?FindWindowW@GamingOverlayExperienceManager@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@std@@Uread_lock_required@wil@@AEBI@Z @ 0x180346944 (-FindWindowW@GamingOverlayExperienceManager@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple.c)
 *     ?erase@?$vector@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windows@winrt@@@winrt@@@std@@@std@@@2@@Z @ 0x180359408 (-erase@-$vector@U-$com_ptr@UGameBarWindowControlImpl@implementation@GamingOverlay@Internal@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GamingOverlayExperienceManager::OnViewDestroyedViewEvent(
        GamingOverlayExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  unsigned int v5; // edi
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v9; // rbx
  __int64 v10; // r8
  char *v11; // r11
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v12; // r9
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v13; // r10
  __int64 v14; // rdi
  __int64 v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // eax
  int updated; // eax
  _QWORD *v22; // [rsp+20h] [rbp-50h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl *v23; // [rsp+28h] [rbp-48h] BYREF
  winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **v24; // [rsp+30h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v26[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v25 = 0LL;
  wil::EnterCriticalSection(&v25, (struct _RTL_CRITICAL_SECTION *)((char *)this + 584));
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 2147500035LL;
    v7 = 2228LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)v6);
    goto LABEL_25;
  }
  v27 = 0;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned int *))(*(_QWORD *)a2 + 48LL))(
         a2,
         &v27);
  v5 = v8;
  if ( v8 < 0 )
  {
    v6 = (unsigned int)v8;
    v7 = 2230LL;
    goto LABEL_5;
  }
  v9 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v22, (RTL_SRWLOCK *)this + 203);
  v24 = 0LL;
  GamingOverlayExperienceManager::FindWindowW((__int64)this, &v24, v10, &v27);
  v11 = (char *)this + 1632;
  v12 = v24;
  if ( v24 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl ***)this + 205) )
  {
    v5 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8BD,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)0x80070490LL);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v22);
  }
  else
  {
    v13 = *v24;
    v14 = 0LL;
    if ( *v24 )
    {
      v9 = *v24;
      v23 = *v24;
      winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)v13);
      v14 = v15;
    }
    std::vector<winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>>::erase(
      v11,
      &v24,
      v12);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v22);
    if ( v14 == *((_QWORD *)this + 59) )
    {
      v17 = *((_QWORD *)this + 63);
      if ( v17 )
      {
        v18 = *((_QWORD *)this + 62);
        if ( v18 )
        {
          v26[0] = this;
          v26[1] = v17;
          v26[2] = v18;
          Windows::Internal::ComTaskPool::QueueTask__lambda_97dc554ce66a88bbd45238defe821186___(
            v18,
            v16,
            *((_DWORD *)this + 395),
            (__int64)v26);
        }
      }
    }
    if ( v9 )
    {
      v19 = winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl::OnViewDestroyed(v9);
      v5 = v19;
      if ( v19 >= 0 )
      {
        if ( v9 == *((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this + 59) )
        {
          v22 = 0LL;
          winrt::com_ptr<winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl>::operator=(
            (_QWORD **)this + 59,
            &v22);
          if ( v22 )
            winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(&v22);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 58);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 52);
          updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeVisibility(this, 0);
          if ( updated < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x8DB,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
              (const char *)(unsigned int)updated);
          *((_BYTE *)this + 1344) = 1;
        }
        winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v23);
        v5 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8D1,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v19);
        winrt::com_ptr<winrt::impl::map_impl<unsigned __int64,winrt::hstring,std::map<unsigned __int64,winrt::hstring>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v23);
      }
    }
    else
    {
      v5 = -2147467261;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8D0,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)0x80004003LL);
    }
  }
LABEL_25:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v25);
  return v5;
}
