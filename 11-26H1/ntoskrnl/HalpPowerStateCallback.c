/*
 * XREFs of HalpPowerStateCallback @ 0x1404E6270
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     MmUnlockPagableImageSection @ 0x140368A50 (MmUnlockPagableImageSection.c)
 *     HalpMcUpdateUnlock @ 0x1404E62FC (HalpMcUpdateUnlock.c)
 *     HalpMcUpdateLock @ 0x1404E6330 (HalpMcUpdateLock.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     HalpFreeNvsBuffers @ 0x140C0EB14 (HalpFreeNvsBuffers.c)
 *     HalpMapNvsArea @ 0x140C10598 (HalpMapNvsArea.c)
 */

void __fastcall HalpPowerStateCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  ULONG_PTR v3; // rbx
  unsigned int v4; // ecx

  if ( (_DWORD)Argument1 == 3 )
  {
    if ( (_DWORD)Argument2 )
    {
      if ( (_DWORD)Argument2 == 1 )
      {
        MmUnlockPagableImageSection(HalpSleepPageLock);
        HalpFreeNvsBuffers();
        HalpMcUpdateUnlock();
        v3 = HalpPerformanceCounter;
        LODWORD(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) = 0;
        if ( *(_DWORD *)(HalpPerformanceCounter + 228) == 5
          && (*(_DWORD *)(HalpPerformanceCounter + 184) & 0x20) == 0
          && KeQueryActiveProcessorCountEx(0xFFFFu) > 1 )
        {
          v4 = -1;
          if ( HalpTscMaximumComputedSpread < 0xFFFFFFFF )
            v4 = HalpTscMaximumComputedSpread;
          KeBugCheckEx(0x5Cu, 0x110uLL, v3, 0x2AuLL, v4);
        }
      }
    }
    else
    {
      LODWORD(HalpDeviceBlockUnblockPushLock.LastXStateSaveDebugInfo) = 1;
      guard_dispatch_icall_no_overrides(0LL, 0LL);
      MmLockPagableSectionByHandle(HalpSleepPageLock);
      HalpMapNvsArea();
      HalpMcUpdateLock();
    }
  }
}
