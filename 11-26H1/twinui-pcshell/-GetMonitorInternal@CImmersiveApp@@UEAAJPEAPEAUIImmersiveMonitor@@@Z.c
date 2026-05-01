/*
 * XREFs of ?GetMonitorInternal@CImmersiveApp@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1801858F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::GetMonitorInternal(CImmersiveApp *this, struct IImmersiveMonitor **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct IImmersiveMonitor *v6; // rax

  v4 = *((_QWORD *)this + 82);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = (struct IImmersiveMonitor *)*((_QWORD *)this + 82);
  }
  else
  {
    v5 = *((_QWORD *)this + 81);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = (struct IImmersiveMonitor *)*((_QWORD *)this + 81);
  }
  *a2 = v6;
  return 0LL;
}
