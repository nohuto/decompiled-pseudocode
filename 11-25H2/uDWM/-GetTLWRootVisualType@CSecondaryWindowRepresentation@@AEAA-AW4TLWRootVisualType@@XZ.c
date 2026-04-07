/*
 * XREFs of ?GetTLWRootVisualType@CSecondaryWindowRepresentation@@AEAA?AW4TLWRootVisualType@@XZ @ 0x18001F8BC
 * Callers:
 *     ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z @ 0x18001EBF0 (-CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCCachedVisualImageProxy@@_N@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ED6C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x18001F8E0 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
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
