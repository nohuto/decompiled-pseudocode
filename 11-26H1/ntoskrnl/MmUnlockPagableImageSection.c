/*
 * XREFs of MmUnlockPagableImageSection @ 0x140366CB0
 * Callers:
 *     PoRunDownDeviceObject @ 0x140437D0C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404ECC90 (HalpPowerStateCallback.c)
 *     IopLiveDumpCapture @ 0x1405CE5BC (IopLiveDumpCapture.c)
 *     DifMmUnlockPagableImageSectionWrapper @ 0x140668520 (DifMmUnlockPagableImageSectionWrapper.c)
 *     PnprUnlockPagesForReplace @ 0x1407B029C (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140BEA950 (HalpPowerInitSystem.c)
 *     ExQuerySystemLockInformation @ 0x140BFF388 (ExQuerySystemLockInformation.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 *     MiMirrorComplete @ 0x140C00ED4 (MiMirrorComplete.c)
 *     PopUnlockAfterSleepWorker @ 0x140C04AB0 (PopUnlockAfterSleepWorker.c)
 *     IoUnregisterShutdownNotification @ 0x140C09840 (IoUnregisterShutdownNotification.c)
 *     VfClearDifWithoutReboot @ 0x140C21DBC (VfClearDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140C541C0 (BgkpUnlockBgfxCodeSection.c)
 *     KiInitializeMTRR @ 0x140CCB400 (KiInitializeMTRR.c)
 *     MiInitSystem @ 0x140CF15C4 (MiInitSystem.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140366D8C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140366E14 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140366EA0 (MmFindDataTableEntryByAddress.c)
 *     MiUnlockImageSection @ 0x140366FC8 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall MmUnlockPagableImageSection(PVOID ImageSectionHandle)
{
  __int64 DataTableEntryByAddress; // rax
  char v3; // r11
  __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // rdx

  if ( ImageSectionHandle != (PVOID)1 )
  {
    MmLockLoadedModuleListShared();
    DataTableEntryByAddress = MmFindDataTableEntryByAddress(ImageSectionHandle);
    LOBYTE(v4) = v3;
    v5 = DataTableEntryByAddress;
    MmUnlockLoadedModuleListShared(v4);
    if ( !v5 )
      KeBugCheckEx(0x1Au, 0x1012uLL, (ULONG_PTR)ImageSectionHandle, 0LL, 0LL);
    v6 = *(_QWORD *)(v5 + 288);
    v7 = (__int64)((__int64)ImageSectionHandle - v6) / 40;
    if ( (unsigned __int64)ImageSectionHandle < v6 || (unsigned int)v7 >= *(_DWORD *)(v5 + 296) )
      KeBugCheckEx(0x1Au, 0x1013uLL, (ULONG_PTR)ImageSectionHandle, (unsigned int)v7, *(unsigned int *)(v5 + 296));
    MiUnlockImageSection(v5, *(_QWORD *)(v5 + 200) + 12LL * (unsigned int)v7, ImageSectionHandle);
  }
}
