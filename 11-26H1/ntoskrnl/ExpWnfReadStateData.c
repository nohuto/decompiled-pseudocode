/*
 * XREFs of ExpWnfReadStateData @ 0x1409C5AC8
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x1409C21AC (PopEsInStandbyEvaluate.c)
 *     PopWnfAudioCallback @ 0x1409C24C0 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1409C3520 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1409C3620 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1409C5400 (NtQueryWnfStateData.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1409C5DB8 (ExpWnfDeliverThreadNotifications.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B4A430 (PopWnfFullscreenVideoCallback.c)
 *     PopAdaptiveWnfCallback @ 0x140B4F200 (PopAdaptiveWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B58300 (VslpConnectedStandbyWnfCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 */

__int64 __fastcall ExpWnfReadStateData(
        __int64 a1,
        char a2,
        int *a3,
        struct _KLOCK_ENTRIES *a4,
        unsigned int a5,
        int *a6)
{
  unsigned int v10; // r15d
  signed __int64 *v11; // r14
  void *v12; // rdx
  LegacyAutoBoost *v13; // rdi
  int *v14; // rdi
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // eax
  void *v18; // rdx
  int v19; // edx

  v10 = 0;
  v11 = (signed __int64 *)(a1 + 80);
  v13 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 80, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v11, 0, v13, (struct _KTHREAD *)v11);
  if ( v13 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v13, v12);
    else
      *((_BYTE *)v13 + 10) = 1;
  }
  v14 = *(int **)(a1 + 88);
  if ( v14 )
  {
    if ( v14 != (int *)1 )
    {
      v15 = v14[3];
      if ( a2 )
        RtlWriteULongToUser(a3, v15);
      else
        *a3 = v15;
      v16 = v14[2];
      if ( a2 )
        RtlWriteULongToUser(a6, v16);
      else
        *a6 = v16;
      v17 = v14[2];
      if ( a5 < v17 )
      {
        v10 = -1073741789;
      }
      else
      {
        v18 = v14 + 4;
        if ( a2 )
          RtlCopyToUser(a4, v18, v17);
        else
          RtlCopyVolatileMemory(a4, v18, v17);
        v10 = 0;
      }
      goto LABEL_31;
    }
    if ( a2 )
    {
      v19 = *(_DWORD *)(a1 + 96);
LABEL_23:
      RtlWriteULongToUser(a3, v19);
      goto LABEL_24;
    }
    *a3 = *(_DWORD *)(a1 + 96);
  }
  else
  {
    if ( a2 )
    {
      v19 = 0;
      goto LABEL_23;
    }
    *a3 = 0;
  }
LABEL_24:
  if ( a2 )
    RtlWriteULongToUser(a6, 0);
  else
    *a6 = 0;
LABEL_31:
  if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v11);
  KeAbPostRelease((unsigned __int64)v11);
  return v10;
}
