/*
 * XREFs of EmpParseTargetRules @ 0x140CBD7E8
 * Callers:
 *     EmpParseInfDatabase @ 0x140CBC420 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x14047A4FC (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x14047D298 (EmpSearchRuleDatabase.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140CBBE84 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140CBBF30 (EmpInfParseGetSectionLineCount.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140CBD4C8 (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetKeyName @ 0x140CBDF60 (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140CBDF98 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140CBE010 (CmpGetSectionLineIndexValueCount.c)
 */

__int64 __fastcall EmpParseTargetRules(__int64 a1)
{
  int GuidFromName; // ebx
  unsigned int SectionLineCount; // eax
  unsigned int i; // edi
  __int64 KeyName; // rax
  struct _LIST_ENTRY **v6; // rax
  __int64 v7; // rsi
  int v8; // eax
  int v9; // r14d
  void *v10; // rbp
  unsigned int SectionLineIndexValueCount; // r12d
  _QWORD *v12; // rax
  int v13; // ecx
  _QWORD *v14; // r13
  unsigned __int64 v15; // rax
  void *Pool2; // rax
  void *v17; // rcx
  unsigned int v18; // r13d
  unsigned __int64 v19; // r14
  _BYTE *SectionLineIndex; // rax
  ULONG_PTR v21; // rax
  unsigned int v23; // [rsp+40h] [rbp-58h]
  int v24; // [rsp+44h] [rbp-54h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-50h]
  GUID v26; // [rsp+50h] [rbp-48h] BYREF

  v26 = 0LL;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"TargetRuleDef");
  v23 = SectionLineCount;
  if ( SectionLineCount )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= SectionLineCount )
        return (unsigned int)GuidFromName;
      GuidFromName = 0;
      KeyName = CmpGetKeyName(a1, "TargetRuleDef", i);
      if ( KeyName )
      {
        GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", KeyName, &v26);
        if ( GuidFromName >= 0 )
        {
          v6 = EmpSearchRuleDatabase(&v26);
          v7 = (__int64)v6;
          if ( v6 )
          {
            v8 = *((_DWORD *)v6 + 10);
            v9 = 0;
            v10 = 0LL;
            v24 = 0;
            if ( !(*(_DWORD *)(v7 + 44) + v8) )
              goto LABEL_22;
            SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "TargetRuleDef", i);
            if ( !SectionLineIndexValueCount )
              goto LABEL_5;
            v12 = EmpSearchTargetRuleList(v7);
            v13 = *(_DWORD *)(v7 + 40);
            v14 = v12;
            v15 = SectionLineIndexValueCount * (unsigned __int64)(unsigned int)(v13 + *(_DWORD *)(v7 + 44));
            if ( v14 )
            {
              v25 = *((unsigned int *)v14 + 6) + v15;
              if ( 4 * v25 > 0xFFFFFFFF )
                return (unsigned int)-1073739516;
              Pool2 = (void *)ExAllocatePool2(256LL, 4 * v25, 0x74694D45u);
              v10 = Pool2;
              if ( !Pool2 )
                return (unsigned int)-1073741670;
              memmove(Pool2, (const void *)v14[2], 4LL * *((unsigned int *)v14 + 6));
              v17 = (void *)v14[2];
              v24 = *((_DWORD *)v14 + 6);
              ExFreePoolWithTag(v17, 0x74694D45u);
            }
            else
            {
              v25 = SectionLineIndexValueCount * (unsigned __int64)(unsigned int)(v13 + *(_DWORD *)(v7 + 44));
              if ( 4 * v15 > 0xFFFFFFFF )
                return (unsigned int)-1073739516;
              v10 = (void *)ExAllocatePool2(256LL, 4 * v15, 0x74694D45u);
              if ( !v10 )
                return (unsigned int)-1073741670;
            }
            v18 = 0;
            v19 = v25;
            do
            {
              SectionLineIndex = (_BYTE *)CmpGetSectionLineIndex(a1, "TargetRuleDef", i, v18);
              EmpParseTargetRuleStringIndexList(
                a1,
                SectionLineIndex,
                *(_DWORD *)(v7 + 40),
                *(_DWORD *)(v7 + 44),
                (__int64)v10,
                v19,
                &v24);
              ++v18;
            }
            while ( v18 < SectionLineIndexValueCount );
            v9 = v24;
            if ( v24 )
            {
LABEL_22:
              v21 = ExAllocatePool2(256LL, 0x28uLL, 0x74694D45u);
              ++EmpNumberOfTargetRules;
              *(_QWORD *)(v21 + 8) = v7;
              *(_QWORD *)(v21 + 16) = v10;
              *(_DWORD *)(v21 + 24) = v9;
              *(_DWORD *)v21 = 0;
              *(_QWORD *)(v21 + 32) = EmpTargetRuleListHead;
              EmpTargetRuleListHead = v21 + 32;
            }
            else
            {
              ExFreePoolWithTag(v10, 0x74694D45u);
            }
          }
        }
      }
LABEL_5:
      SectionLineCount = v23;
    }
  }
  return (unsigned int)GuidFromName;
}
