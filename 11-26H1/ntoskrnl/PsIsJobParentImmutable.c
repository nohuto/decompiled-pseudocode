/*
 * XREFs of PsIsJobParentImmutable @ 0x140774A74
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140774930 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14077D190 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1556) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1304) )
    return 1;
  return result;
}
