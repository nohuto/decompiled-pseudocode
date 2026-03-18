/*
 * XREFs of IopBootLog @ 0x140A27974
 * Callers:
 *     IopBootLogDriver @ 0x1405CA670 (IopBootLogDriver.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x140A26FC4 (IopLoadDriver.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     RtlCopyUnicodeString @ 0x140419A90 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x140432F70 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x1404B0AA4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 *     IopBootLogToFile @ 0x1407941C4 (IopBootLogToFile.c)
 *     IopOpenRegistryKey @ 0x140B1C920 (IopOpenRegistryKey.c)
 */

void __fastcall IopBootLog(PCUNICODE_STRING Source, char a2)
{
  const UNICODE_STRING *v4; // rdx
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rdi
  int Data; // [rsp+28h] [rbp-E0h]
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING Sourcea; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING v10; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v11; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING ValueName; // [rsp+78h] [rbp-90h] BYREF
  wchar_t pszDest[256]; // [rsp+88h] [rbp-80h] BYREF
  char v14; // [rsp+288h] [rbp+180h] BYREF

  *(_QWORD *)&DestinationString.Length = 0x1000000LL;
  DestinationString.Buffer = (wchar_t *)&v14;
  v11 = 0LL;
  ValueName = 0LL;
  v10 = 0LL;
  Sourcea = 0LL;
  if ( qword_140FD5028 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)&qword_140FD5028[4], 1u);
    v4 = qword_140FD5028;
    if ( !a2 )
      v4 = qword_140FD5028 + 1;
    RtlCopyUnicodeString(&DestinationString, v4);
    RtlInitUnicodeString(&Sourcea, L" ");
    RtlAppendUnicodeStringToString(&DestinationString, &Sourcea);
    RtlAppendUnicodeStringToString(&DestinationString, Source);
    RtlInitUnicodeString(&v10, L"\r\n");
    RtlAppendUnicodeStringToString(&DestinationString, &v10);
    Length = DestinationString.Length;
    Buffer = DestinationString.Buffer;
    if ( DestinationString.Length == DestinationString.MaximumLength )
    {
      Length = DestinationString.Length - 2;
      DestinationString.Length = Length;
      DestinationString.Buffer[(unsigned __int64)Length >> 1] = 0;
    }
    ++LODWORD(qword_140FD5028[10].Buffer);
    RtlStringCchPrintfW(pszDest, 0x100uLL, L"%d");
    RtlInitUnicodeString(&v11, pszDest);
    RtlInitUnicodeString(&ValueName, &word_140B814F0);
    if ( BYTE4(qword_140FD5028[10].Buffer) )
    {
      IopBootLogToFile(&DestinationString.Length);
    }
    else
    {
      *(_QWORD *)&Sourcea.Length = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      if ( (int)IopOpenRegistryKey(&DestinationString, 0LL, &KiSystemServiceTraceCallbackLock.152, 983103LL, 1) >= 0 )
      {
        LOBYTE(Data) = 1;
        if ( (int)IopOpenRegistryKey(&Sourcea, *(_QWORD *)&DestinationString.Length, &v11, 983103LL, Data) >= 0 )
        {
          ZwSetValueKey(*(HANDLE *)&Sourcea.Length, &ValueName, 0, 1u, Buffer, Length + 2);
          ZwClose(*(HANDLE *)&Sourcea.Length);
        }
        ZwClose(*(HANDLE *)&DestinationString.Length);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&qword_140FD5028[4]);
  }
}
