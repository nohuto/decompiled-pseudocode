/*
 * XREFs of CcInitializePartition @ 0x1405B506C
 * Callers:
 *     CcCreatePartition @ 0x1405B4998 (CcCreatePartition.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ExAllocatePoolWithTagFromNode @ 0x140399FE0 (ExAllocatePoolWithTagFromNode.c)
 *     CcForEachNumaNode @ 0x1403E7398 (CcForEachNumaNode.c)
 *     CcInitializePartitionVacbs @ 0x1405B56F8 (CcInitializePartitionVacbs.c)
 *     CcInitializeNumaNode @ 0x1405B5BC0 (CcInitializeNumaNode.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
 *     ExAllocatePoolWithTag @ 0x140C16340 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall CcInitializePartition(char *StartContext, _QWORD *a2)
{
  char v3; // r12
  char *v4; // r14
  char *v6; // rsi
  _QWORD *v7; // rdx
  PVOID *v8; // rcx
  unsigned __int16 **v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // rbx
  ULONG v16; // edx
  bool v17; // zf
  void *v18; // r9
  char *PoolWithTag; // rax
  __int64 v20; // r8
  char *v21; // r15
  unsigned int i; // ebx
  PVOID v23; // rax
  __int64 v24; // rcx
  __int64 PoolWithTagFromNode; // rax
  __int64 *v26; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v3 = 0;
  v4 = 0LL;
  memset_0(StartContext, 0, 0x640uLL);
  *(_DWORD *)StartContext = 104858359;
  *((_QWORD *)StartContext + 1) = a2;
  v6 = StartContext + 96;
  *((_QWORD *)StartContext + 162) = 1LL;
  v7 = StartContext + 696;
  *((_QWORD *)StartContext + 3) = StartContext + 16;
  *((_QWORD *)StartContext + 2) = StartContext + 16;
  *((_QWORD *)StartContext + 5) = StartContext + 32;
  *((_QWORD *)StartContext + 4) = StartContext + 32;
  *((_QWORD *)StartContext + 11) = StartContext + 80;
  *((_QWORD *)StartContext + 10) = StartContext + 80;
  *((_QWORD *)StartContext + 13) = StartContext + 96;
  *((_QWORD *)StartContext + 12) = StartContext + 96;
  *((_QWORD *)StartContext + 15) = StartContext + 112;
  *((_QWORD *)StartContext + 14) = StartContext + 112;
  *((_QWORD *)StartContext + 83) = StartContext + 656;
  *((_QWORD *)StartContext + 82) = StartContext + 656;
  *((_QWORD *)StartContext + 81) = StartContext + 640;
  *((_QWORD *)StartContext + 80) = StartContext + 640;
  *((_QWORD *)StartContext + 91) = StartContext + 720;
  *((_QWORD *)StartContext + 90) = StartContext + 720;
  *((_QWORD *)StartContext + 85) = StartContext + 672;
  *((_QWORD *)StartContext + 84) = StartContext + 672;
  *((_DWORD *)StartContext + 172) = 2048;
  v8 = (PVOID *)*((_QWORD *)StartContext + 85);
  if ( *v8 != StartContext + 672 )
    goto LABEL_31;
  *v7 = StartContext + 672;
  *((_QWORD *)StartContext + 88) = v8;
  *v8 = v7;
  *((_QWORD *)StartContext + 85) = v7;
  *((_DWORD *)StartContext + 178) = 2048;
  *((_QWORD *)StartContext + 96) = 0LL;
  *((_QWORD *)StartContext + 104) = 0LL;
  *((_QWORD *)StartContext + 107) = StartContext + 848;
  *((_QWORD *)StartContext + 106) = StartContext + 848;
  *((_WORD *)StartContext + 440) = 1;
  StartContext[882] = 6;
  *((_DWORD *)StartContext + 221) = 0;
  *((_QWORD *)StartContext + 112) = StartContext + 888;
  *((_QWORD *)StartContext + 111) = StartContext + 888;
  *((_WORD *)StartContext + 452) = 1;
  StartContext[906] = 6;
  *((_DWORD *)StartContext + 227) = 0;
  *((_QWORD *)StartContext + 115) = StartContext + 912;
  *((_QWORD *)StartContext + 114) = StartContext + 912;
  *((_WORD *)StartContext + 464) = 1;
  StartContext[930] = 6;
  *((_DWORD *)StartContext + 233) = 0;
  *((_QWORD *)StartContext + 118) = StartContext + 936;
  *((_QWORD *)StartContext + 117) = StartContext + 936;
  *((_WORD *)StartContext + 476) = 1;
  StartContext[954] = 6;
  *((_DWORD *)StartContext + 239) = 0;
  *((_QWORD *)StartContext + 121) = StartContext + 960;
  *((_QWORD *)StartContext + 120) = StartContext + 960;
  *((_WORD *)StartContext + 652) = 0;
  StartContext[1306] = 6;
  *((_DWORD *)StartContext + 327) = 0;
  *((_QWORD *)StartContext + 165) = StartContext + 1312;
  *((_QWORD *)StartContext + 164) = StartContext + 1312;
  *((_WORD *)StartContext + 664) = 0;
  StartContext[1330] = 6;
  *((_DWORD *)StartContext + 333) = 0;
  *((_QWORD *)StartContext + 168) = StartContext + 1336;
  *((_QWORD *)StartContext + 167) = StartContext + 1336;
  *((_WORD *)StartContext + 28) = 0;
  StartContext[58] = 6;
  *((_DWORD *)StartContext + 15) = 0;
  *((_QWORD *)StartContext + 9) = StartContext + 64;
  *((_QWORD *)StartContext + 8) = StartContext + 64;
  *((_OWORD *)StartContext + 66) = 0LL;
  *((_QWORD *)StartContext + 134) = 0LL;
  *(_OWORD *)(StartContext + 1080) = 0LL;
  *(_OWORD *)(StartContext + 1096) = 0LL;
  *(_OWORD *)(StartContext + 1112) = 0LL;
  *((_QWORD *)StartContext + 141) = 0LL;
  *((_OWORD *)StartContext + 85) = 0LL;
  *((_DWORD *)StartContext + 340) = 1;
  *((_QWORD *)StartContext + 171) = StartContext;
  memset_0(StartContext + 984, 0, 0x48uLL);
  StartContext[984] = 9;
  *((_QWORD *)StartContext + 125) = StartContext + 992;
  *((_QWORD *)StartContext + 124) = StartContext + 992;
  *((_QWORD *)StartContext + 126) = 0LL;
  *((_DWORD *)StartContext + 261) = 0;
  *((_WORD *)StartContext + 520) = 0;
  StartContext[1043] = 0;
  v9 = (unsigned __int16 **)*((_QWORD *)StartContext + 1);
  StartContext[1048] = 1;
  v10 = *(_QWORD *)(*(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * **v9) + 22288LL);
  if ( (_BYTE)dword_140FBF22C )
  {
    v11 = v10 >> 1;
    if ( (unsigned int)CcAzure_TopBottomDPTEqual < 2 )
      v12 = v10 >> 1;
    else
      v12 = v10 >> 3;
    *((_QWORD *)StartContext + 136) = v11;
    *((_QWORD *)StartContext + 137) = v12;
    *((_QWORD *)StartContext + 135) = v11;
    v13 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[48] - 1;
  }
  else
  {
    *((_QWORD *)StartContext + 135) = v10 >> 3;
    *((_QWORD *)StartContext + 137) = v10 >> 3;
    *((_QWORD *)StartContext + 136) = v10 >> 3;
    v13 = 1;
  }
  *((_DWORD *)StartContext + 216) = v13;
  *((_DWORD *)StartContext + 282) = 10;
  *((_QWORD *)StartContext + 139) = 10 * v10;
  v14 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[48] - 1;
  *((_QWORD *)StartContext + 140) = 0LL;
  *((_DWORD *)StartContext + 210) = v14;
  *((_DWORD *)StartContext + 217) = EmpParseLock.SchedulerAssistPriorityFloor;
  v15 = (*((_QWORD *)StartContext + 135) >> 1) + (*((_QWORD *)StartContext + 135) >> 2);
  if ( CcAzure_LazyWriterPercentageOfNumProcs )
  {
    v16 = CcAzure_LazyWriterPercentageOfNumProcs * KeQueryActiveProcessorCountEx(0xFFFFu) / 0x64;
    if ( *((_DWORD *)StartContext + 210) < v16 )
      *((_DWORD *)StartContext + 210) = v16;
  }
  StartContext[1294] = 0;
  *((_DWORD *)StartContext + 194) = 0;
  StartContext[780] = 0;
  *((_QWORD *)StartContext + 152) = 0LL;
  if ( v15 > 0xFFFFFFFF )
    LODWORD(v15) = -1;
  v17 = CcEnablePerVolumeLazyWriter == 0;
  *((_DWORD *)StartContext + 276) = v15;
  *((_QWORD *)StartContext + 147) = StartContext + 1168;
  *((_QWORD *)StartContext + 146) = StartContext + 1168;
  *((_QWORD *)StartContext + 155) = StartContext + 1232;
  *((_QWORD *)StartContext + 154) = StartContext + 1232;
  *((_QWORD *)StartContext + 157) = 0LL;
  *((_QWORD *)StartContext + 158) = 0LL;
  *((_DWORD *)StartContext + 318) = 32;
  *((_DWORD *)StartContext + 319) = 5;
  *((_DWORD *)StartContext + 322) = -1;
  *((_QWORD *)StartContext + 160) = 0LL;
  *((_QWORD *)StartContext + 191) = CcProcessDelayedDeletePVCM;
  *((_QWORD *)StartContext + 192) = StartContext;
  *((_QWORD *)StartContext + 189) = 0LL;
  *((_QWORD *)StartContext + 172) = 0LL;
  StartContext[1376] = 8;
  *((_QWORD *)StartContext + 174) = StartContext + 1384;
  *((_QWORD *)StartContext + 173) = StartContext + 1384;
  *((_QWORD *)StartContext + 175) = 0LL;
  *((_DWORD *)StartContext + 359) = 0;
  *((_WORD *)StartContext + 716) = 0;
  StartContext[1435] = 0;
  *((_QWORD *)StartContext + 183) = CcPVCMDelayedDeleteTimerDpc;
  *((_DWORD *)StartContext + 360) = 275;
  *((_QWORD *)StartContext + 184) = StartContext;
  *((_QWORD *)StartContext + 187) = 0LL;
  *((_QWORD *)StartContext + 182) = 0LL;
  if ( v17 )
  {
    v18 = (void *)a2[16];
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(
           (PHANDLE)StartContext + 169,
           0x1FFFFFu,
           &ObjectAttributes,
           v18,
           0LL,
           (PKSTART_ROUTINE)CcQueueLazyWriteScanThread,
           StartContext) < 0 )
      return v3;
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)1536, 400LL * (unsigned int)CcNumberNumaNodes, 0x754E6343u);
    v21 = PoolWithTag;
    if ( !PoolWithTag )
      return v3;
    v4 = PoolWithTag;
    for ( i = 0; i < CcNumberNumaNodes; ++i )
    {
      if ( !(unsigned __int8)CcInitializeNumaNode(StartContext, &v21[400 * i], v20, i) )
        goto LABEL_28;
      v4 = 0LL;
    }
  }
  if ( (unsigned __int8)CcInitializePartitionVacbs(StartContext) )
  {
    v23 = ExAllocatePoolWithTag((POOL_TYPE)1536, 8LL * (unsigned int)(*((_DWORD *)StartContext + 216) + 1), 0x70546343u);
    if ( v23 )
    {
      v17 = CcEnablePerVolumeLazyWriter == 0;
      *((_QWORD *)StartContext + 142) = v23;
      if ( v17 )
      {
        *((_QWORD *)StartContext + 153) = 0LL;
        CcForEachNumaNode((__int64)CcInitializeAsyncReadForNodeHelper, (__int64)StartContext, 0LL);
        if ( !CcEnablePerVolumeLazyWriter )
          goto LABEL_27;
      }
      PoolWithTagFromNode = ExAllocatePoolWithTagFromNode(v24, 0x50uLL, 0x71576343u, 0x80000000);
      if ( !PoolWithTagFromNode )
        goto LABEL_28;
      *(_DWORD *)(PoolWithTagFromNode + 32) = 9;
      *(_QWORD *)(PoolWithTagFromNode + 56) = StartContext;
      *(_QWORD *)(PoolWithTagFromNode + 64) = 0LL;
      *(_QWORD *)(PoolWithTagFromNode + 72) = 0LL;
      *(_DWORD *)(PoolWithTagFromNode + 40) = 0;
      *(_DWORD *)(PoolWithTagFromNode + 36) = -1;
      *(_QWORD *)(PoolWithTagFromNode + 16) = CcReapPrivateVolumeCachemapWorkerThread;
      *(_QWORD *)(PoolWithTagFromNode + 24) = PoolWithTagFromNode;
      *(_QWORD *)PoolWithTagFromNode = 0LL;
      v26 = (__int64 *)*((_QWORD *)StartContext + 13);
      if ( (char *)*v26 == v6 )
      {
        *(_QWORD *)PoolWithTagFromNode = v6;
        *(_QWORD *)(PoolWithTagFromNode + 8) = v26;
        *v26 = PoolWithTagFromNode;
        *((_QWORD *)StartContext + 13) = PoolWithTagFromNode;
LABEL_27:
        v3 = 1;
        StartContext[1364] = 1;
        DbgPrintEx(
          0x7Fu,
          2u,
          "CcInitializePartition: Initialized Partition=%p, PartitionObject=%p \n",
          StartContext,
          a2);
        goto LABEL_28;
      }
LABEL_31:
      __fastfail(3u);
    }
  }
LABEL_28:
  if ( v4 )
    ExFreePoolWithTag(v4, 0x754E6343u);
  return v3;
}
