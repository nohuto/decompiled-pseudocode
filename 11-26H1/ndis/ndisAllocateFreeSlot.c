/*
 * XREFs of ndisAllocateFreeSlot @ 0x1400545F0
 * Callers:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x140054530 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 * Callees:
 *     <none>
 */

void **__fastcall ndisAllocateFreeSlot(int a1)
{
  void **i; // rax
  int v2; // edx
  __int64 v3; // rdx

  for ( i = (void **)ndisPerProcessorDescriptorList; i != &ndisPerProcessorDescriptorList; i = (void **)*i )
  {
    v2 = *((_DWORD *)i + 4);
    if ( v2 != -16777217 )
    {
      v3 = v2 & 0x1FFFFFF;
      *((_DWORD *)i + 4) = *((_DWORD *)i + v3 + 5);
      *((_DWORD *)i + v3 + 5) = a1;
      if ( &i[v3 + 512] )
        return &i[v3 + 512];
    }
  }
  return 0LL;
}
