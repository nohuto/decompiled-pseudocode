/*
 * XREFs of ?FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z @ 0x180226F70
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1801917E8 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180227190 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180153334 (-GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z.c)
 *     ?FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH@Z @ 0x1801E382C (-FindManipulationContext@CManipulationContext@@CAPEAV1@PEBUMCCollections@@PEBVCInteraction@@PEAH.c)
 */

void __fastcall CManipulationContext::FindDesktopTree(
        struct MCCollections *a1,
        struct CInteraction *a2,
        struct _LUID *a3)
{
  const struct CInteraction *MCRoot; // rax
  const struct MCCollections *v5; // r8
  struct _LUID *ManipulationContext; // rax

  *a3 = c_defaultDesktopLuid;
  if ( a2 )
  {
    MCRoot = CManipulationContext::GetMCRoot(a2);
    ManipulationContext = (struct _LUID *)CManipulationContext::FindManipulationContext(v5, MCRoot, (int *)v5);
    if ( ManipulationContext )
      *a3 = ManipulationContext[4];
  }
}
