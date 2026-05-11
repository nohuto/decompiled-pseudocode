/*
 * XREFs of PropertyGetMixerLevelCaps @ 0x140032AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyGetMixerLevelCaps(IRP *a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  unsigned int v7; // esi
  unsigned int Length; // ebp
  PKSFILTER FilterFromIrp; // rax
  const GUID *Type; // r8
  unsigned int v11; // edx
  unsigned __int8 *v12; // rcx
  ULONG_PTR v13; // rax
  unsigned int v14; // edx
  unsigned int i; // r9d
  int v16; // eax

  v3 = a3 + 2;
  v7 = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( FilterFromIrp )
  {
    Type = FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24) + 5].Type;
    v11 = 16 * *(_DWORD *)&Type->Data4[4] * *(_DWORD *)Type->Data4 + 8;
    if ( Length )
    {
      if ( Length >= 8 )
      {
        *a3 = *(_DWORD *)Type->Data4;
        v7 = 0;
        a3[1] = *(_DWORD *)&Type->Data4[4];
        a1->IoStatus.Information = 8LL;
        if ( Length == v11 )
        {
          v12 = *(unsigned __int8 **)&Type[1].Data1;
          v13 = v11;
          v14 = 0;
          for ( a1->IoStatus.Information = v13; v14 < *(_DWORD *)Type->Data4; ++v14 )
          {
            for ( i = 0; i < *(_DWORD *)&Type->Data4[4]; v12 += 32 )
            {
              *v3 = *v12;
              if ( v12[1] )
              {
                v3[1] = *((_DWORD *)v12 + 6);
                v3[2] = *((_DWORD *)v12 + 7);
                v16 = *((_DWORD *)v12 + 4);
              }
              else
              {
                v3[1] = *((_DWORD *)v12 + 3);
                v3[2] = *((_DWORD *)v12 + 3);
                v16 = 0;
              }
              v3[3] = v16;
              ++i;
              v3 += 4;
            }
          }
        }
      }
    }
    else
    {
      v7 = -1073741789;
      a1->IoStatus.Information = v11;
    }
  }
  return v7;
}
