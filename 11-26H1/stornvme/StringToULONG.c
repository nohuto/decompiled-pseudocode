/*
 * XREFs of StringToULONG @ 0x140030884
 * Callers:
 *     CompareId @ 0x14000F8E0 (CompareId.c)
 * Callees:
 *     <none>
 */

char __fastcall StringToULONG(char *a1, unsigned int *a2)
{
  unsigned int v3; // ecx
  char v4; // r8
  char v5; // al
  int v6; // r10d

  v3 = 0;
  v4 = 1;
  if ( !a1 || !a2 )
    return 0;
  v5 = *a1;
  while ( v5 )
  {
    v6 = *a1;
    if ( (unsigned __int8)(*a1 - 48) > 9u )
      return 0;
    ++a1;
    v3 = v6 + 2 * (5 * v3 - 24);
    v5 = *a1;
    if ( !*a1 )
      break;
    if ( v3 > 0x19999999 )
      return 0;
  }
  *a2 = v3;
  return v4;
}
