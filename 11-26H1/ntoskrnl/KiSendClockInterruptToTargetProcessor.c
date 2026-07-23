/*
 * XREFs of KiSendClockInterruptToTargetProcessor @ 0x14037B19C
 * Callers:
 *     KiTimer2Expiration @ 0x140338AC0 (KiTimer2Expiration.c)
 *     KiAdjustTimer2DueTimes @ 0x140339568 (KiAdjustTimer2DueTimes.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x14037AE50 (ExpUpdateTimerConfigurationWorker.c)
 *     KeSetTimer2 @ 0x14037C2B0 (KeSetTimer2.c)
 *     KiInsertTimerTable @ 0x1403B6998 (KiInsertTimerTable.c)
 *     KeSetClockInterval @ 0x14040CD44 (KeSetClockInterval.c)
 *     KeResumeClockTimerFromIdle @ 0x1405F03F4 (KeResumeClockTimerFromIdle.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeRemoveProcessorAffinityEx @ 0x140453E40 (KeRemoveProcessorAffinityEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     PoInitiateProcessorWake @ 0x140603F50 (PoInitiateProcessorWake.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiSendClockInterruptToTargetProcessor(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // ecx
  unsigned __int16 v3; // bx
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rcx
  int v9; // ebx
  __int64 result; // rax
  unsigned __int16 v11; // di
  unsigned __int16 v12; // bx
  unsigned __int8 CurrentIrql; // r14
  unsigned int Number; // r12d
  char v15; // si
  unsigned __int64 v16; // rdi
  __int64 v17; // rbx
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  __int128 v20; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h]
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[33]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+168h] [rbp+60h]
  _QWORD Src[33]; // [rsp+170h] [rbp+68h] BYREF

  v1 = a1;
  memset_0(Src, 0, 0x100uLL);
  v24 = 2097153LL;
  memset_0(Src, 0, 0x100uLL);
  v2 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + v1);
  v3 = 1;
  v4 = v2 & 0x3F;
  v5 = v2 >> 6;
  if ( (_DWORD)v5 )
  {
    if ( WORD1(v24) <= (unsigned int)v5 )
      goto LABEL_3;
    LOWORD(v24) = v5 + 1;
  }
  v6 = (unsigned int)v5;
  v7 = Src[v5];
  _bittestandset64(&v7, v4);
  Src[v6] = v7;
  v3 = v24;
LABEL_3:
  LODWORD(v21) = 0;
  v20 = 0LL;
  memset_0(v23, 0, 0x100uLL);
  v22 = 2097153LL;
  memset_0(v23, 0, 0x100uLL);
  for ( i = 0LL; ; LOWORD(i) = i + 1 )
  {
    if ( (unsigned __int16)i >= v3 )
    {
      v9 = -1073741811;
      goto LABEL_8;
    }
    if ( Src[(unsigned __int16)i] )
      break;
  }
  result = WORD1(v22);
  HIDWORD(v22) = 0;
  v11 = WORD1(v22);
  if ( v3 <= WORD1(v22) )
    v11 = v3;
  v12 = 0;
  LOWORD(v22) = v11;
  if ( v11 )
  {
    memmove(v23, Src, 8LL * v11);
    do
      ++v12;
    while ( v12 < v11 );
    result = WORD1(v22);
  }
  if ( v12 < (unsigned __int16)result )
  {
    do
    {
      result = v12++;
      v23[result] = 0LL;
    }
    while ( v12 < WORD1(v22) );
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(i) = CurrentIrql;
    result = KiRaiseIrqlProcessIrqlFlags(i, 15LL);
  }
  Number = KeGetPcr()->Prcb.Number;
  v15 = 0;
  v16 = v23[0];
  LOWORD(v17) = 0;
  while ( 1 )
  {
    while ( v16 )
    {
      _BitScanForward64(&v18, v16);
      v16 &= ~(1LL << v18);
      result = (__int64)KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink;
      v19 = *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v17].Flink
            + (unsigned __int8)v18);
      if ( (_DWORD)v19 == Number
        || (result = *(unsigned int *)(*((_QWORD *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Flink->Flink
                                       + v19)
                                     + 228LL),
            (result & 1) == 0)
        || (result = PoInitiateProcessorWake((unsigned int)v19), (_BYTE)result) )
      {
        v15 = 1;
      }
      else
      {
        result = KeRemoveProcessorAffinityEx(&v22, (unsigned int)v19);
      }
    }
    v17 = (unsigned __int16)(v17 + 1);
    if ( (unsigned int)v17 >= (unsigned __int16)v22 )
      break;
    v16 = v23[v17];
  }
  if ( v15 )
  {
    LODWORD(v20) = 2;
    *((_QWORD *)&v20 + 1) = &v22;
    result = HalpInterruptSendIpi((unsigned int *)&v20, 0xD2u);
    v9 = result;
  }
  else
  {
    v9 = 0;
  }
  if ( KiIrqlFlags )
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v9 < 0 )
LABEL_8:
    KeBugCheckEx(0x5Cu, 0x201uLL, HalpInterruptController, v9, 0LL);
  return result;
}
