/*
 * XREFs of ?CreateSizeResourceProxy@CCompositor@@QEAAJPEAPEAVCSizeResourceProxy@@@Z @ 0x180089824
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ED6C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateSizeResourceProxy(__int64 this, CResourceProxy **a2)
{
  return CCompositor::CreateProxy<CSizeResourceProxy>(this, a2);
}
