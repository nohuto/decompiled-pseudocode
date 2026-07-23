/*
 * XREFs of FsRtlInitializeOplockPerf @ 0x140CBF134
 * Callers:
 *     FsRtlInitSystem @ 0x140CBEAB0 (FsRtlInitSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14043F380 (KiQueryUnbiasedInterruptTime.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline @ 0x140529158 (Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpOplockGetAckTimeoutOverride @ 0x1407919B0 (FsRtlpOplockGetAckTimeoutOverride.c)
 *     FsRtlpOplockPerfInitializeLatencyInfo @ 0x140791D5C (FsRtlpOplockPerfInitializeLatencyInfo.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 FsRtlInitializeOplockPerf()
{
  unsigned int AckTimeoutOverride; // edi
  _QWORD *Pool2; // rbx
  __int64 v2; // rbx
  char v3; // cl
  volatile __int64 *v4; // rax
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx

  AckTimeoutOverride = 0;
  g_OplockPerfData = ExAllocatePool2(256LL, 0x28uLL, 0x6F725346u);
  if ( g_OplockPerfData
    && (Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x6F725346u), (*(_QWORD *)g_OplockPerfData = Pool2) != 0LL)
    && (*Pool2 = ExAllocatePool2(256LL, 0x100uLL, 0x6F725346u),
        v2 = *(_QWORD *)g_OplockPerfData,
        *(_QWORD *)(v2 + 8) = ExAllocatePool2(256LL, 0x100uLL, 0x6F725346u),
        **(_QWORD **)g_OplockPerfData)
    && *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL) )
  {
    FsRtlpOplockPerfInitializeLatencyInfo();
    qword_140E65DE0 = 36000000000LL;
    *(_QWORD *)(g_OplockPerfData + 24) = 10LL;
    qword_140E65DE8 = KiQueryUnbiasedInterruptTime();
    byte_140E65DC1 = v3;
    if ( !(unsigned int)Feature_OwnerAckTimeout__private_IsEnabledDeviceUsageNoInline() )
      return AckTimeoutOverride;
    ExInitializeNPagedLookasideListInternal((__int64)&g_OplockAckTimeoutLookaside, 0LL, 0LL, 528, 184, 1869763398, 0, 0);
    AckTimeoutOverride = FsRtlpOplockGetAckTimeoutOverride();
    if ( (AckTimeoutOverride & 0x80000000) == 0 )
      return AckTimeoutOverride;
  }
  else
  {
    AckTimeoutOverride = -1073741670;
  }
  if ( g_OplockPerfData )
  {
    v4 = *(volatile __int64 **)g_OplockPerfData;
    if ( *(_QWORD *)g_OplockPerfData )
    {
      if ( *v4 )
      {
        v5 = (void *)_InterlockedExchange64(v4, 0LL);
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
      }
      if ( *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL) )
      {
        v6 = (void *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)g_OplockPerfData + 8LL), 0LL);
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
      }
      v7 = (void *)_InterlockedExchange64((volatile __int64 *)g_OplockPerfData, 0LL);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
    }
    v8 = (void *)_InterlockedExchange64(&g_OplockPerfData, 0LL);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return AckTimeoutOverride;
}
