/*
 * XREFs of SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271AC0
 * Callers:
 *     SnapFlyoutHost::HideAsync$_InitCoro$2 @ 0x180271A5C (SnapFlyoutHost--HideAsync$_InitCoro$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1800A6BC0 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800A8318 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1800AAA6C (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801C7F30 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 *     ?get_strong@?$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA?AU?$com_ptr@VSnapFlyoutHost@@@2@XZ @ 0x1801C8634 (-get_strong@-$implements@VSnapFlyoutHost@@UIInspectable@Foundation@Windows@winrt@@@winrt@@QEAA-A.c)
 *     ??$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z @ 0x1801DFE60 (--$SnapFlyout_HideAsync@AEA_N@SnapFlyoutTelemetry@@SAXAEA_N@Z.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801EE850 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801EE850.c)
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FF8BC (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Alloc_sentinel_and_proxy@?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x1804DFB38 (-_Alloc_sentinel_and_proxy@-$list@V-$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@w.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18058D988 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_Li_ea_18058D988.c)
 *     ??$_Emplace@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@QEAAPEAU?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@1@QEAU21@AEBU?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x18058DA34 (--$_Emplace@AEBU-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Window.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@std@@@?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@PEAX@std@@@1@PEAU01@@Z @ 0x18058DE80 (--$_Freenode@V-$allocator@U-$_List_node@U-$com_ptr@USnapFlyoutInstance@implementation@SnapCompon.c)
 *     ?ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@V?$list@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@V?$allocator@U?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@@std@@@std@@@Z @ 0x180590D50 (-ShutdownSnapFlyoutsAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@V-$list@U-$com_ptr@USnap.c)
 *     ?StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180590FD0 (-StartDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall SnapFlyoutHost::HideAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rcx
  void *v2; // r8
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  std::_Ref_count_base *v6; // rcx
  void **v7; // r14
  _QWORD *v8; // r15
  _QWORD *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rcx
  std::_Ref_count_base *v12; // rcx
  _QWORD *v13; // rdx
  _QWORD *v14; // rbx
  std::_Ref_count_base *v15; // rcx
  _QWORD *v16; // [rsp+28h] [rbp-A0h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_35;
      case 2:
        SnapFlyoutTelemetry::SnapFlyout_HideAsync<bool &>((char *)(a1 + 137));
        winrt::implements<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::get_strong(
          *(_QWORD *)(a1 + 129),
          (__int64 *)(a1 + 16));
        *(_BYTE *)(a1 + 24) = 0;
        *(_WORD *)(a1 + 8) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v1, (void (*)(void *, void *))a1, v2);
        return;
      case 4:
        v3 = *(_QWORD *)(a1 + 129);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)(a1 + 32), (RTL_SRWLOCK *)(v3 + 176));
        SnapFlyoutHost::CancelInvokeTimer(v3);
        if ( *(_BYTE *)(a1 + 137) )
        {
          SnapFlyoutHost::InternalShutdownAsync(v3, a1 + 40, a1 + 32);
          goto LABEL_34;
        }
        if ( *(_QWORD *)(v3 + 64) )
          goto LABEL_34;
        SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
          v3,
          (_QWORD *)(a1 + 48));
        if ( !*(_QWORD *)v4 )
        {
          ++*(_DWORD *)(v3 + 48);
          if ( (__int64)(*(_QWORD *)(v3 + 32) - *(_QWORD *)(v3 + 24)) >> 4 )
          {
            v7 = (void **)(a1 + 64);
            *(_QWORD *)(a1 + 64) = 0LL;
            *(_QWORD *)(a1 + 72) = 0LL;
            std::list<wil::com_ptr_t<IImmersiveMonitor,wil::err_exception_policy>>::_Alloc_sentinel_and_proxy(a1 + 64);
            v8 = *(_QWORD **)(v3 + 24);
            v9 = *(_QWORD **)(v3 + 32);
            while ( v8 != v9 )
            {
              std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(
                (_QWORD *)(a1 + 80),
                v8);
              v11 = *(_QWORD *)(*(_QWORD *)v10 + 8LL);
              *(_QWORD *)(a1 + 96) = v11;
              if ( v11 )
                winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef(v11);
              if ( *(_DWORD *)(v11 + 372) == 1
                && !*(_BYTE *)(v11 + 343)
                && *(_DWORD *)(v11 + 320) < *(_DWORD *)(*(_QWORD *)(a1 + 129) + 48LL) )
              {
                std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Emplace<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance> const &>(
                  a1 + 64,
                  *v7,
                  a1 + 96);
              }
              if ( *(_QWORD *)(a1 + 96) )
                winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)(a1 + 96));
              v12 = *(std::_Ref_count_base **)(a1 + 88);
              if ( v12 )
                std::_Ref_count_base::_Decref(v12);
              v8 += 2;
            }
            *(_QWORD *)(a1 + 104) = 0LL;
            *(_QWORD *)(a1 + 112) = 0LL;
            std::list<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>>>,std::_Iterator_base0>>(
              a1 + 104,
              *(_QWORD *)*v7);
            SnapFlyoutHost::ShutdownSnapFlyoutsAsync(*(_QWORD *)(a1 + 129), a1 + 120, a1 + 104);
            v16 = *v7;
            *(_QWORD *)v16[1] = 0LL;
            v13 = (_QWORD *)*v16;
            if ( *v16 )
            {
              do
              {
                v14 = (_QWORD *)*v13;
                std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>::_Freenode<std::allocator<std::_List_node<winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>,void *>>>();
                v13 = v14;
              }
              while ( v14 );
            }
            std::_Deallocate<16,0>(*v7, (const struct std::nothrow_t *)0x18);
          }
          goto LABEL_32;
        }
        v5 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
        if ( !*(_BYTE *)(v5 + 338) && !*(_BYTE *)(v5 + 341) )
        {
          SnapFlyoutHost::StartDismissTimer(v3);
LABEL_32:
          v15 = *(std::_Ref_count_base **)(a1 + 56);
          if ( v15 )
            std::_Ref_count_base::_Decref(v15);
          goto LABEL_34;
        }
        v6 = *(std::_Ref_count_base **)(a1 + 56);
        if ( v6 )
          std::_Ref_count_base::_Decref(v6);
LABEL_34:
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a1 + 32));
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 16));
LABEL_35:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0xA0);
        break;
      case 5:
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>((_QWORD *)(a1 + 16));
        goto LABEL_35;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
