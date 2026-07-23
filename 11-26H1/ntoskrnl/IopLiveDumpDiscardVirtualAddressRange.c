/*
 * XREFs of IopLiveDumpDiscardVirtualAddressRange @ 0x140250300
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x1404DD93C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAddProcessFilter @ 0x1405CEDF8 (IopLiveDumpAddProcessFilter.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405CF1A8 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateExtraBuffers @ 0x1405CF894 (IopLiveDumpAllocateExtraBuffers.c)
 *     IopLiveDumpAllocateFromIOSpace @ 0x1405CFBBC (IopLiveDumpAllocateFromIOSpace.c)
 *     IopLiveDumpAllocateIptBuffers @ 0x1405D047C (IopLiveDumpAllocateIptBuffers.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14024F250 (MmGetPhysicalAddress.c)
 *     RtlClearBitsEx @ 0x140250900 (RtlClearBitsEx.c)
 *     MmIsAddressValidEx @ 0x140350050 (MmIsAddressValidEx.c)
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
