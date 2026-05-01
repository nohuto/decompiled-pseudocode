/*
 * XREFs of AslStringXmlSanitize @ 0x180099EDC
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x18009B9F4 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x18009C158 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x18009C964 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileMakeStringVersionAttributes @ 0x18009DA90 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringXmlSanitize(_WORD *a1)
{
  __int64 v2; // rax
  unsigned __int64 i; // rdx

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a1[v2] );
    for ( ; v2; --v2 )
    {
      for ( i = 0LL; i < 0x14; i += 4LL )
      {
        if ( *a1 >= *(_WORD *)&asc_1800C7CC0[i] && *a1 <= *(_WORD *)&asc_1800C7CC0[i + 2] )
          goto LABEL_13;
      }
      *a1 = 64;
LABEL_13:
      ++a1;
    }
  }
  return 0LL;
}
