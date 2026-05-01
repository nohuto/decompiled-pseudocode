/*
 * XREFs of ?SetFocused@CMultitaskingViewFrameElement@@UEAAX_N@Z @ 0x1804CB3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z @ 0x1804C3190 (-SetFocused@CMultitaskingViewElementBase@@UEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMultitaskingViewFrameElement::SetFocused(CMultitaskingViewFrameElement *this, char a2)
{
  CMultitaskingViewElementBase::SetFocused(this, a2);
  if ( *((_BYTE *)this + 176) && !*((_QWORD *)this + 21) )
  {
    if ( *((_QWORD *)this + 33) )
      (*(void (__fastcall **)(CMultitaskingViewFrameElement *))(*(_QWORD *)this + 288LL))(this);
  }
}
