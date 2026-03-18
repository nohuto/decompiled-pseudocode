/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C
 * Callers:
 *     bAddFlEntry @ 0x140103490 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     vProcessEntry @ 0x140104BB8 (vProcessEntry.c)
 *     cjIFIMetricsToOTMW @ 0x14010E0AC (cjIFIMetricsToOTMW.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x140200738 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140243F08 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     FontAssocDefaultRoutine @ 0x140254250 (FontAssocDefaultRoutine.c)
 *     ?GetNlsTablePath@@YAHIPEAG@Z @ 0x140261C80 (-GetNlsTablePath@@YAHIPEAG@Z.c)
 *     EngGetFilePath @ 0x140312850 (EngGetFilePath.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x14031BE44 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     bDeleteFlEntry @ 0x140324924 (bDeleteFlEntry.c)
 *     DefaultFontQueryRoutine @ 0x1403FA6A0 (DefaultFontQueryRoutine.c)
 *     InitializeDefaultFamilyFonts @ 0x1403FB3A8 (InitializeDefaultFamilyFonts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    return a2 == 0 ? 0x8007007A : 0;
  }
  return result;
}
