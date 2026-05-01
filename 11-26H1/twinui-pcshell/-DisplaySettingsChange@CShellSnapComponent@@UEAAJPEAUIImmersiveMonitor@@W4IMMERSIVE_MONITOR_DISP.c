/*
 * XREFs of ?DisplaySettingsChange@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18022A730
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18018920C (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180269D20 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall CShellSnapComponent::DisplaySettingsChange(__int64 a1)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(RTL_SRWLOCK **)(a1 + 720);
  if ( v2 && SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(v2) )
  {
    try
    {
      LOBYTE(v3) = 1;
      SnapFlyoutHost::HideAsync(*(_QWORD *)(a1 + 720), &v7, v3);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x82F,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                             v4);
    }
  }
  return 0LL;
}
