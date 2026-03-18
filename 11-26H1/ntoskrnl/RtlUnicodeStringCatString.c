/*
 * XREFs of RtlUnicodeStringCatString @ 0x140438C68
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x14088AA00 (AslpPathWildcardAllocMatchNode.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A88E8C (SshpGenerateDeviceFriendlyName.c)
 *     PopPowerRequestStatsIdConcat @ 0x140B00BF0 (PopPowerRequestStatsIdConcat.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B22D10 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     PopGenerateDeviceFriendlyName @ 0x140B22F30 (PopGenerateDeviceFriendlyName.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x140438CE0 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x140439150 (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCatString(PUNICODE_STRING DestinationString, NTSTRSAFE_PCWSTR pszSrc)
{
  ULONG v2; // r8d
  NTSTATUS result; // eax
  __int64 v5; // rcx
  const wchar_t *v6; // r10
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  size_t v10; // [rsp+20h] [rbp-18h]
  size_t pcchNewDestLength; // [rsp+50h] [rbp+18h] BYREF

  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)pszSrc, v2);
  if ( result >= 0 && v5 )
  {
    v7 = *(_QWORD *)(v5 + 8);
    v8 = (unsigned __int64)DestinationString->MaximumLength >> 1;
    v9 = (unsigned __int64)DestinationString->Length >> 1;
LABEL_4:
    pcchNewDestLength = 0LL;
    result = RtlWideCharArrayCopyStringWorker((wchar_t *)(v7 + 2 * v9), v8 - v9, &pcchNewDestLength, v6, v10);
    DestinationString->Length = 2 * (pcchNewDestLength + v9);
    return result;
  }
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( result >= 0 )
    goto LABEL_4;
  return result;
}
