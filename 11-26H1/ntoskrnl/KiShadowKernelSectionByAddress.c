/*
 * XREFs of KiShadowKernelSectionByAddress @ 0x1405F9C1C
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140BFE350 (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14042B410 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     MmCreateShadowMapping @ 0x14087BD54 (MmCreateShadowMapping.c)
 */

__int64 KiShadowKernelSectionByAddress()
{
  PIMAGE_SECTION_HEADER v0; // rax
  unsigned int PhysicalAddress; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp+8h] BYREF

  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)0x140000000LL, 0LL, &OutHeaders);
  v0 = RtlSectionTableFromVirtualAddress(
         OutHeaders,
         (PVOID)0x140000000LL,
         (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  PhysicalAddress = v0->Misc.PhysicalAddress;
  if ( PhysicalAddress <= v0->SizeOfRawData )
    PhysicalAddress = v0->SizeOfRawData;
  return MmCreateShadowMapping(0x140000000LL + v0->VirtualAddress, (PhysicalAddress + 4095) & 0xFFFFF000);
}
