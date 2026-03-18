/*
 * XREFs of AcpiPccInterruptSupported @ 0x1400B2990
 * Callers:
 *     AcpiPccInitTypeLegacySubspace @ 0x1400B2738 (AcpiPccInitTypeLegacySubspace.c)
 * Callees:
 *     <none>
 */

char __fastcall AcpiPccInterruptSupported(char *a1)
{
  char v1; // al
  char v2; // dl

  v1 = *a1;
  v2 = 1;
  if ( *a1 != -1 && v1 && (unsigned __int8)(v1 - 3) > 1u || (*((_DWORD *)a1 + 2) & 1) == 0 )
    return 0;
  return v2;
}
