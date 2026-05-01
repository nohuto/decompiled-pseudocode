/*
 * XREFs of ?EnsureExperienceManager@FallbackFlyoutView@@AEAA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1805D613C
 * Callers:
 *     FallbackFlyoutView::Hide$_ResumeCoro$1 @ 0x1805D6420 (FallbackFlyoutView--Hide$_ResumeCoro$1.c)
 *     FallbackFlyoutView::Show$_ResumeCoro$1 @ 0x1805D67E0 (FallbackFlyoutView--Show$_ResumeCoro$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x1800286D0 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004E0F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180101060 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18012BBCC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??4?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801574A8 (--4-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAU6@AEBU7@@winrt@@YA?AU?$com_ptr@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAU2@1@Z @ 0x1805D5F60 (--$capture@UIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@A6AJPEAUIUnknown@@.c)
 *     ??$com_agile_query@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@W4AgileReferenceOptions@@@Z @ 0x1805D5FD4 (--$com_agile_query@AEAV-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@@wil@@YA-AV-$.c)
 *     ??$com_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@0@AEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@@Z @ 0x1805D603C (--$com_query@UINetworkFlyoutExperienceManager@Experience@Shell@Internal@Windows@@AEAV-$com_ptr_t.c)
 *     ??$query@UIUnknown@@@?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_exception_policy@wil@@@1@XZ @ 0x1805D6090 (--$query@UIUnknown@@@-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEBA-AV-$com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
RTL_SRWLOCK *__fastcall FallbackFlyoutView::EnsureExperienceManager(__int64 a1, RTL_SRWLOCK *a2)
{
  RTL_SRWLOCK *v4; // r15
  __int64 *v5; // r14
  RTL_SRWLOCK *v6; // rbx
  __int64 (__fastcall *v7)(RTL_SRWLOCK *, __int64, __int64 *); // rdi
  int v8; // eax
  RTL_SRWLOCK *v10; // [rsp+20h] [rbp-60h] BYREF
  __int64 v11; // [rsp+28h] [rbp-58h] BYREF
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v12 = a2;
  v4 = (RTL_SRWLOCK *)(a1 + 16);
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v10, (RTL_SRWLOCK *)(a1 + 16));
  v5 = (__int64 *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 24) )
  {
    wil::com_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      a2,
      (__int64 *)(a1 + 24));
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
  }
  else
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v10);
    v14 = *wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::query<IUnknown>((__int64 *)(a1 + 8), &v12);
    winrt::capture<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IUnknown *,_GUID const &>(
      &v10,
      (__int64 (__fastcall *)(__int64, void *, void *, __int64 *))IUnknown_QueryService,
      &v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v12);
    v11 = 0LL;
    v6 = v10;
    v7 = (__int64 (__fastcall *)(RTL_SRWLOCK *, __int64, __int64 *))*((_QWORD *)v10->Ptr + 6);
    v11 = 0LL;
    v16 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Internal.ShellExperience.MeetNow",
      0x29u,
      0x28u);
    v8 = v7(v6, v16, &v11);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x63,
        (int)"pcshell\\twinui\\meetandchatmanager\\lib\\fallbackflyoutview.cpp",
        (const char *)(unsigned int)v8,
        (int)v10);
    wil::com_agile_query<wil::com_ptr_t<IInspectable,wil::err_exception_policy> &>(v13, &v11);
    wil::AcquireSRWLockExclusive(&v12, v4);
    if ( !*v5 )
      wil::com_ptr_t<IAgileReference,wil::err_exception_policy>::operator=(v5, v13);
    wil::com_query<Windows::Internal::Shell::Experience::INetworkFlyoutExperienceManager,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> &>(
      a2,
      v5);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v11);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v10);
  }
  return a2;
}
