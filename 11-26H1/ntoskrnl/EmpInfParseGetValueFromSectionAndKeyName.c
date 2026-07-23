/*
 * XREFs of EmpInfParseGetValueFromSectionAndKeyName @ 0x140CBBF84
 * Callers:
 *     EmpInfParseGetGuidFromName @ 0x140CBBE84 (EmpInfParseGetGuidFromName.c)
 *     EmpParseRuleExpression @ 0x140CBC57C (EmpParseRuleExpression.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140CBD4C8 (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     _strnicmp @ 0x140538790 (_strnicmp.c)
 *     CmpGetKeyName @ 0x140CBDF60 (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140CBDF98 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpInfParseGetValueFromSectionAndKeyName(
        __int64 a1,
        __int64 a2,
        const char *a3,
        __int64 a4,
        unsigned int *a5)
{
  __int64 SectionLineIndex; // rsi
  unsigned int i; // ebx
  const char *KeyName; // rax
  const char *v11; // rdi
  size_t v12; // r8

  SectionLineIndex = 0LL;
  for ( i = 0; ; ++i )
  {
    KeyName = (const char *)CmpGetKeyName(a1, a2, i);
    v11 = KeyName;
    if ( KeyName )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a3[v12] );
      if ( !strnicmp(KeyName, a3, v12) )
        break;
    }
    if ( !v11 )
      return SectionLineIndex;
  }
  SectionLineIndex = CmpGetSectionLineIndex(a1, a2, i, 0LL);
  if ( a5 )
    *a5 = i;
  return SectionLineIndex;
}
