/*
 * XREFs of MiFreeSubsectionProtos @ 0x140B24964
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiCreatePerSessionProtos @ 0x1409CFA34 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x1404586A0 (MiDeletePerSessionProtos.c)
 */

__int64 __fastcall MiFreeSubsectionProtos(char **a1)
{
  char *v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( !*a1 )
      break;
    *a1 = *(char **)v2;
    result = MiDeletePerSessionProtos(v2);
  }
  return result;
}
