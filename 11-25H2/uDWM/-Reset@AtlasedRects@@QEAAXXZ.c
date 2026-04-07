/*
 * XREFs of ?Reset@AtlasedRects@@QEAAXXZ @ 0x18000545C
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x1800051EC (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800079C0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall AtlasedRects::Reset(AtlasedRects *this)
{
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 16LL);
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 32, 16LL);
}
