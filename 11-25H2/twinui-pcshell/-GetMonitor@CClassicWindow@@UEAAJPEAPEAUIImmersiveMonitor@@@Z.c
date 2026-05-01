/*
 * XREFs of ?GetMonitor@CClassicWindow@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x1801AC380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindow::GetMonitor(CClassicWindow *this, struct IImmersiveMonitor **a2)
{
  __int64 result; // rax
  __int64 (__fastcall ***v3)(_QWORD, GUID *, struct IImmersiveMonitor **); // rcx

  *a2 = 0LL;
  result = 2147943568LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IImmersiveMonitor **))*((_QWORD *)this + 3);
  if ( v3 )
    return (**v3)(v3, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, a2);
  return result;
}
