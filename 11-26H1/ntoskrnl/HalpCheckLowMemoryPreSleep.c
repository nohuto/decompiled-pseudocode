/*
 * XREFs of HalpCheckLowMemoryPreSleep @ 0x140BECDA8
 * Callers:
 *     HaliAcpiSleep @ 0x1405A2710 (HaliAcpiSleep.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     IoGetStackLimits @ 0x140263C80 (IoGetStackLimits.c)
 *     HalpMapPhysicalMemory64 @ 0x14034270C (HalpMapPhysicalMemory64.c)
 *     RtlClearAllBits @ 0x14047EA90 (RtlClearAllBits.c)
 *     HalpUnmapVirtualAddress @ 0x140509DE0 (HalpUnmapVirtualAddress.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpSimpleCheck @ 0x140BED138 (HalpSimpleCheck.c)
 */

void __fastcall HalpCheckLowMemoryPreSleep(int a1)
{
  char *v1; // rbx
  unsigned __int64 v2; // rdi
  PHYSICAL_ADDRESS v3; // rax
  unsigned __int64 i; // rbx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned __int64 LowLimit; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 HighLimit; // [rsp+40h] [rbp+18h] BYREF

  if ( (a1 & 0x20000) != 0 )
  {
    HighLimit = 0LL;
    LowLimit = 0LL;
    RtlClearAllBits(&HalpLowMemoryMapStack);
    IoGetStackLimits(&LowLimit, &HighLimit);
    v1 = (char *)(LowLimit & 0xFFFFFFFFFFFFF000uLL);
    v2 = (HighLimit + 4095) & 0xFFFFFFFFFFFFF000uLL;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3.QuadPart = MmGetPhysicalAddress(v1).QuadPart >> 12;
      if ( v3.QuadPart < 0x100uLL )
        *((_BYTE *)HalpLowMemoryMapStack.Buffer + ((unsigned __int64)v3.LowPart >> 3)) |= 1 << (v3.LowPart & 7);
      v1 += 4096;
    }
    memset_0(HalpPhysicalMemoryCheckSums, 0, sizeof(HalpPhysicalMemoryCheckSums));
    for ( i = 0LL; i < 0x100; ++i )
    {
      v5 = (unsigned __int64)(unsigned int)i >> 3;
      if ( ((*((char *)HalpLowMemoryMap.Buffer + v5) >> (i & 7)) & 1) == 0
        && ((*((char *)HalpLowMemoryMapStack.Buffer + v5) >> (i & 7)) & 1) == 0 )
      {
        v6 = HalpMapPhysicalMemory64((_DWORD)i << 12, 1, 0, 4);
        if ( v6 )
        {
          HalpPhysicalMemoryCheckSums[i] = HalpSimpleCheck(v6, v7, v8, v6);
          HalpUnmapVirtualAddress(v9, 1LL, 0);
        }
      }
    }
  }
}
