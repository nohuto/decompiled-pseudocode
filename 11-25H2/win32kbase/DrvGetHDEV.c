/*
 * XREFs of DrvGetHDEV @ 0x14004D9C0
 * Callers:
 *     hdcOpenDCW @ 0x140097720 (hdcOpenDCW.c)
 * Callees:
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140046C24 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     DrvGetDeviceFromName @ 0x14004A170 (DrvGetDeviceFromName.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x14004E320 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x14004E400 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 */

PDEV *__fastcall DrvGetHDEV(const UNICODE_STRING *a1)
{
  PDEV *v1; // rsi
  __int64 v2; // rcx
  __int64 DeviceFromName; // rbp
  __int64 v4; // rdi
  struct _ERESOURCE *v5; // rbx
  PDEV *i; // rdi
  __int64 v7; // rax

  v1 = 0LL;
  if ( a1 )
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
    if ( DeviceFromName )
    {
      v4 = *(_QWORD *)(W32GetSessionState(v2) + 88);
      v5 = *(struct _ERESOURCE **)v4;
      GreAcquireSemaphoreInternal(*(struct _ERESOURCE **)v4);
      GrepAcquireLockValidate<19>();
      for ( i = *(PDEV **)(v4 + 3848); i; i = *(PDEV **)i )
      {
        v7 = *((_QWORD *)i + 321);
        if ( v7 && v7 == DeviceFromName && (*((_DWORD *)i + 10) & 0x400) == 0 )
        {
          PDEV::IncrementClientReferenceCount(i);
          v1 = i;
          break;
        }
      }
      if ( v5 )
        GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
          (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
          (__int64)v5);
    }
  }
  return v1;
}
