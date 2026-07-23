/*
 * XREFs of KeInitializeProcess @ 0x140B58704
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 *     KiInitializeIdleProcess @ 0x140CCE294 (KiInitializeIdleProcess.c)
 * Callees:
 *     KeFindFirstSetRightGroupMask @ 0x140200980 (KeFindFirstSetRightGroupMask.c)
 *     KiStartIdealProcessorAssignmentBlock @ 0x1402013B8 (KiStartIdealProcessorAssignmentBlock.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140275D20 (KeQueryMaximumProcessorCountEx.c)
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 *     MmGetNextNode @ 0x140456D80 (MmGetNextNode.c)
 *     KeClearBitGroupMask @ 0x140469BAC (KeClearBitGroupMask.c)
 *     ExSaAllocate @ 0x140492F00 (ExSaAllocate.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1404ADD98 (KiSetIdealNodeProcessByGroup.c)
 *     KeSelectNodeForAffinity @ 0x1404ADF48 (KeSelectNodeForAffinity.c)
 *     KeAndGroupMasks @ 0x1404CBAE0 (KeAndGroupMasks.c)
 *     KiInitializeProcessAvailableCpuState @ 0x1404CF9C4 (KiInitializeProcessAvailableCpuState.c)
 *     KiInitializeIdealProcessorAssignmentBlock @ 0x1404D0DB8 (KiInitializeIdealProcessorAssignmentBlock.c)
 *     KeSetGroupMaskProcess @ 0x1404D19B0 (KeSetGroupMaskProcess.c)
 *     KeSetBitGroupMask @ 0x1404D3960 (KeSetBitGroupMask.c)
 *     KiAbInitializeAutoBoostProcessState @ 0x1404D5F60 (KiAbInitializeAutoBoostProcessState.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VslCreateSecureProcess @ 0x140B3C0D8 (VslCreateSecureProcess.c)
 */

__int64 __fastcall KeInitializeProcess(struct _KPROCESS *a1, __int64 a2)
{
  __int16 v2; // r15
  __int64 v3; // r14
  int SecureProcess; // r13d
  volatile _KAFFINITY_EX *v6; // rcx
  size_t v7; // r12
  _KAFFINITY_EX *v8; // rbx
  __int16 v9; // ax
  __int64 v10; // r8
  char *v11; // rdi
  struct _KAFFINITY_EX *v12; // rbx
  char v13; // r15
  void *v14; // rcx
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *v15; // rdi
  unsigned __int16 *v16; // r10
  __int128 v17; // xmm1
  unsigned __int16 v18; // dx
  volatile unsigned __int16 *v19; // rax
  __int64 v20; // rax
  _WORD *v21; // rcx
  __int64 v22; // rcx
  unsigned __int16 *v23; // rax
  int i; // eax
  __int64 v25; // rdi
  int v26; // eax
  int v27; // eax
  unsigned __int16 FirstSetRightGroupMask; // bx
  unsigned __int16 v29; // dx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  unsigned int *v33; // r12
  void *v34; // r15
  ULONG v35; // r12d
  unsigned int v36; // edi
  __int64 v37; // rcx
  unsigned int v38; // edx
  int v40; // [rsp+20h] [rbp-60h] BYREF
  _KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *v41; // [rsp+28h] [rbp-58h]
  __int64 v42; // [rsp+30h] [rbp-50h]
  __int128 v43; // [rsp+40h] [rbp-40h] BYREF
  __int128 v44; // [rsp+50h] [rbp-30h] BYREF
  __int128 v45; // [rsp+60h] [rbp-20h] BYREF

  v2 = KiMaximumGroups;
  v3 = a2;
  v42 = a2;
  SecureProcess = 0;
  v6 = *(volatile _KAFFINITY_EX **)(a2 + 40);
  v7 = 8LL * (unsigned __int16)KiMaximumGroups;
  a1->Header.Type = 3;
  a1->Header.WaitListHead.Blink = &a1->Header.WaitListHead;
  a1->Header.WaitListHead.Flink = &a1->Header.WaitListHead;
  a1->BasePriority = *(_BYTE *)a2;
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
    *(_DWORD *)&a1->0 |= 1u;
  a1->ActiveProcessors = v6;
  v8 = (_KAFFINITY_EX *)((char *)&v6->8 + v7);
  v6->Count = v2;
  v6->Size = v2;
  v6->Reserved = 0;
  memset_0(&v6->8, 0, v7);
  a1->Affinity = v8;
  v9 = KiMaximumGroups;
  v10 = (unsigned __int16)KiMaximumGroups;
  v8->Reserved = 0;
  v8->Count = 1;
  v11 = (char *)&v8->8 + v7;
  v8->Size = v9;
  memset_0(&v8->8, 0, 8 * v10);
  RtlpCopyAffinityEx(a1->Affinity, a1->Affinity->Size, *(struct _KAFFINITY_EX **)(v3 + 8));
  v12 = (struct _KAFFINITY_EX *)(v11 + 120);
  a1->AvailableCpuState = (_KPROCESS_AVAILABLE_CPU_STATE *)v11;
  *((_WORD *)v11 + 61) = v2;
  v13 = 0;
  *((_WORD *)v11 + 60) = 1;
  v14 = v11 + 128;
  *((_DWORD *)v11 + 31) = 0;
  v15 = (_KI_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK *)&v11[v7 + 128];
  memset_0(v14, 0, v7);
  RtlpCopyAffinityEx(v12, v12->Size, *(struct _KAFFINITY_EX **)(v3 + 8));
  KiInitializeProcessAvailableCpuState((__int64)a1->AvailableCpuState, (__int64)v12, (__int64)a1);
  a1->IdealProcessorAssignmentBlock = v15;
  v41 = v15 + 1;
  KiInitializeIdealProcessorAssignmentBlock((__int64)v15);
  v16 = *(unsigned __int16 **)(v3 + 8);
  v17 = 0LL;
  v18 = 0;
  v45 = 0LL;
  if ( *v16 )
  {
    do
    {
      if ( *(_QWORD *)&v16[4 * v18 + 4] )
        KeSetBitGroupMask((__int64)&v45, v18);
      ++v18;
    }
    while ( v18 < *v16 );
    v17 = v45;
  }
  v43 = v17;
  KeSetGroupMaskProcess((__int64)a1, &v43);
  a1->PrimaryGroup = *(_WORD *)(v3 + 4);
  a1->ProfileListHead.Blink = &a1->ProfileListHead;
  a1->ProfileListHead.Flink = &a1->ProfileListHead;
  a1->ReadyListHead.Blink = &a1->ReadyListHead;
  a1->ReadyListHead.Flink = &a1->ReadyListHead;
  a1->ThreadListHead.Blink = &a1->ThreadListHead;
  a1->ThreadListHead.Flink = &a1->ThreadListHead;
  a1->QuantumReset = 6;
  a1->StackCount.Value = 0;
  v19 = *(volatile unsigned __int16 **)(v3 + 16);
  if ( !v19 )
  {
    v20 = *(unsigned __int16 *)(v3 + 4);
    v21 = *(_WORD **)(v3 + 8);
    v43 = 0LL;
    WORD4(v43) = v20;
    if ( (unsigned __int16)v20 >= *v21 )
      v22 = 0LL;
    else
      v22 = *(_QWORD *)&v21[4 * v20 + 4];
    *(_QWORD *)&v43 = v22;
    v19 = (volatile unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v43);
    v17 = v45;
    *(_QWORD *)(v3 + 16) = v19;
  }
  a1->IdealGlobalNode = *v19;
  v44 = v17;
  while ( 1 )
  {
    v23 = *(unsigned __int16 **)(v3 + 16);
    v40 = 0;
    for ( i = *v23; i != -1; i = MmGetNextNode(**(unsigned __int16 **)(v3 + 16), &v40) )
    {
      v43 = 0LL;
      v25 = KeNodeBlock[i];
      KeAndGroupMasks((__int128 *)(v25 + 16), &v44, &v43);
      LOBYTE(v26) = KeIsEmptyGroupMask((unsigned __int64 *)&v43);
      if ( !v26 && ((*(_BYTE *)(v25 + 10) & 1) == v13 || v25 == *(_QWORD *)(v3 + 16)) )
      {
        LOBYTE(v27) = KeIsEmptyGroupMask((unsigned __int64 *)&v43);
        if ( !v27 )
        {
          do
          {
            FirstSetRightGroupMask = KeFindFirstSetRightGroupMask((__int64 *)&v43);
            KiSetIdealNodeProcessByGroup((__int64)a1, v25, FirstSetRightGroupMask);
            KeClearBitGroupMask((__int64)&v43, FirstSetRightGroupMask);
            KeClearBitGroupMask((__int64)&v44, v29);
            LOBYTE(v30) = KeIsEmptyGroupMask((unsigned __int64 *)&v43);
          }
          while ( !v30 );
        }
        LOBYTE(v31) = KeIsEmptyGroupMask((unsigned __int64 *)&v44);
        if ( v31 )
          break;
      }
    }
    LOBYTE(v32) = KeIsEmptyGroupMask((unsigned __int64 *)&v44);
    if ( v32 )
      break;
    v13 = 1;
  }
  v33 = (unsigned int *)v41;
  a1->SchedulingGroup = *(_KSCHEDULING_GROUP **)(v3 + 24);
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v34 = (void *)ExSaAllocate(16, 0);
    if ( v34 == (void *)-1LL )
    {
      v34 = 0LL;
    }
    else
    {
      v35 = 0;
      if ( KeQueryMaximumProcessorCountEx(0xFFFFu) )
      {
        v36 = ((unsigned int)v34 >> 13) & 0x3FFFF;
        do
        {
          v37 = v35++;
          _BitScanReverse(&v38, v36);
          *(_OWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)ExSaPageGroupDescriptorArrayLock.SListFaultAddress + v37)
                                            + 8LL * (v38 - 2))
                                + 8 * (v36 ^ (unsigned __int64)(unsigned int)(1 << v38))
                                + 8)
                    + 8LL * (((unsigned int)v34 >> 4) & 0x1FF)) = 0LL;
        }
        while ( v35 < KeQueryMaximumProcessorCountEx(0xFFFFu) );
        v3 = v42;
      }
      v33 = (unsigned int *)v41;
    }
    a1->PerProcessorCycleTimes = v34;
  }
  if ( (*(_DWORD *)(v3 + 32) & 2) != 0 )
  {
    SecureProcess = VslCreateSecureProcess((__int64)a1, 0LL, (_KPROCESS_SECURE_STATE *)&a1->SecureState.EntireField);
    if ( SecureProcess >= 0 )
      a1->SecureState.EntireField |= 1uLL;
  }
  if ( _bittest64(&KeFeatureBits, 0x37u) )
    a1->ExtendedFeatureDisableMask = MEMORY[0xFFFFF78000000710];
  a1->CpuPartitionList.Blink = &a1->CpuPartitionList;
  a1->CpuPartitionList.Flink = &a1->CpuPartitionList;
  if ( (*(_DWORD *)(v3 + 32) & 4) != 0 )
    KiAbInitializeAutoBoostProcessState((__int64)a1, v33);
  KiStartIdealProcessorAssignmentBlock(&a1->IdealProcessorAssignmentBlock->ExpectedConcurrencyCount, a1);
  return (unsigned int)SecureProcess;
}
