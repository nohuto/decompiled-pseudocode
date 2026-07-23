/*
 * XREFs of PspIsJobMovable @ 0x14077FC84
 * Callers:
 *     PspGetJobAssignmentDisposition @ 0x140777930 (PspGetJobAssignmentDisposition.c)
 *     PspAssignProcessToJob @ 0x140AC79B8 (PspAssignProcessToJob.c)
 * Callees:
 *     PsIsJobParentImmutable @ 0x140777A74 (PsIsJobParentImmutable.c)
 */

char __fastcall PspIsJobMovable(__int64 a1)
{
  __int64 v1; // rcx
  char result; // al

  if ( *(_QWORD *)(a1 + 1800) != a1 )
    return 0;
  if ( PsIsJobParentImmutable(a1) )
    return 0;
  if ( *(_QWORD *)(v1 + 1288) != v1 + 1288 )
    return 0;
  result = 1;
  if ( *(_DWORD *)(v1 + 216) != 1 || *(_DWORD *)(v1 + 212) != 1 )
    return 0;
  return result;
}
