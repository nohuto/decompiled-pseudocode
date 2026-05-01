/*
 * XREFs of ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x180180A2C (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180197398 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncher::ConnectToMonitor(XamlLauncher *this, struct IUnknown *a2)
{
  unsigned __int8 v4; // al

  if ( !*((_QWORD *)this + 44) )
    return 2147943568LL;
  if ( ImmersiveMonitorHelper::ConnectToMonitor(*((ImmersiveMonitorHelper **)this + 22), a2) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 44) + 104LL))(*((_QWORD *)this + 44));
    XamlLauncher::PublishLauncherVisibilityState((ImmersiveMonitorHelper **)this - 3, v4);
  }
  return 0LL;
}
