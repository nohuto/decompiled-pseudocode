/*
 * XREFs of ?ContextMenu@CSwitchItemElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x1804BFB40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CSwitchItemElement::ContextMenu(CSwitchItemElement *this, const struct ContextMenuArgs *a2)
{
  if ( *((_BYTE *)a2 + 8) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 76) + 256LL))(*((_QWORD *)this + 76));
  else
    CMultitaskingViewElementBase::ContextMenu(this, a2);
}
