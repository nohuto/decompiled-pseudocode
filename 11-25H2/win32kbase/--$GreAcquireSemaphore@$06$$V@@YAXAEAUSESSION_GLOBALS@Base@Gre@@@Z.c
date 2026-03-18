/*
 * XREFs of ??$GreAcquireSemaphore@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140047938
 * Callers:
 *     GreLockDwmState @ 0x140047910 (GreLockDwmState.c)
 *     ?DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z @ 0x1400878A0 (-DxgkEngAcquireDwmStateAndPDevLocks@@YAXQEBXI@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001A650 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<7,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *result; // rax
  unsigned __int64 i; // rcx
  struct _GRETHREAD *v4; // rbx
  __int64 v5; // r8
  int v6; // edx
  int v7; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"DwmState", (unsigned int)*a1 + 520, 0);
  GreAcquireSemaphoreInternal(v1 + 5);
  result = GreGetCurrentThreadCrossSessionCheck();
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFFFFF80uLL) != 0 && (*(_QWORD *)result & 0x80u) == 0LL )
    {
      v6 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v7 = i;
        if ( !_bittest64(&v5, i) )
          v7 = v6;
        v6 = v7;
      }
      if ( v7 > 7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v7, v5);
    }
    LOBYTE(i) = *((_BYTE *)v4 + 15);
    result = (struct _GRETHREAD *)(unsigned int)(i + 1);
    *((_BYTE *)v4 + 15) = i + 1;
    if ( !(_BYTE)i )
      *(_QWORD *)v4 |= 0x80uLL;
  }
  return result;
}
