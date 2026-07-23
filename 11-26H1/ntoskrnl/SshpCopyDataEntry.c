/*
 * XREFs of SshpCopyDataEntry @ 0x140616E10
 * Callers:
 *     SleepstudyHelperCreateBlockerData @ 0x140B66F90 (SleepstudyHelperCreateBlockerData.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x14042FE80 (RtlUnicodeStringCopy.c)
 *     SSHSupportAllocatePaged @ 0x140ABB050 (SSHSupportAllocatePaged.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SshpCopyDataEntry(ULONG Tag, PCUNICODE_STRING SourceString, PUNICODE_STRING DestinationString)
{
  unsigned __int16 Length; // r14
  wchar_t *Paged; // rax
  unsigned int v8; // ebx
  wchar_t *v9; // rbp
  NTSTATUS v10; // r14d

  Length = SourceString->Length;
  Paged = (wchar_t *)SSHSupportAllocatePaged(SourceString->Length, Tag);
  v8 = 0;
  v9 = Paged;
  if ( Paged )
  {
    DestinationString->Buffer = Paged;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = Length;
    v10 = RtlUnicodeStringCopy(DestinationString, SourceString);
    if ( v10 < 0 )
    {
      ExFreePoolWithTag(v9, Tag);
      return (unsigned int)v10;
    }
    else
    {
      *(_QWORD *)&DestinationString[1].Length = *(_QWORD *)&SourceString[1].Length;
      DestinationString[1].Buffer = SourceString[1].Buffer;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
