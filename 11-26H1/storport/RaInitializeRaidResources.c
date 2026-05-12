/*
 * XREFs of RaInitializeRaidResources @ 0x1400251C0
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaFreeRaidResources @ 0x14001CE40 (RaFreeRaidResources.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140025578 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     StorGetActiveGatewayCountRequired @ 0x140025764 (StorGetActiveGatewayCountRequired.c)
 *     StorGetPreferredNodeNumber @ 0x1400257D0 (StorGetPreferredNodeNumber.c)
 *     McTemplateK0zqqqqi_EtwWriteTransfer @ 0x140026318 (McTemplateK0zqqqqi_EtwWriteTransfer.c)
 *     RaidLogAllocationFailure @ 0x140095610 (RaidLogAllocationFailure.c)
 */

__int64 __fastcall RaInitializeRaidResources(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  int v7; // eax
  unsigned __int64 v10; // rdx
  __int64 v12; // r12
  unsigned int v13; // ecx
  __int64 v14; // rbp
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  unsigned int ActiveGatewayCountRequired; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  ULONG MaximumProcessorCount; // ebx
  unsigned int v22; // ecx
  bool v23; // cc
  unsigned int PreferredNodeNumber; // eax
  __int64 v25; // rdx
  unsigned int j; // esi
  __int64 Pool2; // rbx
  unsigned int v28; // ecx
  union _SLIST_HEADER *v29; // rcx
  __int64 v30; // rcx
  __int64 Pool; // rax
  unsigned __int64 v33; // rax
  __int64 i; // rbx
  PVOID *v35; // rax
  union _SLIST_HEADER *v36; // rcx
  __int64 v37; // [rsp+90h] [rbp+8h]
  unsigned int v39; // [rsp+B8h] [rbp+30h]

  v7 = 16;
  *(_DWORD *)(a1 + 144) = a2;
  *(_QWORD *)(a1 + 152) = a4;
  if ( a2 <= 0x10 )
    v7 = a2;
  *(_DWORD *)(a1 + 180) = a6;
  v10 = PhysicalMemorySize;
  *(_DWORD *)(a1 + 140) = v7;
  *(_BYTE *)(a1 + 184) = a5 == 0;
  *(_DWORD *)(a1 + 160) = 0;
  v12 = a3;
  *(_DWORD *)(a1 + 148) = a3;
  *(_DWORD *)(a1 + 188) = 0;
  v13 = 64;
  v14 = *(_QWORD *)(a4 + 64);
  v37 = v14;
  if ( !v10 )
  {
    v15 = 256;
LABEL_5:
    v16 = v15;
    goto LABEL_6;
  }
  if ( v10 < 0x40000000 )
  {
LABEL_62:
    v15 = v13;
  }
  else if ( v10 >= 0x80000000 )
  {
    if ( v10 >= 0x200000000LL )
    {
      v33 = 0x400000000LL;
      v15 = 512;
      if ( v10 >= 0x400000000LL )
      {
        do
        {
          if ( v10 < v33 )
            break;
          v13 = *(_DWORD *)(a1 + 144);
          v15 *= 2;
          v33 *= 2LL;
          if ( v15 >= v13 )
            goto LABEL_62;
        }
        while ( v33 <= 0x800000000000LL );
      }
    }
    else
    {
      v15 = 256;
    }
  }
  else
  {
    v15 = 128;
  }
  v16 = *(_DWORD *)(a1 + 144);
  if ( *(unsigned int *)(a1 + 148) * (unsigned __int64)v16 > v10 / 0x2710 )
    goto LABEL_5;
LABEL_6:
  if ( (*(_BYTE *)(v14 + 112) & 2) != 0 && v16 > 0x40 )
    v16 = 64;
  ActiveGatewayCountRequired = StorGetActiveGatewayCountRequired(v14, 0LL);
  v18 = ActiveGatewayCountRequired + a2 - 1 - (ActiveGatewayCountRequired + a2 - 1) % ActiveGatewayCountRequired;
  v20 = v18 % ActiveGatewayCountRequired;
  v19 = v18 / ActiveGatewayCountRequired;
  if ( v16 > v18 / ActiveGatewayCountRequired )
  {
    v18 = *(_DWORD *)(a1 + 140);
    if ( v19 < v18 )
      v19 = *(_DWORD *)(a1 + 140);
    v16 = v19;
  }
  if ( v16 > StorPreAllocatedMaxIoResourceCount )
    v16 = StorPreAllocatedMaxIoResourceCount;
  if ( (Microsoft_Windows_StorPortEnableBits & 0x10) != 0 )
    McTemplateK0zqqqqi_EtwWriteTransfer(
      v18,
      v20,
      ActiveGatewayCountRequired,
      *(_QWORD *)(v14 + 48),
      *(_DWORD *)(v14 + 56),
      v16,
      a2,
      v12);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  if ( MaximumProcessorCount <= 0x10 )
  {
    *(_DWORD *)(a1 + 128) = 0;
    InitializeSListHead((PSLIST_HEADER)(a1 + 64));
    v22 = *(_DWORD *)(a1 + 128);
    goto LABEL_14;
  }
  if ( MaximumProcessorCount > 0x40 )
  {
    if ( MaximumProcessorCount <= 0x100 )
    {
      *(_DWORD *)(a1 + 128) = 16;
      v22 = 16;
      goto LABEL_14;
    }
    v22 = 32;
  }
  else
  {
    v22 = 8;
  }
  *(_DWORD *)(a1 + 128) = v22;
LABEL_14:
  v23 = *(_DWORD *)(v14 + 1032) <= 1u;
  *(_DWORD *)(a1 + 132) = MaximumProcessorCount;
  if ( v23 )
  {
    if ( v22 )
    {
      Pool = RaidAllocatePool(64LL, 8LL * v22, 1397907794LL, a4);
      *(_QWORD *)(a1 + 64) = Pool;
      if ( !Pool )
        *(_DWORD *)(a1 + 128) = 0;
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 128); i = (unsigned int)(i + 1) )
      {
        *(_QWORD *)(8 * i + *(_QWORD *)(a1 + 64)) = RaidAllocatePool(72LL, 16LL, 1397907794LL, a4);
        v35 = *(PVOID **)(a1 + 64);
        v36 = (union _SLIST_HEADER *)v35[i];
        if ( !v36 )
        {
          if ( (_DWORD)i )
          {
            if ( (_DWORD)i != 1 )
            {
              *(_DWORD *)(a1 + 128) = i;
              break;
            }
            ExFreePoolWithTag(*v35, 0x53526152u);
          }
          ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0x53526152u);
          *(_DWORD *)(a1 + 128) = 0;
          InitializeSListHead((PSLIST_HEADER)(a1 + 64));
          break;
        }
        InitializeSListHead(v36);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 128) = 0;
  }
  PreferredNodeNumber = StorGetPreferredNodeNumber(a1);
  v39 = PreferredNodeNumber;
  for ( j = 0; j < v16; ++j )
  {
    if ( *(_BYTE *)(a1 + 184) )
    {
      Pool2 = ExAllocatePool2(64LL, v12, 1397907794LL);
      if ( !Pool2 )
        RaidLogAllocationFailure(a4, 64, v12, 1397907794, 0x80000000);
      v14 = v37;
    }
    else
    {
      Pool2 = StorAllocateContiguousIoResourcesWithPreferredNode((unsigned int)v12, v25, v14, PreferredNodeNumber);
    }
    if ( !Pool2 )
    {
      ++*(_DWORD *)(a1 + 160);
      break;
    }
    v28 = *(_DWORD *)(a1 + 128);
    if ( v28 )
      v29 = *(union _SLIST_HEADER **)(*(_QWORD *)(a1 + 64) + 8LL * (j % v28));
    else
      v29 = (union _SLIST_HEADER *)(a1 + 64);
    ExpInterlockedPushEntrySList(v29, (PSLIST_ENTRY)Pool2);
    *(_DWORD *)(Pool2 + 48) = 523124044;
    *(_DWORD *)(Pool2 + 792) = a6;
    if ( a6 )
      v30 = Pool2 + (unsigned int)(v12 - a6);
    else
      v30 = 0LL;
    *(_QWORD *)(Pool2 + 808) = v30;
    if ( *(_BYTE *)(a1 + 184) )
      *(_QWORD *)(Pool2 + 840) = 0LL;
    PreferredNodeNumber = v39;
    *(_QWORD *)(Pool2 + 32) = a1;
  }
  if ( j >= *(_DWORD *)(a1 + 140) )
  {
    *(_QWORD *)(a1 + 48) = v14;
    *(_DWORD *)(a1 + 136) = j;
    if ( (StorageTestFlags & 6) != 2 )
    {
      if ( (StorageTestFlags & 6) == 4 )
      {
        *(_BYTE *)(v14 + 112) &= ~4u;
        return 0LL;
      }
      if ( *(_DWORD *)(a1 + 144) > 0x20u )
        return 0LL;
    }
    *(_BYTE *)(v14 + 112) |= 4u;
    return 0LL;
  }
  RaFreeRaidResources(a1, a4, a5);
  return 3221225495LL;
}
