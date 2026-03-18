/*
 * XREFs of DpiCopyUnicodeString @ 0x14024AFA8
 * Callers:
 *     DpiGetDeviceRegistryPaths @ 0x140087478 (DpiGetDeviceRegistryPaths.c)
 *     DpiGdoSetupGdiParameters @ 0x14041B148 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int v2; // ebx
  wchar_t *Pool2; // rax

  v2 = 0;
  if ( DestinationString && SourceString && SourceString->MaximumLength && SourceString->Buffer )
  {
    Pool2 = (wchar_t *)ExAllocatePool2(256LL, SourceString->MaximumLength, 1953656900LL);
    DestinationString->Buffer = Pool2;
    if ( Pool2 )
    {
      DestinationString->MaximumLength = SourceString->MaximumLength;
      RtlCopyUnicodeString(DestinationString, SourceString);
    }
    else
    {
      v2 = -1073741801;
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 496;
    }
  }
  else
  {
    v2 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 477;
  }
  return v2;
}
