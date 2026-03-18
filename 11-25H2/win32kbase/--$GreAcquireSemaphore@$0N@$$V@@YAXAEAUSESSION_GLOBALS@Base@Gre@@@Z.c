/*
 * XREFs of ??$GreAcquireSemaphore@$0N@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14019A870
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001A650 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<13,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *result; // rax
  struct _GRETHREAD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // r8d
  int v7; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"Palette", (unsigned int)*a1 + 312, 0);
  GreAcquireSemaphoreInternal(v1 + 3);
  result = GreGetCurrentThreadCrossSessionCheck();
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFFFE000uLL) != 0 && (v4 & 0x2000) == 0 )
    {
      v5 = 0LL;
      v6 = 37;
      do
      {
        v7 = v5;
        if ( !_bittest64(&v4, v5) )
          v7 = v6;
        ++v5;
        v6 = v7;
      }
      while ( v5 < 0x40 );
      if ( v7 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    LOBYTE(v4) = *((_BYTE *)v3 + 21);
    result = (struct _GRETHREAD *)(unsigned int)(v4 + 1);
    *((_BYTE *)v3 + 21) = v4 + 1;
    if ( !(_BYTE)v4 )
      *(_QWORD *)v3 |= 0x2000uLL;
  }
  return result;
}
