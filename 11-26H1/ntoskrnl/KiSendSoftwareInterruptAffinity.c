/*
 * XREFs of KiSendSoftwareInterruptAffinity @ 0x1403D3A10
 * Callers:
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiSearchForNewThreadsOnTarget @ 0x140241E30 (KiSearchForNewThreadsOnTarget.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeDelayExecutionThread @ 0x1402461A0 (KeDelayExecutionThread.c)
 *     KiExitThreadWait @ 0x1402470E0 (KiExitThreadWait.c)
 *     KiReadyDeferredReadyList @ 0x140331960 (KiReadyDeferredReadyList.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

unsigned __int64 __fastcall KiSendSoftwareInterruptAffinity(unsigned __int16 *a1, char a2)
{
  unsigned int v3; // r13d
  struct _KPRCB *CurrentPrcb; // rax
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // di
  unsigned int Number; // r12d
  char v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int16 v16; // si
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int128 v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+38h] [rbp-C8h]
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v22[33]; // [rsp+48h] [rbp-B8h] BYREF

  v3 = 31;
  if ( a2 != 1 )
    v3 = 47;
  CurrentPrcb = KeGetCurrentPrcb();
  v19 = 0LL;
  ++CurrentPrcb->SynchCounters.IpiSendSoftwareInterruptCount;
  v20 = 0;
  memset_0(v22, 0, 0x100uLL);
  v21 = 2097153LL;
  result = (unsigned __int64)memset_0(v22, 0, 0x100uLL);
  if ( a1 )
  {
    v7 = 0;
    v8 = *a1;
    while ( 1 )
    {
      if ( v7 >= v8 )
        return result;
      result = v7;
      if ( *(_QWORD *)&a1[4 * v7 + 4] )
        break;
      ++v7;
    }
    v9 = WORD1(v21);
    v10 = 0;
    if ( v8 > WORD1(v21) )
      v8 = WORD1(v21);
    LOWORD(v21) = v8;
    HIDWORD(v21) = 0;
    if ( v8 )
    {
      memmove(v22, a1 + 4, 8LL * v8);
      v9 = WORD1(v21);
      v10 = v8;
    }
    if ( v10 < v9 )
    {
      do
      {
        v11 = v10++;
        v22[v11] = 0LL;
      }
      while ( v10 < WORD1(v21) );
    }
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = 15;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v6);
    }
    Number = KeGetPcr()->Prcb.Number;
    v14 = 0;
    v15 = v22[0];
    v16 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( !v15 )
        {
          if ( ++v16 >= (unsigned int)(unsigned __int16)v21 )
          {
            if ( v14 )
            {
              LODWORD(v19) = 2;
              *((_QWORD *)&v19 + 1) = &v21;
              HalpInterruptSendIpi((unsigned int *)&v19, v3);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            result = CurrentIrql;
            __writecr8(CurrentIrql);
            return result;
          }
          v15 = v22[v16];
        }
        _BitScanForward64(&v17, v15);
        v15 &= ~(1LL << v17);
        v18 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * v16].Flink
              + (unsigned __int8)v17);
        if ( (_DWORD)v18 != Number )
          break;
LABEL_31:
        v14 = 1;
      }
      if ( (*(_DWORD *)(*((_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink + v18) + 228LL) & 1) != 0 )
      {
        if ( (unsigned __int8)PoInitiateProcessorWake((unsigned int)v18) )
          goto LABEL_31;
        KeRemoveProcessorAffinityEx(&v21, (unsigned int)v18);
      }
      else
      {
        v14 = 1;
      }
    }
  }
  return result;
}
