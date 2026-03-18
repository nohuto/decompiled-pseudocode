/*
 * XREFs of ?GetMCRoot@CManipulationContext@@CAPEAVCInteraction@@PEBV2@@Z @ 0x180153334
 * Callers:
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180152D28 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801D59AC (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z @ 0x180226F70 (-FindDesktopTree@CManipulationContext@@SAXPEAUMCCollections@@PEAVCInteraction@@PEAU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

struct CInteraction *__fastcall CManipulationContext::GetMCRoot(const struct CInteraction *a1)
{
  struct CInteraction *result; // rax

  do
  {
    result = a1;
    a1 = (const struct CInteraction *)*((_QWORD *)a1 + 28);
  }
  while ( a1 );
  return result;
}
