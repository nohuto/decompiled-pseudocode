/*
 * XREFs of EmpParseEntryTypes @ 0x140CB625C
 * Callers:
 *     EmpParseInfDatabase @ 0x140CB63E0 (EmpParseInfDatabase.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     EmpSearchEntryDatabase @ 0x1405B4E7C (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetSectionLineCount @ 0x140CB5EF0 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140CB7F54 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseEntryTypes(__int64 a1)
{
  NTSTATUS v1; // ebx
  unsigned int v3; // esi
  unsigned int SectionLineCount; // ebp
  const char *SectionLineIndex; // rax
  GUID *Pool2; // rax
  GUID *v7; // rdi
  GUID *v8; // rcx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-98h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-88h] BYREF
  char v12; // [rsp+40h] [rbp-78h] BYREF

  *(_QWORD *)&GuidString.Length = 5111808LL;
  GuidString.Buffer = (wchar_t *)&v12;
  v1 = 0;
  v3 = 0;
  DestinationString = 0LL;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"EntryTypeGuidDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      if ( v3 >= SectionLineCount )
        return (unsigned int)v1;
      SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "EntryTypeGuidDef", v3, 0LL);
      if ( !SectionLineIndex )
        return 0;
      RtlInitAnsiString(&DestinationString, SectionLineIndex);
      if ( RtlAnsiStringToUnicodeString(&GuidString, &DestinationString, 0) < 0 )
        break;
      Pool2 = (GUID *)ExAllocatePool2(256LL, 0x50uLL, 0x74694D45u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      ++v3;
      v1 = RtlGUIDFromString(&GuidString, Pool2);
      v8 = v7;
      if ( v1 < 0 || EmpSearchEntryDatabase(v7) )
      {
        ExFreePoolWithTag(v8, 0x74694D45u);
LABEL_6:
        v1 = 0;
      }
      else
      {
        ++EmpNumberOfEntryTypes;
        *(_QWORD *)&v7[3].Data1 = (char *)v7 + 40;
        *(_QWORD *)v7[2].Data4 = (char *)v7 + 40;
        *(_QWORD *)v7[4].Data4 = 0LL;
        *(_QWORD *)&v7[4].Data1 = (char *)v7 + 56;
        *(_QWORD *)v7[3].Data4 = (char *)v7 + 56;
        *(_QWORD *)&v7[2].Data1 = (char *)v7 + 40;
        v7[1].Data1 = 0;
        *(_QWORD *)v7[1].Data4 = *(_QWORD *)&EmpParseLock.CurrentRunTime;
        *(_QWORD *)&EmpParseLock.CurrentRunTime = (char *)v7 + 24;
      }
    }
    ++v3;
    goto LABEL_6;
  }
  return (unsigned int)v1;
}
