/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x1403B5280
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x1403C172C (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 *     KiEncodeTolerableDelayValue @ 0x1403B7F44 (KiEncodeTolerableDelayValue.c)
 */

_QWORD *__fastcall PopFxEnableWorkOrderWatchdog(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD **)(a1 + 48);
  if ( v4 )
  {
    v4[21] = KeGetCurrentThread();
    if ( a2 )
    {
      LOBYTE(a4) = 0;
      v5 = -10000LL * a2;
      if ( a2 >= 0xA )
      {
        v6 = a2 / 0xA;
        v7 = 10000LL * (unsigned int)v6;
        v8 = (unsigned int)Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline(a1, v6, a3, a4) != 0
           ? 9600000LL
           : 63LL;
        if ( v7 > v8 )
        {
          v9 = v7 - v8;
          if ( v5 < 0 )
          {
            v10 = v5 - v9;
            if ( (__int64)(v5 - v9) > v5 )
              v10 = 0;
          }
          else
          {
            v10 = v9 + v5;
            if ( (__int64)(v9 + v5) < v5 )
              v10 = -1;
          }
          LODWORD(v7) = v8;
          LODWORD(v5) = v10;
        }
        LOBYTE(a4) = 4 * KiEncodeTolerableDelayValue((unsigned int)v7);
      }
      KiSetTimerEx((_DWORD)v4 + 16, v5, 0, a4, (__int64)(v4 + 10));
      v4[20] = MEMORY[0xFFFFF78000000008];
      v4[19] = 0LL;
      v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1);
      v12 = *(_QWORD **)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock;
      if ( **(struct _KTHREAD ***)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.SchedulerApcFill5[80] )
        __fastfail(3u);
      *v4 = &PopFxBlockingDeviceListLock.SchedulerApcFill5[80];
      v4[1] = v12;
      *v12 = v4;
      *(_QWORD *)&PopFxBlockingDeviceListLock.SuspendEvent.Header.Lock = v4;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1, 0LL);
      else
        KiReleaseSpinLockInstrumented(
          (volatile signed __int64 *)&PopFxBlockingDeviceListLock.SchedulerApc.SystemArgument1,
          retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
      __writecr8(v11);
    }
  }
  return v4;
}
