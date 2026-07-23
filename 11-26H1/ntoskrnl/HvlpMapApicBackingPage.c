/*
 * XREFs of HvlpMapApicBackingPage @ 0x1405C249C
 * Callers:
 *     HvlEnlightenProcessor @ 0x140532D60 (HvlEnlightenProcessor.c)
 *     HvlPhase1Initialize @ 0x1405BB23C (HvlPhase1Initialize.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     KeBugCheck @ 0x140535E10 (KeBugCheck.c)
 *     HvlpAllocateOverlayPages @ 0x1405C22B8 (HvlpAllocateOverlayPages.c)
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
