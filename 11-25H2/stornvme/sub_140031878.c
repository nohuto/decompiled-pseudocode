/*
 * XREFs of sub_140031878 @ 0x140031878
 * Callers:
 *     sub_140001EB0 @ 0x140001EB0 (sub_140001EB0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140031878(char *a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  char *v3; // r11
  char v4; // r8
  char v5; // r10
  int v6; // eax

  v2 = 0;
  v3 = a1;
  v4 = 1;
  if ( !a1 || !a2 )
    return 0;
  v5 = *a1;
  while ( v5 )
  {
    if ( (unsigned __int8)(v5 - 48) > 9u )
      return 0;
    ++v3;
    v6 = v5;
    v5 = *v3;
    v2 = v6 + 2 * (5 * v2 - 24);
    if ( !*v3 )
      break;
    if ( v2 > 0x19999999 )
      return 0;
  }
  *a2 = v2;
  return v4;
}
