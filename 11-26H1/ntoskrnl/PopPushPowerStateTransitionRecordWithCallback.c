/*
 * XREFs of PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8
 * Callers:
 *     PopWakeDeviceList @ 0x1404B2F38 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1404B3160 (PopSleepDeviceList.c)
 *     PopManageTransitionRecordRequest @ 0x140AE1E44 (PopManageTransitionRecordRequest.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140C0F2F8 (PopAcquireTransitionLockAfterSleep.c)
 *     PopPushPowerStateTransitionRecord @ 0x140C100F4 (PopPushPowerStateTransitionRecord.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     ObReferenceObjectByPointerWithTag @ 0x140436600 (ObReferenceObjectByPointerWithTag.c)
 *     PopBSDiagSetTriageThread @ 0x140ABC830 (PopBSDiagSetTriageThread.c)
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
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = (int)a4;
  if ( (unsigned int)(dword_140F105D4 - 1) <= 1 )
  {
    if ( Object && a2 )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&xmmword_140F120C8, (__int64)a2, a3, a4);
      v10 = (unsigned int)(dword_140F120C0 + 1);
      if ( (unsigned int)v10 >= 0x40 )
      {
        v5 = -1073741801;
      }
      else
      {
        ++dword_140F120C0;
        ObReferenceObjectByPointerWithTag(Object, 0x10000000u, 0LL, 0, 0x746C6644u);
        ObReferenceObjectByPointerWithTag(a2, 0x10000000u, 0LL, 0, 0x746C6644u);
        v11 = 6 * v10;
        *((_QWORD *)&PopStateTransitonBlameStack + v11 + 1) = Object;
        *((_QWORD *)&PopStateTransitonBlameStack + v11) = a2;
        *((_QWORD *)&PopStateTransitonBlameStack + v11 + 3) = a3;
        *((_QWORD *)&PopStateTransitonBlameStack + v11 + 5) = 0LL;
        *((_DWORD *)&PopStateTransitonBlameStack + 2 * v11 + 8) = 0;
        if ( (unsigned int)(v6 - 1) <= 1 && a5 )
        {
          *((_QWORD *)&PopStateTransitonBlameStack + v11 + 5) = a5;
          *((_DWORD *)&PopStateTransitonBlameStack + 2 * v11 + 8) = v6;
        }
        *((LARGE_INTEGER *)&PopStateTransitonBlameStack + v11 + 2) = RtlGetInterruptTimePrecise(&PerformanceCounter);
        PopBSDiagSetTriageThread(1LL, a2);
      }
      PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F120C8);
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
