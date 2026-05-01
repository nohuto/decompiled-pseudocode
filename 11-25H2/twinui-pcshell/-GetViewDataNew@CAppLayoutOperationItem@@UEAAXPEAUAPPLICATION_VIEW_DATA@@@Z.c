/*
 * XREFs of ?GetViewDataNew@CAppLayoutOperationItem@@UEAAXPEAUAPPLICATION_VIEW_DATA@@@Z @ 0x1806A1CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppLayoutOperationItem::GetViewDataNew(
        CAppLayoutOperationItem *this,
        struct APPLICATION_VIEW_DATA *a2)
{
  *(_OWORD *)a2 = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 1) = *((_OWORD *)this + 5);
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 12);
}
