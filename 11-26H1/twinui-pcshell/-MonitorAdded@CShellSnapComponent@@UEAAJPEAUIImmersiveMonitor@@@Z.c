/*
 * XREFs of ?MonitorAdded@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18022A6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ @ 0x18018920C (-IsAnySnapFlyoutInstanceVisible@SnapFlyoutHost@@QEAA_NXZ.c)
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180269D20 (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 */

__int64 __fastcall CShellSnapComponent::MonitorAdded(CShellSnapComponent *this, struct IImmersiveMonitor *a2)
{
  RTL_SRWLOCK *v3; // rcx
  __int64 v4; // r8
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 90);
  if ( v3 && SnapFlyoutHost::IsAnySnapFlyoutInstanceVisible(v3) )
  {
    try
    {
      LOBYTE(v4) = 1;
      SnapFlyoutHost::HideAsync(*((_QWORD *)this + 90), &v8, v4);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x825,
                             (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
                             v5);
    }
  }
  return 0LL;
}
