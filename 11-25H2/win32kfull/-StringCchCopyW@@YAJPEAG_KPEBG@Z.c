/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BDD90
 * Callers:
 *     bAddFlEntry @ 0x1400B7140 (bAddFlEntry.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1400B778C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     cjIFIMetricsToOTMW @ 0x1400BB8C0 (cjIFIMetricsToOTMW.c)
 *     vProcessEntry @ 0x1401CD47C (vProcessEntry.c)
 *     ?FindDefaultLinkedFontEntry@@YAHPEBG0@Z @ 0x1401D1A54 (-FindDefaultLinkedFontEntry@@YAHPEBG0@Z.c)
 *     ?cjGetLogicalColorSpace@@YAHPEAXH0@Z @ 0x140214A38 (-cjGetLogicalColorSpace@@YAHPEAXH0@Z.c)
 *     FontAssocDefaultRoutine @ 0x140219C40 (FontAssocDefaultRoutine.c)
 *     ?GetNlsTablePath@@YAHIPEAG@Z @ 0x1402284C4 (-GetNlsTablePath@@YAHIPEAG@Z.c)
 *     EngGetFilePath @ 0x1403013C0 (EngGetFilePath.c)
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1403043B8 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     bDeleteFlEntry @ 0x14030D90C (bDeleteFlEntry.c)
 *     DefaultFontQueryRoutine @ 0x1403ED5B0 (DefaultFontQueryRoutine.c)
 *     InitializeDefaultFamilyFonts @ 0x1403ED968 (InitializeDefaultFamilyFonts.c)
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
