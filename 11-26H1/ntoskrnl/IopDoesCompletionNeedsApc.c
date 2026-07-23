/*
 * XREFs of IopDoesCompletionNeedsApc @ 0x1403FB2F0
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x1403FA0E0 (IoGetRequestorProcess.c)
 */

bool __fastcall IopDoesCompletionNeedsApc(__int64 a1)
{
  int v2; // eax
  struct _KPROCESS *Process; // rbx

  if ( (*(_BYTE *)(a1 + 16) & 0x50) != 0x50 )
    return 0;
  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 == -2147483626 || (v2 & 0xC0000000) == 0xC0000000 )
    return 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  return IoGetRequestorProcess((PIRP)a1) != Process;
}
