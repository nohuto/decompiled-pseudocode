/*
 * XREFs of ldevLoadInternal @ 0x140101720
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCMEM @ 0x14004C634 (PALLOCMEM.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x14004E320 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x140101FA4 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, tagDRVENABLEDATA *), int a2)
{
  __int64 v4; // rsi
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  tagDRVENABLEDATA v11; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v5 = *(struct _ERESOURCE **)v4;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v4);
  GrepAcquireLockValidate<19>();
  v6 = PALLOCMEM(912LL, 1986292807LL);
  v7 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 68) = 0;
    *(_QWORD *)(v6 + 904) = v6 + 72;
    *(_DWORD *)(v6 + 32) = a2;
    *(_DWORD *)(v6 + 36) = 1;
    v11 = 0LL;
    if ( a1(196865LL, 16LL, &v11) && (unsigned int)ldevFillTable((struct _LDEV *)v7, &v11) )
    {
      v8 = *(_QWORD *)(v4 + 1728);
      if ( v8 )
        *(_QWORD *)(v8 + 8) = v7;
      v9 = *(_QWORD *)(v4 + 1728);
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)v7 = v9;
      *(_QWORD *)(v4 + 1728) = v7;
      *(_QWORD *)(v7 + 16) = 0LL;
    }
    else
    {
      GreDeleteFastMutex((char *)v7);
      v7 = 0LL;
    }
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v5);
  return v7;
}
