/*
 * XREFs of ?IsInteractionDescendantOfVisual@CManipulationContext@@CA_NPEBVCInteraction@@PEBVCVisual@@@Z @ 0x180213BE4
 * Callers:
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1800A78B0 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801D59AC (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 * Callees:
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1800A8E64 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 *     ?GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A97F8 (-GetVisualNoRef@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 */

bool __fastcall CManipulationContext::IsInteractionDescendantOfVisual(
        const struct CInteraction *a1,
        const struct CVisual *a2)
{
  const struct CVisual *VisualNoRef; // rax
  bool *v4; // rdx
  bool v5; // bl

  VisualNoRef = CInteraction::GetVisualNoRef(a1);
  v5 = 0;
  while ( VisualNoRef && !v5 )
  {
    v5 = VisualNoRef == a2;
    VisualNoRef = CManipulationContext::GetVisualEffectiveParentImpl(VisualNoRef, v4);
  }
  return v5;
}
