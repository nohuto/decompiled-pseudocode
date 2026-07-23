/*
 * XREFs of PopAnsiStringToUnicodeString @ 0x140AFF5C0
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A900E8 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x14097BFE0 (RtlMultiByteToUnicodeSize.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PopAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        __int64 a3,
        ULONG a4)
{
  ULONG Length; // r8d
  char *Buffer; // rdx
  PVOID *p_Buffer; // rbx
  unsigned __int16 v9; // bp
  wchar_t **v10; // r14
  __int64 Pool2; // r15
  wchar_t **v12; // rsi
  NTSTATUS result; // eax
  ULONG v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = a4;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v14 = 0;
  RtlMultiByteToUnicodeSize(&v14, Buffer, Length);
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  v9 = -1;
  if ( v14 + 2 > 0xFFFF )
  {
    if ( *p_Buffer )
    {
      v12 = &DestinationString->Buffer;
      goto LABEL_8;
    }
    goto LABEL_3;
  }
  v9 = v14 + 2;
  if ( !*p_Buffer )
  {
LABEL_3:
    v10 = &DestinationString->Buffer;
    goto LABEL_4;
  }
  v12 = &DestinationString->Buffer;
  if ( DestinationString->MaximumLength >= v14 + 2 )
    goto LABEL_8;
  v10 = &DestinationString->Buffer;
LABEL_4:
  Pool2 = ExAllocatePool2(0x100uLL);
  v12 = &DestinationString->Buffer;
  if ( Pool2 )
  {
    if ( *p_Buffer )
      ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = (PVOID)Pool2;
    v12 = v10;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v9;
  }
LABEL_8:
  result = RtlAnsiStringToUnicodeString(DestinationString, SourceString, 0);
  if ( result >= 0 )
    (*v12)[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
