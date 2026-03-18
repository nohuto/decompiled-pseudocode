/*
 * XREFs of ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401F989C
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1401B9304 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall DxLddmLogProcessPrimaryLockCount(ULONG a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned int v3; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  PWSTR Buffer; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edx
  char *ErrorLogEntry; // rax
  char *v10; // rdi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _WORD Src[12]; // [rsp+50h] [rbp-20h] BYREF

  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = Src;
  if ( RtlIntegerToUnicodeString(a1, 0xAu, &String) >= 0 )
  {
    v1 = -1LL;
    v2 = -1LL;
    do
      ++v2;
    while ( Src[v2] );
    v3 = 2 * v2 + 2;
    UnicodeString = 0LL;
    DestinationString = 0LL;
    CurrentProcess = PsGetCurrentProcess(Src);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      do
        ++v1;
      while ( UnicodeString.Buffer[v1] );
      v7 = (unsigned int)(2 * v1 + 2);
      v8 = v3 + v7 + 40;
      if ( v8 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(gpWin32kDriverObject, v8);
        v10 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = 1073742069;
          *((_DWORD *)ErrorLogEntry + 1) = 2621442;
          memmove(ErrorLogEntry + 40, Buffer, (unsigned int)v7);
          memmove(&v10[v7 + 40], Src, v3);
          IoWriteErrorLogEntry(v10);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
