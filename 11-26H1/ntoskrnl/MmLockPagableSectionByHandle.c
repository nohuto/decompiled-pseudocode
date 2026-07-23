/*
 * XREFs of MmLockPagableSectionByHandle @ 0x140A9F220
 * Callers:
 *     PoRunDownDeviceObject @ 0x140426C2C (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1404E6270 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x14057EA90 (HalStartDynamicProcessor.c)
 *     IopLiveDumpCapture @ 0x1405D0DCC (IopLiveDumpCapture.c)
 *     DifMmLockPagableSectionByHandleWrapper @ 0x14066AEA0 (DifMmLockPagableSectionByHandleWrapper.c)
 *     PnprLockPagesForReplace @ 0x1407B29F8 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x1407BC9D8 (KiStartDynamicProcessor.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x1407CF180 (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     ExQuerySystemLockInformation @ 0x140C05598 (ExQuerySystemLockInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140C056F0 (ExpSystemErrorHandler2.c)
 *     MiShutdownSystem @ 0x140C0646C (MiShutdownSystem.c)
 *     IoUnregisterShutdownNotification @ 0x140C0FA50 (IoUnregisterShutdownNotification.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 *     MmDuplicateMemory @ 0x140C130F0 (MmDuplicateMemory.c)
 *     KiInitializeMTRR @ 0x140CD14E0 (KiInitializeMTRR.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14024E230 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiLockPagableImageSection @ 0x140368CD0 (MiLockPagableImageSection.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1404A53D4 (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MmUnlockLoadedDataTableEntry @ 0x1405209B8 (MmUnlockLoadedDataTableEntry.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
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
