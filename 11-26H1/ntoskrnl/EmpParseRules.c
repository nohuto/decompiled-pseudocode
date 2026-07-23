/*
 * XREFs of EmpParseRules @ 0x140CBCFC8
 * Callers:
 *     EmpParseInfDatabase @ 0x140CBC420 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x14047D298 (EmpSearchRuleDatabase.c)
 *     strtoul @ 0x140537CD8 (strtoul.c)
 *     EmpSearchEntryDatabase @ 0x1405B768C (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140CBBE84 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140CBBF30 (EmpInfParseGetSectionLineCount.c)
 *     EmpInfParseSearchDependencyList @ 0x140CBC028 (EmpInfParseSearchDependencyList.c)
 *     EmpParseRuleExpression @ 0x140CBC57C (EmpParseRuleExpression.c)
 *     CmpGetKeyName @ 0x140CBDF60 (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140CBDF98 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140CBE010 (CmpGetSectionLineIndexValueCount.c)
 */

__int64 __fastcall EmpParseRules(__int64 a1)
{
  unsigned int v2; // esi
  int GuidFromName; // edi
  unsigned int SectionLineCount; // r13d
  const char *KeyName; // r12
  ULONG_PTR Pool2; // rax
  __int64 v7; // rbx
  GUID *v8; // r9
  _QWORD *v9; // rax
  void *v10; // rcx
  const char *SectionLineIndex; // rax
  const char *v12; // rax
  unsigned int SectionLineIndexValueCount; // eax
  __int64 v14; // r9
  unsigned int v15; // ebp
  bool v16; // zf
  unsigned int v17; // eax
  ULONG_PTR v18; // rax
  unsigned int i; // edi
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rbp
  __int64 v27; // rdx
  _QWORD *v28; // rax
  unsigned int j; // edi
  __int64 v30; // rdx
  _QWORD *v31; // rax
  void *v32; // rcx
  GUID v34; // [rsp+20h] [rbp-48h] BYREF

  v34 = 0LL;
  v2 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"RuleDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v2 >= SectionLineCount )
            return (unsigned int)GuidFromName;
          KeyName = (const char *)CmpGetKeyName(a1, "RuleDef", v2);
          if ( !KeyName )
            return 0;
          Pool2 = ExAllocatePool2(256LL, 0x68uLL, 0x74694D45u);
          v7 = Pool2;
          if ( !Pool2 )
            return (unsigned int)-1073741670;
          *(_DWORD *)(Pool2 + 16) = 1;
          *(_BYTE *)(Pool2 + 20) = 0;
          v8 = (GUID *)Pool2;
          *(_QWORD *)(Pool2 + 56) = 0LL;
          *(_QWORD *)(Pool2 + 64) = 0LL;
          *(_QWORD *)(Pool2 + 72) = 0LL;
          *(_QWORD *)(Pool2 + 32) = 0LL;
          v9 = (_QWORD *)(Pool2 + 80);
          *(_QWORD *)(v7 + 88) = v9;
          *v9 = v9;
          *(_DWORD *)(v7 + 48) = 0;
          *(_DWORD *)(v7 + 40) = 0;
          GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", (__int64)KeyName, v8);
          v10 = (void *)v7;
          if ( GuidFromName >= 0 && !EmpSearchRuleDatabase((_QWORD *)v7) )
            break;
          ExFreePoolWithTag(v10, 0x74694D45u);
          ++v2;
        }
        SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v2, 0LL);
        if ( SectionLineIndex )
        {
          *(_DWORD *)(v7 + 40) = strtoul(SectionLineIndex, 0LL, 10);
          v12 = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v2, 1LL);
          if ( v12 )
          {
            *(_DWORD *)(v7 + 44) = strtoul(v12, 0LL, 10);
            SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "RuleDef", v2);
            v15 = SectionLineIndexValueCount;
            if ( SectionLineIndexValueCount >= 2 )
              break;
          }
        }
LABEL_38:
        ExFreePoolWithTag((PVOID)v7, 0x74694D45u);
        ++v2;
        GuidFromName = 0;
      }
      v16 = SectionLineIndexValueCount == 2;
      v17 = SectionLineIndexValueCount - 2;
      *(_DWORD *)(v7 + 48) = v17;
      if ( !v16 )
      {
        v18 = ExAllocatePool2(256LL, 8LL * v17, 0x74694D45u);
        *(_QWORD *)(v7 + 56) = v18;
        if ( !v18 )
        {
          ExFreePoolWithTag((PVOID)v7, 0x74694D45u);
          return (unsigned int)-1073741670;
        }
        for ( i = 2; i < v15; ++i )
        {
          v20 = CmpGetSectionLineIndex(a1, "RuleDef", v2, i);
          if ( EmpInfParseGetGuidFromName(a1, (__int64)"EntryTypeGuidDef", v20, &v34) < 0
            || (v21 = EmpSearchEntryDatabase(&v34)) == 0LL )
          {
LABEL_21:
            v24 = i - 2;
            if ( i != 2 )
            {
              v25 = 0LL;
              v26 = v24;
              do
              {
                v27 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + v25);
                v28 = *(_QWORD **)(v27 + 72);
                if ( *(v28 - 1) == v7 )
                {
                  if ( v28 )
                    *(_QWORD *)(v27 + 72) = *v28;
                  ExFreePoolWithTag(v28 - 1, 0x74694D45u);
                }
                v25 += 8LL;
                --v26;
              }
              while ( v26 );
            }
            goto LABEL_36;
          }
          v22 = v21 + 9;
          *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL * (i - 2)) = v21;
          if ( !EmpInfParseSearchDependencyList((_QWORD **)v21 + 9, v7) )
          {
            v23 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
            if ( !v23 )
              goto LABEL_21;
            *v23 = v7;
            v23[1] = *v22;
            *v22 = v23 + 1;
          }
        }
      }
      GuidFromName = EmpParseRuleExpression(a1, KeyName, v7, v14);
      if ( GuidFromName < 0 )
      {
        for ( j = 0; j < *(_DWORD *)(v7 + 48); ++j )
        {
          v30 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL * j);
          v31 = *(_QWORD **)(v30 + 72);
          if ( *(v31 - 1) == v7 )
          {
            if ( v31 )
              *(_QWORD *)(v30 + 72) = *v31;
            ExFreePoolWithTag(v31 - 1, 0x74694D45u);
          }
        }
LABEL_36:
        v32 = *(void **)(v7 + 56);
        if ( v32 )
          ExFreePoolWithTag(v32, 0x74694D45u);
        goto LABEL_38;
      }
      ++v2;
      *(_QWORD *)(v7 + 24) = EmpParseLock.Header.WaitListHead.Flink;
      ++EmpNumberOfRules;
      EmpParseLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(v7 + 24);
    }
  }
  return (unsigned int)GuidFromName;
}
