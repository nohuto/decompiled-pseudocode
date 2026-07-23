/*
 * XREFs of CmpGetKeyName @ 0x140CBDF60
 * Callers:
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CBBF84 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpParseCallbacks @ 0x140CBC04C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140CBCFC8 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x140CBD7E8 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140CBE878 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140CBE8A4 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
