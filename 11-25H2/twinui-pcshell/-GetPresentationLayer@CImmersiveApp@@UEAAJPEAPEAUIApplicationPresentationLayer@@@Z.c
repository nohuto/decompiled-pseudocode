/*
 * XREFs of ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x180215D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::GetPresentationLayer(CImmersiveApp *this, struct IApplicationPresentationLayer **a2)
{
  struct IApplicationPresentationLayer *v3; // rbx

  v3 = (struct IApplicationPresentationLayer *)*((_QWORD *)this + 40);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*((_QWORD *)this + 40));
  *a2 = v3;
  return 0LL;
}
