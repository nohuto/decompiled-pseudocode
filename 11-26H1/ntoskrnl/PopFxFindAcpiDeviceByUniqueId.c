/*
 * XREFs of PopFxFindAcpiDeviceByUniqueId @ 0x1404FA998
 * Callers:
 *     PopFxAcpiPrepareDevice @ 0x1406121A4 (PopFxAcpiPrepareDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140B1BA40 (PopFxRegisterDeviceWorker.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140B1C46C (PopFxFindDeviceAndAllocateUniqueId.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     IoAcquireRemoveLockEx @ 0x1404578E0 (IoAcquireRemoveLockEx.c)
 *     RtlCompareUnicodeString @ 0x1409E1590 (RtlCompareUnicodeString.c)
 */

__int64 __fastcall PopFxFindAcpiDeviceByUniqueId(
        PCUNICODE_STRING String2,
        __int64 **a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rdi
  NTSTATUS v8; // esi
  LegacyAutoBoost *v9; // rbx
  __int64 *i; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = 0LL;
  v8 = -1073741275;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&qword_140F123D0, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140F123D0.Header.Lock, 0, v9, &qword_140F123D0);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      *((_BYTE *)v9 + 33) |= 2u;
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  for ( i = (__int64 *)qword_140F123C0; i != &qword_140F123C0; i = (__int64 *)*i )
  {
    v7 = i - 25;
    if ( i[3] && !RtlCompareUnicodeString((PCUNICODE_STRING)(v7 + 27), String2, 0) )
    {
      if ( a2 )
        v8 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 39), (PVOID)0x66466F50, &File, 1u, 0x20u);
      else
        v8 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F123D0, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140F123D0.Header.Lock);
  KeAbPostRelease((unsigned __int64)&qword_140F123D0);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 && a2 )
    *a2 = v7;
  return (unsigned int)v8;
}
