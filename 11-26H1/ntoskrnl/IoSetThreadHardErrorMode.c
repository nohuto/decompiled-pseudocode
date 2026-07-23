/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14048B160
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14083608C (EtwpPsProvCaptureState.c)
 *     CmpCmdHiveOpen @ 0x1408BAC48 (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x1408BE78C (CmpCmdHiveClose.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 *     ObKillProcess @ 0x1409FE7A8 (ObKillProcess.c)
 *     FsRtlGetFileSize @ 0x140A64360 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A647F8 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
