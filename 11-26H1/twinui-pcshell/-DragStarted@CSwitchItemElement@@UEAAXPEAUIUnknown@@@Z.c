/*
 * XREFs of ?DragStarted@CSwitchItemElement@@UEAAXPEAUIUnknown@@@Z @ 0x1804BFC10
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180063200 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?DragStarted@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@@Z @ 0x1804C1CA0 (-DragStarted@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwitchItemElement::DragStarted(struct IUnknown **this, struct IUnknown *a2)
{
  __int64 v4; // rdx
  struct IUnknown *v5; // rcx

  CMultitaskingViewElementBase::DragStarted((CMultitaskingViewElementBase *)this, a2);
  if ( SHIsSameObject(this[73], a2) )
  {
    v5 = this[11];
    *((_BYTE *)this + 672) = 1;
    ((void (__fastcall *)(struct IUnknown *, __int64, __int64))v5->lpVtbl[1].AddRef)(v5, v4, 3LL);
  }
}
