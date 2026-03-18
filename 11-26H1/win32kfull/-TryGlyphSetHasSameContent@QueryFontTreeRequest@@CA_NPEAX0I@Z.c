/*
 * XREFs of ?TryGlyphSetHasSameContent@QueryFontTreeRequest@@CA_NPEAX0I@Z @ 0x1402872A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReadULong64FromUser @ 0x1403E21C8 (RtlReadULong64FromUser.c)
 *     RtlReadUShortFromUser @ 0x1403E2240 (RtlReadUShortFromUser.c)
 */

bool __fastcall QueryFontTreeRequest::TryGlyphSetHasSameContent(char *Source2, char *Source1, unsigned int a3)
{
  __int64 v3; // rbx
  char *v7; // r13
  char *v8; // r15
  unsigned int i; // esi
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 v12; // rbx

  v3 = a3;
  if ( RtlCompareMemory(Source1, Source2, 0x10uLL) != 16 )
    return 0;
  v7 = &Source1[v3];
  v8 = &Source1[16 * *((unsigned int *)Source1 + 3) + 16];
  for ( i = 0; ; ++i )
  {
    v10 = *((unsigned int *)Source1 + 3);
    if ( i >= (unsigned int)v10 )
      break;
    v11 = 16LL * i;
    if ( *(_WORD *)&Source1[v11 + 16] != (unsigned __int16)RtlReadUShortFromUser(&Source2[v11 + 16])
      || *(_WORD *)&Source1[v11 + 18] != (unsigned __int16)RtlReadUShortFromUser(&Source2[v11 + 18]) )
    {
      return 0;
    }
    v12 = *(_QWORD *)&Source1[v11 + 24] - (_QWORD)Source1;
    if ( v12 != RtlReadULong64FromUser(&Source2[v11 + 24]) - (_QWORD)Source2 )
      return 0;
  }
  return RtlCompareMemory(v8, &Source2[16 * v10 + 16], v7 - v8) == v7 - v8;
}
