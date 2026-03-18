/*
 * XREFs of MmAllocateIsrStack @ 0x140875DEC
 * Callers:
 *     KiAllocateProcessorStacks @ 0x1405EA004 (KiAllocateProcessorStacks.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x1405EA85C (KiCompleteBootProcessorContextInitialization.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiGetPteAddress @ 0x1404468C0 (MiGetPteAddress.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     KasanTrackAddressNoInline @ 0x140532270 (KasanTrackAddressNoInline.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
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
  if ( byte_140FC7BE8 && (int)KasanTrackAddressNoInline(v7 + 4096, (unsigned int)KeIsrStackSize, v4 + 1) < 0 )
  {
    if ( v2 )
      MmFreeIndependentPages(v7, v3);
    return 0;
  }
  PteAddress = MiGetPteAddress(v7);
  MiMarkBootGuardPage(PteAddress);
  return 1;
}
