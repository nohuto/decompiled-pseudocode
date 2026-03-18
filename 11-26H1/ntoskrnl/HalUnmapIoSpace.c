/*
 * XREFs of HalUnmapIoSpace @ 0x14059A210
 * Callers:
 *     <none>
 * Callees:
 *     HalpUnmapVirtualAddress @ 0x140509DE0 (HalpUnmapVirtualAddress.c)
 */

void __stdcall HalUnmapIoSpace(PVOID VirtualAddress, SIZE_T NumberOfBytes)
{
  HalpUnmapVirtualAddress((unsigned __int64)VirtualAddress, (NumberOfBytes + 4095) >> 12, 0);
}
