/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14097BC70
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14041F85C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x14041FE34 (AdtpFormatPrefix.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406CE6E8 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildReplacementString @ 0x1408969A4 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140896A40 (AdtpBuildUserAccountControlString.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 *     ObCreateSiloRootDirectory @ 0x1408AD404 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408AD75C (ObGetSiloRootDirectoryPath.c)
 *     ExProcessCounterSetCallback @ 0x14091D960 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x14097AAF4 (AdtpBuildAccessesString.c)
 *     pIoQueryDeviceDescription @ 0x140A4A8E8 (pIoQueryDeviceDescription.c)
 *     RtlpInitNlsFileName @ 0x140B2BDF4 (RtlpInitNlsFileName.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD9D70 (PopReadSimulatedHGSClasses.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x14097BD00 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x14097C370 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  ANSI_STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  CHAR Stringa[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33, Stringa);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = Stringa;
    v5 = -1LL;
    do
      ++v5;
    while ( Stringa[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
