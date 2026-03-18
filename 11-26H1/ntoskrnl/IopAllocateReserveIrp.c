/*
 * XREFs of IopAllocateReserveIrp @ 0x14027006C
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14026BD90 (IoPageReadEx.c)
 *     IopAllocateIrpMustSucceed @ 0x14026C5E0 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x14045BD70 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x1404766A0 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x140481F80 (IopInitActivityIdIrp.c)
 */

__int64 __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 OtherOperationCount; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > SLOBYTE(IopSessionNotificationLock.Spare36) )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.880, 1) == 1 )
      KeWaitForSingleObject(&IopSessionNotificationLock.InGlobalForegroundList, Executive, 0, 0, 0LL);
    IoInitializeIrp(*(PIRP *)&IopSessionNotificationLock.ForegroundLossTime, 8 * (8 * v3 + v4) + 208, v3);
    *(_BYTE *)(*(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime + 71LL) = 33;
    v6 = *(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime;
    *(_QWORD *)(*(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime + 184LL) -= 144LL;
    v7 = *(_QWORD *)(v6 + 184);
    *(_BYTE *)(v6 + 67) -= 2;
    *(_BYTE *)(v6 + 66) -= 2;
    *(_QWORD *)(v6 + 200) = v7;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(*(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime);
    return *(_QWORD *)&IopSessionNotificationLock.ForegroundLossTime;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange((volatile __int32 *)&IopSessionNotificationLock.ReadTransferCount, 1) == 1 )
      KeWaitForSingleObject(&IopSessionNotificationLock.WriteTransferCount, Executive, 0, 0, 0LL);
    IoInitializeIrp((PIRP)IopSessionNotificationLock.OtherOperationCount, 8 * (8 * v3 + v4) + 208, v3);
    *(_BYTE *)(IopSessionNotificationLock.OtherOperationCount + 71) = 33;
    OtherOperationCount = IopSessionNotificationLock.OtherOperationCount;
    *(_QWORD *)(IopSessionNotificationLock.OtherOperationCount + 184) -= 144LL;
    v9 = *(_QWORD *)(OtherOperationCount + 184);
    *(_BYTE *)(OtherOperationCount + 67) -= 2;
    *(_BYTE *)(OtherOperationCount + 66) -= 2;
    *(_QWORD *)(OtherOperationCount + 200) = v9;
    if ( (unsigned __int8)IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopSessionNotificationLock.OtherOperationCount);
    return IopSessionNotificationLock.OtherOperationCount;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange((volatile __int32 *)IopSessionNotificationLock.TracingPrivate, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&IopSessionNotificationLock.SchedulerAssist, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(*(PIRP *)&IopSessionNotificationLock.ThreadTimerDelay, 8 * (8 * v3 + v4) + 208, v3);
  *(_BYTE *)(*(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay + 71LL) = 33;
  v10 = *(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay;
  *(_QWORD *)(*(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay + 184LL) -= 144LL;
  v11 = *(_QWORD *)(v10 + 184);
  *(_BYTE *)(v10 + 67) -= 2;
  *(_BYTE *)(v10 + 66) -= 2;
  *(_QWORD *)(v10 + 200) = v11;
  if ( (unsigned __int8)IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(*(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay);
  return *(_QWORD *)&IopSessionNotificationLock.ThreadTimerDelay;
}
