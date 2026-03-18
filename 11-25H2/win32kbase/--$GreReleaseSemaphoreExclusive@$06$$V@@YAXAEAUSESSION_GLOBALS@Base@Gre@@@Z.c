/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$06$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400479D0
 * Callers:
 *     ?DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z @ 0x140087710 (-DxgkEngReleasePDevAndDwmStateLocks@@YAXPEBXI@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401CA198 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140045860 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x140045890 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140046390 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<7,>(struct _ERESOURCE **a1)
{
  struct _ERESOURCE *v1; // rbx
  struct _GRETHREAD *v2; // rax

  v1 = *a1;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (unsigned int)*a1 + 520);
  v2 = GreGetCurrentThreadCrossSessionCheck();
  if ( v2 )
  {
    if ( (*((_BYTE *)v2 + 15))-- == 1 )
      *(_QWORD *)v2 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v1 + 5);
}
