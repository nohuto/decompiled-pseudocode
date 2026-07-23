/*
 * XREFs of HvlpCompareActiveLpcbs @ 0x1405BC780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlpCompareActiveLpcbs(_BYTE *a1, _BYTE *a2)
{
  char v2; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx

  v2 = a1[98];
  if ( v2 != a2[98] )
    return v2 != 0 ? -1 : 1;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a1 + 1);
  if ( v6 >= v5 )
    return v6 > v5;
  else
    return 0xFFFFFFFFLL;
}
