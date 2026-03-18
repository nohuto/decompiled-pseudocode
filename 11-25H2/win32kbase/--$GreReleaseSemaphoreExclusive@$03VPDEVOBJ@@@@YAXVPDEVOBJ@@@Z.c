/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012DECC
 * Callers:
 *     GreUnlockPointer @ 0x14012DE20 (GreUnlockPointer.c)
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x14012DE38 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<4,PDEVOBJ>(__int64 a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *(struct _ERESOURCE **)(a1 + 56);
  EtwTraceGreLockReleaseSemaphore((__int64)L"Pointer", (int)v1);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 12))-- == 1 )
      *(_QWORD *)v2 &= ~0x10uLL;
  }
  GreReleaseSemaphoreSharedInternal(v1);
}
