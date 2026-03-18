/*
 * XREFs of MmUnloadSystemImage @ 0x140AC7670
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407ADDC0 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1407AF818 (PnprLoadPluginDriver.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140833208 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x14086E384 (MiApplyHotPatchToLoadedDriver.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140AC7560 (IopDeleteDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404BD660 (HalSystemVectorDispatchEntry.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 */

__int64 __fastcall MmUnloadSystemImage(ULONG_PTR BugCheckParameter3)
{
  struct _LIST_ENTRY *v2; // rbx
  char v3; // di
  struct _LIST_ENTRY *v5; // rax

  v2 = 0LL;
  v3 = 0;
  if ( LODWORD(PsGetCurrentServerSiloGlobals()[83].Blink) < (unsigned __int16)NtBuildNumber )
  {
    v5 = (struct _LIST_ENTRY *)HalSystemVectorDispatchEntry();
    v2 = PsAttachSiloToCurrentThread(v5);
    v3 = 1;
  }
  MiUnloadSystemImage(BugCheckParameter3);
  if ( v3 )
    PsDetachSiloFromCurrentThread(v2);
  return 0LL;
}
