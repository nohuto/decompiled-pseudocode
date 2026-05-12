/*
 * XREFs of NvmeControllerInitializeInternalDbgLog @ 0x1400F65B0
 * Callers:
 *     NvmeAdapterCreateNvmeController @ 0x1401A0988 (NvmeAdapterCreateNvmeController.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidAllocatePoolEx @ 0x1400929F4 (RaidAllocatePoolEx.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall NvmeControllerInitializeInternalDbgLog(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // ecx
  ULONG MaximumProcessorCount; // eax
  __int64 v8; // r9
  __int64 Pool; // rax
  ULONG v10; // esi
  __int64 v11; // r15
  unsigned __int16 *v12; // r14
  unsigned __int16 MaximumGroupCount; // r14
  __int64 v14; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+30h] [rbp-50h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+B0h] [rbp+30h] BYREF
  ULONG Length; // [rsp+B8h] [rbp+38h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_DWORD *)(a1 + 1336);
  v4 = 0;
  v5 = *(_DWORD *)(v1 + 1076);
  *(_DWORD *)(a1 + 1344) = v5;
  v6 = v3 ^ (*(_DWORD *)(v1 + 1072) ^ v3) & 1;
  *(_DWORD *)(a1 + 1336) = v6;
  *(_DWORD *)(a1 + 1336) = v6 ^ (*(_DWORD *)(v1 + 1072) ^ v6) & 2;
  *(_DWORD *)(a1 + 1352) = *(_DWORD *)(v1 + 1080);
  *(_QWORD *)(a1 + 1360) = *(_QWORD *)(v1 + 1088) | 0x20LL;
  if ( v5 )
  {
    if ( g_CpuInfo )
      MaximumProcessorCount = *((_DWORD *)g_CpuInfo + 2);
    else
      MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v8 = *(_QWORD *)(a1 + 128);
    *(_DWORD *)(a1 + 1340) = MaximumProcessorCount;
    *(_DWORD *)(a1 + 1408) = -1;
    Pool = RaidAllocatePool(64LL, 8LL * MaximumProcessorCount, 1380147538LL, *(_QWORD *)(v8 + 8));
    *(_QWORD *)(a1 + 1368) = Pool;
    if ( Pool )
    {
      v10 = 0;
      while ( v10 < *(_DWORD *)(a1 + 1340) )
      {
        if ( g_CpuInfo )
        {
          v11 = v10;
          v12 = *(unsigned __int16 **)(56LL * v10 + *((_QWORD *)g_CpuInfo + 4) + 48);
          if ( v12 )
          {
            MaximumGroupCount = *v12;
          }
          else
          {
            ProcNumber = 0;
            MaximumGroupCount = 0;
            memset_0(&Information, 0, sizeof(Information));
            Length = 80;
            if ( KeGetProcessorNumberFromIndex(v10, &ProcNumber) >= 0
              && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
            {
              MaximumGroupCount = Information.Group.MaximumGroupCount;
            }
          }
        }
        else
        {
          ProcNumber = 0;
          MaximumGroupCount = 0;
          memset_0(&Information, 0, sizeof(Information));
          Length = 80;
          if ( KeGetProcessorNumberFromIndex(v10, &ProcNumber) >= 0
            && KeQueryLogicalProcessorRelationship(&ProcNumber, RelationNumaNode, &Information, &Length) >= 0 )
          {
            MaximumGroupCount = Information.Group.MaximumGroupCount;
          }
          v11 = v10;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8 * v11) = RaidAllocatePoolEx(
                                                          64LL,
                                                          ((unsigned int)(*(_DWORD *)(a1 + 1344) - 1) + 2LL) << 6,
                                                          1380147538LL,
                                                          *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL),
                                                          MaximumGroupCount);
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8 * v11);
        if ( !v14 )
          return (unsigned int)-1073741801;
        *(_DWORD *)(v14 + 4) = v10++;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8 * v11) + 8LL) = MaximumGroupCount;
        **(_DWORD **)(*(_QWORD *)(a1 + 1368) + 8 * v11) = -1;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1368) + 8 * v11) + 12LL) = *(_DWORD *)(a1 + 1344);
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 1368) = 0LL;
  }
  return v4;
}
