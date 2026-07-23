/*
 * XREFs of PopFxBuildDirectedDripsCandidateDeviceList @ 0x1404CA9FC
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 */

void __fastcall PopFxBuildDirectedDripsCandidateDeviceList(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  AutoBoost *v6; // rax
  struct _KLOCK_ENTRIES *v7; // r9
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  AutoBoost *v10; // rax
  AutoBoost *v11; // rdi
  struct _KTHREAD *i; // rdi
  __int64 **v13; // rcx
  __int64 *p_OtherOperationCount; // rax

  a1[1] = (__int64)a1;
  *a1 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(&PopFxBlockingDeviceListLock.Header.Lock, 0LL);
  v9 = v6;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock,
      v6,
      (__int64)&PopFxBlockingDeviceListLock);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  v10 = (AutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, v7);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxBlockingDeviceListLock.Teb, 0LL);
  v11 = v10;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopFxBlockingDeviceListLock.Teb,
      v10,
      (__int64)&PopFxBlockingDeviceListLock.Teb);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v11 + 33) |= 2u;
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  for ( i = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.ForegroundLossTime;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( (_InterlockedCompareExchange(&i->AbCompletedIoQoSBoostCount, 0, 0) & 0x40) != 0 )
    {
      PopFxReferenceDevice((ULONG_PTR)i, 3);
      v13 = (__int64 **)a1[1];
      p_OtherOperationCount = &i->OtherOperationCount;
      if ( *v13 != a1 )
        __fastfail(3u);
      *p_OtherOperationCount = (__int64)a1;
      i->ReadTransferCount = (__int64)v13;
      *v13 = p_OtherOperationCount;
      a1[1] = (__int64)p_OtherOperationCount;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
}
