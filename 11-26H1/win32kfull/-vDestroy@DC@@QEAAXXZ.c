/*
 * XREFs of ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC
 * Callers:
 *     NtGdiPathToRegion @ 0x1401128A0 (NtGdiPathToRegion.c)
 *     NtGdiStrokePath @ 0x1401129F0 (NtGdiStrokePath.c)
 *     NtGdiFillPath @ 0x140114130 (NtGdiFillPath.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x140114280 (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 *     NtGdiBeginPath @ 0x1401F65B0 (NtGdiBeginPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1402280F0 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x140228790 (NtGdiSelectClipPath.c)
 *     NtGdiAbortPath @ 0x140329F00 (NtGdiAbortPath.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vDestroy(DC *this)
{
  *((_DWORD *)this + 62) &= ~1u;
  DC::hpath(this, 0LL);
}
