/*
 * XREFs of HalpPciMapMmConfigPhysicalAddress @ 0x14043A908
 * Callers:
 *     HaliPciInterfaceReadConfig @ 0x140439FA0 (HaliPciInterfaceReadConfig.c)
 *     HalpPCIConfig @ 0x14043A4F0 (HalpPCIConfig.c)
 * Callees:
 *     HalpMap @ 0x1403439AC (HalpMap.c)
 */

unsigned __int64 __fastcall HalpPciMapMmConfigPhysicalAddress(__int64 a1)
{
  unsigned __int64 v1; // r8

  v1 = HalpPciMmConfigVirtualAddress;
  if ( HalpPciMmConfigVirtualAddress )
  {
    *(_QWORD *)(8 * (((unsigned __int64)HalpPciMmConfigVirtualAddress >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = 0LL;
    __invlpg((void *)v1);
    *(_QWORD *)(8 * ((v1 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = a1 & 0xFFFFFFFFFF000LL | 0x800000000000001BuLL;
  }
  else
  {
    v1 = HalpMap(a1, 1LL, 0, 1, 4u, 0LL);
    HalpPciMmConfigVirtualAddress = v1;
  }
  return v1;
}
