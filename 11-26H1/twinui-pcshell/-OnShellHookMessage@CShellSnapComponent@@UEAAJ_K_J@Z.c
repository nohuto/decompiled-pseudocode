/*
 * XREFs of ?OnShellHookMessage@CShellSnapComponent@@UEAAJ_K_J@Z @ 0x180189160
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18018920C (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180291BCC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z @ 0x1805B3A68 (-DismissForTargetWindow@SnapFlyoutHost@@QEAAXPEAUHWND__@@@Z.c)
 *     ?OnForegroundChange@SnapFlyoutHost@@QEAAXXZ @ 0x1805B4694 (-OnForegroundChange@SnapFlyoutHost@@QEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnShellHookMessage(CShellSnapComponent *this, __int64 a2, HWND a3)
{
  SnapFlyoutHost *v6; // rcx
  const char *v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rbx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (SnapFlyoutHost *)*((_QWORD *)this + 93);
  if ( v6 && SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(v6) )
  {
    v9 = a2 - 18;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 && (v11 = v10 - 4) != 0 )
      {
        if ( v11 != 17 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x7EA,
            (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            v8);
        try
        {
          SnapFlyoutHost::DismissForTargetWindow(*((SnapFlyoutHost **)this + 93), a3);
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x7EF,
                                 (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                                 v12);
        }
      }
      else
      {
        SnapFlyoutHost::OnForegroundChange(*((SnapFlyoutHost **)this + 93));
      }
    }
    else
    {
      SnapFlyoutHost::DismissForTargetWindow(*((SnapFlyoutHost **)this + 93), a3);
    }
  }
  return 0LL;
}
