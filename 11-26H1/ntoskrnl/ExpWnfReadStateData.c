/*
 * XREFs of ExpWnfReadStateData @ 0x14094A158
 * Callers:
 *     PopEsInStandbyEvaluate @ 0x14094683C (PopEsInStandbyEvaluate.c)
 *     PopWnfAudioCallback @ 0x140946B50 (PopWnfAudioCallback.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140947BB0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140947CB0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     ExQueryWnfStateData @ 0x1409489F0 (ExQueryWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140949A90 (NtQueryWnfStateData.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14094A448 (ExpWnfDeliverThreadNotifications.c)
 *     PopWnfFullscreenVideoCallback @ 0x140B486A0 (PopWnfFullscreenVideoCallback.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140B55A60 (VslpConnectedStandbyWnfCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
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
