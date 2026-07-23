/*
 * XREFs of EmpParseRuleExpression @ 0x140CBC57C
 * Callers:
 *     EmpParseRules @ 0x140CBCFC8 (EmpParseRules.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpFreeRuleParserStack @ 0x140CBBD88 (EmpFreeRuleParserStack.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140CBBF84 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpInfParseSearchDependencyList @ 0x140CBC028 (EmpInfParseSearchDependencyList.c)
 *     EmpParseRuleTerm @ 0x140CBCB2C (EmpParseRuleTerm.c)
 *     EmpRuleParserStackPop @ 0x140CBDA78 (EmpRuleParserStackPop.c)
 *     EmpRuleParserStackPush @ 0x140CBDAD0 (EmpRuleParserStackPush.c)
 *     CmpGetSectionLineIndex @ 0x140CBDF98 (CmpGetSectionLineIndex.c)
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
  int v15; // eax
  _DWORD *v16; // rdi
  unsigned int v17; // r8d
  int v18; // r10d
  __int64 v19; // r9
  __int64 i; // rdx
  unsigned int j; // edx
  int v22; // r11d
  char v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  _QWORD *v28; // rax
  _QWORD *v29; // r12
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // r12
  _QWORD *v33; // rax
  void *v34; // rcx
  void *v35; // rcx
  ULONG v36; // edx
  _QWORD **v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rdi
  _QWORD **v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rcx
  int v45; // [rsp+30h] [rbp-20h]
  unsigned int v46; // [rsp+34h] [rbp-1Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  _DWORD *v48; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v50; // [rsp+A8h] [rbp+58h] BYREF

  v46 = 0;
  v48 = 0LL;
  v50 = 0;
  v5 = 0;
  v6 = 0LL;
  v45 = 0;
  P = 0LL;
  v7 = a1;
  v8 = 0LL;
  ValueFromSectionAndKeyName = (_BYTE *)EmpInfParseGetValueFromSectionAndKeyName(a1, (__int64)"Rule", a2, a4, &v46);
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
          goto LABEL_60;
LABEL_9:
        if ( *(_DWORD *)v11 < 2u )
          goto LABEL_60;
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
          goto LABEL_58;
        }
        EmpRuleParserStackPush((_DWORD)v11, 2, (_DWORD)v12, 0, 0);
        goto LABEL_46;
      }
    }
    v15 = EmpParseRuleTerm(v7, (_DWORD)ValueFromSectionAndKeyName, (unsigned int)&v48, (unsigned int)&P, (__int64)&v50);
    v12 = 0LL;
    v5 = v15;
    if ( v15 < 0 )
    {
      v6 = P;
      goto LABEL_68;
    }
    v16 = v48;
    if ( *ValueFromSectionAndKeyName == 63 )
    {
      v17 = v48[14];
      v18 = v48[15];
    }
    else
    {
      v17 = v48[10];
      v18 = v48[11];
    }
    v6 = P;
    v19 = v18 + v17;
    if ( (unsigned int)v19 > v50 )
    {
LABEL_60:
      v5 = -1073741811;
LABEL_61:
      v12 = 0LL;
      goto LABEL_68;
    }
    for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
    {
      if ( *((_DWORD *)P + i) >= *(_DWORD *)(a3 + 40) )
        goto LABEL_60;
    }
    for ( j = v17; j < (unsigned int)v19; ++j )
    {
      if ( *((_DWORD *)P + j) >= *(_DWORD *)(a3 + 44) )
        goto LABEL_60;
    }
    v22 = v18 + v17;
    v23 = *ValueFromSectionAndKeyName;
    while ( (unsigned int)v19 < v50 )
    {
      v24 = *((unsigned int *)P + v19);
      if ( (unsigned int)v24 >= *(_DWORD *)(a3 + 48) )
        goto LABEL_60;
      v25 = (unsigned int)(v19 - v22);
      v26 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v24);
      if ( !(v23 == 63 ? v26 == *(_QWORD *)&v48[2 * v25 + 18] : v26 == *(_QWORD *)(*((_QWORD *)v48 + 7) + 8 * v25)) )
        goto LABEL_60;
      v19 = (unsigned int)(v19 + 1);
    }
    if ( v23 == 63 )
    {
      v28 = (_QWORD *)ExAllocatePool2(256LL, 0x10uLL, 0x74694D45u);
      if ( !v28 )
        goto LABEL_62;
      *v28 = v16;
      v29 = v16 + 12;
      v28[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v28 + 1;
      if ( !EmpInfParseSearchDependencyList((_QWORD **)v16 + 6, a3) )
      {
        v30 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
        if ( !v30 )
          goto LABEL_62;
        *v30 = a3;
        v30[1] = *v29;
        *v29 = v30 + 1;
      }
      if ( (int)EmpRuleParserStackPush((_DWORD)v11, 0, (_DWORD)v16, (_DWORD)v6, v50) >= 0 )
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
    v31 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
    if ( !v31 )
      goto LABEL_62;
    *v31 = v16;
    v32 = v16 + 8;
    v31[1] = *(_QWORD *)(a3 + 72);
    *(_QWORD *)(a3 + 72) = v31 + 1;
    if ( !EmpInfParseSearchDependencyList((_QWORD **)v16 + 4, a3) )
    {
      v33 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
      if ( !v33 )
      {
LABEL_62:
        v5 = -1073741670;
        goto LABEL_61;
      }
      *v33 = a3;
      v33[1] = *v32;
      *v32 = v33 + 1;
    }
    if ( (int)EmpRuleParserStackPush((_DWORD)v11, 1, (_DWORD)v16, (_DWORD)v6, v50) < 0 )
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
    ValueFromSectionAndKeyName = (_BYTE *)CmpGetSectionLineIndex(a1, "Rule", v46, (unsigned int)++v45);
    if ( !ValueFromSectionAndKeyName )
      break;
    v7 = a1;
  }
  if ( *(_DWORD *)v11 == 1 )
  {
    v8 = (void *)ExAllocatePool2(256LL, 0x20uLL, 0x74694D45u);
    if ( !(unsigned __int8)EmpRuleParserStackPop((_DWORD)v11, (_DWORD)v8, (int)v8 + 8, (int)v8 + 24, (__int64)v8 + 16) )
    {
LABEL_58:
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
      v34 = (void *)v12[1];
      if ( v34 )
        ExFreePoolWithTag(v34, 0x74734D45u);
      v35 = (void *)v12[4];
      if ( v35 )
        ExFreePoolWithTag(v35, 0x74734D45u);
      v36 = 1953713477;
      goto LABEL_86;
    }
LABEL_87:
    while ( 1 )
    {
      v39 = *(_QWORD **)(a3 + 72);
      if ( !v39 )
        break;
      v12 = v39 - 1;
      *(_QWORD *)(a3 + 72) = *v39;
      while ( 1 )
      {
        v37 = (_QWORD **)(*v12 + 32LL);
        v38 = *v37;
        if ( !*v37 || *(v38 - 1) != a3 )
          break;
        if ( v38 )
          *v37 = (_QWORD *)*v38;
        ExFreePoolWithTag(v38 - 1, 0x74694D45u);
      }
      v36 = 1953058117;
LABEL_86:
      ExFreePoolWithTag(v12, v36);
    }
    while ( 1 )
    {
      v43 = *(_QWORD **)(a3 + 64);
      if ( !v43 )
        break;
      v40 = v43 - 1;
      *(_QWORD *)(a3 + 64) = *v43;
      while ( 1 )
      {
        v41 = (_QWORD **)(*v40 + 48LL);
        v42 = *v41;
        if ( !*v41 || *(v42 - 1) != a3 )
          break;
        if ( v42 )
          *v41 = (_QWORD *)*v42;
        ExFreePoolWithTag(v42 - 1, 0x74694D45u);
      }
      ExFreePoolWithTag(v40, 0x74694D45u);
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0x74694D45u);
  }
  return (unsigned int)v5;
}
