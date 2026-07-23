/*
 * XREFs of TelemetryCoverageValidateName @ 0x140486DF8
 * Callers:
 *     EtwpCoverageValidateCP @ 0x140486D7C (EtwpCoverageValidateCP.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TelemetryCoverageValidateName(char *a1)
{
  unsigned int v1; // r9d
  int v2; // r8d
  char *v3; // r10
  char v4; // dl

  v1 = 1;
  v2 = 0;
  v3 = a1;
  while ( 1 )
  {
    v4 = *a1;
    if ( *a1 >= 97 && v4 <= 122 || (unsigned __int8)(v4 - 65) <= 0x19u || (unsigned __int8)(v4 - 48) <= 9u )
    {
      ++v2;
      goto LABEL_5;
    }
    if ( v4 != 95 )
      break;
    if ( !v2 )
      return 0LL;
    ++v1;
    v2 = 0;
LABEL_5:
    ++a1;
  }
  return !v4 && v2 && v1 >= 3 && a1 - v3 < 64;
}
