/*
 * XREFs of PspCheckEnableNotificationChannel @ 0x140B68198
 * Callers:
 *     PspCheckAllocateAndQueryNotificationChannel @ 0x140779E14 (PspCheckAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x140729BE0 (ZwDeleteWnfStateName.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspAllocateNotificationChannel @ 0x1407FD498 (PspAllocateNotificationChannel.c)
 *     PspDispatchWakeNotification @ 0x1407FD6F0 (PspDispatchWakeNotification.c)
 *     PspLockJobAndRootExclusive @ 0x1407FE8E0 (PspLockJobAndRootExclusive.c)
 *     PspUnlockJobAndRootExclusive @ 0x1407FFA68 (PspUnlockJobAndRootExclusive.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJobShared @ 0x140AAB240 (PspUnlockJobShared.c)
 *     PspComputeReportWakeFilter @ 0x140B13BAC (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspCheckEnableNotificationChannel(__int64 *Object)
{
  struct _KTHREAD *CurrentThread; // rbx
  _WNF_STATE_NAME *v3; // r14
  __int64 v4; // r9
  int v5; // esi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _WNF_STATE_NAME v8; // rax
  __int128 v9; // xmm0
  __int64 v11; // [rsp+38h] [rbp-69h] BYREF
  __int64 v12; // [rsp+40h] [rbp-61h] BYREF
  _WNF_STATE_NAME v13; // [rsp+48h] [rbp-59h] BYREF
  __int128 v14; // [rsp+50h] [rbp-51h]
  __int128 v15; // [rsp+60h] [rbp-41h]
  __int128 v16; // [rsp+70h] [rbp-31h]
  __int64 v17; // [rsp+80h] [rbp-21h]
  ULONG_PTR v18[10]; // [rsp+88h] [rbp-19h] BYREF
  _WNF_STATE_NAME Buffer; // [rsp+D8h] [rbp+37h] BYREF

  memset_0(v18, 0, 0x48uLL);
  v11 = 0LL;
  memset_0(&v13, 0, 0x40uLL);
  Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  ExInitializeFastOwnerEntry((__int64)v18);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  ExAcquireFastResourceShared(Object + 7, (ULONG_PTR)v18, 1);
  v3 = (_WNF_STATE_NAME *)((char *)Object + 1108);
  if ( RtlIsZeroMemory((char *)Object + 1108, 8uLL) )
  {
    PspUnlockJobShared((__int64)Object, (__int64)CurrentThread, (ULONG_PTR)v18, v4);
    v5 = PspAllocateNotificationChannel((__int64)Object, (__int64)CurrentThread, &Buffer);
    if ( v5 >= 0 )
    {
      PspLockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
      if ( RtlIsZeroMemory((char *)Object + 1108, 8uLL) )
      {
        *v3 = Buffer;
        Buffer = 0LL;
        PspEnumJobsAndProcessesInJobHierarchy(
          Object,
          0,
          (int)PspEnableWakeCounters,
          (int)PspEnableProcessWakeCounters,
          0LL,
          6);
        v6 = *((_OWORD *)Object + 70);
        v7 = *((_OWORD *)Object + 71);
        v12 = Object[148];
        v8 = *v3;
        v14 = v6;
        v13 = v8;
        v9 = *((_OWORD *)Object + 72);
        v15 = v7;
        *(_QWORD *)&v7 = Object[146];
        v16 = v9;
        v17 = v7;
        PspComputeReportWakeFilter(Object, &v11, &v12, 0);
        PspUnlockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
        PspDispatchWakeNotification(Object, &v11, (__int64)&v13);
        _InterlockedIncrement64((volatile signed __int64 *)&PsAltSystemCallRegistrationLock.152);
        v5 = 0;
      }
      else
      {
        v5 = 0;
        PspUnlockJobAndRootExclusive((__int64)Object, (__int64)CurrentThread);
      }
    }
  }
  else
  {
    v5 = 0;
    PspUnlockJobShared((__int64)Object, (__int64)CurrentThread, (ULONG_PTR)v18, v4);
  }
  if ( !RtlIsZeroMemory(&Buffer, 8uLL) )
    ZwDeleteWnfStateName(&Buffer);
  return (unsigned int)v5;
}
