/*
 * XREFs of PspJobNotificationWorker @ 0x140AD5440
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     PspSendReliableJobNotification @ 0x140958424 (PspSendReliableJobNotification.c)
 *     PspUnlockJobExclusive @ 0x140959DD4 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x14095A894 (PspLockJobExclusive.c)
 */

signed __int64 PspJobNotificationWorker()
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  signed __int32 v2; // esi
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v5; // r8
  __int64 v6; // r9

  do
  {
    v0 = _InterlockedExchange64((volatile __int64 *)&PsAltSystemCallRegistrationLock.Header.WaitListHead.Flink, -1LL);
    do
    {
      v1 = *(_QWORD *)(v0 + 1200);
      _m_prefetchw((const void *)(v0 + 1552));
      v2 = _InterlockedAnd((volatile signed __int32 *)(v0 + 1552), 0xFFFDDFFF);
      if ( (v2 & 0x2000) != 0 )
        ZwUpdateWnfStateData(v0 + 1108, 0LL);
      if ( (v2 & 0x20000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        PspLockJobExclusive(v0, (__int64)CurrentThread);
        if ( *(_QWORD *)(v0 + 552) && (*(_DWORD *)(v0 + 1104) & 0x1000) != 0 )
          PspSendReliableJobNotification((PVOID)v0, 0xCu);
        PspUnlockJobExclusive(v0, (__int64)CurrentThread, v5, v6);
      }
      ObfDereferenceObjectWithTag((PVOID)v0, 0x6F4E7350u);
      v0 = v1;
    }
    while ( v1 && v1 != -1 );
    result = _InterlockedCompareExchange64(
               (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.Header.WaitListHead.Flink,
               0LL,
               -1LL);
  }
  while ( result != -1 );
  return result;
}
