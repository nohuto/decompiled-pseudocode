/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140491610
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14082FE4C (EtwpPsProvCaptureState.c)
 *     CmpCmdHiveOpen @ 0x1408B4674 (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x1408B81BC (CmpCmdHiveClose.c)
 *     ObKillProcess @ 0x140958EE4 (ObKillProcess.c)
 *     EtwTraceProcess @ 0x14096E118 (EtwTraceProcess.c)
 *     FsRtlGetFileSize @ 0x140A56DE0 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x140A57278 (FsRtlSetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x140A70518 (EtwpKernelTraceRundown.c)
 *     CmpDoFileSetSizeEx @ 0x140AAA978 (CmpDoFileSetSizeEx.c)
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
