/*
 * XREFs of HalpMcStagingHypervisor @ 0x1405961E0
 * Callers:
 *     HalpLoadMicrocode @ 0x140787970 (HalpLoadMicrocode.c)
 * Callees:
 *     HalpHvLpReadMultipleMsr @ 0x14044BBD4 (HalpHvLpReadMultipleMsr.c)
 *     HvlQueryProcessorTopologyCount @ 0x140534E30 (HvlQueryProcessorTopologyCount.c)
 *     HalpMcStagePayload @ 0x14059606C (HalpMcStagePayload.c)
 *     HvlQueryActiveHypervisorProcessorCount @ 0x1405BBD90 (HvlQueryActiveHypervisorProcessorCount.c)
 *     HvlQueryProcessorTopologyEx @ 0x1405BBF20 (HvlQueryProcessorTopologyEx.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 HalpMcStagingHypervisor()
{
  size_t v0; // rdi
  _BYTE *Pool2; // rax
  _BYTE *v2; // rbx
  int ProcessorTopology; // esi
  unsigned int i; // edi
  __int64 v6; // r14
  LARGE_INTEGER v7[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF
  size_t Size; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v10; // [rsp+80h] [rbp+40h] BYREF
  int v11; // [rsp+88h] [rbp+48h] BYREF

  v10 = 0;
  v8 = 0;
  LODWORD(Size) = 0;
  v7[0].QuadPart = 0LL;
  v11 = 1957;
  if ( (int)HvlQueryActiveHypervisorProcessorCount(&v8) < 0 || (int)HvlQueryProcessorTopologyCount(&Size, 0LL) < 0 )
    return 3221225473LL;
  v0 = (unsigned int)Size;
  Pool2 = (_BYTE *)ExAllocatePool2(0x40uLL);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225632LL;
  memset_0(Pool2, 0, v0);
  ProcessorTopology = 0;
  for ( i = 0; i < v8; ++i )
  {
    ProcessorTopology = HvlQueryProcessorTopologyEx(i, 0, (unsigned int)&v10, 0, 0LL);
    if ( ProcessorTopology < 0 )
      break;
    v6 = v10;
    if ( !v2[v10] )
    {
      ProcessorTopology = HalpHvLpReadMultipleMsr(i, 1LL, (__int64)&v11, v7);
      if ( ProcessorTopology < 0 )
        break;
      HalpMcStagePayload(v7[0]);
      v2[v6] = 1;
    }
  }
  ExFreePoolWithTag(v2, 0x636C6148u);
  return (unsigned int)ProcessorTopology;
}
