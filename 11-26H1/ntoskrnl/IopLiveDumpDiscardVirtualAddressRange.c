/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x14024E9A0
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404E439C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAddProcessFilter @ 0x1405CC5E8 (IopLiveDumpAddProcessFilter.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405CC998 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CD084 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CD3AC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405CDC6C (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024D8F0 (MmGetPhysicalAddress.c)
 *     RtlClearBitsEx @ 0x14024EFA0 (RtlClearBitsEx.c)
 *     MmIsAddressValidEx @ 0x14034DFD0 (MmIsAddressValidEx.c)
 */

void __fastcall IopLiveDumpDiscardVirtualAddressRange(__int64 a1, char *a2, unsigned __int64 a3)
{
  char *v3; // rbx
  unsigned __int64 i; // rdi
  PHYSICAL_ADDRESS v6; // rax

  if ( a3 )
  {
    v3 = a2;
    if ( a2 )
    {
      for ( i = ((a3 & 0xFFF) != 0) + (a3 >> 12); i; --i )
      {
        if ( (unsigned __int8)MmIsAddressValidEx(v3) )
        {
          v6.QuadPart = (unsigned __int64)MmGetPhysicalAddress(v3).QuadPart >> 12;
          if ( v6.QuadPart < *(_QWORD *)(a1 + 576) )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RtlClearBitsEx)(a1 + 576, (PHYSICAL_ADDRESS)v6.QuadPart, 1LL);
        }
        v3 += 4096;
      }
    }
  }
}
