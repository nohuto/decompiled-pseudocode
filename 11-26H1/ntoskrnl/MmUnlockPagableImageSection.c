/*
 * XREFs of MmUnlockPagableImageSection @ 0x140368A50
 * Callers:
 *     PoRunDownDeviceObject @ 0x140426C2C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404E6270 (HalpPowerStateCallback.c)
 *     IopLiveDumpCapture @ 0x1405D0DCC (IopLiveDumpCapture.c)
 *     DifMmUnlockPagableImageSectionWrapper @ 0x14066C100 (DifMmUnlockPagableImageSectionWrapper.c)
 *     PnprUnlockPagesForReplace @ 0x1407B32FC (PnprUnlockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     HalpPowerInitSystem @ 0x140BF0950 (HalpPowerInitSystem.c)
 *     ExQuerySystemLockInformation @ 0x140C05598 (ExQuerySystemLockInformation.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 *     MiMirrorComplete @ 0x140C070E4 (MiMirrorComplete.c)
 *     PopUnlockAfterSleepWorker @ 0x140C0ACC0 (PopUnlockAfterSleepWorker.c)
 *     IoUnregisterShutdownNotification @ 0x140C0FA50 (IoUnregisterShutdownNotification.c)
 *     VfClearDifWithoutReboot @ 0x140C27DCC (VfClearDifWithoutReboot.c)
 *     BgkpUnlockBgfxCodeSection @ 0x140C5A1C0 (BgkpUnlockBgfxCodeSection.c)
 *     KiInitializeMTRR @ 0x140CD14E0 (KiInitializeMTRR.c)
 *     MiInitSystem @ 0x140CF7944 (MiInitSystem.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140368B2C (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x140368BB4 (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x140368C40 (MmFindDataTableEntryByAddress.c)
 *     MiUnlockImageSection @ 0x140368D68 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
