/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140ABF21C
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140860BF0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408611C4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140ABEC64 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpWorkItemQueueWork @ 0x140356AAC (CmpWorkItemQueueWork.c)
 *     ZwQueryWnfStateData @ 0x140726210 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall CmFcpManagerPublishChangeNotifications(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  void *v4; // rdx
  LegacyAutoBoost *v5; // rbx
  struct _SINGLE_LIST_ENTRY *i; // rbx
  char ForegroundLossTime_high; // bl
  __int64 result; // rax
  __int64 v9; // [rsp+A8h] [rbp+40h] BYREF
  int v10; // [rsp+B0h] [rbp+48h]
  int v11; // [rsp+B8h] [rbp+50h]

  v9 = a2;
  v10 = 0;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.Spare36, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock.Spare36, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CmpFreezeListLock.Spare36,
      0,
      v5,
      (struct _KTHREAD *)&CmpFreezeListLock.Spare36);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v4);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  for ( i = CmpFreezeListLock.SystemAffinityTokenListHead.Next;
        i != &CmpFreezeListLock.SystemAffinityTokenListHead;
        i = i->Next )
  {
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)&i[2]);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpFreezeListLock.Spare36, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CmpFreezeListLock.Spare36);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.Spare36);
  ForegroundLossTime_high = HIBYTE(CmpFreezeListLock.ForegroundLossTime);
  while ( 1 )
  {
    v11 = 8;
    result = ZwQueryWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)CmFcpWnfTypeId);
    if ( (int)result < 0 )
      break;
    result = v9;
    if ( !v9 )
      break;
    result = ZwUpdateWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)&v9);
    if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741823 )
      break;
    if ( ForegroundLossTime_high && (int)result >= 0 )
    {
      v10 = 8;
      result = ZwQueryWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, 0LL);
      if ( (int)result >= 0 )
      {
        result = v9;
        if ( v9 )
          return ZwUpdateWnfStateData((__int64)&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, (__int64)&v9);
      }
      return result;
    }
  }
  return result;
}
