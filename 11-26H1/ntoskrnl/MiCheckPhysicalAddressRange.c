/*
 * XREFs of MiCheckPhysicalAddressRange @ 0x14033A5D4
 * Callers:
 *     MmCopyMemory @ 0x14033B4D0 (MmCopyMemory.c)
 *     MiDbgMapPhysicalAddress @ 0x140703038 (MiDbgMapPhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckPhysicalAddressRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // r9d

  if ( a1 + a2 <= a1 )
    return 0LL;
  v2 = a1 + a2 - 1;
  v3 = 0;
  if ( KiMtrrMaskBase )
  {
    if ( (v2 & 0xFFFFFFFFFFFFF000uLL) > KiMtrrMaskBase )
      return 0LL;
  }
  if ( KeGetCurrentPrcb()->CpuVendor != 1 || v2 < 0xFD00000000LL )
    return 1LL;
  LOBYTE(v3) = a1 > 0xFFFFFFFFFFLL;
  return v3;
}
