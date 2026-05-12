/*
 * XREFs of RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140046660
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1401B69C8 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x140012104 (RaidAdapterSendSrbIoControlSynchronously.c)
 *     StorpLogPhysicalTopologyInfo @ 0x1400B8A68 (StorpLogPhysicalTopologyInfo.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidGetStorageAdapterPhysicalTopologyProperty(__int64 a1, IRP *a2, _QWORD *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // r15
  size_t Length; // rbp
  unsigned int v9; // edi
  __int64 Pool; // rax
  unsigned int *v11; // r14
  int v12; // eax
  int v13; // esi
  unsigned int *v14; // rcx
  unsigned int v16; // ebx
  unsigned int v17; // eax
  __int64 v18; // rbx
  int v19; // eax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  *a3 = 0LL;
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 8 )
  {
    return (unsigned int)-1073741585;
  }
  else if ( (unsigned int)Length < 0x38 )
  {
    if ( (unsigned int)Length < 8 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *(_DWORD *)&MasterIrp->Type = 56;
      *(_DWORD *)(&MasterIrp->Size + 1) = 56;
      v13 = 0;
      *a3 = 8LL;
    }
  }
  else
  {
    v9 = Length + 28;
    if ( (unsigned int)Length >= 0xFFFFFFE4 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      Pool = RaidAllocatePool(64LL, v9, 1918067026LL, *(_QWORD *)(a1 + 8));
      v11 = (unsigned int *)Pool;
      if ( Pool )
      {
        *(_DWORD *)Pool = 28;
        *(_DWORD *)(Pool + 16) = 2954240;
        *(_QWORD *)(Pool + 4) = 0x59474F4C4F504F54LL;
        *(_DWORD *)(Pool + 12) = 60;
        *(_DWORD *)(Pool + 24) = Length;
        *(_DWORD *)(Pool + 28) = 56;
        *(_DWORD *)(Pool + 32) = Length;
        v12 = RaidAdapterSendSrbIoControlSynchronously(a1, a2, Pool, v9, 0LL, 0, 64, 0);
        v13 = v12;
        if ( v12 >= 0 || (v14 = v11, v12 == -2147483643) )
        {
          v16 = v11[8];
          memset_0(MasterIrp, 0, Length);
          v17 = Length;
          if ( (unsigned int)Length >= v16 )
            v17 = v16;
          v18 = v17;
          memmove(MasterIrp, v11 + 7, v17);
          *(_DWORD *)&MasterIrp->Type = 56;
          v14 = v11;
          *a3 = v18;
          if ( v13 >= 0 )
          {
            v19 = *(_DWORD *)(a1 + 5408);
            if ( (v19 & 1) == 0 && *(_DWORD *)(&MasterIrp->Size + 1) <= (unsigned int)Length )
            {
              *(_DWORD *)(a1 + 5408) = v19 | 1;
              StorpLogPhysicalTopologyInfo(a1, MasterIrp, (unsigned int)Length);
              v14 = v11;
            }
          }
        }
        ExFreePoolWithTag(v14, 0x72536152u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v13;
}
