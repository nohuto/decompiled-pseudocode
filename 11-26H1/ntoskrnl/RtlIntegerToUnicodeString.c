/*
 * XREFs of RtlIntegerToUnicodeString @ 0x14096B330
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14043282C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpFormatPrefix @ 0x140432E04 (AdtpFormatPrefix.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1406CA6B8 (BapdpMarshallBootDataToRegistry.c)
 *     AdtpBuildReplacementString @ 0x1408905A8 (AdtpBuildReplacementString.c)
 *     AdtpBuildUserAccountControlString @ 0x140890644 (AdtpBuildUserAccountControlString.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 *     ObCreateSiloRootDirectory @ 0x1408A6F94 (ObCreateSiloRootDirectory.c)
 *     ObGetSiloRootDirectoryPath @ 0x1408A72EC (ObGetSiloRootDirectoryPath.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     AdtpBuildAccessesString @ 0x14096A1B4 (AdtpBuildAccessesString.c)
 *     pIoQueryDeviceDescription @ 0x140A73E4C (pIoQueryDeviceDescription.c)
 *     RtlpInitNlsFileName @ 0x140B29D74 (RtlpInitNlsFileName.c)
 *     PopReadSimulatedHGSClasses @ 0x140CD3BD0 (PopReadSimulatedHGSClasses.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlIntegerToChar @ 0x14096B3C0 (RtlIntegerToChar.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __stdcall RtlIntegerToUnicodeString(ULONG Value, ULONG Base, PUNICODE_STRING String)
{
  NTSTATUS result; // eax
  __int64 v5; // rax
  STRING SourceString; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[40]; // [rsp+30h] [rbp-38h] BYREF

  *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
  result = RtlIntegerToChar(Value, Base, 33LL, v7);
  if ( result >= 0 )
  {
    SourceString.MaximumLength = 33;
    SourceString.Buffer = v7;
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    SourceString.Length = v5;
    return RtlAnsiStringToUnicodeString(String, &SourceString, 0);
  }
  return result;
}
