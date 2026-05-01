/*
 * XREFs of GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_ResumeCoro$1 @ 0x180350E40
 * Callers:
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2 @ 0x180350DEC (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1?CM_Unregister_Notification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHCMNOTIFICATION__@@@Z @ 0x18020F008 (-reset@-$unique_storage@U-$resource_policy@PEAUHCMNOTIFICATION__@@P6AKPEAU1@@Z$1-CM_Unregister_N.c)
 *     ?await_suspend@awaitable@?1??resume_background@winrt@@YA@XZ@QEBAXU?$coroutine_handle@X@experimental@std@@@Z @ 0x180219E7C (-await_suspend@awaitable@-1--resume_background@winrt@@YA@XZ@QEBAXU-$coroutine_handle@X@experimen.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA?AV?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@0@$$QEAPEAVGamingOverlayExperienceManager@@@Z @ 0x18033F4D0 (--$com_query@VGamingOverlayExperienceManager@@PEAV1@@wil@@YA-AV-$com_ptr_t@VGamingOverlayExperie.c)
 *     ??1?$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18034113C (--1-$com_ptr_t@VGamingOverlayExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__ResumeCoro_1(char *a1)
{
  __int64 v2; // rcx
  void *v3; // r8
  __int64 v4; // rbx

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_6;
      case 2:
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = *(_QWORD *)(a1 + 49);
        wil::com_query<GamingOverlayExperienceManager,GamingOverlayExperienceManager *>(
          (__int64 *)a1 + 2,
          (__int64 *)a1 + 3);
        a1[32] = 0;
        *((_WORD *)a1 + 4) = 4;
        `winrt::resume_background'::`2'::awaitable::await_suspend(v2, (void (*)(void *, void *))a1, v3);
        return;
      case 4:
        *((_QWORD *)a1 + 5) = 0LL;
        v4 = *(_QWORD *)(a1 + 49);
        wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)a1 + 5, (RTL_SRWLOCK *)(v4 + 224));
        wil::details::unique_storage<wil::details::resource_policy<HCMNOTIFICATION__ *,unsigned long (*)(HCMNOTIFICATION__ *),&unsigned long CM_Unregister_Notification(HCMNOTIFICATION__ *),wistd::integral_constant<unsigned __int64,0>,HCMNOTIFICATION__ *,HCMNOTIFICATION__ *,0,std::nullptr_t>>::reset(
          (__int64 *)(v4 + 240),
          0LL);
        CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)a1 + 5);
        wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
        goto LABEL_6;
      case 5:
        wil::com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>::~com_ptr_t<GamingOverlayExperienceManager,wil::err_exception_policy>((__int64 *)a1 + 2);
LABEL_6:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1, (const struct std::nothrow_t *)0x40);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
