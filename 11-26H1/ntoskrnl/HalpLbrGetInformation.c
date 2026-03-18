/*
 * XREFs of HalpLbrGetInformation @ 0x1405A2F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall HalpLbrGetInformation(_DWORD *a1, unsigned int *a2)
{
  char result; // al
  unsigned int v3; // r8d

  result = dword_140F87654;
  if ( dword_140F87654 )
  {
    if ( a1 )
      *a1 = dword_140F87654;
    if ( !a2 )
      return 1;
    v3 = 1023;
    if ( dword_140F87664 == 2 )
    {
      v3 = ((dword_140F87660 & 1) != 0 ? 1023 : 1020) & 0xFFFFFE03;
      if ( (dword_140F87660 & 2) != 0 )
        v3 = (dword_140F87660 & 1) != 0 ? 1023 : 1020;
      if ( (dword_140F87660 & 4) != 0 )
        goto LABEL_12;
      v3 &= ~0x200u;
    }
    if ( dword_140F87664 == 3 )
      v3 &= ~0x200u;
LABEL_12:
    *a2 = v3;
    return 1;
  }
  return result;
}
