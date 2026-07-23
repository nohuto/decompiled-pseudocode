/*
 * XREFs of PopWriteBsdPoInfo @ 0x140425088
 * Callers:
 *     PopBsdFlush @ 0x140B02804 (PopBsdFlush.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     PopDiagTraceBsdWriteTime @ 0x14042520C (PopDiagTraceBsdWriteTime.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlSetSystemBootStatus @ 0x140B0C7D0 (RtlSetSystemBootStatus.c)
 *     PopQpcTimeInMs @ 0x140C0CF00 (PopQpcTimeInMs.c)
 */

__int64 __fastcall PopWriteBsdPoInfo(RTL_BSD_ITEM_TYPE BootStatusInformationClass)
{
  ULONG v2; // ebx
  const void *p_AbWaitObject; // rbp
  void *p_InGlobalUpdateVpThreadPriorityList; // rsi
  ULONG v5; // r14d
  NTSTATUS v6; // ebx
  unsigned int v7; // eax
  LARGE_INTEGER v9; // [rsp+20h] [rbp-78h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-70h] BYREF
  _BYTE DataBuffer[64]; // [rsp+30h] [rbp-68h] BYREF

  v2 = 64;
  memset_0(DataBuffer, 0, sizeof(DataBuffer));
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( BootStatusInformationClass == RtlBsdPowerTransition )
  {
    p_AbWaitObject = (const void *)&stru_140E67200.AbWaitObject;
    p_InGlobalUpdateVpThreadPriorityList = &stru_140E67200.InGlobalUpdateVpThreadPriorityList;
    goto LABEL_5;
  }
  if ( BootStatusInformationClass == RtlBsdPowerTransitionExtension )
  {
    p_AbWaitObject = stru_140E67200.Spare35;
    p_InGlobalUpdateVpThreadPriorityList = &stru_140E67200.KernelShadowStackBase;
LABEL_5:
    v2 = 32;
    goto LABEL_6;
  }
  if ( BootStatusInformationClass != RtlBsdItemPowerButtonPressInfo )
  {
    v6 = -1073741811;
    goto LABEL_10;
  }
  p_AbWaitObject = &stru_140E67200.ResourceIndex;
  p_InGlobalUpdateVpThreadPriorityList = &stru_140E67200.IoSelfBoostsEntry;
LABEL_6:
  v5 = v2;
  if ( RtlCompareMemory(p_AbWaitObject, p_InGlobalUpdateVpThreadPriorityList, v2) == v2 )
  {
    v6 = -1073741791;
  }
  else
  {
    memmove(DataBuffer, p_AbWaitObject, v2);
    PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
    v6 = RtlSetSystemBootStatus(BootStatusInformationClass, DataBuffer, v2, 0LL);
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    if ( v6 < 0 )
    {
      if ( BootStatusInformationClass == RtlBsdItemPowerButtonPressInfo
        && HIWORD(stru_140E67200.SchedulerAssistYieldBoostCount) != 0xFFFF )
      {
        ++HIWORD(stru_140E67200.SchedulerAssistYieldBoostCount);
      }
    }
    else
    {
      memmove(p_InGlobalUpdateVpThreadPriorityList, DataBuffer, v5);
    }
  }
LABEL_10:
  v9 = KeQueryPerformanceCounter(0LL);
  v7 = PopQpcTimeInMs(&PerformanceCounter, &v9);
  return PopDiagTraceBsdWriteTime((unsigned int)BootStatusInformationClass, v7, (unsigned int)v6);
}
