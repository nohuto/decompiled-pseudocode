/*
 * XREFs of ldevUnloadImage @ 0x14000D750
 * Callers:
 *     DrvInitConsole @ 0x14000A7F4 (DrvInitConsole.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x14000D210 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 *     vUnreferencePdevWorker @ 0x1400C5E70 (vUnreferencePdevWorker.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1401B5D90 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B700 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140028330 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002845C (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ldevUnloadImage(__int64 *Buffer)
{
  __int64 v2; // rsi
  HSEMAPHORE v3; // rbx
  void (*v5)(void); // rax
  __int64 v6; // rcx
  void *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(Buffer) + 88);
  v3 = *(HSEMAPHORE *)v2;
  GreAcquireSemaphoreInternal(*(HSEMAPHORE *)v2);
  GrepAcquireLockValidate<19>();
  if ( (*((_DWORD *)Buffer + 9))-- == 1 )
  {
    WdLogSingleEntry0(5LL);
    v5 = (void (*)(void))Buffer[17];
    WdLogGlobalForLineNumber = 1460;
    if ( v5 )
      v5();
    v6 = Buffer[2];
    if ( v6 && (Buffer[5] & 2) == 0 && *(_QWORD *)(v6 + 24) )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (PVOID)(v6 + 24), 8uLL);
    v7 = (void *)Buffer[3];
    if ( v7 )
    {
      ObfDereferenceObject(v7);
      Buffer[3] = 0LL;
    }
    if ( *Buffer )
      *(_QWORD *)(*Buffer + 8) = Buffer[1];
    v8 = (_QWORD *)Buffer[1];
    v9 = *Buffer;
    if ( v8 )
      *v8 = v9;
    else
      *(_QWORD *)(v2 + 1816) = v9;
    v10 = Buffer[2];
    if ( v10 )
    {
      GreDeleteFastMutex(*(PVOID *)(v10 + 8));
      GreDeleteFastMutex((PVOID)Buffer[2]);
    }
    result = GreDeleteFastMutex(Buffer);
  }
  else
  {
    result = WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1544;
  }
  if ( v3 )
    return GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v3);
  return result;
}
