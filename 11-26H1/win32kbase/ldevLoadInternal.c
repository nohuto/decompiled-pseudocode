/*
 * XREFs of ldevLoadInternal @ 0x140190A00
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x14000D0CC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, struct tagDRVENABLEDATA *), int a2)
{
  __int64 v4; // rsi
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  struct tagDRVENABLEDATA v15; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v5 = *(struct _ERESOURCE **)v4;
  GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v4);
  GrepAcquireLockValidate<19>();
  v8 = PALLOCMEM(912LL, 1986292807LL, v6, v7);
  v10 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 32) = a2;
    *(_DWORD *)(v8 + 36) = 1;
    *(_DWORD *)(v8 + 68) = 0;
    *(_QWORD *)(v8 + 904) = v8 + 72;
    v15 = 0LL;
    if ( a1(196865LL, 16LL, &v15) && (unsigned int)ldevFillTable((struct _LDEV *)v10, &v15) )
    {
      v13 = *(_QWORD *)(v4 + 1816);
      if ( v13 )
        *(_QWORD *)(v13 + 8) = v10;
      *(_QWORD *)v10 = *(_QWORD *)(v4 + 1816);
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v4 + 1816) = v10;
      *(_QWORD *)(v10 + 16) = 0LL;
    }
    else
    {
      GreDeleteFastMutex((char *)v10, v11, v9, v12);
      v10 = 0LL;
    }
  }
  if ( v5 )
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      (__int64)v5,
      v9);
  return v10;
}
