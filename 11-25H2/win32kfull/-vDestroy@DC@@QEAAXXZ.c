/*
 * XREFs of ?vDestroy@DC@@QEAAXXZ @ 0x1400E621C
 * Callers:
 *     NtGdiBeginPath @ 0x1400E4EB0 (NtGdiBeginPath.c)
 *     NtGdiStrokeAndFillPath @ 0x1400E5050 (NtGdiStrokeAndFillPath.c)
 *     NtGdiSelectClipPath @ 0x1400E5210 (NtGdiSelectClipPath.c)
 *     NtGdiStrokePath @ 0x1400E5B50 (NtGdiStrokePath.c)
 *     NtGdiPathToRegion @ 0x1400E5CB0 (NtGdiPathToRegion.c)
 *     NtGdiFillPath @ 0x1400E5DF0 (NtGdiFillPath.c)
 *     ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1400E61F0 (-vRestorePath@@YAXAEAVXDCOBJ@@J@Z.c)
 *     NtGdiAbortPath @ 0x140338BE0 (NtGdiAbortPath.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vDestroy(DC *this)
{
  *((_DWORD *)this + 62) &= ~1u;
  DC::hpath(this, 0LL);
}
