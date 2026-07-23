/*
 * XREFs of PopDripsWatchdogDiagnosticWorker @ 0x1407E2A20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PopCalculateIdleInformation @ 0x140423CE4 (PopCalculateIdleInformation.c)
 *     PopDeepSleepEnabled @ 0x1404CB9AC (PopDeepSleepEnabled.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F1154 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceCsDripsDivergence @ 0x14060AE4C (PopDiagTraceCsDripsDivergence.c)
 *     PopDripsWatchdogTakeAction @ 0x14061674C (PopDripsWatchdogTakeAction.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopDripsWatchdogCheckHwDivergence @ 0x1407E2930 (PopDripsWatchdogCheckHwDivergence.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x1407E8D4C (PopDeepSleepWatchdogTakeAction.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409AA1AC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409F8238 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x140B69834 (PopDripsWatchdogUpdateMetrics.c)
 */

void __fastcall PopDripsWatchdogDiagnosticWorker(PERESOURCE Resource)
{
  ULONG *p_NumberOfSharedWaiters; // rbx
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // r14
  struct _LIST_ENTRY *Blink; // rax
  ULONG v7; // ecx
  __int128 v8; // xmm0
  int Reserved2; // eax
  __int64 v10; // xmm1_8
  unsigned int Flink_high; // r15d
  int SharedWaiters; // r12d
  int v13; // [rsp+30h] [rbp-29h] BYREF
  int v14; // [rsp+34h] [rbp-25h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-21h] BYREF
  __int128 v16; // [rsp+40h] [rbp-19h] BYREF
  __int128 v17; // [rsp+50h] [rbp-9h]
  __int64 v18; // [rsp+60h] [rbp+7h]
  __int128 v19; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+78h] [rbp+1Fh]
  int v21; // [rsp+80h] [rbp+27h]

  p_NumberOfSharedWaiters = &Resource[3].NumberOfSharedWaiters;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v3 = MEMORY[0xFFFFF78000000008];
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock(Resource);
  if ( (unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
  {
    p_NumberOfSharedWaiters[45] &= ~2u;
    PopOkayToQueueNextWorkItem((__int64)(p_NumberOfSharedWaiters + 34));
    if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0 )
      goto LABEL_21;
    if ( v3 <= *((_QWORD *)p_NumberOfSharedWaiters + 23) + 10000000LL )
    {
      PopDripsWatchdogScheduleNextTimer(p_NumberOfSharedWaiters);
      goto LABEL_21;
    }
  }
  else if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0
         || (p_NumberOfSharedWaiters[45] & 2) == 0
         || v3 - *((_QWORD *)p_NumberOfSharedWaiters + 23) < 0x1312D00 )
  {
    goto LABEL_21;
  }
  ++LODWORD(Resource[6].SharedWaiters);
  v14 = 0;
  v15 = 0LL;
  v13 = 0;
  PopCalculateIdleInformation((__int64)&v16);
  PopDripsWatchdogUpdateMetrics(
    (_DWORD)Resource,
    v3,
    (unsigned int)&v16,
    (unsigned int)&v14,
    (__int64)&v15,
    (__int64)&v13);
  v4 = 0LL;
  v5 = 0;
  if ( (_QWORD)v17 != -1LL )
  {
    Blink = Resource[6].SystemResourcesList.Blink;
    if ( Blink != (struct _LIST_ENTRY *)-1LL )
    {
      v5 = 1;
      v4 = v17 - (_QWORD)Blink;
    }
  }
  v7 = p_NumberOfSharedWaiters[45];
  if ( (v7 & 4) == 0 )
  {
    v8 = *(_OWORD *)&Resource[5].OwnerEntry.0;
    Reserved2 = (int)Resource[5].Reserved2;
    v10 = *(_QWORD *)&Resource[5].NumberOfSharedWaiters;
    Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
    SharedWaiters = (int)Resource[6].SharedWaiters;
    p_NumberOfSharedWaiters[45] = v7 | 4;
    v19 = v8;
    v21 = Reserved2;
    v20 = v10;
    PopDripsWatchdogScheduleNextTimer(p_NumberOfSharedWaiters);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      if ( !v14 && PopDeepSleepEnabled() )
        PopDeepSleepWatchdogTakeAction(&v19, Flink_high);
    }
    else if ( !qword_140E270D0 )
    {
      PopDripsWatchdogTakeAction((__int64)&v19, Flink_high, SharedWaiters);
    }
    PopDiagTraceCsDripsDivergence(v5, v15, v4);
    if ( v5 )
      PopDripsWatchdogCheckHwDivergence(v4, v15);
    PiDmObjectManagerAcquireExclusiveLock(Resource);
    p_NumberOfSharedWaiters[45] &= ~4u;
  }
LABEL_21:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
