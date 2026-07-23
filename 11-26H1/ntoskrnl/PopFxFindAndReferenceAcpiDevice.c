/*
 * XREFs of PopFxFindAndReferenceAcpiDevice @ 0x1404F6680
 * Callers:
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x1404F65F0 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PopFxFindAndReferenceAcpiDevice(
        struct _KTHREAD *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  LegacyAutoBoost *v7; // rbx
  struct _KTHREAD *i; // rax
  unsigned __int64 *p_InGlobalUpdateVpThreadPriorityList; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = -1073741810;
  --CurrentThread->KernelApcDisable;
  v7 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      v7,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v7 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v7 + 33) |= 2u;
    else
      *((_BYTE *)v7 + 10) = 1;
  }
  for ( i = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.PriorityFloorSummary;
        i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.PriorityFloorSummary;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    p_InGlobalUpdateVpThreadPriorityList = &i[-1].InGlobalUpdateVpThreadPriorityList;
    if ( &i[-1].InGlobalUpdateVpThreadPriorityList == (unsigned __int64 *)a1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)p_InGlobalUpdateVpThreadPriorityList + 79);
      if ( *((_BYTE *)p_InGlobalUpdateVpThreadPriorityList + 312) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)p_InGlobalUpdateVpThreadPriorityList + 79, 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(p_InGlobalUpdateVpThreadPriorityList + 40), 0, 0);
        v6 = -1073741738;
      }
      else
      {
        v6 = 0;
      }
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
  return v6;
}
