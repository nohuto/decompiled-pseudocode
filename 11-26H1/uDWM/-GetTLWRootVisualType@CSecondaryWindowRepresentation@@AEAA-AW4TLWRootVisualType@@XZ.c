/*
 * XREFs of ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x180073D88
 * Callers:
 *     ?CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA?AVCVisualBrush@@_N@Z @ 0x1800BF440 (-CreateVisualBrushForAnimation@CSecondaryWindowRepresentation@@QEAA-AVCVisualBrush@@_N@Z.c)
 *     ?GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z @ 0x1800BF560 (-GetSharedVisualBrush@CSecondaryWindowRepresentation@@QEAAJPEAVCVisualBrush@@@Z.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x1800BF8D8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondaryWindowRepresentation::GetTLWRootVisualType(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 40);
  if ( (v1 & 4) != 0 || *(_DWORD *)(a1 + 72) == 3 )
    return 2LL;
  else
    return (v1 >> 14) & 1;
}
