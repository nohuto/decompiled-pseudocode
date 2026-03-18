/*
 * XREFs of ApiSetpConstructPathToExtension @ 0x14084A7F8
 * Callers:
 *     ApiSetpLoadSchemaExtension @ 0x14084A8B4 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140432EB0 (RtlAppendUnicodeToString.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ApiSetpConstructPathToExtension(PCWSTR Source, __int16 a2, UNICODE_STRING *a3)
{
  wchar_t *Pool2; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-18h] BYREF

  Destination.MaximumLength = a2 + 44;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  Destination.Length = 0;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  Destination.Buffer = Pool2;
  if ( Pool2 )
  {
    appended = RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\System32\\");
    if ( appended < 0 || (appended = RtlAppendUnicodeToString(&Destination, Source), appended < 0) )
    {
      Pool2 = Destination.Buffer;
    }
    else
    {
      Pool2 = 0LL;
      *a3 = Destination;
    }
  }
  else
  {
    appended = -1073741801;
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)appended;
}
