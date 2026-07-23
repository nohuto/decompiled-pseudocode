/*
 * XREFs of DifObjTrkIsKvEnabledForPlugin @ 0x1403B6970
 * Callers:
 *     MiProbeAndLockComplete @ 0x1403A1DB0 (MiProbeAndLockComplete.c)
 *     MiProbeAndLockPages @ 0x1403A1ECC (MiProbeAndLockPages.c)
 *     ExDeleteTimer @ 0x1403B48D0 (ExDeleteTimer.c)
 *     KeSetTimer @ 0x1403B62A0 (KeSetTimer.c)
 *     KiObjTrkTimerPend @ 0x1403B7B28 (KiObjTrkTimerPend.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     ExAllocateTimerInternal2 @ 0x14044E590 (ExAllocateTimerInternal2.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1404928F0 (ExInitializePagedLookasideListInternal.c)
 *     ExInitializeLookasideListExInternal @ 0x140492B20 (ExInitializeLookasideListExInternal.c)
 *     ExDeletePagedLookasideList @ 0x1404B62D0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1404B6330 (ExDeleteNPagedLookasideList.c)
 *     ExDeleteLookasideListEx @ 0x1404B63D0 (ExDeleteLookasideListEx.c)
 * Callees:
 *     DifIsPluginEnabled @ 0x1406503B0 (DifIsPluginEnabled.c)
 */

bool __fastcall DifObjTrkIsKvEnabledForPlugin(__int64 a1)
{
  return KernelVerifier == 1 && (unsigned __int8)DifIsPluginEnabled(a1);
}
