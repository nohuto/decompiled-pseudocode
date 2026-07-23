/*
 * XREFs of MmAllocateIsrStack @ 0x14087C1D0
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405EC974 (KiAllocateProcessorStacks.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405ED1CC (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     KasanTrackAddressNoInline @ 0x140534710 (KasanTrackAddressNoInline.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3F88C (MmAllocateIndependentPagesEx.c)
 */

char __fastcall MmAllocateIsrStack(_QWORD *a1, __int64 a2)
{
  int v2; // esi
  unsigned __int64 v3; // rdi
  int v4; // ebp
  __int64 IndependentPages; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 PteAddress; // rax

  v2 = 0;
  v3 = (unsigned int)(KeIsrStackSize + 4096);
  v4 = a2;
  if ( *a1 )
  {
    v7 = *a1 - v3;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v7) )
    {
      MiSetPageProtection(v7 + 4096, (unsigned int)KeIsrStackSize, 31);
      goto LABEL_6;
    }
    return 0;
  }
  IndependentPages = MmAllocateIndependentPagesEx((unsigned int)v3, a2, 0LL, 0LL);
  v7 = IndependentPages;
  if ( !IndependentPages )
    return 0;
  MiSetPageProtection(IndependentPages + 4096, (unsigned int)KeIsrStackSize, 31);
  v2 = 1;
  *a1 = v3 + v7;
LABEL_6:
  if ( byte_140FC8BD8 && (int)KasanTrackAddressNoInline(v7 + 4096, (unsigned int)KeIsrStackSize, v4 + 1) < 0 )
  {
    if ( v2 )
      MmFreeIndependentPages(v7, v3);
    return 0;
  }
  PteAddress = MiGetPteAddress(v7);
  MiMarkBootGuardPage(PteAddress);
  return 1;
}
