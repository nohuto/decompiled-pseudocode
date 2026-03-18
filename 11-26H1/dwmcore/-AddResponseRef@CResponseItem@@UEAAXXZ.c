/*
 * XREFs of ?AddResponseRef@CResponseItem@@UEAAXXZ @ 0x1801D1F90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BC20 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

void __fastcall CResponseItem::AddResponseRef(CResponseItem *this)
{
  CMILRefCountImpl::AddReference((CResponseItem *)((char *)this + 8));
  ++*((_DWORD *)this + 4);
}
