/*
 * XREFs of ?cCapString@@YAJPEAGPEBGH@Z @ 0x140103F00
 * Callers:
 *     bAddAllFlEntry @ 0x1400CAAB4 (bAddAllFlEntry.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1400CB52C (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x140101384 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x140102B20 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEBGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     bAddFlEntry @ 0x140103490 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x140104000 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bCheckAndCapThePath@@YAHPEAGPEBGKK@Z @ 0x1401045EC (-bCheckAndCapThePath@@YAHPEAGPEBGKK@Z.c)
 *     vProcessEntry @ 0x140104BB8 (vProcessEntry.c)
 *     ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x140105050 (-vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z.c)
 *     ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x140105540 (-bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z.c)
 *     ?GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z @ 0x1401C23E4 (-GetFontMapperFamilyFallback@@YAPEAU_FONTMAPPERFAMILYFALLBACK@@PEBG@Z.c)
 *     FontAssocDefaultRoutine @ 0x140254250 (FontAssocDefaultRoutine.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x14026C658 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     QueryRegistryFontMapperFamilyFallbackListRoutine @ 0x1403FA440 (QueryRegistryFontMapperFamilyFallbackListRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cCapString(unsigned __int16 *a1, WCHAR *a2, int a3)
{
  WCHAR *v4; // rbx
  const unsigned __int16 *v5; // r9
  __int64 v6; // rbx
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-28h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  v4 = a2;
  v5 = &a2[a3 - 1];
  if ( a2 < v5 )
  {
    do
    {
      if ( !*v4 )
        break;
      ++v4;
    }
    while ( v4 < v5 );
  }
  v6 = v4 - a2;
  if ( (_DWORD)v6 )
  {
    SourceString.Buffer = a2;
    SourceString.MaximumLength = 2 * a3;
    DestinationString.MaximumLength = 2 * a3;
    SourceString.Length = 2 * v6;
    DestinationString.Buffer = a1;
    RtlUpcaseUnicodeString(&DestinationString, &SourceString, 0);
  }
  a1[(int)v6] = 0;
  return (unsigned int)v6;
}
