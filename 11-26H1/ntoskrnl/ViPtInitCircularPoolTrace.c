/*
 * XREFs of ViPtInitCircularPoolTrace @ 0x140C30678
 * Callers:
 *     VfPoolTrackingEntry @ 0x140645390 (VfPoolTrackingEntry.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x1404A8DD0 (MmGetNumberOfPhysicalPages.c)
 *     ExSetPoolFlags @ 0x1406D00A0 (ExSetPoolFlags.c)
 *     ExAllocatePool3 @ 0x140C16010 (ExAllocatePool3.c)
 */

__int64 ViPtInitCircularPoolTrace()
{
  unsigned int v0; // ebx
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v2; // edx
  unsigned __int64 v3; // rcx
  int v4; // eax
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx

  v0 = 0;
  NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
  v2 = 0x10000;
  v3 = NumberOfPhysicalPages >> 18;
  if ( (VfOptionFlags & 2) != 0 )
    goto LABEL_18;
  v4 = VfPoolTracesLength;
  if ( (unsigned int)VfPoolTracesLength <= 0x10000 )
  {
    if ( (unsigned int)v3 > 4 )
    {
      if ( (unsigned int)v3 > 0x10 )
      {
        v4 = 0x80000;
LABEL_15:
        VfPoolTracesLength = v4;
        goto LABEL_16;
      }
      v5 = (unsigned __int64)(unsigned int)v3 >> 2;
      do
      {
        v2 *= 2;
        --v5;
      }
      while ( v5 );
    }
    v4 = v2;
    goto LABEL_15;
  }
  v6 = 0x800000;
  if ( (unsigned int)VfPoolTracesLength <= 0x800000 )
  {
    while ( v6 >= 0x10000 )
    {
      if ( (VfPoolTracesLength & v6) != 0 )
      {
        v4 = VfPoolTracesLength & v6;
        goto LABEL_15;
      }
      v6 >>= 1;
    }
  }
  else
  {
    v4 = 0x800000;
    VfPoolTracesLength = 0x800000;
  }
LABEL_16:
  VfPoolTraces = (PVOID)ExAllocatePool3(
                          64LL,
                          (struct _KLOCK_ENTRIES *)(unsigned int)(424 * v4),
                          0x6E496956u,
                          (__int64)&VfExtendedParameters,
                          1u);
  if ( VfPoolTraces )
  {
LABEL_18:
    ExSetPoolFlags(0x10uLL);
    return v0;
  }
  return (unsigned int)-1073741801;
}
