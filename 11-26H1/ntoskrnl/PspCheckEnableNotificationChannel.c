/*
 * XREFs of PspCheckEnableNotificationChannel @ 0x140B650F8
 * Callers:
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140776F6C (PspCheckAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExInitializeFastOwnerEntry @ 0x14043D670 (ExInitializeFastOwnerEntry.c)
 *     RtlIsZeroMemory @ 0x1404D9FD0 (RtlIsZeroMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x140725010 (ZwDeleteWnfStateName.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PspAllocateNotificationChannel @ 0x1407F7938 (PspAllocateNotificationChannel.c)
 *     PspDispatchWakeNotification @ 0x1407F7B94 (PspDispatchWakeNotification.c)
 *     PspLockJobAndRootExclusive @ 0x1407F8DE0 (PspLockJobAndRootExclusive.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FA038 (PspUnlockJobAndRootExclusive.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14095A350 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJobShared @ 0x140AAD180 (PspUnlockJobShared.c)
 *     PspComputeReportWakeFilter @ 0x140B11E2C (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspCheckEnableNotificationChannel(__int64 *Object)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v3; // r14
  __int64 v4; // r9
  int NotificationChannel; // esi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-69h] BYREF
  __int64 v13; // [rsp+40h] [rbp-61h] BYREF
  __int64 v14; // [rsp+48h] [rbp-59h] BYREF
  __int128 v15; // [rsp+50h] [rbp-51h]
  __int128 v16; // [rsp+60h] [rbp-41h]
  __int128 v17; // [rsp+70h] [rbp-31h]
  __int64 v18; // [rsp+80h] [rbp-21h]
  ULONG_PTR v19[10]; // [rsp+88h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+37h] BYREF

  memset_0(v19, 0, 0x48uLL);
  v12 = 0LL;
  memset_0(&v14, 0, 0x40uLL);
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v19);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireFastResourceShared(Object + 7, (ULONG_PTR)v19, 1);
  v3 = (__int64 *)((char *)Object + 1108);
  if ( RtlIsZeroMemory((_BYTE *)Object + 1108, 8uLL) )
  {
    PspUnlockJobShared((__int64)Object, (__int64)CurrentThread, (ULONG_PTR)v19, v4);
    NotificationChannel = PspAllocateNotificationChannel((__int64)Object, (__int64)CurrentThread, (__int64)&v20);
    if ( NotificationChannel >= 0 )
    {
      PspLockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
      if ( RtlIsZeroMemory((_BYTE *)Object + 1108, 8uLL) )
      {
        *v3 = v20;
        v20 = 0LL;
        PspEnumJobsAndProcessesInJobHierarchy(
          Object,
          0,
          (int)PspEnableWakeCounters,
          (int)PspEnableProcessWakeCounters,
          0LL,
          6);
        v6 = *((_OWORD *)Object + 70);
        v7 = *((_OWORD *)Object + 71);
        v13 = Object[148];
        v8 = *v3;
        v15 = v6;
        v14 = v8;
        v9 = *((_OWORD *)Object + 72);
        v16 = v7;
        *(_QWORD *)&v7 = Object[146];
        v17 = v9;
        v18 = v7;
        PspComputeReportWakeFilter(Object, &v12, &v13, 0);
        PspUnlockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
        PspDispatchWakeNotification(Object, &v12, (__int64)&v14);
        _InterlockedIncrement64((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.CycleTime);
        NotificationChannel = 0;
      }
      else
      {
        NotificationChannel = 0;
        PspUnlockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
      }
    }
  }
  else
  {
    NotificationChannel = 0;
    PspUnlockJobShared((__int64)Object, (__int64)CurrentThread, (ULONG_PTR)v19, v4);
  }
  if ( !RtlIsZeroMemory(&v20, 8uLL) )
    ZwDeleteWnfStateName((__int64)&v20, v10);
  return (unsigned int)NotificationChannel;
}
