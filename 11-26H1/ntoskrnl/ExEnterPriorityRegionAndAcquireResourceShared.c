/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402B39B0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceSharedWrapper @ 0x140651770 (DifExEnterPriorityRegionAndAcquireResourceSharedWrapper.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276AE0 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x1402B26BC (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExIsFastResourceHeldExclusive @ 0x1402B2710 (ExIsFastResourceHeldExclusive.c)
 *     ExpAcquireResourceSharedLite @ 0x1402B4158 (ExpAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1402BA700 (PsBoostThreadIo.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceShared(ULONG_PTR BugCheckParameter2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v3; // al
  unsigned __int64 v4; // rdx
  void *OwnerEntryForLegacyShim; // rsi
  unsigned __int8 CurrentIrql; // cl

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIo((LegacyAutoBoost *)CurrentThread);
  --CurrentThread->KernelApcDisable;
  v3 = *(_BYTE *)(BugCheckParameter2 + 26);
  v4 = v3;
  if ( (v3 & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, BugCheckParameter2, 0LL, 0LL);
  if ( (v3 & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v4 = (unsigned __int64)KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( (*(_BYTE *)(v4 + 192) & 2) != 0 )
      KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
    if ( !CurrentIrql && (*(_DWORD *)(v4 + 116) & 0x400) == 0 && !*(_DWORD *)(v4 + 484) )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) != 0 )
  {
    OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim();
    if ( !ExAcquireFastResourceShared((__int64 *)BugCheckParameter2, (ULONG_PTR)OwnerEntryForLegacyShim, 1)
      || ExIsFastResourceHeldExclusive(BugCheckParameter2) )
    {
      ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
    }
  }
  else
  {
    LOBYTE(v4) = 1;
    ExpAcquireResourceSharedLite(BugCheckParameter2, v4);
  }
  return CurrentThread->WaitBlock[2].SparePtr;
}
