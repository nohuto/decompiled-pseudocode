/*
 * XREFs of MiFreeSubsectionProtos @ 0x140B26E04
 * Callers:
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 * Callees:
 *     MiDeletePerSessionProtos @ 0x14044FF10 (MiDeletePerSessionProtos.c)
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
