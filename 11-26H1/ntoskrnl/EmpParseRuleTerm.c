/*
 * XREFs of EmpParseRuleTerm @ 0x140CBCB2C
 * Callers:
 *     EmpParseRuleExpression @ 0x140CBC57C (EmpParseRuleExpression.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x14047D298 (EmpSearchRuleDatabase.c)
 *     strchr @ 0x140539E80 (strchr.c)
 *     EmpSearchCallbackDatabase @ 0x1405B7654 (EmpSearchCallbackDatabase.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140CBBE84 (EmpInfParseGetGuidFromName.c)
 *     EmpParseRuleTermArgMapping @ 0x140CBCCAC (EmpParseRuleTermArgMapping.c)
 */

__int64 __fastcall EmpParseRuleTerm(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v5; // rbx
  void *Pool2; // rdi
  char *v11; // rax
  char *v12; // r12
  int GuidFromName; // ebx
  unsigned __int8 *v14; // rax
  int v15; // r14d
  int v16; // ebp
  int v17; // r15d
  struct _LIST_ENTRY **v18; // rax
  unsigned int v19; // esi
  GUID v21; // [rsp+38h] [rbp-60h] BYREF

  v5 = a2 + 1;
  Pool2 = 0LL;
  v21 = 0LL;
  v11 = strchr((const char *)(a2 + 1), 40);
  v12 = v11;
  if ( v11 )
  {
    *v11 = 0;
    if ( *(_BYTE *)a2 == 63 )
    {
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"CallbackGuidDef", v5, &v21);
      if ( GuidFromName < 0 )
        return (unsigned int)GuidFromName;
      v14 = EmpSearchCallbackDatabase(&v21);
      if ( !v14 )
        return (unsigned int)-1073741275;
      *a3 = v14;
      v15 = *((_DWORD *)v14 + 14);
      v16 = *((_DWORD *)v14 + 15);
      v17 = *((_DWORD *)v14 + 16);
    }
    else
    {
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", v5, &v21);
      if ( GuidFromName < 0 )
        return (unsigned int)GuidFromName;
      v18 = EmpSearchRuleDatabase(&v21);
      if ( !v18 )
        return (unsigned int)-1073741275;
      *a3 = v18;
      v15 = *((_DWORD *)v18 + 10);
      v16 = *((_DWORD *)v18 + 11);
      v17 = *((_DWORD *)v18 + 12);
    }
    *v12 = 40;
    v19 = v17 + v15 + v16;
    if ( v19 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 4LL * v19, 0x74734D45u);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      if ( !(unsigned __int8)EmpParseRuleTermArgMapping(v12, v17) )
      {
        GuidFromName = -1073741811;
        ExFreePoolWithTag(Pool2, 0x74734D45u);
        return (unsigned int)GuidFromName;
      }
    }
    *a4 = Pool2;
    *a5 = v19;
    return (unsigned int)GuidFromName;
  }
  return (unsigned int)-1073741811;
}
