/*
 * XREFs of ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1401D01E4
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1400853A8 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall DxLddmLogProcessPrimaryLockCount(ULONG a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // r14d
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  PWSTR Buffer; // rsi
  __int64 v8; // rbx
  unsigned int v9; // edx
  char *ErrorLogEntry; // rax
  char *v11; // rdi
  struct _UNICODE_STRING String; // [rsp+20h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _WORD Src[12]; // [rsp+50h] [rbp-20h] BYREF

  *(_QWORD *)&String.Length = 1441792LL;
  String.Buffer = Src;
  if ( RtlIntegerToUnicodeString(a1, 0xAu, &String) >= 0 )
  {
    v2 = -1LL;
    v3 = -1LL;
    do
      ++v3;
    while ( Src[v3] );
    v4 = 2 * v3 + 2;
    UnicodeString = 0LL;
    DestinationString = 0LL;
    CurrentProcess = PsGetCurrentProcess(Src, v1);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    RtlInitAnsiString(&DestinationString, ProcessImageFileName);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      do
        ++v2;
      while ( UnicodeString.Buffer[v2] );
      v8 = (unsigned int)(2 * v2 + 2);
      v9 = v4 + v8 + 40;
      if ( v9 <= 0xF0 )
      {
        ErrorLogEntry = (char *)IoAllocateErrorLogEntry(gpWin32kDriverObject, v9);
        v11 = ErrorLogEntry;
        if ( ErrorLogEntry )
        {
          *((_DWORD *)ErrorLogEntry + 3) = 1073742069;
          *((_DWORD *)ErrorLogEntry + 1) = 2621442;
          memmove(ErrorLogEntry + 40, Buffer, (unsigned int)v8);
          memmove(&v11[v8 + 40], Src, v4);
          IoWriteErrorLogEntry(v11);
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
}
