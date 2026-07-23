/*
 * XREFs of CmpSearchSectionByName @ 0x140CBE8A4
 * Callers:
 *     EmpInfParseGetSectionLineCount @ 0x140CBBF30 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetKeyName @ 0x140CBDF60 (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140CBDF98 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140CBE010 (CmpGetSectionLineIndexValueCount.c)
 * Callees:
 *     _stricmp @ 0x1405386E0 (_stricmp.c)
 */

__int64 **__fastcall CmpSearchSectionByName(__int64 ***a1, const char *a2)
{
  __int64 **i; // rbx
  __int64 **v5; // rdi
  const char *v6; // rcx

  i = 0LL;
  if ( a1 && a2 )
  {
    v5 = a1[1];
    i = v5;
    if ( v5 )
    {
      while ( stricmp((const char *)i[1], a2) )
      {
        i = (__int64 **)*i;
        if ( !i )
          goto LABEL_6;
      }
LABEL_15:
      a1[1] = i;
    }
    else
    {
LABEL_6:
      for ( i = *a1; i; i = (__int64 **)*i )
      {
        if ( i == v5 )
          return 0LL;
        v6 = (const char *)i[1];
        if ( v6 && !stricmp(v6, a2) )
          goto LABEL_15;
      }
      if ( v5 )
        return i;
      return 0LL;
    }
  }
  return i;
}
