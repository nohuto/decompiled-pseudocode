/*
 * XREFs of PnpiUpdateResourceList @ 0x1400CF2EC
 * Callers:
 *     PnpiBiosAddressHandleGlobalFlags @ 0x1400A96D0 (PnpiBiosAddressHandleGlobalFlags.c)
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1400A9ED8 (PnpiBiosExtendedIrqToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400B76BC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400B7B04 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptor @ 0x1400B7F18 (PnpiBiosDmaToIoDescriptor.c)
 *     PnpiBiosDmaToIoDescriptorV3 @ 0x1400B7FE4 (PnpiBiosDmaToIoDescriptorV3.c)
 *     PnpiBiosFunctionConfigToNtIoDescriptor @ 0x1400B804C (PnpiBiosFunctionConfigToNtIoDescriptor.c)
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1400B80B0 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosIrqToIoDescriptor @ 0x1400B8114 (PnpiBiosIrqToIoDescriptor.c)
 *     PnpiBiosPortFixedToIoDescriptor @ 0x1400B81E8 (PnpiBiosPortFixedToIoDescriptor.c)
 *     PnpiBiosPortToIoDescriptor @ 0x1400B826C (PnpiBiosPortToIoDescriptor.c)
 *     PnpiBiosSerialBusToIoDescriptor @ 0x1400B8304 (PnpiBiosSerialBusToIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1400B8368 (PnpiBiosVendorToNtIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400CE1DC (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosMemoryToIoDescriptor @ 0x1400CF1D4 (PnpiBiosMemoryToIoDescriptor.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400CF578 (PnpiBiosAddressDoubleToIoDescriptor.c)
 * Callees:
 *     PnpiGrowResourceDescriptor @ 0x1400CF35C (PnpiGrowResourceDescriptor.c)
 */

__int64 __fastcall PnpiUpdateResourceList(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  bool v8; // zf
  _OWORD *v9; // rdx

  v2 = 0;
  if ( *(_QWORD *)a1 && (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 7) != 0
    || (result = PnpiGrowResourceDescriptor(a1, a2, 0LL), v2 = result, (int)result >= 0) )
  {
    v6 = *(_QWORD *)a1 + 8LL;
    v7 = 32LL * *(unsigned int *)(*(_QWORD *)a1 + 4LL);
    v8 = v7 + v6 == 0;
    v9 = (_OWORD *)(v7 + v6);
    *a2 = v9;
    if ( v8 )
    {
      return 3221225473LL;
    }
    else
    {
      *v9 = 0LL;
      v9[1] = 0LL;
      ++*(_DWORD *)(*(_QWORD *)a1 + 4LL);
      return v2;
    }
  }
  return result;
}
