/*
 * XREFs of RtlUnicodeStringCatString @ 0x1404278C8
 * Callers:
 *     AslpPathWildcardAllocMatchNode @ 0x140890DFC (AslpPathWildcardAllocMatchNode.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408B59EC (CmpLogTransactionAbortedWithChildName.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140A8FD7C (SshpGenerateDeviceFriendlyName.c)
 *     PopPowerRequestStatsIdConcat @ 0x140B02920 (PopPowerRequestStatsIdConcat.c)
 *     PopIdleWakeGenerateInterruptDescriptionString @ 0x140B25110 (PopIdleWakeGenerateInterruptDescriptionString.c)
 *     PopGenerateDeviceFriendlyName @ 0x140B25330 (PopGenerateDeviceFriendlyName.c)
 * Callees:
 *     RtlWideCharArrayCopyStringWorker @ 0x140427940 (RtlWideCharArrayCopyStringWorker.c)
 *     RtlUnicodeStringValidateWorker @ 0x140427DB0 (RtlUnicodeStringValidateWorker.c)
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
