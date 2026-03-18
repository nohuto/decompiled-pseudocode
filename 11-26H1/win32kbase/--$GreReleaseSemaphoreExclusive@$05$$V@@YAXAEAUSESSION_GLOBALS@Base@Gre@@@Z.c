/*
 * XREFs of ??$GreReleaseSemaphoreExclusive@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C78AC
 * Callers:
 *     ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1400C7720 (-vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     GreUnlockSprite @ 0x1400C7850 (GreUnlockSprite.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1400C7880 (--1SPRITELOCK@@QEAA@XZ.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1400C7A4C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x14014E538 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z @ 0x1401B6D9C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXAEAVPDEVOBJ@@@Z.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001B1C0 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x14001B520 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1401A1F74 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __fastcall GreReleaseSemaphoreExclusive<6,>(struct _ERESOURCE **a1, __int64 a2, int a3)
{
  struct _ERESOURCE *v3; // rbx
  struct _GRETHREAD *v4; // rax

  v3 = *a1;
  if ( HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer((_DWORD)a1, (unsigned int)&LockRelease, a3, (_DWORD)v3 + 1040, (__int64)L"Sprite");
  v4 = GreGetCurrentThreadCrossSessionCheck();
  if ( v4 )
  {
    if ( (*((_BYTE *)v4 + 14))-- == 1 )
      *(_QWORD *)v4 &= ~0x40uLL;
  }
  GreReleaseSemaphoreSharedInternal(v3 + 10);
}
