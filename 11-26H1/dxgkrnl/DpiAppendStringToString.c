/*
 * XREFs of DpiAppendStringToString @ 0x14024ADF8
 * Callers:
 *     DpiPdoHandleQueryId @ 0x1404007B0 (DpiPdoHandleQueryId.c)
 *     DpiGdoSetupGdiParameters @ 0x14041B148 (DpiGdoSetupGdiParameters.c)
 * Callees:
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x14005DFB8 (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DpiAppendStringToString(PCWSTR Source, unsigned __int16 *a2, PUNICODE_STRING UnicodeString)
{
  NTSTATUS appended; // ebx
  unsigned __int64 v7; // r11
  size_t v8; // rbx
  wchar_t *Pool2; // rax
  unsigned __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v11[0] = 0LL;
  appended = RtlStringCbLengthW(Source, 0x208uLL, &v12);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 380;
LABEL_11:
    RtlFreeUnicodeString(UnicodeString);
    return (unsigned int)appended;
  }
  appended = RtlStringCbLengthW(a2, v7, v11);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 391;
    goto LABEL_11;
  }
  v8 = (unsigned __int16)(LOWORD(v11[0]) + v12 + 2);
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v8, 1953656900LL);
  UnicodeString->Buffer = Pool2;
  if ( !Pool2 )
  {
    appended = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 408;
    goto LABEL_11;
  }
  UnicodeString->Length = 0;
  UnicodeString->MaximumLength = v8;
  memset(Pool2, 0, v8);
  appended = RtlAppendUnicodeToString(UnicodeString, Source);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 427;
    goto LABEL_11;
  }
  appended = RtlAppendUnicodeToString(UnicodeString, a2);
  if ( appended < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 438;
    goto LABEL_11;
  }
  return (unsigned int)appended;
}
