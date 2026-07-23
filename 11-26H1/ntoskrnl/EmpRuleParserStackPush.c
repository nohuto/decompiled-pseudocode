/*
 * XREFs of EmpRuleParserStackPush @ 0x140CBDAD0
 * Callers:
 *     EmpParseRuleExpression @ 0x140CBC57C (EmpParseRuleExpression.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpRuleParserStackPush(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  ULONG_PTR Pool2; // rax

  v8 = 0;
  Pool2 = ExAllocatePool2(256LL, 0x28uLL, 0x74734D45u);
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = a5;
    *(_DWORD *)Pool2 = a2;
    *(_QWORD *)(Pool2 + 8) = a3;
    *(_QWORD *)(Pool2 + 16) = a4;
    *(_QWORD *)(Pool2 + 32) = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = Pool2 + 32;
    ++*(_DWORD *)a1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
