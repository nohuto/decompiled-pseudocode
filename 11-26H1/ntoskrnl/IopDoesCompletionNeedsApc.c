/*
 * XREFs of IopDoesCompletionNeedsApc @ 0x1403FEB00
 * Callers:
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IopfCompleteRequest @ 0x1403FDA10 (IopfCompleteRequest.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x1403FD8F0 (IoGetRequestorProcess.c)
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
