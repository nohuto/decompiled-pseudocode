/*
 * XREFs of ?EnableControllerMouseMode@ControllerNavigationManager@@QEAAXXZ @ 0x1801794E4
 * Callers:
 *     ?SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z @ 0x18010A0B0 (-SetGamepadMouseModeEnabled@GamepadInterceptionHelper@@QEAAXK@Z.c)
 * Callees:
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x18017EEC0 (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ControllerNavigationManager::EnableControllerMouseMode(ControllerNavigationManager *this, __int64 a2)
{
  __int64 ***v3; // rdi
  __int64 **i; // rbx

  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, a2);
  v3 = (__int64 ***)*((_QWORD *)this + 9);
  for ( i = *v3; i != (__int64 **)v3; i = (__int64 **)*i )
    ControllerProcessor::NavigationEnableGlobally((ControllerProcessor *)i[3]);
}
