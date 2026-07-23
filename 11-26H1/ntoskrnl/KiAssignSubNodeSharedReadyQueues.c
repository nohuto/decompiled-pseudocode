/*
 * XREFs of KiAssignSubNodeSharedReadyQueues @ 0x1405ECF10
 * Callers:
 *     KiConfigureNodeSchedulingInformation @ 0x1405ED570 (KiConfigureNodeSchedulingInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405EDB8C (KiFreeLocalSharedReadyQueue.c)
 *     KiInitializePriorityState @ 0x1405F9384 (KiInitializePriorityState.c)
 *     KiComputeSharedReadyQueueAssignments @ 0x1405FE3F0 (KiComputeSharedReadyQueueAssignments.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     KeDetectHeterogeneousSets @ 0x140B2663C (KeDetectHeterogeneousSets.c)
 */

__int64 __fastcall KiAssignSubNodeSharedReadyQueues(__int64 a1)
{
  unsigned int v1; // ebx
  int i; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  _BYTE *v12; // r8
  unsigned __int64 *v13; // rdx
  char v14; // al
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-79h] BYREF
  unsigned __int16 *v17; // [rsp+28h] [rbp-71h] BYREF
  __int64 v18; // [rsp+30h] [rbp-69h]
  __int16 v19; // [rsp+38h] [rbp-61h]
  int v20; // [rsp+3Ah] [rbp-5Fh]
  __int16 v21; // [rsp+3Eh] [rbp-5Bh]
  _BYTE v22[64]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v23[64]; // [rsp+90h] [rbp-9h] BYREF

  v1 = KiMaximumSharedReadyQueueSize;
  v16 = 0;
  v20 = 0;
  v21 = 0;
  if ( KiMaximumSharedReadyQueueSize )
  {
    if ( (KiMaximumSharedReadyQueueSize & 0x100) != 0 )
    {
      v1 = KiMaximumSharedReadyQueueSize & 0xFFFFFEFF;
      if ( (unsigned int)KeDetectHeterogeneousSets(0LL) )
        v1 *= 2;
    }
    if ( v1 > 0x40 )
      v1 = 64;
  }
  else
  {
    v1 = 1;
  }
  memset_0(v23, 255, sizeof(v23));
  v19 = *(_WORD *)(a1 + 136);
  v18 = *(_QWORD *)(a1 + 128);
  v17 = 0LL;
  for ( i = KeEnumerateNextProcessor(&v16, &v17); !i; i = KeEnumerateNextProcessor(&v16, &v17) )
    v23[*(unsigned __int8 *)(KiProcessorBlock[v16] + 209)] = *(_BYTE *)(KiProcessorBlock[v16] + 35352);
  KiComputeSharedReadyQueueAssignments(*(_QWORD *)(a1 + 128), v1, v23, v22);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v19 = *(_WORD *)(a1 + 136);
  v18 = *(_QWORD *)(a1 + 128);
  v17 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v16, &v17) )
  {
    v5 = KiProcessorBlock[v16];
    v6 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int64)*(unsigned __int16 *)(a1 + 136)].Flink
                          + (unsigned __int8)v22[*(unsigned __int8 *)(v5 + 209)])];
    v7 = *(_QWORD *)(v6 + 36488);
    if ( v6 != v5 )
    {
      v8 = *(_QWORD *)(v5 + 200);
      *(_QWORD *)(v5 + 36488) = v7;
      *(_QWORD *)(v7 + 712) |= v8;
      ++*(_BYTE *)(v7 + 708);
      v9 = v7 + 576 + *(unsigned __int8 *)(v5 + 209) - (unsigned int)*(unsigned __int8 *)(v7 + 705);
      v10 = *(_QWORD *)(v5 + 16);
      *(_QWORD *)(v5 + 56) = v9;
      if ( !v10 )
        v10 = *(_QWORD *)(v5 + 8);
      KiInitializePriorityState(v9, v5, v10);
    }
  }
  v19 = *(_WORD *)(a1 + 136);
  v18 = *(_QWORD *)(a1 + 128);
  v17 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v16, &v17) )
  {
    v11 = KiProcessorBlock[v16];
    v12 = *(_BYTE **)(v11 + 36488);
    v13 = (unsigned __int64 *)(v12 + 712);
    if ( v12[708] > 1u )
      *(_QWORD *)(v11 + 36480) = *v13;
    v14 = *(_BYTE *)(v11 + 209);
    if ( v14 == v12[705] && v12[708] > 1u )
    {
      *(_DWORD *)(v11 + 36496) = 1;
      v12[709] = v14;
      _BitScanReverse64((unsigned __int64 *)&v13, *v13);
      LOBYTE(v13) = (_BYTE)v13 - v12[705] + 1;
      v12[704] = (_BYTE)v13;
    }
    if ( *(_QWORD *)(v11 + 36488) != *(_QWORD *)(v11 + 37952) )
      KiFreeLocalSharedReadyQueue(v11, v13);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
