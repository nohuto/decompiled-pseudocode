/*
 * XREFs of ?Reset@Mesh2D@@QEAAXXZ @ 0x18002F438
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18002E6A0 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 *     ??0Mesh2D@@QEAA@PEBUtagRECT@@@Z @ 0x18002F3EC (--0Mesh2D@@QEAA@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall Mesh2D::Reset(Mesh2D *this)
{
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0xCu);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
  *((_DWORD *)this + 22) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 64, 4u);
  *((_DWORD *)this + 24) = 1056964608;
}
