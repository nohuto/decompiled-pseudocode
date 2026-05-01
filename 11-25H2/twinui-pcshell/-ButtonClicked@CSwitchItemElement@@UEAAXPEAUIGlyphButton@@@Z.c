/*
 * XREFs of ?ButtonClicked@CSwitchItemElement@@UEAAXPEAUIGlyphButton@@@Z @ 0x1804ADF40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwitchItemElement::ButtonClicked(CSwitchItemElement *this, struct IGlyphButton *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 45);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, *((_QWORD *)this + 44));
}
