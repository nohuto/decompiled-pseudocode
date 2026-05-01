/*
 * XREFs of ?ToggleSnapFlyout@CShellSnapComponent@@AEAAXXZ @ 0x18057F7A0
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x1802117D0 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180029184 (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18005D244 (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z @ 0x1800DAEA8 (-CanSnapWindow@CShellSnapComponent@@AEAA_NPEAUHWND__@@@Z.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x1800F5554 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801F69A0 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 *     ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x18021058C (-ShowFlyoutAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 *     ?GetVisibleSnapBar@SnapFlyoutHost@@AEAA?AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@XZ @ 0x180271904 (-GetVisibleSnapBar@SnapFlyoutHost@@AEAA-AUSnapFlyoutInstance@SnapComponent@Shell@Internal@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v13; // ebx
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
          SnapFlyoutHost::HideAsync(*((_QWORD *)this + 114), (__int64)&v15, 1);
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
              v13 = (int)WindowForView;
              if ( WindowForView )
              {
                if ( CShellSnapComponent::CanSnapWindow(v12, WindowForView) )
                  SnapFlyoutHost::ShowFlyoutAsync(*((_QWORD *)this + 114), (__int64)&v15, v13, 2);
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
      (void *)0x795,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      a4);
  }
}
