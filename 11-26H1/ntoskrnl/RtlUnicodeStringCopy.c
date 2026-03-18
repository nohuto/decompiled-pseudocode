/*
 * XREFs of RtlUnicodeStringCopy @ 0x14043D5D0
 * Callers:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14043D4F0 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     KiAllocatePrcbThread @ 0x1405EC38C (KiAllocatePrcbThread.c)
 *     SshpCopyDataEntry @ 0x140613F50 (SshpCopyDataEntry.c)
 *     ExpPoolCreate @ 0x14077DC90 (ExpPoolCreate.c)
 *     ExpAcquirePrmInterface @ 0x14083EDB0 (ExpAcquirePrmInterface.c)
 *     MiConstructNonRetpolineImageLoadRecord @ 0x14086D670 (MiConstructNonRetpolineImageLoadRecord.c)
 *     AslpPathWildcardAllocMatchNode @ 0x14088AA00 (AslpPathWildcardAllocMatchNode.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1408AF680 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1408BA354 (CmpGetSymbolicLinkTarget.c)
 *     CmpLinkHiveToMaster @ 0x14097C11C (CmpLinkHiveToMaster.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140A3050C (VrpHandleIoctlInitializeJobForVreg.c)
 *     SleepstudyHelper_GetPdoFriendlyName @ 0x140A88D20 (SleepstudyHelper_GetPdoFriendlyName.c)
 *     PopUnicodeStringDeepCopy @ 0x140AE7CB8 (PopUnicodeStringDeepCopy.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140AF47D8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     PopCloneUnicodeString @ 0x140B313BC (PopCloneUnicodeString.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x1405EC790 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlUnicodeStringValidateSrcWorker @ 0x1405EC7DC (RtlUnicodeStringValidateSrcWorker.c)
 *     RtlWideCharArrayCopyWorker @ 0x1405EC870 (RtlWideCharArrayCopyWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  size_t *v2; // r9
  __int16 v4; // bx
  NTSTATUS result; // eax
  size_t v7; // r9
  size_t cchSrcLength; // [rsp+20h] [rbp-38h]
  ULONG cchSrcLengtha; // [rsp+20h] [rbp-38h]
  ULONG v10; // [rsp+28h] [rbp-30h]
  size_t pcchDest; // [rsp+30h] [rbp-28h] BYREF
  wchar_t *ppszDest; // [rsp+38h] [rbp-20h] BYREF
  size_t pcchNewDestLength[3]; // [rsp+40h] [rbp-18h] BYREF
  size_t pcchSrcLength; // [rsp+70h] [rbp+18h] BYREF
  wchar_t *ppszSrc; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  ppszDest = 0LL;
  pcchDest = 0LL;
  result = RtlUnicodeStringValidateDestWorker(DestinationString, &ppszDest, &pcchDest, v2, cchSrcLength, v10);
  if ( result >= 0 )
  {
    ppszSrc = 0LL;
    pcchSrcLength = 0LL;
    pcchNewDestLength[0] = 0LL;
    result = RtlUnicodeStringValidateSrcWorker(SourceString, &ppszSrc, &pcchSrcLength, v7, cchSrcLengtha);
    if ( result >= 0 )
    {
      result = RtlWideCharArrayCopyWorker(ppszDest, pcchDest, pcchNewDestLength, ppszSrc, pcchSrcLength);
      v4 = pcchNewDestLength[0];
    }
    DestinationString->Length = 2 * v4;
  }
  return result;
}
