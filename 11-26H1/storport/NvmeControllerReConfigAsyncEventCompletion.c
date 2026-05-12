/*
 * XREFs of NvmeControllerReConfigAsyncEventCompletion @ 0x1400CF960
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerReclaimExtendedCommand @ 0x140044E24 (NvmeControllerReclaimExtendedCommand.c)
 *     NvmeControllerGetAERExtendedCommand @ 0x1400F3CF8 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400FAB1C (NvmeControllerSendAsyncEventCommand.c)
 */

void __fastcall NvmeControllerReConfigAsyncEventCompletion(
        union _SLIST_HEADER *SystemArgument2,
        __int64 a2,
        __int64 a3)
{
  _DWORD *Region; // rax

  if ( a2 )
  {
    Region = (_DWORD *)SystemArgument2[80].Region;
    if ( !Region || !*Region )
    {
      if ( a3 )
        *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(a3 + 14);
      NvmeControllerGetAERExtendedCommand(SystemArgument2);
      if ( (int)NvmeControllerSendAsyncEventCommand(SystemArgument2) < 0 )
        SystemArgument2[8].Region |= 0x40000000uLL;
    }
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
    NvmeControllerReclaimExtendedCommand(SystemArgument2, a2);
  }
}
