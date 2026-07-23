/*
 * XREFs of CmFcpManagerPublishChangeNotifications @ 0x140AC12BC
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x140866EE0 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1408674B4 (CmFcManagerUpdateFeatureConfigurations.c)
 *     CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140AC0D04 (CmFcManagerUpdateFeatureUsageSubscriptions.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     CmpWorkItemQueueWork @ 0x14035884C (CmpWorkItemQueueWork.c)
 *     ZwQueryWnfStateData @ 0x14072ADE0 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

int __fastcall CmFcpManagerPublishChangeNotifications(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  void *v4; // rdx
  LegacyAutoBoost *v5; // rbx
  __int64 i; // rbx
  unsigned __int8 v7; // bl
  int result; // eax
  ULONG v9; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 Buffer; // [rsp+48h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  ULONG ChangeStamp; // [rsp+A0h] [rbp+38h] BYREF
  int v13; // [rsp+A4h] [rbp+3Ch]
  unsigned __int64 v14; // [rsp+A8h] [rbp+40h] BYREF
  ULONG v15; // [rsp+B0h] [rbp+48h] BYREF
  ULONG BufferSize; // [rsp+B8h] [rbp+50h] BYREF

  v14 = a2;
  v13 = HIDWORD(a1);
  ChangeStamp = 0;
  v9 = 0;
  v11[0] = 0LL;
  v15 = 0;
  v5 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&CmpFreezeListLock.ReadTransferCount, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(&CmpFreezeListLock.ReadTransferCount, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      &CmpFreezeListLock.ReadTransferCount,
      0,
      v5,
      (struct _KTHREAD *)&CmpFreezeListLock.ReadTransferCount);
  if ( v5 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v5, v4);
    else
      *((_BYTE *)v5 + 10) = 1;
  }
  for ( i = CmpFreezeListLock.WriteTransferCount; (__int64 *)i != &CmpFreezeListLock.WriteTransferCount; i = *(_QWORD *)i )
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 16));
  if ( _InterlockedCompareExchange64(&CmpFreezeListLock.ReadTransferCount, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&CmpFreezeListLock.ReadTransferCount);
  KeAbPostRelease((unsigned __int64)&CmpFreezeListLock.ReadTransferCount);
  v7 = CmpFreezeListLock.SchedulerApcFill3[51];
  while ( 1 )
  {
    Buffer = 0LL;
    BufferSize = 8;
    result = ZwQueryWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &CmFcpWnfTypeId,
               0LL,
               &ChangeStamp,
               &Buffer,
               &BufferSize);
    if ( result < 0 )
      break;
    result = v14;
    if ( Buffer >= v14 )
      break;
    result = ZwUpdateWnfStateData(
               &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
               &v14,
               8u,
               &CmFcpWnfTypeId,
               0LL,
               ChangeStamp,
               1u);
    if ( ((result + 0x80000000) & 0x80000000) == 0 && result != -1073741823 )
      break;
    if ( v7 && result >= 0 )
    {
      v15 = 8;
      result = ZwQueryWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, 0LL, 0LL, &v9, v11, &v15);
      if ( result >= 0 )
      {
        result = v14;
        if ( v11[0] < v14 )
          return ZwUpdateWnfStateData(&WNF_CMFC_HOST_OS_FEATURE_CONFIGURATION_CHANGED, &v14, 8u, 0LL, 0LL, 0, 0);
      }
      return result;
    }
  }
  return result;
}
