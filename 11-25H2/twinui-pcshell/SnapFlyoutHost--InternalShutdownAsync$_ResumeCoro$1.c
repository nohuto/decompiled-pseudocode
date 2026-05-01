/*
 * XREFs of SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180271FD0
 * Callers:
 *     SnapFlyoutHost::InternalShutdownAsync$_InitCoro$2 @ 0x180271F74 (SnapFlyoutHost--InternalShutdownAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800A6BC0 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800AAA6C (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x1800AB1F0 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C872C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801DA6D4 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801EE850 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801EE850.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180206044 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ?SnapFlyout_InternalShutdownAsync@SnapFlyoutTelemetry@@SAXXZ @ 0x180222970 (-SnapFlyout_InternalShutdownAsync@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@1@@Z @ 0x18022A2E0 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapCompon.c)
 *     ?make_weak_ref@?$root_implements@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAPEAUIWeakReferenceSource@23@XZ @ 0x18024210C (-make_weak_ref@-$root_implements@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windo.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1802749FC (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1802B9A5C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1802CEE8C (--0bad_alloc@std@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x1802D3008 (_CxxThrowException_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805917CC (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 *     ?EndWindowDrag@WindowDragInputProvider@@QEAAXXZ @ 0x18059B764 (-EndWindowDrag@WindowDragInputProvider@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 weak_ref; // rax
  unsigned int v5; // eax
  __int64 *v6; // rcx
  _QWORD *v7; // rdi
  __int64 *v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  char *v11; // rdi
  std::_Ref_count_base *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdx
  std::_Ref_count_base *v17; // rcx
  _BYTE pExceptionObject[160]; // [rsp+38h] [rbp-A0h] BYREF

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_28;
      case 2:
        *((_DWORD *)a1 + 28) = 0;
        SnapFlyoutTelemetry::SnapFlyout_InternalShutdownAsync();
        v2 = *(_QWORD *)(a1 + 161);
        v3 = v2 + 96;
        if ( !*(_QWORD *)(v2 + 96) )
          goto LABEL_28;
        *((_DWORD *)a1 + 3) = *(_DWORD *)(v2 + 48);
        weak_ref = winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncInfo>::make_weak_ref((volatile signed __int64 *)v2);
        if ( !weak_ref )
        {
          std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
          throw (std::bad_alloc *)pExceptionObject;
        }
        *((_QWORD *)a1 + 15) = weak_ref;
        *((_QWORD *)a1 + 2) = 0LL;
        *((_DWORD *)a1 + 28) = 2;
        *((_DWORD *)a1 + 32) = 0;
        *((_QWORD *)a1 + 17) = 0LL;
        *((_QWORD *)a1 + 18) = 0LL;
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)weak_ref + 24LL))(weak_ref);
        winrt::check_hresult(a1 + 152, v5, a1 + 128);
        winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)a1 + 15);
        *((_QWORD *)a1 + 3) = v3;
        *((_DWORD *)a1 + 8) = 0;
        *((_QWORD *)a1 + 5) = 0LL;
        a1[48] = 0;
        *((_WORD *)a1 + 4) = 4;
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_suspend(
          (__int64)(a1 + 24),
          (__int64)a1);
        break;
      case 4:
        `wil::resume_foreground<winrt::Windows::System::DispatcherQueue>'::`2'::awaitable::await_resume(a1 + 24);
        v7 = a1 + 56;
        v8 = (__int64 *)(a1 + 16);
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)a1 + 2, (struct IUnknown *)a1 + 7);
        if ( *((_QWORD *)a1 + 7) )
        {
          v9 = *(_QWORD *)(a1 + 161);
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)a1 + 8, (RTL_SRWLOCK *)(v9 + 176));
          if ( *((_DWORD *)a1 + 3) == *(_DWORD *)(v9 + 48) )
          {
            if ( *(_QWORD *)(v9 + 152) )
            {
              WindowDragInputProvider::EndWindowDrag(*(WindowDragInputProvider **)(v9 + 112));
              SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
                v9,
                (_QWORD *)a1 + 9);
              if ( *(_QWORD *)v10 )
              {
                winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(*(_QWORD *)v10 + 8LL));
              }
              else
              {
                v11 = a1 + 88;
                *((_QWORD *)a1 + 11) = **(_QWORD **)(v9 + 144);
                while ( !*(_BYTE *)(*(_QWORD *)v11 + 25LL) )
                {
                  _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)(*(_QWORD *)v11 + 40LL));
                  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(a1 + 88);
                }
              }
              v12 = (std::_Ref_count_base *)*((_QWORD *)a1 + 10);
              if ( v12 )
                std::_Ref_count_base::_Decref(v12);
              v13 = v9;
              v14 = v9 + 144;
              v15 = *(_QWORD *)(v9 + 144);
              std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>(
                v14,
                v14,
                *(__int64 **)(v15 + 8));
              *(_QWORD *)(v15 + 8) = v15;
              *(_QWORD *)v15 = v15;
              *(_QWORD *)(v15 + 16) = v15;
              *(_QWORD *)(v14 + 8) = 0LL;
              *(_DWORD *)(v13 + 120) = 0;
              *(_QWORD *)(v13 + 128) = 0LL;
            }
            else
            {
              SnapFlyoutHost::CancelInvokeTimer(v9);
              SnapFlyoutHost::CancelDismissTimer(v9);
              SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
                v9,
                (_QWORD *)a1 + 12);
              if ( *(_QWORD *)v16 )
                winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(*(_QWORD *)v16 + 8LL));
              v17 = (std::_Ref_count_base *)*((_QWORD *)a1 + 13);
              if ( v17 )
                std::_Ref_count_base::_Decref(v17);
            }
          }
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 8);
          v7 = a1 + 56;
          v8 = (__int64 *)(a1 + 16);
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(v7);
        if ( *v8 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v8);
        goto LABEL_28;
      case 5:
        v6 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
LABEL_28:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0xC0);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
