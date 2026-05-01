/*
 * XREFs of ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180238830
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x180029184 (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1801F69A0 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall CShellSnapComponent::DisplaySettingsChange(__int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(RTL_SRWLOCK **)(a1 + 720);
  if ( v2 && SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(v2) )
  {
    try
    {
      SnapFlyoutHost::HideAsync(*(_QWORD *)(a1 + 720), (__int64)&v6, 1);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x825,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                             v3);
    }
  }
  return 0LL;
}
