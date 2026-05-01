/*
 * XREFs of ?RegisterViewCoordinatorEventsInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18024ACC4
 * Callers:
 *     _lambda_4238dd26ae6c8ef7701c5b2afd60ce95_::operator() @ 0x1803A58E8 (_lambda_4238dd26ae6c8ef7701c5b2afd60ce95_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18001A30C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180065DB4 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x1800AA2B4 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     _lambda_d01d769641b0a3ac426af1e1f82876ea_::__lambda_d01d769641b0a3ac426af1e1f82876ea_ @ 0x1800B9304 (_lambda_d01d769641b0a3ac426af1e1f82876ea_--__lambda_d01d769641b0a3ac426af1e1f82876ea_.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x180188BF8 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ?Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801972DC (-Current@ViewCoordinator@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___ @ 0x1801B3760 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ViewCoordinator_winr.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180247044 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Win.c)
 *     ?ViewVisibilityChanged@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UViewVisibilityChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18024BEB8 (-ViewVisibilityChanged@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2B34 (--2@YAPEAX_K@Z.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall UndockedSearchAppExperienceManager::RegisterViewCoordinatorEventsInternal(
        UndockedSearchAppExperienceManager *this)
{
  __int64 *v2; // rax
  unsigned int v3; // eax
  __int64 *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-29h] BYREF
  UndockedSearchAppExperienceManager *v7; // [rsp+28h] [rbp-21h]
  __int64 *v8; // [rsp+30h] [rbp-19h]
  __int64 v9; // [rsp+38h] [rbp-11h] BYREF
  __int64 v10; // [rsp+40h] [rbp-9h] BYREF
  RTL_SRWLOCK *v11; // [rsp+48h] [rbp-1h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v13; // [rsp+60h] [rbp+17h] BYREF
  _BYTE v14[8]; // [rsp+68h] [rbp+1Fh] BYREF
  int v15; // [rsp+70h] [rbp+27h] BYREF
  __int128 v16; // [rsp+78h] [rbp+2Fh]
  __int64 *v17; // [rsp+B0h] [rbp+67h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+C0h] [rbp+77h] BYREF
  __int64 *v20; // [rsp+C8h] [rbp+7Fh] BYREF

  v18 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v20 = &v18;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v20);
  v3 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>((__int64)this, v2);
  winrt::check_hresult(&v17, v3, &v15);
  wil::AcquireSRWLockExclusive(&v11, (RTL_SRWLOCK *)this + 37);
  v9 = 0LL;
  if ( winrt::Windows::Foundation::operator==((void (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 38, &v9) )
  {
    v4 = winrt::WindowsUdk::UI::Shell::ViewCoordinator::Current(&v10);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)this + 38, v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
  }
  if ( !*((_QWORD *)this + 39) )
  {
    v12[0] = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v12[1] = this;
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_5e82962a6040908e6ed2656b2b7c60f3___(
      &v19,
      v12);
    *((_QWORD *)this + 39) = *winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
                                (__int64 **)this + 38,
                                &v13,
                                &v19);
    if ( v19 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v19);
  }
  if ( !*((_QWORD *)this + 40) )
  {
    v6 = v18;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v7 = this;
    v8 = &v6;
    v5 = (__int64 *)operator new(0x20uLL);
    v8 = v5;
    *((_DWORD *)v5 + 2) = 1;
    v5[2] = 0LL;
    if ( v5 + 2 != &v6 )
    {
      v5[2] = v6;
      v6 = 0LL;
    }
    v5[3] = (__int64)v7;
    _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
    *v5 = (__int64)off_18070E888;
    v17 = v5;
    lambda_d01d769641b0a3ac426af1e1f82876ea_::__lambda_d01d769641b0a3ac426af1e1f82876ea_(&v6);
    *((_QWORD *)this + 40) = *(_QWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::ViewVisibilityChanged(
                                          (char *)this + 304,
                                          v14,
                                          &v17);
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v17);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
}
