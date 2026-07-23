/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x1405D1560
 * Callers:
 *     IopLiveDumpEnterCorralledState @ 0x1405D1860 (IopLiveDumpEnterCorralledState.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeEnumerateNextProcessor @ 0x14042E520 (KeEnumerateNextProcessor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x1404DDE60 (IopLiveDumpGetMillisecondCounter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1405317E8 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x1405D291C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x1405D472C (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405DA3E0 (IopLiveDumpTraceNoArgs.c)
 */

__int64 __fastcall IopLiveDumpCorralProcessors(__int64 *a1)
{
  __int64 v1; // r15
  int v2; // edi
  int MillisecondCounter; // r13d
  _GROUP_AFFINITY *v5; // rdx
  int v6; // r12d
  volatile unsigned int Lock; // ecx
  int v8; // edx
  __int64 *v9; // rcx
  unsigned __int8 CurrentIrql; // si
  int v11; // r14d
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-38h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 *v15[2]; // [rsp+48h] [rbp-20h] BYREF
  __int16 v16; // [rsp+58h] [rbp-10h]
  int v17; // [rsp+5Ah] [rbp-Eh]
  __int16 v18; // [rsp+5Eh] [rbp-Ah]
  int v19; // [rsp+B0h] [rbp+48h] BYREF
  int v20; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  a1[14] = 0LL;
  MillisecondCounter = 0;
  *((_DWORD *)a1 + 30) = 0;
  v5 = (_GROUP_AFFINITY *)(a1 + 12);
  v6 = 0;
  Affinity = 0LL;
  v17 = 0;
  v18 = 0;
  Lock = KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock;
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(Lock >> 6);
  Affinity.Mask = 1LL << Lock;
  v19 = 0;
  v21 = 0LL;
  v13 = 0LL;
  v22 = 0LL;
  KeSetSystemGroupAffinityThread(&Affinity, v5);
  a1[14] = 0LL;
  *((_DWORD *)a1 + 3) = 1;
  if ( IopLiveDumpIsTracingEnabled() )
  {
    v9 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_START;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v9 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_START;
    IopLiveDumpTraceNoArgs(v9);
  }
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
  }
  *((_BYTE *)a1 + 88) = CurrentIrql;
  a1[6] = (__int64)IopLiveDumpCorralDpc;
  *((_DWORD *)a1 + 6) = 531;
  a1[7] = (__int64)a1;
  a1[10] = 0LL;
  a1[5] = 0LL;
  v15[1] = *(unsigned __int16 **)((char *)&stru_140FC11F0.116 + 4);
  v15[0] = (unsigned __int16 *)&stru_140FC11F0.WaitRegister.Flags;
  v16 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v19, v15) )
  {
    if ( v19 == *((_DWORD *)a1 + 28) )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1 + 4);
    }
    else
    {
      v11 = *((_DWORD *)a1 + 4);
      if ( !a1[10] )
        *((_WORD *)a1 + 13) = v19 + 2048;
      KiInsertQueueDpc((ULONG_PTR)(a1 + 3), 0LL, 0LL, 0LL, 0);
      v20 = 0;
      while ( v11 == *((_DWORD *)a1 + 4) )
        KeYieldProcessorEx(&v20);
    }
  }
  *((_DWORD *)a1 + 5) = *((_DWORD *)a1 + 4);
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    v2 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  if ( (*(_DWORD *)(v1 + 80) & 0x100) == 0 )
  {
    IopLiveDumpInitiateCorralStateChange(a1, 2LL, &v21);
    v6 = v21;
  }
  PoAllProcIntrDisabled = 1;
  IopLiveDumpInitiateCorralStateChange(a1, 7LL, &v13);
  IopLiveDumpInitiateCorralStateChange(a1, 3LL, &v22);
  *((_DWORD *)a1 + 2) |= 1u;
  result = *(unsigned int *)(v1 + 80);
  if ( (result & 0x80u) != 0LL )
    return IopLiveDumpTraceCorralProcessorsDuration(*a1, v2, v6, v13, v22);
  return result;
}
