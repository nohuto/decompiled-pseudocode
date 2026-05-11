/*
 * XREFs of PropertyGetNumEqualizerBands @ 0x140032CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetNumEqualizerBands(IRP *a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rdi
  unsigned int v7; // ebx
  PKSFILTER FilterFromIrp; // rcx
  __int64 v9; // rdx
  const KSNODE_DESCRIPTOR *NodeDescriptors; // r8

  v3 = *(unsigned int *)(a2 + 32);
  v7 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v9 = 7LL * *(unsigned int *)(a2 + 24);
    NodeDescriptors = FilterFromIrp->Descriptor->NodeDescriptors;
    if ( (unsigned int)v3 < HIDWORD(NodeDescriptors[v9 + 3].Name) )
    {
      v7 = 0;
      *a3 = *(_DWORD *)&NodeDescriptors[v9 + 5].Type->Data4[40 * v3 + 4];
      a1->IoStatus.Information = 4LL;
    }
  }
  return v7;
}
