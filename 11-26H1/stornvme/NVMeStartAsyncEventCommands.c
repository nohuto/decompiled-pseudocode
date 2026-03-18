/*
 * XREFs of NVMeStartAsyncEventCommands @ 0x14000D5D0
 * Callers:
 *     NVMeControllerInitPart3 @ 0x140006E40 (NVMeControllerInitPart3.c)
 * Callees:
 *     NVMeIssueAsyncEventCommand @ 0x14000CB80 (NVMeIssueAsyncEventCommand.c)
 *     NVMeAllocateAsyncEventCommands @ 0x14000EB70 (NVMeAllocateAsyncEventCommands.c)
 */

__int64 __fastcall NVMeStartAsyncEventCommands(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int AsyncEventCommands; // esi
  __int64 v5; // rbp

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 20) )
    return 0LL;
  if ( *(_QWORD *)(a1 + 1392) )
    AsyncEventCommands = *(unsigned __int16 *)(a1 + 1552);
  else
    AsyncEventCommands = NVMeAllocateAsyncEventCommands();
  *(_WORD *)(a1 + 1552) = AsyncEventCommands;
  if ( !AsyncEventCommands || !*(_QWORD *)(a1 + 1392) )
    return 0LL;
  v5 = AsyncEventCommands;
  do
  {
    NVMeIssueAsyncEventCommand(a1, v1 + *(_QWORD *)(a1 + 1392));
    v1 += 128LL;
    --v5;
  }
  while ( v5 );
  return AsyncEventCommands;
}
