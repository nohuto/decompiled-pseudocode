/*
 * XREFs of ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x1805A3340
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x180203E80 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18002633C (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800CC1A4 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x18016D41C (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18018920C (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x180269830 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180269D20 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x18026A73C (-ShowFlyoutAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CShellSnapComponent::ToggleSnapFlyout(
        CShellSnapComponent *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  __int64 *VisibleSnapBar; // rax
  bool v7; // bl
  __int64 *v8; // rcx
  __int64 v9; // rax
  struct IApplicationView *v10; // rdx
  ApplicationViewHelpers *WindowForView; // rax
  CShellSnapComponent *v12; // rcx
  void (__fastcall *v13)(__int64); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // [rsp+30h] [rbp+8h] BYREF
  ApplicationViewHelpers *v16; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    v5 = *((_QWORD *)this + 114);
    if ( v5 )
    {
      v15 = 0LL;
      VisibleSnapBar = SnapFlyoutHost::GetVisibleSnapBar(v5, (__int64 *)&v16);
      v7 = winrt::Windows::Foundation::operator!=(
             (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))VisibleSnapBar,
             &v15);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
      if ( !v7 )
      {
        if ( SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(*((RTL_SRWLOCK **)this + 114)) )
        {
          SnapFlyoutHost::HideAsync(*((void (__fastcall **)(char *))this + 114), &v15, 1);
        }
        else
        {
          v16 = 0LL;
          v8 = (__int64 *)*((_QWORD *)this + 28);
          v9 = *v8;
          v16 = 0LL;
          if ( (*(int (__fastcall **)(__int64 *, ApplicationViewHelpers **))(v9 + 72))(v8, &v16) >= 0 )
          {
            if ( v16 )
            {
              WindowForView = (ApplicationViewHelpers *)ApplicationViewHelpers::GetWindowForView(
                                                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v16,
                                                          v10);
              v13 = (void (__fastcall *)(__int64))WindowForView;
              if ( WindowForView )
              {
                if ( CShellSnapComponent::CanSnapWindow(v12, WindowForView) )
                  SnapFlyoutHost::ShowFlyoutAsync(*((void (__fastcall **)(__int64))this + 114), &v15, v13, 2);
              }
            }
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
        }
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x79F,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  }
}
