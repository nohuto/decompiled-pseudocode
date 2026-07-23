/*
 * XREFs of MmUnloadSystemImage @ 0x140AC9260
 * Callers:
 *     PnpReplacePartitionUnit @ 0x1407B0E20 (PnpReplacePartitionUnit.c)
 *     PnprLoadPluginDriver @ 0x1407B2878 (PnprLoadPluginDriver.c)
 *     ExpSetProcessorMicrocodeUpdateInformation @ 0x140839448 (ExpSetProcessorMicrocodeUpdateInformation.c)
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140874754 (MiApplyHotPatchToLoadedDriver.c)
 *     IopLoadDriver @ 0x140A3A064 (IopLoadDriver.c)
 *     IopDeleteDriver @ 0x140AC9150 (IopDeleteDriver.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
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
