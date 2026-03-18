/*
 * XREFs of DpiAppendNumberToString @ 0x14041B7B4
 * Callers:
 *     DpiGdoDestroyGdiObjects @ 0x1402572A4 (DpiGdoDestroyGdiObjects.c)
 *     DpiPdoHandleQueryId @ 0x1404007B0 (DpiPdoHandleQueryId.c)
 *     DpiGdoCreateGdiObjects @ 0x14041AD20 (DpiGdoCreateGdiObjects.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiAppendNumberToString(PCWSTR SourceString, ULONG Value, PUNICODE_STRING Destination)
{
  wchar_t *Pool2; // rax
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  wchar_t *v8; // rax
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  *(_DWORD *)&String.Length = 1441792;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 22LL, 1953656900LL);
  String.Buffer = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, String.MaximumLength);
    v6 = RtlIntegerToUnicodeString(Value, 0xAu, &String);
    if ( v6 >= 0 )
    {
      v7 = (unsigned __int16)(String.MaximumLength + DestinationString.MaximumLength);
      Destination->MaximumLength = v7;
      Destination->Length = 0;
      v8 = (wchar_t *)ExAllocatePool2(256LL, v7, 1953656900LL);
      Destination->Buffer = v8;
      if ( v8 )
      {
        memset(v8, 0, Destination->MaximumLength);
        RtlCopyUnicodeString(Destination, &DestinationString);
        RtlAppendUnicodeStringToString(Destination, &String);
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 329;
      }
    }
    ExFreePoolWithTag(String.Buffer, 0x74727044u);
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 303;
  }
  return (unsigned int)v6;
}
