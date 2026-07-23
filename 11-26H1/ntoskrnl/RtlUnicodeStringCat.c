/*
 * XREFs of RtlUnicodeStringCat @ 0x1403E78F0
 * Callers:
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408C0924 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x1408C77A0 (CmpDoWritethroughReparse.c)
 *     CmpIsFileInSystemConfig @ 0x140A80290 (CmpIsFileInSystemConfig.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A8FD7C (SshpGenerateDeviceFriendlyName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF6E78 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopPowerRequestStatsIdConcat @ 0x140B02920 (PopPowerRequestStatsIdConcat.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B25110 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     PopGenerateDeviceFriendlyName @ 0x140B25330 (PopGenerateDeviceFriendlyName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringCat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned __int64 Length; // rcx
  unsigned __int16 MaximumLength; // ax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned __int16 v7; // cx
  wchar_t *Buffer; // rax
  unsigned __int64 v9; // r8
  NTSTATUS v10; // r11d
  __int16 v11; // dx
  unsigned __int64 v12; // r9
  NTSTATUS result; // eax
  char *v14; // r10

  Length = DestinationString->Length;
  if ( (Length & 1) != 0 )
    return -1073741811;
  MaximumLength = DestinationString->MaximumLength;
  if ( (MaximumLength & 1) != 0
    || (unsigned __int16)Length > MaximumLength
    || MaximumLength == 0xFFFF
    || !DestinationString->Buffer && ((_WORD)Length || MaximumLength) )
  {
    return -1073741811;
  }
  v5 = SourceString->Length;
  v6 = Length >> 1;
  if ( (v5 & 1) != 0 )
    return -1073741811;
  v7 = SourceString->MaximumLength;
  if ( (v7 & 1) != 0 )
    return -1073741811;
  if ( v7 == 0xFFFF )
    return -1073741811;
  if ( (unsigned __int16)v5 > v7 )
    return -1073741811;
  Buffer = SourceString->Buffer;
  if ( !Buffer && ((_WORD)v5 || v7) )
    return -1073741811;
  v9 = v5 >> 1;
  v10 = 0;
  v11 = 0;
  v12 = ((unsigned __int64)DestinationString->MaximumLength >> 1) - v6;
  if ( v12 )
  {
    v14 = (char *)DestinationString->Buffer + 2 * v6 - (_QWORD)Buffer;
    while ( v9 )
    {
      --v9;
      *(wchar_t *)((char *)Buffer + (_QWORD)v14) = *Buffer;
      ++v11;
      ++Buffer;
      if ( !--v12 )
        goto LABEL_12;
    }
  }
  else
  {
LABEL_12:
    if ( v9 )
      v10 = -2147483643;
  }
  result = v10;
  DestinationString->Length = 2 * (v6 + v11);
  return result;
}
