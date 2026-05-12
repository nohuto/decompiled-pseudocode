/*
 * XREFs of NvmeControllerStartAsyncEventCommands @ 0x1400FAD14
 * Callers:
 *     NvmeControllerInitPhase3 @ 0x1400F5D54 (NvmeControllerInitPhase3.c)
 * Callees:
 *     NvmeControllerGetAERExtendedCommand @ 0x1400F3CF8 (NvmeControllerGetAERExtendedCommand.c)
 *     NvmeControllerSendAsyncEventCommand @ 0x1400FAB1C (NvmeControllerSendAsyncEventCommand.c)
 */

__int64 __fastcall NvmeControllerStartAsyncEventCommands(_QWORD *SystemArgument2)
{
  _WORD *v1; // rax
  unsigned __int16 v3; // di
  _WORD *AERExtendedCommand; // rax
  __int64 v5; // rax

  v1 = (_WORD *)SystemArgument2[177];
  v3 = 0;
  if ( !v1 || !*v1 )
    return 0LL;
  while ( v3 < *(_WORD *)SystemArgument2[177] )
  {
    AERExtendedCommand = (_WORD *)NvmeControllerGetAERExtendedCommand((__int64)SystemArgument2);
    if ( (int)NvmeControllerSendAsyncEventCommand((__int64)SystemArgument2, AERExtendedCommand) < 0 )
    {
      SystemArgument2[17] |= 0x40000000uLL;
      break;
    }
    ++v3;
  }
  *(_WORD *)(SystemArgument2[177] + 2LL) = v3;
  v5 = SystemArgument2[89];
  *((_BYTE *)SystemArgument2 + 742) = v3;
  *(_WORD *)(v5 + 150) = v3;
  return v3;
}
