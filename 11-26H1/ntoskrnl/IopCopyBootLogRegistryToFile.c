/*
 * XREFs of IopCopyBootLogRegistryToFile @ 0x1407946FC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExSystemTimeToLocalTime @ 0x140215090 (ExSystemTimeToLocalTime.c)
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlTimeToTimeFields @ 0x140451D20 (RtlTimeToTimeFields.c)
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfA @ 0x14051055C (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwDeleteKey @ 0x140724F70 (ZwDeleteKey.c)
 *     IopBootLogToFile @ 0x1407941C4 (IopBootLogToFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140A007C0 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x140A121A8 (IopGetRegistryValue.c)
 *     RtlCreateUnicodeString @ 0x140A70410 (RtlCreateUnicodeString.c)
 *     IopOpenRegistryKey @ 0x140B1C920 (IopOpenRegistryKey.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

_QWORD *IopCopyBootLogRegistryToFile()
{
  _QWORD *result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int i; // ebx
  int RegistryValue; // eax
  void *QuadPart; // rdi
  PUNICODE_STRING v5; // rcx
  __int64 v6; // rdx
  int v7; // [rsp+28h] [rbp-E0h]
  int v8; // [rsp+28h] [rbp-E0h]
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE TimeFields; // [rsp+68h] [rbp-A0h] BYREF
  TIME_FIELDS TimeFields_8; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString_8; // [rsp+80h] [rbp-88h] BYREF
  STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  UNICODE_STRING v15; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING v16; // [rsp+B0h] [rbp-58h] BYREF
  char pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  wchar_t SourceString[256]; // [rsp+1C8h] [rbp+C0h] BYREF
  _UNKNOWN *retaddr; // [rsp+3E0h] [rbp+2D8h] BYREF

  result = &retaddr;
  KeyHandle = 0LL;
  v15 = 0LL;
  TimeFields = 0LL;
  TimeFields_8 = 0LL;
  LocalTime.QuadPart = 0LL;
  DestinationString = 0LL;
  UnicodeString_8 = 0LL;
  v16 = 0LL;
  if ( qword_140FD5028 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140FD5028[4], 1u);
    IopBootLogToFile(&qword_140FD5028[3].Length);
    ExSystemTimeToLocalTime(&KeBootTime, &LocalTime);
    RtlTimeToTimeFields(&LocalTime, &TimeFields_8);
    RtlStringCchPrintfA(
      pszDest,
      0x100uLL,
      "%2d %2d %4d %02d:%02d:%02d.%03d\r\n",
      TimeFields_8.Month,
      TimeFields_8.Day,
      TimeFields_8.Year,
      TimeFields_8.Hour,
      TimeFields_8.Minute,
      TimeFields_8.Second,
      TimeFields_8.Milliseconds);
    RtlInitAnsiString(&DestinationString, pszDest);
    RtlAnsiStringToUnicodeString(&UnicodeString_8, &DestinationString, 1u);
    IopBootLogToFile(&UnicodeString_8.Length);
    RtlFreeAnsiString(&UnicodeString_8);
    LOBYTE(v7) = 0;
    if ( (int)IopOpenRegistryKey(&TimeFields, 0LL, &KiSystemServiceTraceCallbackLock.152, 983103LL, v7) < 0 )
    {
      v5 = qword_140FD5028;
    }
    else
    {
      for ( i = 0; i < LODWORD(qword_140FD5028[10].Buffer); ++i )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%d", i);
        RtlCreateUnicodeString(&v15, SourceString);
        LOBYTE(v8) = 0;
        if ( (int)IopOpenRegistryKey(&KeyHandle, TimeFields, &v15, 983103LL, v8) >= 0 )
        {
          LocalTime.QuadPart = 0LL;
          RegistryValue = IopGetRegistryValue(KeyHandle);
          QuadPart = (void *)LocalTime.QuadPart;
          if ( RegistryValue >= 0 )
          {
            RtlInitUnicodeString(&v16, (PCWSTR)(LocalTime.QuadPart + *(unsigned int *)(LocalTime.QuadPart + 8)));
            IopBootLogToFile(&v16.Length);
          }
          ExFreePoolWithTag(QuadPart, 0);
          ZwDeleteKey(KeyHandle);
          ZwClose(KeyHandle);
        }
      }
      ZwDeleteKey(TimeFields);
      ZwClose(TimeFields);
      v5 = qword_140FD5028;
      BYTE4(qword_140FD5028[10].Buffer) = 1;
    }
    ExReleaseResourceLite((PERESOURCE)&v5[4]);
    return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v6);
  }
  return result;
}
