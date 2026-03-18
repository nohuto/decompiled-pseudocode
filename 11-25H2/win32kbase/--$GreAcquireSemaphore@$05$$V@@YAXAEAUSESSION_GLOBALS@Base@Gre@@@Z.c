/*
 * XREFs of ??$GreAcquireSemaphore@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400864A4
 * Callers:
 *     GreLockSprite @ 0x1400863E0 (GreLockSprite.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x140086410 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x140134164 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x14001A650 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001A7F0 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct _GRETHREAD *__fastcall GreAcquireSemaphore<6,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *result; // rax
  struct _GRETHREAD *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  int v6; // r8d
  int v7; // eax

  v1 = *a1;
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"Sprite", (unsigned int)*a1 + 1040, 0);
  GreAcquireSemaphoreInternal(v1 + 10);
  result = GreGetCurrentThreadCrossSessionCheck();
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)result;
    if ( (*(_QWORD *)result & 0xFFFFFFFFFFFFFFC0uLL) != 0 && (v4 & 0x40) == 0 )
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
      if ( v7 > 6 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v5, (unsigned int)v7);
    }
    LOBYTE(v4) = *((_BYTE *)v3 + 14);
    result = (struct _GRETHREAD *)(unsigned int)(v4 + 1);
    *((_BYTE *)v3 + 14) = v4 + 1;
    if ( !(_BYTE)v4 )
      *(_QWORD *)v3 |= 0x40uLL;
  }
  return result;
}
