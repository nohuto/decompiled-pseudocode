/*
 * XREFs of CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180247BA0
 * Callers:
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x180247B48 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 * Callees:
 *     ?WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ @ 0x180015F70 (-WorkAreaMayHaveChanged@CStartExperienceManager@@UEAAJXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCStartExperienceManager@@@Z @ 0x1800BDB1C (--$com_weak_query@PEAVCStartExperienceManager@@@wil@@YA-AV-$com_ptr_t@UIWeakReference@@Uerr_exce.c)
 *     ??$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartExperienceManager@Experience@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801EF4E0 (--$try_query@UIStartExperienceManager@Experience@Shell@Internal@Windows@@@-$com_ptr_t@UIWeakRefe.c)
 *     ?IsViewVisible@CStartExperienceManager@@AEBA_NXZ @ 0x180208774 (-IsViewVisible@CStartExperienceManager@@AEBA_NXZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x18024634C (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180352F78 (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rcx
  int HaveChanged; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  try
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_11;
      case 2:
        v1 = *(_QWORD *)(a1 + 65);
        *(_QWORD *)(a1 + 16) = v1;
        wil::com_weak_query<CStartExperienceManager *>((_QWORD *)(a1 + 24), (__int64 *)(a1 + 16));
        *(_QWORD *)(a1 + 32) = v1 + 856;
        *(_QWORD *)(a1 + 40) = 0LL;
        *(_WORD *)(a1 + 8) = 4;
        if ( (unsigned __int8)winrt::impl::apartment_awaiter::await_suspend(a1 + 32, a1) )
          return;
        goto LABEL_6;
      case 4:
LABEL_6:
        winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
        wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::try_query<Windows::Internal::Shell::Experience::IStartExperienceManager>(
          (__int64 *)(a1 + 24),
          (_QWORD *)(a1 + 48));
        if ( *(_QWORD *)(a1 + 48) )
        {
          if ( CStartExperienceManager::IsViewVisible(*(CStartExperienceManager **)(a1 + 65)) )
          {
            HaveChanged = CStartExperienceManager::WorkAreaMayHaveChanged((CStartExperienceManager *)(v2 + 40));
            if ( HaveChanged < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x5E4,
                (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
                (const char *)(unsigned int)HaveChanged);
          }
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 48));
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
        goto LABEL_11;
      case 5:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
LABEL_11:
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)a1, (const struct std::nothrow_t *)0x50);
        break;
      default:
        __debugbreak();
        break;
    }
  }
  catch ( ... )
  {
    *(_WORD *)(a1 + 8) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception();
  }
}
