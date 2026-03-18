/*
 * XREFs of CmpVolumeContextUnlockShared @ 0x140ABEC1C
 * Callers:
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x140857440 (CmpVolumeContextSendDeviceUsageNotification.c)
 *     CmpVolumeContextCanHiveSectionBeExtended @ 0x140ABEB24 (CmpVolumeContextCanHiveSectionBeExtended.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140ABEB70 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 */

void __fastcall CmpVolumeContextUnlockShared(__int64 a1)
{
  signed __int64 *v1; // rbx

  v1 = (signed __int64 *)(a1 + 56);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v1);
  KeAbPostRelease((unsigned __int64)v1);
}
