/*
 * XREFs of GetCpuInformation @ 0x14011EB28
 * Callers:
 *     DllInitialize @ 0x1400ACAB0 (DllInitialize.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     FreeCpuInformation @ 0x14011EA5C (FreeCpuInformation.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

char GetCpuInformation()
{
  unsigned __int16 v0; // si
  NTSTATUS v1; // r13d
  USHORT *Pool; // rdi
  USHORT v3; // bx
  USHORT HighestNodeNumber; // r12
  USHORT v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rax
  _WORD *v8; // r14
  unsigned int v9; // r15d
  void *v10; // rbx
  USHORT v11; // si
  __int64 v12; // rbx
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 *v22; // rax
  __int16 v23; // cx
  unsigned __int16 v24; // r12
  unsigned int v25; // r13d
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v27; // r12
  __int64 v28; // rdx
  char v29; // bl
  _WORD *v30; // rax
  __int64 v31; // rcx
  unsigned __int8 EfficiencyClass; // dl
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-B9h] BYREF
  ULONG Length; // [rsp+24h] [rbp-B5h] BYREF
  int v42; // [rsp+28h] [rbp-B1h]
  int v43; // [rsp+2Ch] [rbp-ADh]
  int v44; // [rsp+30h] [rbp-A9h]
  int v45; // [rsp+34h] [rbp-A5h]
  unsigned int v46; // [rsp+38h] [rbp-A1h]
  __int64 v47; // [rsp+40h] [rbp-99h]
  __int64 v48; // [rsp+48h] [rbp-91h]
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Information; // [rsp+50h] [rbp-89h] BYREF
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX v50; // [rsp+A0h] [rbp-39h] BYREF
  USHORT Count; // [rsp+148h] [rbp+6Fh] BYREF
  unsigned __int16 i; // [rsp+150h] [rbp+77h]
  __int16 v53; // [rsp+158h] [rbp+7Fh]

  v0 = 0;
  v42 = 0;
  v1 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  Pool = (USHORT *)RaidAllocatePool(64LL, 64LL, 1230201170LL, 0LL);
  if ( Pool )
  {
    *Pool = KeQueryActiveGroupCount();
    *((_DWORD *)Pool + 2) = KeQueryMaximumProcessorCountEx(0xFFFFu);
    *((_DWORD *)Pool + 3) = KeQueryActiveProcessorCountEx(0xFFFFu);
    v3 = 0;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    do
    {
      Count = 0;
      KeQueryNodeActiveAffinity(v3, 0LL, &Count);
      if ( Count )
        ++v0;
      ++v3;
    }
    while ( v3 <= HighestNodeNumber );
    Pool[2] = v0;
    v5 = KeQueryHighestNodeNumber();
    v6 = 16LL * *Pool;
    Pool[3] = v5;
    v7 = RaidAllocatePool(64LL, v6, 1230201170LL, 0LL);
    *((_QWORD *)Pool + 2) = v7;
    v8 = 0LL;
    v9 = 0;
    if ( v7 )
    {
      v47 = RaidAllocatePool(64LL, 16 * *Pool * (Pool[3] + 1LL), 1230201170LL, 0LL);
      v10 = (void *)v47;
      if ( v47 )
      {
        v11 = 0;
        if ( *Pool )
        {
          do
          {
            v12 = 2LL * v11;
            *(_QWORD *)(*((_QWORD *)Pool + 2) + 8 * v12 + 8) = KeQueryGroupAffinity(v11);
            *(_WORD *)(*((_QWORD *)Pool + 2) + 8 * v12) = v11;
            v13 = RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(*((_QWORD *)Pool + 2) + 16LL * v11++ + 8));
            *(_WORD *)(*((_QWORD *)Pool + 2) + 8 * v12 + 2) = v13;
          }
          while ( v11 < *Pool );
          v10 = (void *)v47;
        }
        v14 = RaidAllocatePool(64LL, 80 * (Pool[3] + 1LL), 1230201170LL, 0LL);
        *((_QWORD *)Pool + 3) = v14;
        if ( v14
          && (v15 = RaidAllocatePool(64LL, 56LL * *((unsigned int *)Pool + 2), 1230201170LL, 0LL),
              (*((_QWORD *)Pool + 4) = v15) != 0LL) )
        {
          v16 = 0;
          v46 = 0;
          while ( v16 <= Pool[3] )
          {
            v17 = *((_QWORD *)Pool + 3);
            v18 = 80LL * v16;
            v48 = v18;
            *(_WORD *)(v18 + v17) = v16;
            KeQueryNodeActiveAffinity(v16, (PGROUP_AFFINITY)(v18 + *((_QWORD *)Pool + 3) + 8LL), 0LL);
            *(_WORD *)(*((_QWORD *)Pool + 3) + v18 + 2) = RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(*((_QWORD *)Pool + 3)
                                                                                               + v18
                                                                                               + 8));
            *(_DWORD *)(*((_QWORD *)Pool + 3) + v18 + 56) = KeQueryNodeActiveProcessorCount(*(unsigned __int16 *)(*((_QWORD *)Pool + 3) + v18));
            v19 = *((_QWORD *)Pool + 3);
            v20 = *(_QWORD *)(v19 + v18 + 8);
            Count = *(_WORD *)(v19 + v18 + 16);
            *(_WORD *)(v19 + v18 + 60) = 1;
            *(_QWORD *)(*((_QWORD *)Pool + 3) + v18 + 72) = v47 + 16LL * v16 * *Pool;
            *(_OWORD *)*(_QWORD *)(*((_QWORD *)Pool + 3) + v18 + 72) = *(_OWORD *)(*((_QWORD *)Pool + 3) + v18 + 8);
            v21 = *((_QWORD *)Pool + 3);
            if ( *(_DWORD *)(v21 + v18 + 56) > (unsigned int)*(unsigned __int16 *)(v21 + v18 + 2) )
            {
              KeQueryNodeActiveAffinity2((unsigned __int16)v16, *(_QWORD *)(v21 + v18 + 72), *Pool);
              *(_WORD *)(*((_QWORD *)Pool + 3) + v18 + 60) = 1;
              v21 = *((_QWORD *)Pool + 3);
              v22 = *(__int64 **)(v21 + v18 + 72);
              v20 = *v22;
              Count = *((_WORD *)v22 + 4);
            }
            if ( *(_WORD *)(v21 + v18 + 2) )
            {
              v23 = 0;
LABEL_19:
              v53 = v23;
              if ( !v23 )
              {
                v24 = 0;
                for ( i = 0; ; i = v24 )
                {
                  if ( !v20 )
                  {
                    v23 = v53 + 1;
                    goto LABEL_19;
                  }
                  if ( _bittest64(&v20, (unsigned __int8)v24) )
                    break;
LABEL_45:
                  ++v24;
                }
                memset_0(&Information, 0, sizeof(Information));
                Length = 80;
                v25 = Count;
                ProcNumber.Group = Count;
                ProcNumber.Reserved = 0;
                ProcNumber.Number = v24;
                ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
                v27 = ProcessorIndexFromNumber;
                if ( ProcessorIndexFromNumber == -1 )
                {
                  v1 = -1073741811;
                  goto LABEL_51;
                }
                v28 = 56LL * ProcessorIndexFromNumber;
                *(_DWORD *)(v28 + *((_QWORD *)Pool + 4)) = ProcessorIndexFromNumber;
                *(_QWORD *)(v28 + *((_QWORD *)Pool + 4) + 40) = *((_QWORD *)Pool + 2) + 16LL * v25;
                *(_QWORD *)(v28 + *((_QWORD *)Pool + 4) + 48) = v18 + *((_QWORD *)Pool + 3);
                if ( !v8 )
                {
                  v8 = (_WORD *)RaidAllocatePool(64LL, 16LL * *((unsigned int *)Pool + 2), 1230201170LL, 0LL);
                  if ( !v8 )
                    goto LABEL_56;
                }
                v1 = KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorModule, &Information, &Length);
                if ( v1 >= 0 )
                {
                  v29 = 0;
                  memset_0(&v50, 0, sizeof(v50));
                  if ( v9 )
                  {
                    v30 = v8;
                    v31 = v9;
                    do
                    {
                      if ( v30[4] == Information.Processor.GroupMask[0].Group
                        && *(_QWORD *)v30 == Information.Processor.GroupMask[0].Mask )
                      {
                        v29 = 1;
                      }
                      v30 += 8;
                      --v31;
                    }
                    while ( v31 );
                  }
                  Length = 80;
                  v1 = KeQueryLogicalProcessorRelationship(&ProcNumber, RelationProcessorCore, &v50, &Length);
                  if ( v1 >= 0 )
                  {
                    EfficiencyClass = v50.Processor.EfficiencyClass;
                    if ( v50.Processor.EfficiencyClass )
                    {
                      ++v45;
                      if ( !v29 )
                      {
                        v35 = v9++;
                        v34 = 2 * v35;
                        ++v43;
LABEL_39:
                        v8[4 * v34 + 4] = Information.Processor.GroupMask[0].Group;
                        *(_QWORD *)&v8[4 * v34] = Information.Processor.GroupMask[0].Mask;
                      }
                    }
                    else
                    {
                      ++v44;
                      if ( !v29 )
                      {
                        v33 = v9++;
                        v34 = 2 * v33;
                        ++v42;
                        goto LABEL_39;
                      }
                    }
                    *(_BYTE *)(56 * v27 + *((_QWORD *)Pool + 4) + 4) = EfficiencyClass;
                    if ( v50.Processor.GroupMask[0].Mask )
                      *(_GROUP_AFFINITY *)(56 * v27 + *((_QWORD *)Pool + 4) + 8) = v50.SharedComputeUnit.GroupMasks[0];
                  }
                  v18 = v48;
                  if ( Information.Processor.GroupMask[0].Mask )
                    *(_GROUP_AFFINITY *)(56 * v27 + *((_QWORD *)Pool + 4) + 24) = Information.SharedComputeUnit.GroupMasks[0];
                }
                v24 = i;
                _bittestandreset64(&v20, i);
                goto LABEL_45;
              }
              v16 = v46;
            }
            v46 = ++v16;
          }
          v36 = v43;
          *((_DWORD *)Pool + 11) = v42;
          v37 = v44;
          *((_DWORD *)Pool + 12) = v36;
          v38 = v45;
          *((_DWORD *)Pool + 13) = v37;
          *((_DWORD *)Pool + 14) = v38;
          *((_DWORD *)Pool + 10) = v9;
LABEL_51:
          if ( v8 )
            ExFreePoolWithTag(v8, 0x49536152u);
          if ( v1 >= 0 )
          {
            g_CpuInfo = Pool;
            return 1;
          }
        }
        else
        {
          ExFreePoolWithTag(v10, 0x49536152u);
        }
      }
    }
  }
LABEL_56:
  FreeCpuInformation();
  return 0;
}
