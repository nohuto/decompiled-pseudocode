/*
 * XREFs of HalpAcpiValidateAcpiTable @ 0x14057BE0C
 * Callers:
 *     HalpAcpiCopyBiosTable @ 0x140527B1C (HalpAcpiCopyBiosTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpAcpiValidateAcpiTable(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int v2; // eax

  v1 = 0;
  if ( *(_DWORD *)a1 != 1346584902 )
    return v1;
  switch ( *(_BYTE *)(a1 + 8) )
  {
    case 0:
      v2 = 0;
      v1 = -1072431089;
      goto LABEL_10;
    case 1:
      v2 = 116;
      goto LABEL_10;
    case 2:
      v2 = 129;
      goto LABEL_10;
  }
  v2 = 244;
  if ( *(_BYTE *)(a1 + 8) == 3 )
  {
LABEL_10:
    if ( *(_DWORD *)(a1 + 4) > v2 )
      return v1;
  }
  if ( *(_DWORD *)(a1 + 4) < v2 )
    return (unsigned int)-1072431089;
  return v1;
}
