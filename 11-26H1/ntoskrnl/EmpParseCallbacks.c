/*
 * XREFs of EmpParseCallbacks @ 0x140CB600C
 * Callers:
 *     EmpParseInfDatabase @ 0x140CB63E0 (EmpParseInfDatabase.c)
 * Callees:
 *     strtoul @ 0x140535858 (strtoul.c)
 *     EmpSearchCallbackDatabase @ 0x1405B4E44 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1405B4E7C (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140CB5E44 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140CB5EF0 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetKeyName @ 0x140CB7F1C (CmpGetKeyName.c)
 *     CmpGetSectionLineIndex @ 0x140CB7F54 (CmpGetSectionLineIndex.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140CB7FCC (CmpGetSectionLineIndexValueCount.c)
 */

__int64 __fastcall EmpParseCallbacks(__int64 a1)
{
  unsigned int v2; // ebx
  int GuidFromName; // edi
  unsigned int SectionLineCount; // r12d
  __int64 KeyName; // rdi
  unsigned int SectionLineIndexValueCount; // eax
  unsigned int v7; // r15d
  __int64 v8; // rbp
  ULONG_PTR v9; // rdx
  GUID *Pool2; // rax
  GUID *v11; // rsi
  GUID *v12; // rcx
  const char *SectionLineIndex; // rax
  const char *v14; // rax
  unsigned int i; // ebp
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  GUID v20; // [rsp+20h] [rbp-48h] BYREF

  v20 = 0LL;
  v2 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"CallbackDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v2 >= SectionLineCount )
          return (unsigned int)GuidFromName;
        KeyName = CmpGetKeyName(a1, "CallbackDef", v2);
        if ( !KeyName )
          return 0;
        SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "CallbackDef", v2);
        v7 = SectionLineIndexValueCount;
        if ( SectionLineIndexValueCount >= 2 )
          break;
LABEL_5:
        ++v2;
LABEL_6:
        GuidFromName = 0;
      }
      v8 = SectionLineIndexValueCount - 2;
      v9 = 8 * v8 + 72;
      if ( v9 > 0xFFFFFFFF )
        return (unsigned int)-1073739516;
      Pool2 = (GUID *)ExAllocatePool2(256LL, v9, 0x74694D45u);
      v11 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"CallbackGuidDef", KeyName, Pool2);
      if ( GuidFromName < 0 )
        break;
      if ( EmpSearchCallbackDatabase(v11) )
        goto LABEL_14;
      v11[4].Data1 = v8;
      SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 0LL);
      if ( !SectionLineIndex )
        break;
      *(_DWORD *)v11[3].Data4 = strtoul(SectionLineIndex, 0LL, 10);
      v14 = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 1LL);
      if ( !v14 )
        break;
      *(_DWORD *)&v11[3].Data4[4] = strtoul(v14, 0LL, 10);
      for ( i = 2; i < v7; ++i )
      {
        v16 = CmpGetSectionLineIndex(a1, "CallbackDef", v2, i);
        GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"EntryTypeGuidDef", v16, &v20);
        if ( GuidFromName < 0 )
          break;
        v17 = EmpSearchEntryDatabase(&v20);
        if ( !v17 )
        {
          ++v2;
LABEL_22:
          ExFreePoolWithTag(v11, 0x74694D45u);
          goto LABEL_6;
        }
        v18 = i - 2;
        *(_QWORD *)&v11[4].Data4[8 * v18] = v17;
      }
      ++v2;
      if ( GuidFromName < 0 )
        goto LABEL_22;
      ++EmpNumberOfCallbacks;
      *(_QWORD *)&v11[3].Data1 = 0LL;
      *(_QWORD *)&v11[1].Data1 = 0LL;
      *(_DWORD *)v11[1].Data4 = 0;
      *(_QWORD *)&v11[2].Data1 = 0LL;
      *(_QWORD *)v11[2].Data4 = EmpParseLock.StackBase;
      EmpParseLock.StackBase = v11[2].Data4;
    }
    v12 = v11;
LABEL_14:
    ExFreePoolWithTag(v12, 0x74694D45u);
    goto LABEL_5;
  }
  return (unsigned int)GuidFromName;
}
