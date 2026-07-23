/*
 * XREFs of IommupGetSystemContext @ 0x14059F680
 * Callers:
 *     IommuGetLibraryContext @ 0x14059EC30 (IommuGetLibraryContext.c)
 *     IommuGetConfiguration @ 0x140CBAAE0 (IommuGetConfiguration.c)
 *     IommuHvGetConfiguration @ 0x140CBAB30 (IommuHvGetConfiguration.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     IommupHvCreateSvmPasidSpace @ 0x1405A0698 (IommupHvCreateSvmPasidSpace.c)
 */

__int64 __fastcall IommupGetSystemContext(unsigned int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  volatile unsigned __int8 *v6; // rdx
  __int64 ChildMinWeight; // rcx
  signed __int8 v8; // cf
  AutoBoost *v9; // rbx
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  _KSCHEDULING_GROUP *volatile v17; // rax

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea, 0LL, 0LL, a4);
  v8 = _interlockedbittestandset64(
         (volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
         0LL);
  v9 = v5;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
      v5,
      (__int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v6) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v6, 1);
    }
    else
    {
      *((_BYTE *)v9 + 10) = 1;
    }
  }
  SchedulingGroup = IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
  if ( (_KSCHEDULING_GROUP *volatile *)IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup == &IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup )
    goto LABEL_12;
  do
  {
    ChildMinWeight = SchedulingGroup->ChildMinWeight;
    v11 = (__int64)SchedulingGroup;
    if ( (_DWORD)ChildMinWeight == a1 )
      break;
    SchedulingGroup = (_KSCHEDULING_GROUP *volatile)SchedulingGroup->Policy;
  }
  while ( SchedulingGroup != (_KSCHEDULING_GROUP *volatile)&IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup );
  if ( !v11 || (_DWORD)ChildMinWeight != a1 )
  {
LABEL_12:
    v12 = HalpMmAllocCtxAlloc(ChildMinWeight, 64LL);
    v11 = v12;
    if ( !v12 )
    {
LABEL_16:
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
      KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
      return 0LL;
    }
    *(_QWORD *)v12 = 0LL;
    *(_QWORD *)(v12 + 8) = 0LL;
    *(_DWORD *)(v12 + 20) = 0;
    *(_DWORD *)(v12 + 16) = a1;
    v13 = (_QWORD *)(v12 + 32);
    v14 = HalpHvIommu == 0;
    v13[1] = v13;
    *v13 = v13;
    *(_QWORD *)(v11 + 56) = v11 + 48;
    *(_QWORD *)(v11 + 48) = v11 + 48;
    *(_QWORD *)(v11 + 24) = 0LL;
    if ( !v14 && (int)IommupHvCreateSvmPasidSpace(a1) < 0 )
    {
      HalpMmAllocCtxFree(v15, v11);
      goto LABEL_16;
    }
    v17 = IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
    if ( *(struct _KTHREAD **)&IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup->RelativeWeight != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup )
      __fastfail(3u);
    *(_QWORD *)v11 = IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
    *(_QWORD *)(v11 + 8) = &IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
    *(_QWORD *)&v17->RelativeWeight = v11;
    IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)v11;
  }
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
  KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
  return v11;
}
