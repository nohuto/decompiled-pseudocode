/*
 * XREFs of ?WorkAreaMayHaveChanged@XamlLauncherState@@UEAAXXZ @ 0x180255710
 * Callers:
 *     <none>
 * Callees:
 *     ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x180251EC0 (-HideCortana@XamlLauncherState@@UEAAXXZ.c)
 *     ?HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ @ 0x180454F5C (-HideCortanaDueToDisplayChange@StartWindowTelemetry@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall XamlLauncherState::WorkAreaMayHaveChanged(XamlLauncherState *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 104LL))(*((_QWORD *)this + 7));
  if ( *((_DWORD *)this + 10) == 7 )
  {
    StartWindowTelemetry::HideCortanaDueToDisplayChange();
    XamlLauncherState::HideCortana(this);
  }
}
