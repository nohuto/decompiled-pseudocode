/*
 * XREFs of IopUpdateMinidumpContext @ 0x140442108
 * Callers:
 *     IopCollectTriageDumpData @ 0x1405CB244 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405CCAF4 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x1405D7878 (IopAddMiniDumpPagesToPartialKernelDump.c)
 * Callees:
 *     KeGetPrcb @ 0x140290C30 (KeGetPrcb.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x1404424BC (IopAddBugcheckTriageDataFromParameters.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404E57CC (IopIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x1405CC08C (IopGetMaxValidMemorySize.c)
 */

_OWORD *__fastcall IopUpdateMinidumpContext(
        unsigned int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        char a8,
        char a9)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v10; // r14
  __int64 v12; // rbp
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned __int64 v16; // rbx
  char *v17; // rdx
  __int64 v18; // rdx
  unsigned int MaxValidMemorySize; // eax
  __int64 v20; // r15
  char *IsrStack; // rdx
  __int64 v22; // rdx
  unsigned int v23; // eax
  unsigned __int64 *v24; // rbp
  char *v25; // rsi
  char *v26; // rbx
  __int64 v27; // r8
  unsigned __int64 v28; // rbp
  unsigned int v29; // esi
  unsigned int v30; // eax
  __int64 Prcb; // rbp
  _QWORD *v32; // r14
  _QWORD *i; // rsi
  __int64 v34; // rcx
  __int64 v35; // rcx
  void *DpcLog; // rcx
  void *DpcLogBufferSize; // rdx
  struct _KTHREAD *j; // rbx
  _OWORD *result; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm1
  char v45; // [rsp+A8h] [rbp+40h]

  CurrentPrcb = KeGetCurrentPrcb();
  v45 = 0;
  v10 = a4;
  v12 = a2;
  v13 = a1;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v14 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = a3[43];
        a6[31] = a3[45];
        a6[19] = a3[48];
      }
      goto LABEL_5;
    }
LABEL_8:
    v14 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v14 = a5;
LABEL_5:
  v45 = 1;
LABEL_9:
  v15 = 0x7FFFLL;
  v16 = *(_QWORD *)(v14 + 152);
  v17 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  if ( (unsigned __int64)&v17[-(unsigned int)KeKernelStackSize] <= v16 && v16 < (unsigned __int64)v17 )
  {
    if ( (unsigned __int64)&v17[-v16] >= 0x7FFF )
      v18 = 0x7FFFLL;
    else
      v18 = (unsigned int)((_DWORD)v17 - v16);
    MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(v14 + 152), v18, 0x7FFFLL);
    IoAddTriageDumpDataBlock(v16, (PVOID)MaxValidMemorySize);
    v15 = 0x7FFFLL;
  }
  v20 = 2LL;
  if ( CurrentPrcb->DebuggerSavedIRQL > 2u )
  {
    IsrStack = (char *)KeGetPcr()->Prcb.IsrStack;
    if ( (unsigned __int64)&IsrStack[-(unsigned int)KeIsrStackSize] <= v16 && v16 < (unsigned __int64)IsrStack )
    {
      if ( (unsigned __int64)&IsrStack[-v16] >= 0x7FFF )
        v22 = 0x7FFFLL;
      else
        v22 = (unsigned int)((_DWORD)IsrStack - v16);
      v23 = IopGetMaxValidMemorySize(v16, v22, 0x7FFFLL);
      IoAddTriageDumpDataBlock(v16, (PVOID)v23);
    }
  }
  if ( v13 == 307 )
  {
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 && a7 != CurrentPrcb->IdleThread )
    {
      v24 = (unsigned __int64 *)((char *)KeGetPcr()->Prcb.IsrStack - 8);
      v25 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
      v26 = &v25[-(unsigned int)KeKernelStackSize];
      if ( (unsigned __int8)IopIsAddressRangeValid(v24, 8LL, v15) )
      {
        v28 = *v24;
        if ( (unsigned __int8)IopIsAddressRangeValid(v28, 8LL, v27) )
        {
          if ( (unsigned __int64)v26 <= v28 && v28 < (unsigned __int64)v25 )
            v26 = (char *)v28;
        }
      }
      if ( (unsigned __int64)(v25 - v26) >= 0x7FFF )
        v29 = 0x7FFF;
      else
        v29 = (_DWORD)v25 - (_DWORD)v26;
      v30 = IopGetMaxValidMemorySize(v26, v29, v27);
      IoAddTriageDumpDataBlock((ULONG)v26, (PVOID)v30);
    }
    Prcb = KeGetPrcb(a7->NextProcessor);
    v32 = (_QWORD *)(Prcb + 14400);
    do
    {
      for ( i = (_QWORD *)*v32; i; i = (_QWORD *)*i )
      {
        IoAddTriageDumpDataBlock((_DWORD)i - 8, (PVOID)0x40);
        v34 = i[6];
        if ( v34 != 1 )
          IoAddTriageDumpDataBlock(v34, (PVOID)0x60);
      }
      v32 += 6;
      --v20;
    }
    while ( v20 );
    v35 = *(_QWORD *)(Prcb + 36584);
    if ( v35 && v35 != *(_QWORD *)(Prcb + 36592) )
      IoAddTriageDumpDataBlock(v35, (PVOID)*(unsigned int *)(Prcb + 14556));
    v13 = a1;
    v12 = a2;
    v10 = a4;
  }
  DpcLog = CurrentPrcb->DpcLog;
  if ( DpcLog )
  {
    DpcLogBufferSize = (void *)CurrentPrcb->DpcLogBufferSize;
    if ( (_DWORD)DpcLogBufferSize )
      IoAddTriageDumpDataBlock((ULONG)DpcLog, DpcLogBufferSize);
  }
  for ( j = (struct _KTHREAD *)PpmIdlePolicyLock.SystemAffinityTokenListHead.Next;
        j != (struct _KTHREAD *)&PpmIdlePolicyLock.SystemAffinityTokenListHead;
        j = *(struct _KTHREAD **)&j->Header.Lock )
  {
    IoAddTriageDumpDataBlock((ULONG)j, (PVOID)0x420);
  }
  result = (_OWORD *)IopAddBugcheckTriageDataFromParameters(v13, v12, a3, v10, a5);
  if ( v45 )
  {
    result = (_OWORD *)CrashdmpDumpBlock;
    if ( CrashdmpDumpBlock )
    {
      if ( a9 )
      {
        *(_DWORD *)(CrashdmpDumpBlock + 24) |= 0x10000000u;
        v40 = 9LL;
        result = (_OWORD *)(CrashdmpDumpBlock + 64);
        do
        {
          *result = *(_OWORD *)v14;
          result[1] = *(_OWORD *)(v14 + 16);
          result[2] = *(_OWORD *)(v14 + 32);
          result[3] = *(_OWORD *)(v14 + 48);
          result[4] = *(_OWORD *)(v14 + 64);
          result[5] = *(_OWORD *)(v14 + 80);
          result[6] = *(_OWORD *)(v14 + 96);
          result += 8;
          v41 = *(_OWORD *)(v14 + 112);
          v14 += 128LL;
          *(result - 1) = v41;
          --v40;
        }
        while ( v40 );
        *result = *(_OWORD *)v14;
        result[1] = *(_OWORD *)(v14 + 16);
        result[2] = *(_OWORD *)(v14 + 32);
        result[3] = *(_OWORD *)(v14 + 48);
        result[4] = *(_OWORD *)(v14 + 64);
      }
    }
  }
  return result;
}
