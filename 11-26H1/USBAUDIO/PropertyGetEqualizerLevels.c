/*
 * XREFs of PropertyGetEqualizerLevels @ 0x140032820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetEqualizerLevels(IRP *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  unsigned __int64 Length; // r15
  PKSFILTER FilterFromIrp; // rcx
  __int64 v10; // r10
  const KSNODE_DESCRIPTOR *NodeDescriptors; // rcx
  const GUID *Type; // r10
  __int64 i; // r8

  v4 = *(unsigned int *)(a2 + 32);
  v7 = -1073741808;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    v10 = 7LL * *(unsigned int *)(a2 + 24);
    NodeDescriptors = FilterFromIrp->Descriptor->NodeDescriptors;
    if ( (unsigned int)v4 < HIDWORD(NodeDescriptors[v10 + 3].Name) )
    {
      Type = NodeDescriptors[v10 + 5].Type;
      a1->IoStatus.Information = 4LL * *(unsigned int *)&Type->Data4[40 * v4 + 4];
      if ( Length < 4 * (unsigned __int64)*(unsigned int *)&Type->Data4[40 * v4 + 4] )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)&Type->Data4[40 * v4 + 4]; i = (unsigned int)(i + 1) )
          *(_DWORD *)(a3 + 4 * i) = *(_DWORD *)(*((_QWORD *)&Type[2].Data1 + 5 * v4) + 20 * i);
        return 0;
      }
    }
  }
  return v7;
}
