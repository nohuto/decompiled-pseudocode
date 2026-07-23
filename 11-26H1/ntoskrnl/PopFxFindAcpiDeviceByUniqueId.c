/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x1404F3FA8
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x140614FE4 (PopFxAcpiPrepareDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1DC50 (PopFxRegisterDeviceWorker.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140B1E67C (PopFxFindDeviceAndAllocateUniqueId.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     IoAcquireRemoveLockEx @ 0x14044F150 (IoAcquireRemoveLockEx.c)
 *     RtlCompareUnicodeString @ 0x1409DE5A0 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(
        PCUNICODE_STRING String2,
        unsigned __int64 **a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *p_InGlobalUpdateVpThreadPriorityList; // rdi
  NTSTATUS v8; // esi
  LegacyAutoBoost *v9; // rbx
  struct _KTHREAD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_InGlobalUpdateVpThreadPriorityList = 0LL;
  v8 = -1073741275;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&PopFxBlockingDeviceListLock.Teb, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&PopFxBlockingDeviceListLock.Teb,
      0,
      v9,
      (struct _KTHREAD *)&PopFxBlockingDeviceListLock.Teb);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  for ( i = *(struct _KTHREAD **)&PopFxBlockingDeviceListLock.PriorityFloorSummary;
        i != (struct _KTHREAD *)&PopFxBlockingDeviceListLock.PriorityFloorSummary;
        i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    p_InGlobalUpdateVpThreadPriorityList = &i[-1].InGlobalUpdateVpThreadPriorityList;
    if ( i->SListFaultAddress
      && !RtlCompareUnicodeString((PCUNICODE_STRING)(p_InGlobalUpdateVpThreadPriorityList + 27), String2, 0) )
    {
      if ( a2 )
        v8 = IoAcquireRemoveLockEx(
               (PIO_REMOVE_LOCK)(p_InGlobalUpdateVpThreadPriorityList + 39),
               (PVOID)0x66466F50,
               &File,
               1u,
               0x20u);
      else
        v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopFxBlockingDeviceListLock.Teb, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopFxBlockingDeviceListLock.Teb);
  KeAbPostRelease((unsigned __int64)&PopFxBlockingDeviceListLock.Teb);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 && a2 )
    *a2 = p_InGlobalUpdateVpThreadPriorityList;
  return (unsigned int)v8;
}
