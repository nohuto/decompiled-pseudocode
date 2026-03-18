/*
 * XREFs of DrvDestroyMDEV @ 0x1400C96A0
 * Callers:
 *     hdcOpenDCW @ 0x1400107D0 (hdcOpenDCW.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1400C9C24 (DrvCleanupAndDestroyMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DrvDestroyMDEV(__int64 *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  unsigned int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v6; // rdi
  struct _ERESOURCE *v7; // rcx
  int v8; // r8d
  __int64 v9; // rbx
  __int64 v10; // rdi
  struct _ERESOURCE *v11; // rcx
  int v12; // r8d
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  WdLogSingleEntry1(4LL, a1);
  v3 = *((_DWORD *)a1 + 5);
  v4 = 0;
  for ( WdLogGlobalForLineNumber = 19772; v4 < v3; ++v4 )
  {
    v5 = *(_QWORD *)v2;
    v7 = *(struct _ERESOURCE **)v2;
    v13 = a1[7 * v4 + 5];
    v6 = v13;
    GreAcquireSemaphoreInternal(v7);
    GrepAcquireLockValidate<19>();
    --*(_DWORD *)(v6 + 12);
    if ( v5 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v5,
        v8);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v13, v2);
    v3 = *((_DWORD *)a1 + 5);
  }
  if ( v3 > 1 )
  {
    v9 = *(_QWORD *)v2;
    v11 = *(struct _ERESOURCE **)v2;
    v13 = *a1;
    v10 = v13;
    GreAcquireSemaphoreInternal(v11);
    GrepAcquireLockValidate<19>();
    --*(_DWORD *)(v10 + 12);
    if ( v9 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        v9,
        v12);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v13, v2);
  }
}
