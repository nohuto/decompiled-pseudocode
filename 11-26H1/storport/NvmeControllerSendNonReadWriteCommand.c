/*
 * XREFs of NvmeControllerSendNonReadWriteCommand @ 0x14004CB10
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x140030E20 (NvmeCompletionDpcRoutine.c)
 *     StorRestartDeviceCommandQueue @ 0x14003BC0C (StorRestartDeviceCommandQueue.c)
 *     NvmeControllerProcessPendingCommand @ 0x14003F6A0 (NvmeControllerProcessPendingCommand.c)
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 * Callees:
 *     NvmeControllerSubmitCommandToSQ @ 0x140043110 (NvmeControllerSubmitCommandToSQ.c)
 *     NvmeControllerWaitForOutstandingIoComplete @ 0x1400FB8F0 (NvmeControllerWaitForOutstandingIoComplete.c)
 */

__int64 __fastcall NvmeControllerSendNonReadWriteCommand(
        PVOID SystemArgument2,
        __int64 *a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int16 *a5)
{
  if ( *((_BYTE *)SystemArgument2 + 1228) )
    return 3221225486LL;
  if ( (a2[6] & 4) != 0 && (*(_DWORD *)(*a2 + 4256) & 0x4000) != 0 )
    return 0LL;
  if ( (a2[6] & 2) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)SystemArgument2 + 161) + 48LL) |= 0x10u;
    return 3221225488LL;
  }
  else
  {
    if ( (*(_DWORD *)(*a2 + 4256) & 1) != 0 )
    {
      a4 = *((_QWORD *)SystemArgument2 + 89);
    }
    else if ( !a5 )
    {
      if ( (*((_BYTE *)SystemArgument2 + 136) & 2) != 0 )
        a4 = *((_QWORD *)SystemArgument2 + 91) + 192LL * a3;
      else
        a4 = 192LL * *(unsigned __int16 *)(*((_QWORD *)SystemArgument2 + 109) + 2LL * a3)
           + *((_QWORD *)SystemArgument2 + 91)
           - 192LL;
    }
    *(_WORD *)(*a2 + 4252) = *(_WORD *)(a4 + 136);
    if ( (*(_DWORD *)(*a2 + 4256) & 0x100) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)SystemArgument2 + 237, 1u);
      NvmeControllerWaitForOutstandingIoComplete(SystemArgument2, 0LL);
    }
    return NvmeControllerSubmitCommandToSQ(SystemArgument2, a2, a4, a3, a5);
  }
}
