/*
 * XREFs of HvlpMapApicBackingPage @ 0x1405BFC2C
 * Callers:
 *     HvlEnlightenProcessor @ 0x140530860 (HvlEnlightenProcessor.c)
 *     HvlPhase1Initialize @ 0x1405B89CC (HvlPhase1Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     KeBugCheck @ 0x140533990 (KeBugCheck.c)
 *     HvlpAllocateOverlayPages @ 0x1405BFA48 (HvlpAllocateOverlayPages.c)
 */

struct _KPRCB *HvlpMapApicBackingPage()
{
  unsigned __int8 *OverlayPages; // rax
  unsigned __int8 *v1; // rbx
  struct _KPRCB *result; // rax

  OverlayPages = (unsigned __int8 *)HvlpAllocateOverlayPages();
  v1 = OverlayPages;
  if ( !OverlayPages )
    KeBugCheck(0x31u);
  __writemsr(0xC0010138, MmGetPhysicalAddress(OverlayPages).QuadPart & 0xFFFFFFFFFFFFF000uLL | 1);
  result = KeGetCurrentPrcb();
  result->ApicBackingPage = v1;
  return result;
}
