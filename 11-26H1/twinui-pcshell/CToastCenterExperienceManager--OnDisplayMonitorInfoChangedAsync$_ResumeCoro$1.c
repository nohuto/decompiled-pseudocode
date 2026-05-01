/*
 * XREFs of CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_ResumeCoro$1 @ 0x180239510
 * Callers:
 *     ?OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x180239630 (-OnDisplayMonitorInfoChangedAsync@CToastCenterExperienceManager@@AEAA-AUfire_and_forget@winrt@@X.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x180136284 (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ @ 0x180237340 (-await_resume@apartment_awaiter@impl@winrt@@QEBAXXZ.c)
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1802396A4 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180358FEC (-await_suspend@apartment_awaiter@impl@winrt@@QEAA_NU-$coroutine_handle@X@experimental@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
void __fastcall CToastCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__ResumeCoro_1(__int64 a1)
{
  CToastCenterExperienceManager *v2; // rcx
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 3:
      goto LABEL_8;
    case 2:
      *(_OWORD *)(a1 + 16) = 0LL;
      winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)(a1 + 16));
      *(_QWORD *)(a1 + 32) = a1 + 16;
      *(_QWORD *)(a1 + 40) = 0LL;
      *(_WORD *)(a1 + 8) = 4;
      if ( (unsigned __int8)winrt::impl::apartment_awaiter::await_suspend(a1 + 32, a1) )
        return;
      goto LABEL_5;
    case 4:
LABEL_5:
      winrt::impl::apartment_awaiter::await_resume((winrt::impl::apartment_awaiter *)(a1 + 32));
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
      v2 = *(CToastCenterExperienceManager **)(a1 + 56);
      if ( *((_DWORD *)v2 + 36) == 2 )
      {
        v3 = CToastCenterExperienceManager::PositionView(v2);
        if ( v3 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x2EC,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v3);
      }
      goto LABEL_8;
    case 5:
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 16));
LABEL_8:
      if ( *(_WORD *)(a1 + 10) )
        operator delete((void *)a1, (const struct std::nothrow_t *)0x40);
      break;
    default:
      __debugbreak();
      break;
  }
}
