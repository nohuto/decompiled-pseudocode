/*
 * XREFs of ?SetPosition@CCursorVisualProxy@@QEAAJHH@Z @ 0x1800874CC
 * Callers:
 *     ?SetPosition@CCursorVisual@@QEAAJHH@Z @ 0x180087488 (-SetPosition@CCursorVisual@@QEAAJHH@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCursorVisualProxy::SetPosition(CCursorVisualProxy *this, unsigned int a2, unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 776LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3);
}
