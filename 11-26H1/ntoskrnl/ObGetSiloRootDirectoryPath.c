/*
 * XREFs of ObGetSiloRootDirectoryPath @ 0x1408AD75C
 * Callers:
 *     PspConvertSiloToServerSilo @ 0x1407F46EC (PspConvertSiloToServerSilo.c)
 *     NtQueryInformationJobObject @ 0x1407F8B10 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x140404430 (PsGetPermanentSiloContext.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     PsGetCurrentSilo @ 0x140413410 (PsGetCurrentSilo.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PsGetParentSilo @ 0x14093AD80 (PsGetParentSilo.c)
 *     RtlIntegerToUnicodeString @ 0x14097BC70 (RtlIntegerToUnicodeString.c)
 *     PsGetSiloIdentifier @ 0x140B0B540 (PsGetSiloIdentifier.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

int __fastcall ObGetSiloRootDirectoryPath(__int64 a1, UNICODE_STRING *a2)
{
  int result; // eax
  struct _LIST_ENTRY *ParentSilo; // rbx
  ULONG SiloIdentifier; // eax
  unsigned int v7; // ebx
  __int64 Pool2; // rax
  UNICODE_STRING String; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-30h] BYREF
  char v11; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  result = PsGetPermanentSiloContext(a1, PsObjectDirectorySiloContextSlot, (unsigned __int64 *)&String.Length);
  if ( result >= 0 )
  {
    ParentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(a1);
    if ( PsGetCurrentSilo() != ParentSilo )
      return -1073740007;
    *(_QWORD *)&String.Length = 1441792LL;
    String.Buffer = (wchar_t *)&v11;
    SiloIdentifier = PsGetSiloIdentifier(a1);
    result = RtlIntegerToUnicodeString(SiloIdentifier, 0xAu, &String);
    if ( result >= 0 )
    {
      v7 = String.Length + 14;
      if ( a2->Buffer )
      {
        if ( a2->MaximumLength < v7 )
          return -1073741789;
      }
      else
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        a2->Buffer = (wchar_t *)Pool2;
        if ( !Pool2 )
          return -1073741670;
        a2->Length = 0;
        a2->MaximumLength = v7;
      }
      RtlCopyUnicodeString(a2, &ObpSilosDirectoryName);
      RtlAppendUnicodeStringToString(a2, &Source);
      RtlAppendUnicodeStringToString(a2, &String);
      return 0;
    }
  }
  return result;
}
