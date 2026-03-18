/*
 * XREFs of EmpParseRuleExpression @ 0x140CB653C
 * Callers:
 *     EmpParseRules @ 0x140CB6F84 (EmpParseRules.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     EmpFreeRuleParserStack @ 0x140CB5D48 (EmpFreeRuleParserStack.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CB5F44 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpInfParseSearchDependencyList @ 0x140CB5FE8 (EmpInfParseSearchDependencyList.c)
 *     EmpParseRuleTerm @ 0x140CB6AE8 (EmpParseRuleTerm.c)
 *     EmpRuleParserStackPop @ 0x140CB7A34 (EmpRuleParserStackPop.c)
 *     EmpRuleParserStackPush @ 0x140CB7A8C (EmpRuleParserStackPush.c)
 *     CmpGetSectionLineIndex @ 0x140CB7F54 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseRuleExpression(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  PVOID v6; // rsi
  int v7; // edi
  void *v8; // r13
  _BYTE *ValueFromSectionAndKeyName; // r12
  ULONG_PTR Pool2; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // rdi
  ULONG_PTR v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rdi
  unsigned int v16; // r8d
  int v17; // r10d
  __int64 v18; // r9
  __int64 i; // rdx
  unsigned int j; // edx
  int v21; // r11d
  char v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // r12
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // r12
  _QWORD *v32; // rax
  void *v33; // rcx
  void *v34; // rcx
  ULONG v35; // edx
  _QWORD **v36; // rdx
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  _QWORD *v39; // rdi
  _QWORD **v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rcx
  int v44; // [rsp+30h] [rbp-20h]
  unsigned int v45; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v47; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v49; // [rsp+A8h] [rbp+58h] BYREF

  v45 = 0;
  v47 = 0LL;
  v49 = 0;
  v5 = 0;
  v6 = 0LL;
  v44 = 0;
  P = 0LL;
  v7 = a1;
  v8 = 0LL;
  ValueFromSectionAndKeyName = (_BYTE *)EmpInfParseGetValueFromSectionAndKeyName(a1, (__int64)"Rule", a2, a4, &v45);
  if ( !ValueFromSectionAndKeyName )
  {
    v5 = -1073741275;
    goto LABEL_87;
  }
  Pool2 = ExAllocatePool2(256LL, 0x10uLL, 0x74734D45u);
  v11 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  while ( 1 )
  {
    if ( *ValueFromSectionAndKeyName != 37 )
    {
      if ( *ValueFromSectionAndKeyName == 38 )
        goto LABEL_9;
      if ( *ValueFromSectionAndKeyName != 63 )
      {
        if ( *ValueFromSectionAndKeyName != 124 )
          goto LABEL_58;
LABEL_9:
        if ( *(_DWORD *)v11 < 2u )
          goto LABEL_58;
        v12 = (_QWORD *)ExAllocatePool2(256LL, 0x38uLL, 0x74734D45u);
        if ( !v12
          || (v12[1] = ExAllocatePool2(256LL, 0x20uLL, 0x74734D45u),
              v13 = ExAllocatePool2(256LL, 0x20uLL, 0x74734D45u),
              v14 = v12[1],
              v12[4] = v13,
              !v14)
          || !v13 )
        {
          v5 = -1073741670;
          goto LABEL_68;
        }
        *(_BYTE *)v12 = *ValueFromSectionAndKeyName;
        *(_DWORD *)(v14 + 16) = 0;
        *(_QWORD *)(v12[1] + 24LL) = 0LL;
        *(_DWORD *)(v12[4] + 16LL) = 0;
        *(_QWORD *)(v12[4] + 24LL) = 0LL;
        if ( !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v11,
                                 v12[4],
                                 (unsigned int)v12[4] + 8,
                                 (int)v12 + 48,
                                 (__int64)(v12 + 5))
          || !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v11,
                                 v12[1],
                                 (unsigned int)v12[1] + 8,
                                 (int)v12 + 24,
                                 (__int64)(v12 + 2)) )
        {
          goto LABEL_59;
        }
        EmpRuleParserStackPush((_DWORD)v11, 2, (_DWORD)v12, 0, 0);
        goto LABEL_46;
      }
    }
    v5 = EmpParseRuleTerm(v7, (_DWORD)ValueFromSectionAndKeyName, (unsigned int)&v47, (unsigned int)&P, (__int64)&v49);
    if ( v5 < 0 )
    {
      v6 = P;
      goto LABEL_67;
    }
    v15 = v47;
    if ( *ValueFromSectionAndKeyName == 63 )
    {
      v16 = v47[14];
      v17 = v47[15];
    }
    else
    {
      v16 = v47[10];
      v17 = v47[11];
    }
    v6 = P;
    v18 = v17 + v16;
    if ( (unsigned int)v18 > v49 )
    {
LABEL_58:
      v5 = -1073741811;
LABEL_67:
      v12 = 0LL;
      goto LABEL_68;
    }
    for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
    {
      if ( *((_DWORD *)P + i) >= *(_DWORD *)(a3 + 40) )
        goto LABEL_58;
    }
    for ( j = v16; j < (unsigned int)v18; ++j )
    {
      if ( *((_DWORD *)P + j) >= *(_DWORD *)(a3 + 44) )
        goto LABEL_58;
    }
    v21 = v17 + v16;
    v22 = *ValueFromSectionAndKeyName;
    while ( (unsigned int)v18 < v49 )
    {
      v23 = *((unsigned int *)P + v18);
      if ( (unsigned int)v23 >= *(_DWORD *)(a3 + 48) )
        goto LABEL_58;
      v24 = (unsigned int)(v18 - v21);
      v25 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v23);
      if ( !(v22 == 63 ? v25 == *(_QWORD *)&v47[2 * v24 + 18] : v25 == *(_QWORD *)(*((_QWORD *)v47 + 7) + 8 * v24)) )
        goto LABEL_58;
      v18 = (unsigned int)(v18 + 1);
    }
    if ( v22 == 63 )
    {
      v27 = (_QWORD *)ExAllocatePool2(256LL, 0x10uLL, 0x74694D45u);
      if ( !v27 )
        goto LABEL_61;
      *v27 = v15;
      v28 = v15 + 12;
      v27[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v27 + 1;
      if ( !EmpInfParseSearchDependencyList((_QWORD **)v15 + 6, a3) )
      {
        v29 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
        if ( !v29 )
          goto LABEL_61;
        *v29 = a3;
        v29[1] = *v28;
        *v28 = v29 + 1;
      }
      if ( (int)EmpRuleParserStackPush((_DWORD)v11, 0, (_DWORD)v15, (_DWORD)v6, v49) >= 0 )
      {
LABEL_45:
        v6 = 0LL;
        P = 0LL;
      }
      else if ( v6 )
      {
        ExFreePoolWithTag(v6, 0x74734D45u);
        goto LABEL_45;
      }
LABEL_46:
      v12 = 0LL;
      goto LABEL_56;
    }
    v30 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
    if ( !v30 )
      goto LABEL_61;
    *v30 = v15;
    v31 = v15 + 8;
    v30[1] = *(_QWORD *)(a3 + 72);
    *(_QWORD *)(a3 + 72) = v30 + 1;
    if ( !EmpInfParseSearchDependencyList((_QWORD **)v15 + 4, a3) )
    {
      v32 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
      if ( !v32 )
      {
LABEL_61:
        v5 = -1073741670;
        goto LABEL_67;
      }
      *v32 = a3;
      v32[1] = *v31;
      *v31 = v32 + 1;
    }
    if ( (int)EmpRuleParserStackPush((_DWORD)v11, 1, (_DWORD)v15, (_DWORD)v6, v49) < 0 )
    {
      v12 = 0LL;
      if ( !v6 )
        goto LABEL_56;
      ExFreePoolWithTag(v6, 0x74734D45u);
      v6 = 0LL;
    }
    else
    {
      v6 = 0LL;
      v12 = 0LL;
    }
    P = 0LL;
LABEL_56:
    ValueFromSectionAndKeyName = (_BYTE *)CmpGetSectionLineIndex(a1, "Rule", v45, (unsigned int)++v44);
    if ( !ValueFromSectionAndKeyName )
      break;
    v7 = a1;
  }
  if ( *(_DWORD *)v11 == 1 )
  {
    v8 = (void *)ExAllocatePool2(256LL, 0x20uLL, 0x74694D45u);
    if ( !(unsigned __int8)EmpRuleParserStackPop((_DWORD)v11, (_DWORD)v8, (int)v8 + 8, (int)v8 + 24, (__int64)v8 + 16) )
    {
LABEL_59:
      v5 = -1073741275;
      goto LABEL_68;
    }
    *(_QWORD *)(a3 + 96) = v8;
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_68:
  if ( v11 )
    EmpFreeRuleParserStack(v11);
  if ( v5 < 0 )
  {
    if ( v6 )
      ExFreePoolWithTag(v6, 0x74734D45u);
    if ( v12 )
    {
      v33 = (void *)v12[1];
      if ( v33 )
        ExFreePoolWithTag(v33, 0x74734D45u);
      v34 = (void *)v12[4];
      if ( v34 )
        ExFreePoolWithTag(v34, 0x74734D45u);
      v35 = 1953713477;
      goto LABEL_86;
    }
LABEL_87:
    while ( 1 )
    {
      v38 = *(_QWORD **)(a3 + 72);
      if ( !v38 )
        break;
      v12 = v38 - 1;
      *(_QWORD *)(a3 + 72) = *v38;
      while ( 1 )
      {
        v36 = (_QWORD **)(*v12 + 32LL);
        v37 = *v36;
        if ( !*v36 || *(v37 - 1) != a3 )
          break;
        if ( v37 )
          *v36 = (_QWORD *)*v37;
        ExFreePoolWithTag(v37 - 1, 0x74694D45u);
      }
      v35 = 1953058117;
LABEL_86:
      ExFreePoolWithTag(v12, v35);
    }
    while ( 1 )
    {
      v42 = *(_QWORD **)(a3 + 64);
      if ( !v42 )
        break;
      v39 = v42 - 1;
      *(_QWORD *)(a3 + 64) = *v42;
      while ( 1 )
      {
        v40 = (_QWORD **)(*v39 + 48LL);
        v41 = *v40;
        if ( !*v40 || *(v41 - 1) != a3 )
          break;
        if ( v41 )
          *v40 = (_QWORD *)*v41;
        ExFreePoolWithTag(v41 - 1, 0x74694D45u);
      }
      ExFreePoolWithTag(v39, 0x74694D45u);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0x74694D45u);
  }
  return (unsigned int)v5;
}
