/*
 * XREFs of EmpFreeLogicNodeLink @ 0x1405B76C4
 * Callers:
 *     EmpFreeLogicNodeLink @ 0x1405B76C4 (EmpFreeLogicNodeLink.c)
 *     EmpFreeRuleParserStack @ 0x140CBBD88 (EmpFreeRuleParserStack.c)
 * Callees:
 *     EmpFreeLogicNodeLink @ 0x1405B76C4 (EmpFreeLogicNodeLink.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EmpFreeLogicNodeLink(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v3; // rcx
  void *v4; // rcx

  if ( a1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      v2 = (_QWORD *)a1[1];
      if ( v2 )
      {
        EmpFreeLogicNodeLink(v2[1]);
        EmpFreeLogicNodeLink(v2[4]);
        v3 = (void *)v2[3];
        if ( v3 )
        {
          ExFreePoolWithTag(v3, 0x74734D45u);
          v2[3] = 0LL;
        }
        v4 = (void *)v2[6];
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0x74734D45u);
          v2[6] = 0LL;
        }
        ExFreePoolWithTag(v2, 0x74734D45u);
      }
    }
    ExFreePoolWithTag(a1, 0x74734D45u);
  }
}
