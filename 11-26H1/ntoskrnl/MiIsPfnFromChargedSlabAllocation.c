/*
 * XREFs of MiIsPfnFromChargedSlabAllocation @ 0x140309350
 * Callers:
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiDeleteShadowStackPtes @ 0x1403407F4 (MiDeleteShadowStackPtes.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MmAllocateIndependentPagesEx @ 0x140B3D7BC (MmAllocateIndependentPagesEx.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140CFB804 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiGetPfnSlabType @ 0x1402FDC40 (MiGetPfnSlabType.c)
 */

__int64 __fastcall MiIsPfnFromChargedSlabAllocation(__int64 a1)
{
  __int64 v1; // r8

  if ( (unsigned int)MiGetPfnSlabType(a1) == 9 )
    return 0LL;
  else
    return *(unsigned __int8 *)(qword_140E3D0C0 + 2 * ((unsigned __int64)((v1 + 0x220000000000LL) / 48) >> 9) + 1) >> 7;
}
