/*
 * XREFs of PopNetResiliencyPhaseStateChanged @ 0x1407DA8C0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KeCancelTimer2 @ 0x1403AA4E0 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopNetResiliencyPhaseStateChanged(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // [rsp+20h] [rbp-8h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  v3 = 0LL;
  if ( v2 )
  {
    BYTE4(stru_140F0C428.Header.WaitListHead.Flink) = 1;
    _InterlockedExchange(&PopNetGracePeriodState, 1);
    v4 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
    if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(v4 + qword_140E26F48) )
      v3 = v4 + qword_140E26F48 - MEMORY[0xFFFFF78000000008];
    KeSetTimer2((__int64)&stru_140F0C428.RelativeTimerBias, -v3, 0LL, 0LL);
  }
  else
  {
    BYTE4(stru_140F0C428.Header.WaitListHead.Flink) = 0;
    KeCancelTimer2((__int64)&stru_140F0C428.RelativeTimerBias);
    _InterlockedExchange(&PopNetGracePeriodState, 0);
    PopQueueWorkItem((__int64)&stru_140F0C428.WaitBlockFill11[64], DelayedWorkQueue);
  }
  return PopReleasePolicyLock(v6, v5, v7, v8, v10);
}
