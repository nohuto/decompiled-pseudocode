/*
 * XREFs of PopDripsWatchdogCallbackWorker @ 0x1407DE0A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     PopCalculateIdleInformation @ 0x140434E0C (PopCalculateIdleInformation.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140483348 (PopDirectedDripsClearDisengageReason.c)
 *     PopDirectedDripsSetDisengageReason @ 0x1404833B0 (PopDirectedDripsSetDisengageReason.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404DE3B8 (PopOkayToQueueNextWorkItem.c)
 *     Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline @ 0x1404F7B44 (Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline.c)
 *     PiDmObjectManagerAcquireExclusiveLock @ 0x1409D92BC (PiDmObjectManagerAcquireExclusiveLock.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A3C818 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopDripsWatchdogCallbackHandler @ 0x140B3FB6C (PopDripsWatchdogCallbackHandler.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

void __fastcall PopDripsWatchdogCallbackWorker(PERESOURCE Resource)
{
  bool v2; // zf
  struct _OWNER_ENTRY *v3; // rsi
  ULONG v4; // r15d
  __int128 v5; // xmm0
  int Blink; // eax
  OWNER_ENTRY v7; // xmm1
  unsigned int Flink; // eax
  int Reserved2_high; // eax
  int Flink_high; // r12d
  int SpinLock; // r13d
  signed __int64 v12; // rbp
  signed __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  OWNER_ENTRY v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+50h] [rbp-48h]
  char ActiveCount; // [rsp+A0h] [rbp+8h]
  PVOID ExclusiveWaiters; // [rsp+A8h] [rbp+10h]

  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  PiDmObjectManagerAcquireExclusiveLock(Resource);
  if ( (unsigned int)Feature_Servicing_PopDripsWatchdogTimerCallback__private_IsEnabledDeviceUsageNoInline() )
  {
    HIDWORD(Resource[2].Reserved2) &= ~2u;
    PopOkayToQueueNextWorkItem((__int64)&Resource[2].ExclusiveWaiters);
    v2 = ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0;
  }
  else
  {
    if ( ((__int64)Resource[1].SystemResourcesList.Flink & 4) == 0 )
      goto LABEL_18;
    v2 = (HIDWORD(Resource[2].Reserved2) & 2) == 0;
  }
  if ( !v2 )
  {
    ++LODWORD(Resource[6].SharedWaiters);
    ++HIDWORD(Resource[2].SpinLock);
    PopDripsWatchdogScheduleNextTimer(&Resource[1].SystemResourcesList.Blink);
    v3 = (struct _OWNER_ENTRY *)MEMORY[0xFFFFF78000000008];
    PopCalculateIdleInformation((__int64)&v21);
    v4 = v22.TableSize - Resource[3].OwnerEntry.TableSize;
    if ( v22.TableSize != Resource[3].OwnerEntry.TableSize )
    {
      v5 = v21;
      Blink = (int)PopAdaptiveStandbyLock.Header.WaitListHead.Blink;
      v7 = v22;
      Resource[3].OwnerTable = v3;
      *(_OWORD *)&Resource[3].SharedWaiters = v5;
      HIDWORD(Resource[2].SpinLock) = 0;
      *(_QWORD *)&v5 = v23;
      Resource[3].OwnerEntry = v7;
      LODWORD(Resource[3].SystemResourcesList.Flink) = Blink;
      *(_QWORD *)&Resource[3].ActiveEntries = v5;
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
    }
    Flink = (unsigned int)Resource[3].SystemResourcesList.Flink;
    if ( Flink )
    {
      if ( HIDWORD(Resource[2].SpinLock) < Flink )
      {
        PopDirectedDripsClearDisengageReason(0);
      }
      else
      {
        PopDirectedDripsSetDisengageReason(0);
        LODWORD(Resource[3].SystemResourcesList.Flink) = LODWORD(PopAdaptiveStandbyLock.Header.WaitListHead.Blink)
                                                       + HIDWORD(Resource[2].SpinLock);
      }
    }
    Reserved2_high = HIDWORD(Resource[2].Reserved2);
    if ( (Reserved2_high & 4) == 0 )
    {
      Flink_high = HIDWORD(Resource[1].SystemResourcesList.Flink);
      SpinLock = Resource[2].SpinLock;
      v12 = (char *)v3 - (char *)Resource[3].SystemResourcesList.Blink;
      v13 = (char *)v3 - (char *)Resource[3].OwnerTable;
      ExclusiveWaiters = Resource[6].ExclusiveWaiters;
      ActiveCount = Resource[3].ActiveCount;
      HIDWORD(Resource[2].Reserved2) = Reserved2_high | 4;
      ExReleaseResourceLite(Resource);
      KeLeaveCriticalRegion();
      PopAcquirePolicyLock(v15, v14);
      if ( v4 || qword_140E26F90 )
      {
        PopReleasePolicyLock(v17, v16, v18, v19, v20);
      }
      else
      {
        PopReleasePolicyLock(v17, v16, v18, v19, v20);
        PopDripsWatchdogCallbackHandler(Flink_high, SpinLock, v12, v13, (__int64)ExclusiveWaiters, ActiveCount);
      }
      PiDmObjectManagerAcquireExclusiveLock(Resource);
      Resource[3].SystemResourcesList.Blink = (struct _LIST_ENTRY *)v3;
      HIDWORD(Resource[2].Reserved2) &= ~4u;
    }
  }
LABEL_18:
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
