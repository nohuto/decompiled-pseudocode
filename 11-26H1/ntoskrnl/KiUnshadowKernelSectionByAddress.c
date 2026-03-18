/*
 * XREFs of KiUnshadowKernelSectionByAddress @ 0x1405F72D4
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140BF8350 (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x14040E4E0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 */

__int64 KiUnshadowKernelSectionByAddress()
{
  _DWORD *v0; // rax
  unsigned int v1; // ecx
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  RtlImageNtHeaderEx(1, 0x140000000uLL, 0LL, &v3);
  v0 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                   v3,
                   0x140000000LL,
                   (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  v1 = v0[2];
  if ( v1 <= v0[4] )
    v1 = v0[4];
  return MmDeleteShadowMapping(0x140000000LL + (unsigned int)v0[3], (v1 + 4095) & 0xFFFFF000);
}
