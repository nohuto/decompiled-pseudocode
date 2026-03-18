/*
 * XREFs of DifObjTrkIsKvEnabledForPlugin @ 0x1403ACC60
 * Callers:
 *     MiProbeAndLockComplete @ 0x1403A0050 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A016C (MiProbeAndLockPages.c)
 *     ExDeleteTimer @ 0x1403AABC0 (ExDeleteTimer.c)
 *     KeSetTimer @ 0x1403AC590 (KeSetTimer.c)
 *     KiObjTrkTimerPend @ 0x1403ADE18 (KiObjTrkTimerPend.c)
 *     MmUnlockPages @ 0x140410C10 (MmUnlockPages.c)
 *     ExAllocateTimerInternal2 @ 0x140456D20 (ExAllocateTimerInternal2.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x140498DA0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 *     ExDeletePagedLookasideList @ 0x1404BCAF0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404BCB50 (ExDeleteNPagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1404BCBF0 (ExDeleteLookasideListEx.c)
 * Callees:
 *     DifIsPluginEnabled @ 0x14064C7D0 (DifIsPluginEnabled.c)
 */

bool __fastcall DifObjTrkIsKvEnabledForPlugin(__int64 a1)
{
  return KernelVerifier == 1 && (unsigned __int8)DifIsPluginEnabled(a1);
}
