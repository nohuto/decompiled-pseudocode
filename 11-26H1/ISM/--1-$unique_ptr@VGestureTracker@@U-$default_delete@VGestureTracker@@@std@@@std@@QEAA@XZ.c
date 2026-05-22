/*
 * XREFs of ??1?$unique_ptr@VGestureTracker@@U?$default_delete@VGestureTracker@@@std@@@std@@QEAA@XZ @ 0x18015C5CC
 * Callers:
 *     ??1HandlerContext@ShellGesturesProcessor@@QEAA@XZ @ 0x18015C624 (--1HandlerContext@ShellGesturesProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1?DestroyInteractionContext@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18015C600 (--1-$unique_storage@U-$resource_policy@PEAUHINTERACTIONCONTEXT__@@P6AJPEAU1@@Z$1-DestroyInteract.c)
 */

void __fastcall std::unique_ptr<GestureTracker>::~unique_ptr<GestureTracker>(void **a1)
{
  char *v1; // rbx

  v1 = (char *)*a1;
  if ( *a1 )
  {
    wil::details::unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINTERACTIONCONTEXT__ *,long (*)(HINTERACTIONCONTEXT__ *),&long DestroyInteractionContext(HINTERACTIONCONTEXT__ *),wistd::integral_constant<unsigned __int64,0>,HINTERACTIONCONTEXT__ *,HINTERACTIONCONTEXT__ *,0,std::nullptr_t>>(v1 + 32);
    operator delete(v1, (const struct std::nothrow_t *)0x38);
  }
}
