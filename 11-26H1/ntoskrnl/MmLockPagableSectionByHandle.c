/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140A9C420
 * Callers:
 *     PoRunDownDeviceObject @ 0x140437D0C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404ECC90 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14057C560 (HalStartDynamicProcessor.c)
 *     IopLiveDumpCapture @ 0x1405CE5BC (IopLiveDumpCapture.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x1406672C0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     PnprLockPagesForReplace @ 0x1407AF998 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1407B9978 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CC0E0 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x14086E638 (MiApplyImageHotPatch.c)
 *     ExQuerySystemLockInformation @ 0x140BFF388 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140BFF4E0 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140C0025C (MiShutdownSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140C09840 (IoUnregisterShutdownNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x140C0CEE0 (MmDuplicateMemory.c)
 *     KiInitializeMTRR @ 0x140CCB400 (KiInitializeMTRR.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024C8D0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPagableImageSection @ 0x140366F30 (MiLockPagableImageSection.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404ABD44 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x14051E3A8 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 */

void __stdcall MmLockPagableSectionByHandle(PVOID ImageSectionHandle)
{
  struct _LIST_ENTRY *v2; // rax
  __int64 v3; // rdi
  int v4; // [rsp+40h] [rbp+8h] BYREF

  if ( ImageSectionHandle != (PVOID)1 )
  {
    v4 = 0;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)ImageSectionHandle) )
    {
      v2 = MiLockLoadedDataTableEntryIfNecessary((unsigned __int64)ImageSectionHandle, &v4);
      v3 = (__int64)v2;
      if ( !v2 )
        KeBugCheckEx(0x1Au, 0x1012uLL, (ULONG_PTR)ImageSectionHandle, 1uLL, 0LL);
      MiLockPagableImageSection((__int64)v2, (unsigned __int64)ImageSectionHandle, 1u);
      if ( v4 )
        MmUnlockLoadedDataTableEntry(v3);
    }
  }
}
