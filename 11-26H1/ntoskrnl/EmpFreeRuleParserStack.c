/*
 * XREFs of EmpFreeRuleParserStack @ 0x140CBBD88
 * Callers:
 *     EmpParseRuleExpression @ 0x140CBC57C (EmpParseRuleExpression.c)
 * Callees:
 *     EmpFreeLogicNodeLink @ 0x1405B76C4 (EmpFreeLogicNodeLink.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpRuleParserStackPop @ 0x140CBDA78 (EmpRuleParserStackPop.c)
 */

void __fastcall EmpFreeRuleParserStack(_QWORD *P)
{
  bool v1; // zf
  _QWORD **v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  int v6; // [rsp+60h] [rbp+28h] BYREF
  char v7; // [rsp+68h] [rbp+30h] BYREF
  PVOID Pa; // [rsp+70h] [rbp+38h] BYREF
  PVOID v9; // [rsp+78h] [rbp+40h] BYREF

  v1 = P[1] == 0LL;
  v6 = 0;
  v9 = 0LL;
  Pa = 0LL;
  if ( !v1 )
  {
    do
    {
      EmpRuleParserStackPop((_DWORD)P, (unsigned int)&v6, (unsigned int)&v9, (unsigned int)&Pa, (__int64)&v7);
      if ( Pa )
      {
        ExFreePoolWithTag(Pa, 0x74734D45u);
        Pa = 0LL;
      }
      v3 = (_QWORD **)v9;
      if ( v9 )
      {
        if ( v6 == 2 )
        {
          EmpFreeLogicNodeLink(*((_QWORD **)v9 + 1));
          EmpFreeLogicNodeLink(v3[4]);
          v4 = v3[3];
          if ( v4 )
          {
            ExFreePoolWithTag(v4, 0x74734D45u);
            v3[3] = 0LL;
          }
          v5 = v3[6];
          if ( v5 )
          {
            ExFreePoolWithTag(v5, 0x74734D45u);
            v3[6] = 0LL;
          }
        }
        ExFreePoolWithTag(v3, 0x74734D45u);
        v9 = 0LL;
      }
    }
    while ( P[1] );
  }
  ExFreePoolWithTag(P, 0x74734D45u);
}
