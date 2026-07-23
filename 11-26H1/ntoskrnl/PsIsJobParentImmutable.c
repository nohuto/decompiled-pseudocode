/*
 * XREFs of PsIsJobParentImmutable @ 0x140777A74
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140777930 (PspGetJobAssignmentDisposition.c)
 *     PspIsJobMovable @ 0x14077FC84 (PspIsJobMovable.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
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
