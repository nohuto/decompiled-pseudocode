/*
 * XREFs of IsGenuineMouseInput @ 0x1400DA9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IsGenuineMouseInput(_DWORD *a1)
{
  int v1; // eax
  unsigned int v2; // ecx

  if ( *a1 != 2 )
  {
    if ( ((*a1 - 18) & 0xFFFFFFEF) != 0 )
      return 0;
    goto LABEL_3;
  }
  if ( a1[1] != 4 )
  {
LABEL_3:
    v1 = a1[1];
    v2 = 1;
    if ( (unsigned int)(v1 - 1) <= 1 )
      return v2;
    return 0;
  }
  return 1LL;
}
