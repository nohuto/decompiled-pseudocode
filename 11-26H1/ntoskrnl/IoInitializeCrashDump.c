/*
 * XREFs of IoInitializeCrashDump @ 0x1407930B8
 * Callers:
 *     MiCreatePagingFile @ 0x14086B464 (MiCreatePagingFile.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140CBD3BC (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     IopInitDumpCapsuleSupport @ 0x1405C99A8 (IopInitDumpCapsuleSupport.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1405C9C6C (IopRemoveDumpCapsuleSupport.c)
 *     IopInitializeCrashDump @ 0x140793598 (IopInitializeCrashDump.c)
 */

char __fastcall IoInitializeCrashDump(HANDLE Handle)
{
  struct _KTHREAD *CurrentThread; // rbx
  char v3; // di
  __int64 v4; // rdx

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
  v3 = IopInitializeCrashDump(Handle);
  if ( v3 )
  {
    IopRemoveDumpCapsuleSupport();
  }
  else if ( CapsuleDumpAllowed )
  {
    IopInitDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v4);
  return v3;
}
