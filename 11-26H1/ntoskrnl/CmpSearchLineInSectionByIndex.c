/*
 * XREFs of CmpSearchLineInSectionByIndex @ 0x140CBE878
 * Callers:
 *     EmpInfParseGetSectionLineCount @ 0x140CBBF30 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetKeyName @ 0x140CBDF60 (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140CBDF98 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140CBE010 (CmpGetSectionLineIndexValueCount.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpSearchLineInSectionByIndex(__int64 a1, unsigned int a2)
{
  _QWORD *result; // rax
  unsigned int i; // r8d

  result = 0LL;
  if ( a1 )
  {
    result = *(_QWORD **)(a1 + 16);
    for ( i = 0; i < a2; ++i )
    {
      if ( !result )
        break;
      result = (_QWORD *)*result;
    }
  }
  return result;
}
