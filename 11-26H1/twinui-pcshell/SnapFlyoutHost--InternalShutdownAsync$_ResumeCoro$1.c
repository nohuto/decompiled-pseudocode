/*
 * XREFs of SnapFlyoutHost::InternalShutdownAsync$_ResumeCoro$1 @ 0x180269F20
 * Callers:
 *     ?InternalShutdownAsync@SnapFlyoutHost@@AEAA?AUfire_and_forget@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18026A1CC (-InternalShutdownAsync@SnapFlyoutHost@@AEAA-AUfire_and_forget@winrt@@AEBV-$unique_any_t@V-$uniqu.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180026574 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$get_weak@VWindowDragInputProvider@@@?$root_implements@VWindowDragInputProvider@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@VWindowDragInputProvider@@@2@XZ @ 0x180054E60 (--$get_weak@VWindowDragInputProvider@@@-$root_implements@VWindowDragInputProvider@@UIInspectable.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18007A62C (-CancelInvokeTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeographicRegionPoliciesStatics@Profile@System@WindowsUdk@winrt@@@Z @ 0x1801A5430 (-_lambda_invoker_cdecl_@_lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_@@CA@AEBUIIntegratedServicesGeo.c)
 *     ??1?$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x1801C46F8 (--1-$com_ptr@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@@win.c)
 *     ??$TryGetVisibleFlyoutInstance@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@SnapFlyoutHost@@AEAA?AV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801C7980 (--$TryGetVisibleFlyoutInstance@V-$unique_any_t@V-$unique_storage@U-$resource_policy_ea_1801C7980.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801CCA48 (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?await_suspend@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEAAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x1801CF588 (-await_suspend@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA.c)
 *     ?CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1801FA0E4 (-CancelDismissTimer@SnapFlyoutHost@@AEAAXAEBV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@PEAX@1@@Z @ 0x180201D1C (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAUHMONITOR__@@USnapFlyoutInstance@SnapCompon.c)
 *     ?SnapFlyout_InternalShutdownAsync@SnapFlyoutTelemetry@@SAXXZ @ 0x180213B1C (-SnapFlyout_InternalShutdownAsync@SnapFlyoutTelemetry@@SAXXZ.c)
 *     ?Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18026C9C8 (-Shutdown@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUhstring@winrt@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1802B0D30 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIUhstring@win.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_resume@awaitable@?1???$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA?A_PAEBUDispatcherQueue@System@Windows@winrt@@W4DispatcherQueuePriority@456@@Z@QEBAXXZ @ 0x1805B575C (-await_resume@awaitable@-1---$resume_foreground@UDispatcherQueue@System@Windows@winrt@@@wil@@YA-.c)
 *     ?EndWindowDrag@WindowDragInputProvider@@QEAAXXZ @ 0x1805BFA00 (-EndWindowDrag@WindowDragInputProvider@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall SnapFlyoutHost::InternalShutdownAsync__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 *v4; // rcx
  _QWORD *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  char *v9; // rdi
  std::_Ref_count_base *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  std::_Ref_count_base *v15; // rcx

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_26;
      case 2:
        SnapFlyoutTelemetry::SnapFlyout_InternalShutdownAsync((__int64)a1);
        v2 = *((_QWORD *)a1 + 15);
        v3 = v2 + 96;
        if ( !*(_QWORD *)(v2 + 96) )
          goto LABEL_26;
        *((_DWORD *)a1 + 3) = *(_DWORD *)(v2 + 48);
        winrt::impl::root_implements<WindowDragInputProvider,winrt::Windows::Foundation::IInspectable>::get_weak<WindowDragInputProvider>(
          v2,
          (_QWORD *)a1 + 2);
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
        v5 = a1 + 56;
        v6 = (__int64 *)(a1 + 16);
        winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)a1 + 2, (struct IUnknown *)a1 + 7);
        if ( *((_QWORD *)a1 + 7) )
        {
          v7 = *((_QWORD *)a1 + 15);
          wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)a1 + 8, (RTL_SRWLOCK *)(v7 + 176));
          if ( *((_DWORD *)a1 + 3) == *(_DWORD *)(v7 + 48) )
          {
            if ( *(_QWORD *)(v7 + 152) )
            {
              WindowDragInputProvider::EndWindowDrag(*(WindowDragInputProvider **)(v7 + 112));
              SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
                v7,
                (_QWORD *)a1 + 9);
              v8 = *((_QWORD *)a1 + 9);
              if ( v8 )
              {
                winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v8 + 8));
              }
              else
              {
                v9 = a1 + 88;
                *((_QWORD *)a1 + 11) = **(_QWORD **)(v7 + 144);
                while ( !*(_BYTE *)(*(_QWORD *)v9 + 25LL) )
                {
                  _lambda_eb21f5065b31fe54e3e22ffca6c3b9a9_::_lambda_invoker_cdecl_((const struct winrt::WindowsUdk::System::Profile::IIntegratedServicesGeographicRegionPoliciesStatics *)(*(_QWORD *)v9 + 40LL));
                  std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,winrt::hstring>>>,std::_Iterator_base0>::operator++(a1 + 88);
                }
              }
              v10 = (std::_Ref_count_base *)*((_QWORD *)a1 + 10);
              if ( v10 )
                std::_Ref_count_base::_Decref(v10);
              v11 = v7;
              v12 = v7 + 144;
              v13 = *(_QWORD *)(v7 + 144);
              std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<HMONITOR__ * const,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>,void *>>>(
                v12,
                v12,
                *(__int64 **)(v13 + 8));
              *(_QWORD *)(v13 + 8) = v13;
              *(_QWORD *)v13 = v13;
              *(_QWORD *)(v13 + 16) = v13;
              *(_QWORD *)(v12 + 8) = 0LL;
              *(_DWORD *)(v11 + 120) = 0;
              *(_QWORD *)(v11 + 128) = 0LL;
            }
            else
            {
              SnapFlyoutHost::CancelInvokeTimer(v7);
              SnapFlyoutHost::CancelDismissTimer(v7);
              SnapFlyoutHost::TryGetVisibleFlyoutInstance<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>>(
                v7,
                (_QWORD *)a1 + 12);
              v14 = *((_QWORD *)a1 + 12);
              if ( v14 )
                winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::Shutdown(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(v14 + 8));
              v15 = (std::_Ref_count_base *)*((_QWORD *)a1 + 13);
              if ( v15 )
                std::_Ref_count_base::_Decref(v15);
            }
          }
          CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 8);
          v5 = a1 + 56;
          v6 = (__int64 *)(a1 + 16);
        }
        winrt::com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>::~com_ptr<winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance>(v5);
        if ( *v6 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v6);
        goto LABEL_26;
      case 5:
        v4 = (__int64 *)(a1 + 16);
        if ( *((_QWORD *)a1 + 2) )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
LABEL_26:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x90);
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
