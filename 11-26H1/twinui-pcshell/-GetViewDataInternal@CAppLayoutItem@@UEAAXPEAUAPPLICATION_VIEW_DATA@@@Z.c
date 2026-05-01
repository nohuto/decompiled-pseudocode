/*
 * XREFs of ?GetViewDataInternal@CAppLayoutItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1806C8BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayoutItem::GetViewDataInternal(CAppLayoutItem *this, struct APPLICATION_VIEW_DATA *a2)
{
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 88);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 104);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 15);
}
