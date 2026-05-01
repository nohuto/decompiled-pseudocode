/*
 * XREFs of ??1BatchLayout@CSwitchItemGrid@@QEAA@XZ @ 0x1804B3EA8
 * Callers:
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x1804B5580 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z @ 0x1804B5B60 (-SetItems@CSwitchItemGrid@@UEAAJPEAUIObservableObjectArray@@@Z.c)
 *     _CSwitchItemGrid::RemoveAllDescendants_::_1_::dtor$0 @ 0x1806C971C (_CSwitchItemGrid--RemoveAllDescendants_--_1_--dtor$0.c)
 *     _CSwitchItemGrid::SetItems_::_1_::dtor$0 @ 0x1806C972E (_CSwitchItemGrid--SetItems_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSwitchItemGrid::BatchLayout::~BatchLayout(CSwitchItemGrid::BatchLayout *this)
{
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)this + 208LL) + 64LL))(*(_QWORD *)this + 208LL);
}
