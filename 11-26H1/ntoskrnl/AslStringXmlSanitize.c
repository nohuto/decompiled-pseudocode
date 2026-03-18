/*
 * XREFs of AslStringXmlSanitize @ 0x140B57690
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x14088C914 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14088D018 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x14088D92C (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileMakeStringVersionAttributes @ 0x14088EB5C (AslpFileMakeStringVersionAttributes.c)
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
        if ( *a1 >= *(_WORD *)((char *)qword_140023400 + i) && *a1 <= *(_WORD *)((char *)qword_140023400 + i + 2) )
          goto LABEL_13;
      }
      *a1 = 64;
LABEL_13:
      ++a1;
    }
  }
  return 0LL;
}
