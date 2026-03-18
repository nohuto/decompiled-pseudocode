/*
 * XREFs of PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C
 * Callers:
 *     PopWakeDeviceList @ 0x1404B96A8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B98D0 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x140AE4334 (PopManageTransitionRecordRequest.c)
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140C090E8 (PopAcquireTransitionLockAfterSleep.c)
 *     PopPushPowerStateTransitionRecord @ 0x140C09EE4 (PopPushPowerStateTransitionRecord.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14043DAF0 (ObReferenceObjectByPointerWithTag.c)
 *     PopBSDiagSetTriageThread @ 0x140ABB370 (PopBSDiagSetTriageThread.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecordWithCallback(
        PVOID Object,
        PVOID a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        __int64 a5)
{
  unsigned int v5; // ebx
  int v6; // r14d
  __int64 v10; // rdi
  __int64 v11; // rdi
  unsigned __int64 v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = (int)a4;
  if ( (unsigned int)(dword_140F0FD14 - 1) <= 1 )
  {
    if ( Object && a2 )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F11D08, (__int64)a2, a3, a4);
      v10 = (unsigned int)(dword_140F11D00 + 1);
      if ( (unsigned int)v10 >= 0x40 )
      {
        v5 = -1073741801;
      }
      else
      {
        ++dword_140F11D00;
        ObReferenceObjectByPointerWithTag(Object, 0x10000000u, 0LL, 0, 0x746C6644u);
        ObReferenceObjectByPointerWithTag(a2, 0x10000000u, 0LL, 0, 0x746C6644u);
        v11 = 6 * v10;
        *((_QWORD *)&stru_140F110C0.CycleTime + v11) = Object;
        *(&stru_140F110C0.ThreadLock + v11) = (unsigned __int64)a2;
        *((_QWORD *)&stru_140F110C0.KernelStack + v11) = a3;
        *((_QWORD *)&stru_140F110C0.SchedulingGroup + v11) = 0LL;
        *((_DWORD *)&stru_140F110C0.StateSaveArea + 2 * v11) = 0;
        if ( (unsigned int)(v6 - 1) <= 1 && a5 )
        {
          *((_QWORD *)&stru_140F110C0.SchedulingGroup + v11) = a5;
          *((_DWORD *)&stru_140F110C0.StateSaveArea + 2 * v11) = v6;
        }
        *((_QWORD *)&stru_140F110C0.CurrentRunTime + v11) = RtlGetInterruptTimePrecise(v13);
        PopBSDiagSetTriageThread(1LL, a2);
      }
      PopReleaseRwLock(&stru_140F11D08);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741101;
  }
  return v5;
}
