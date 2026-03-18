/*
 * XREFs of ProcessMultipleCommands @ 0x14002BADC
 * Callers:
 *     NVMeIoSubmissionQueueCreate @ 0x14000BFE0 (NVMeIoSubmissionQueueCreate.c)
 *     NVMeIoCompletionQueueCreate @ 0x14000C760 (NVMeIoCompletionQueueCreate.c)
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeRequestComplete @ 0x140007B70 (NVMeRequestComplete.c)
 *     ProcessCommand @ 0x14000A680 (ProcessCommand.c)
 *     ProcessMultipleCommandsInSpecificQueue @ 0x14002BB9C (ProcessMultipleCommandsInSpecificQueue.c)
 */

char __fastcall ProcessMultipleCommands(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 SrbExtension; // rax
  int v5; // eax
  __int64 v6; // rbx

  v3 = a2;
  SrbExtension = GetSrbExtension(a2);
  if ( *(_WORD *)(SrbExtension + 4212) )
  {
    *(_BYTE *)(v3 + 3) = 4;
    return SrbExtension;
  }
  v5 = *(_DWORD *)(a1 + 24);
  if ( (v5 & 0x10) != 0 )
  {
    LOBYTE(SrbExtension) = 14;
    goto LABEL_7;
  }
  if ( (v5 & 0x100) != 0 )
  {
    LOBYTE(SrbExtension) = 2;
LABEL_7:
    *(_BYTE *)(v3 + 3) = SrbExtension;
    if ( v3 )
    {
      do
      {
        v6 = *(_QWORD *)(v3 + 40);
        LOBYTE(SrbExtension) = NVMeRequestComplete(a1, v3, 0);
        v3 = v6;
      }
      while ( v6 );
    }
    return SrbExtension;
  }
  LOBYTE(SrbExtension) = ProcessMultipleCommandsInSpecificQueue(a1, v3, a1 + 336, *(unsigned __int16 *)(a1 + 324));
  if ( !(_BYTE)SrbExtension )
  {
    while ( v3 )
    {
      if ( *(_BYTE *)(v3 + 3) == 5 )
        LOBYTE(SrbExtension) = ProcessCommand(a1, v3);
      v3 = *(_QWORD *)(v3 + 40);
    }
  }
  return SrbExtension;
}
