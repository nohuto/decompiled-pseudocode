/*
 * XREFs of PropertyGetOldDbBasicSupport @ 0x14003D8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetOldDbBasicSupport(IRP *a1, __int64 a2, __int64 a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int v7; // r8d
  unsigned int v8; // r11d
  unsigned int Length; // r10d
  __int64 v10; // r13
  const KSNODE_DESCRIPTOR *NodeDescriptors; // rsi
  unsigned int Name_high; // r15d
  const KSNODE_DESCRIPTOR *v13; // rcx
  ULONG_PTR v14; // rax
  const GUID *Type; // rdx
  GUID *v16; // r10
  unsigned int v17; // r9d
  const GUID *v18; // rbx
  const GUID *v19; // r14
  int AutomationTable; // eax
  unsigned int v21; // edi
  __int64 v22; // rbp
  __int64 v23; // rcx
  unsigned int v25; // [rsp+60h] [rbp+8h]
  __int64 v26; // [rsp+68h] [rbp+10h]
  const KSNODE_DESCRIPTOR *v27; // [rsp+70h] [rbp+18h]

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = -1073741811;
  v8 = 1;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( FilterFromIrp )
  {
    v10 = 7LL * *(unsigned int *)(a2 + 24);
    NodeDescriptors = FilterFromIrp->Descriptor->NodeDescriptors;
    v27 = NodeDescriptors;
    Name_high = HIDWORD(NodeDescriptors[v10 + 3].Name);
    v13 = &NodeDescriptors[v10];
    v25 = Name_high;
    if ( *(_DWORD *)(a2 + 16) == 18 )
      v8 = *(_DWORD *)&v13[5].Type->Data4[4];
    v14 = 16 * Name_high * v8 + 56;
    if ( Length >= 4 )
    {
      v7 = 0;
      a1->IoStatus.Information = 4LL;
      *(_DWORD *)a3 = 515;
      if ( Length >= 0x28 )
      {
        *(_DWORD *)(a3 + 4) = v14;
        *(_QWORD *)(a3 + 24) = 3LL;
        *(_QWORD *)(a3 + 32) = 1LL;
        *(GUID *)(a3 + 8) = KSPROPTYPESETID_General;
        a1->IoStatus.Information = 40LL;
        if ( Length >= (unsigned int)v14 )
        {
          Type = v13[5].Type;
          v16 = (GUID *)(a3 + 56);
          *(_DWORD *)(a3 + 44) = 16;
          v17 = 0;
          *(_DWORD *)(a3 + 40) = 2;
          *(_DWORD *)(a3 + 52) = 2;
          *(_DWORD *)(a3 + 48) = Name_high;
          a1->IoStatus.Information = v14;
          v26 = a3 + 56;
          if ( Name_high )
          {
            v18 = Type + 1;
            v19 = Type + 2;
            do
            {
              AutomationTable = (int)NodeDescriptors[v10 + 4].AutomationTable;
              if ( _bittest(&AutomationTable, v17) )
              {
                if ( *(_DWORD *)(a2 + 16) == 18 )
                {
                  v21 = 0;
                  if ( v8 )
                  {
                    v22 = 0LL;
                    do
                    {
                      v23 = 2LL * (v8 * v17 + v21);
                      v22 += 20LL;
                      ++v21;
                      *(_OWORD *)(v26 + 8 * v23) = *(_OWORD *)(*(_QWORD *)&v19->Data1 + v22 - 16);
                    }
                    while ( v21 < v8 );
                    Name_high = v25;
                    NodeDescriptors = v27;
                  }
                }
                else
                {
                  *v16 = *v18;
                }
              }
              ++v17;
              v19 = (const GUID *)((char *)v19 + 40);
              v18 += 2;
              ++v16;
            }
            while ( v17 < Name_high );
          }
        }
      }
    }
    else
    {
      a1->IoStatus.Information = v14;
      return (unsigned int)-1073741789;
    }
  }
  return v7;
}
