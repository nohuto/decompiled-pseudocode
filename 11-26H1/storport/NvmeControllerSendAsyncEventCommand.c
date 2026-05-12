/*
 * XREFs of NvmeControllerSendAsyncEventCommand @ 0x1400FAB1C
 * Callers:
 *     NvmeControllerReConfigAsyncEventCompletion @ 0x1400CF960 (NvmeControllerReConfigAsyncEventCompletion.c)
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerGetLogPageCompletionForAER @ 0x1400F4110 (NvmeControllerGetLogPageCompletionForAER.c)
 *     NvmeControllerStartAsyncEventCommands @ 0x1400FAD14 (NvmeControllerStartAsyncEventCommands.c)
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 */

__int64 __fastcall NvmeControllerSendAsyncEventCommand(__int64 SystemArgument2, _WORD *a2)
{
  __int64 v3; // rax

  if ( !a2 )
    return 3221225485LL;
  v3 = *(_QWORD *)a2;
  a2[26] = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) = *(_DWORD *)(v3 + 4256) | 1;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x20u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~2u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) &= ~0x40u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x1000u;
  *(_DWORD *)(*(_QWORD *)a2 + 4256LL) |= 0x2000u;
  *(_WORD *)(*(_QWORD *)a2 + 4252LL) = 0;
  *(_QWORD *)(*(_QWORD *)a2 + 4184LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 4192LL) = NvmeControllerAsyncEventCommandCompletion;
  *(_QWORD *)(*(_QWORD *)a2 + 4200LL) = a2;
  *(_QWORD *)(*(_QWORD *)a2 + 4160LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 4168LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)a2 + 4248LL) = 0;
  *(_BYTE *)(*(_QWORD *)a2 + 4096LL) = 12;
  return NvmeControllerProcessCommand(SystemArgument2, a2);
}
