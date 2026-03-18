/*
 * XREFs of PopCheckForIdleness @ 0x140438690
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void PopCheckForIdleness()
{
  __int64 v0; // rcx
  signed int ActiveProcessorCount; // ebp
  unsigned __int8 CurrentIrql; // di
  unsigned int SchedulerAssistYieldCounter; // esi
  __int64 v4; // rbx
  unsigned int v5; // r11d
  unsigned __int64 v6; // rdi
  int v7; // r8d
  signed int v8; // r9d
  int v9; // esi
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  signed int v13; // eax
  unsigned __int64 v14; // r10
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  __int64 v17; // r8

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v0, 2LL);
  }
  SchedulerAssistYieldCounter = stru_140F0F620.SchedulerAssistYieldCounter;
  v4 = MEMORY[0xFFFFF78000000320];
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( BYTE4(stru_140F0F620.KcsanThread) )
  {
    v5 = v4 - SchedulerAssistYieldCounter;
    if ( (int)(v4 - SchedulerAssistYieldCounter) <= 0 )
    {
      BYTE4(stru_140F0F620.KcsanThread) = 0;
      goto LABEL_30;
    }
    v6 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 4);
    v7 = 100;
    v8 = 100;
    v9 = 0;
    LOWORD(v10) = 0;
    while ( 1 )
    {
      while ( v6 )
      {
        _BitScanForward64(&v11, v6);
        v6 &= ~(1LL << v11);
        v12 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                               + 64 * (unsigned __int16)v10
                               + (unsigned __int8)v11)];
        v13 = 100 * (*(_DWORD *)(*(_QWORD *)(v12 + 24) + 652LL) - *(_DWORD *)(v12 + 35124)) / v5;
        if ( v13 < v8 )
          v8 = v13;
        v9 += v13;
      }
      v10 = (unsigned __int16)(v10 + 1);
      if ( (unsigned int)v10 >= *(unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags )
        break;
      v6 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 8 * v10 + 4);
    }
    if ( v8 > 100 )
    {
      v8 = 100;
    }
    else if ( v8 < 0 )
    {
      v8 = 0;
    }
    if ( v9 / ActiveProcessorCount <= 100 )
    {
      v7 = v9 / ActiveProcessorCount;
      if ( v9 / ActiveProcessorCount < 0 )
        v7 = 0;
    }
    stru_140F0F620.SchedulerSharedOffset = v8;
    *(_DWORD *)&stru_140F0F620.ResourceIndex = v7;
  }
  v14 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 4);
  LOWORD(v15) = 0;
  *(_QWORD *)&stru_140F0F620.SchedulerAssistYieldCounter = v4;
  BYTE4(stru_140F0F620.KcsanThread) = 1;
  while ( 1 )
  {
    while ( v14 )
    {
      _BitScanForward64(&v16, v14);
      v14 &= ~(1LL << v16);
      v17 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                             + 64 * (unsigned __int16)v15
                             + (unsigned __int8)v16)];
      *(_DWORD *)(v17 + 35124) = *(_DWORD *)(*(_QWORD *)(v17 + 24) + 652LL);
    }
    v15 = (unsigned __int16)(v15 + 1);
    if ( (unsigned int)v15 >= *(unsigned __int16 *)&stru_140FC01F0.WaitRegister.Flags )
      break;
    v14 = *(unsigned __int64 *)((char *)&stru_140FC01F0.116 + 8 * v15 + 4);
  }
LABEL_30:
  PopGetPolicyWorker(128);
  PopCheckForWork();
}
