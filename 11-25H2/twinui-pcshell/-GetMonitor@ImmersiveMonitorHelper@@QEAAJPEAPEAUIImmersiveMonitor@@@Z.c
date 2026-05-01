/*
 * XREFs of ?GetMonitor@ImmersiveMonitorHelper@@QEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1801B5C6C
 * Callers:
 *     ?WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1801B5B10 (-WorkAreaMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ImmersiveMonitorHelper::GetMonitor(ImmersiveMonitorHelper *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rcx

  *a2 = 0LL;
  v4 = *((_QWORD *)this + 8);
  if ( !v4 )
    return 2147943568LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *a2 = (struct IImmersiveMonitor *)*((_QWORD *)this + 8);
  return 0LL;
}
