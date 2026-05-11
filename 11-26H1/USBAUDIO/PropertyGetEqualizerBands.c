/*
 * XREFs of PropertyGetEqualizerBands @ 0x140032730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetEqualizerBands(IRP *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  unsigned __int64 Length; // r14
  PKSFILTER FilterFromIrp; // rcx
  __int64 v10; // r11
  const KSNODE_DESCRIPTOR *NodeDescriptors; // rcx
  const GUID *Type; // r11
  __int64 v13; // r8
  _DWORD *v14; // r9
  unsigned int i; // edx
  int v16; // eax

  v4 = *(unsigned int *)(a2 + 32);
  v7 = -1073741811;
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
        v13 = 0LL;
        v14 = &pBandFreqs;
        for ( i = 0; i < 0x1E; ++i )
        {
          v16 = *(&Type[1].Data1 + 10 * v4);
          if ( _bittest(&v16, i) && (unsigned int)v13 < *(_DWORD *)&Type->Data4[40 * v4 + 4] )
          {
            *(_DWORD *)(a3 + 4 * v13) = *v14;
            v13 = (unsigned int)(v13 + 1);
          }
          ++v14;
        }
        return 0;
      }
    }
  }
  return v7;
}
