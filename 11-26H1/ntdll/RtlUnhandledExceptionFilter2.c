/*
 * XREFs of RtlUnhandledExceptionFilter2 @ 0x18011F2F0
 * Callers:
 *     RtlUserThreadStart @ 0x180086920 (RtlUserThreadStart.c)
 *     TppExceptionFilter @ 0x18011F28C (TppExceptionFilter.c)
 *     RtlUnhandledExceptionFilter @ 0x18011F2D0 (RtlUnhandledExceptionFilter.c)
 *     LdrpFatalExceptionFilter @ 0x18015B6E0 (LdrpFatalExceptionFilter.c)
 *     LdrpLogFatalUserCallbackException @ 0x18015D5C0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlIsAnyDebuggerPresent @ 0x180070E00 (RtlIsAnyDebuggerPresent.c)
 *     RtlReportException @ 0x18010BBF0 (RtlReportException.c)
 */

__int64 __fastcall RtlUnhandledExceptionFilter2(const void **a1)
{
  int v2; // edi
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r15
  const wchar_t *Buffer; // r15
  __int64 v5; // rdx
  unsigned int **v6; // rcx
  unsigned int *v7; // r12
  __int64 v8; // r12
  int v9; // r9d
  const void *v10; // r9
  __int64 v11; // rcx
  const char *v12; // rax
  const void *v13; // r9
  _WORD *v15; // [rsp+38h] [rbp-40h]

  v2 = 0;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  if ( ProcessParameters )
    Buffer = ProcessParameters->CommandLine.Buffer;
  else
    Buffer = L"<unknown>";
  if ( RtlIsAnyDebuggerPresent() )
  {
    v7 = *v6;
    if ( **v6 == -1073741819 )
    {
      DbgPrintEx(101, 0, "\n\n *** An Access Violation occurred in %ws:%s\n\n", Buffer, v5);
      v12 = "write to";
      if ( !*((_QWORD *)*a1 + 4) )
        v12 = "read from";
      DbgPrintEx(101, 0, "The instruction at %p tried to %s ", *((const void **)*a1 + 2), v12);
      v13 = (const void *)*((_QWORD *)*a1 + 5);
      if ( v13 )
        DbgPrintEx(101, 0, "an invalid address, %p\n\n", v13);
      else
        DbgPrintEx(101, 0, "a NULL pointer\n\n");
    }
    else
    {
      switch ( *v7 )
      {
        case 0xC0000006:
          DbgPrintEx(101, 0, "\n\n *** Inpage error in %ws:%s\n\n", Buffer, v5);
          DbgPrintEx(
            101,
            0,
            "The instruction at %p referenced memory at %p.\n",
            *((const void **)*a1 + 2),
            *((const void **)*a1 + 5));
          DbgPrintEx(101, 0, "This failed because of error %Ix.\n\n", *((_QWORD *)*a1 + 6));
          v11 = *((_QWORD *)*a1 + 6);
          switch ( v11 )
          {
            case -1073741670LL:
              DbgPrintEx(
                101,
                0,
                "This means the machine is out of memory.  Use !vm to see where all the memory is being used.\n\n");
              break;
            case -1073741668LL:
            case -1073741462LL:
              DbgPrintEx(
                101,
                0,
                "This means the data could not be read, typically because of a bad block on the disk.  Check your hardware.\n\n");
              break;
            case -1073741435LL:
              DbgPrintEx(101, 0, "This means that the I/O device reported an I/O error.  Check your hardware.");
              break;
          }
          break;
        case 0xC0000194:
          v8 = *((_QWORD *)v7 + 4);
          if ( v8 )
          {
            v15 = *(_WORD **)v8;
            if ( *(_QWORD *)v8 && **(_WORD **)v8 == 1 )
            {
              DbgPrintEx(101, 0, "\n\n *** Resource timeout (%p) in %ws:%s\n\n", v8, Buffer, v5, Buffer, v15);
              v9 = *(_DWORD *)(v8 + 68);
              if ( v9 >= 0 )
              {
                if ( v9 <= 0 )
                  DbgPrintEx(
                    101,
                    0,
                    "The resource is unowned.  This usually implies a slow-moving machine due to memory pressure\n\n");
                else
                  DbgPrintEx(101, 0, "The resource is owned shared by %d threads\n", v9);
              }
              else
              {
                DbgPrintEx(101, 0, "The resource is owned exclusively by thread %p\n", *(const void **)(v8 + 72));
              }
            }
            else
            {
              DbgPrintEx(101, 0, "\n\n *** Critical Section Timeout (%p) in %ws:%s\n\n", v8, Buffer, v5, Buffer, v15);
              v10 = *(const void **)(v8 + 16);
              if ( v10 )
              {
                DbgPrintEx(101, 0, "The critical section is owned by thread %p.\n", v10);
                DbgPrintEx(101, 0, "Go determine why that thread has not released the critical section.\n\n");
              }
              else
              {
                DbgPrintEx(
                  101,
                  0,
                  "The critical section is unowned.  This usually implies a slow-moving machine due to memory pressure\n"
                  "\n");
              }
            }
          }
          break;
        case 0xC0000409:
          DbgPrintEx(101, 0, "\n\n *** A stack buffer overrun occurred in %ws:%s\n\n", Buffer, v5);
          DbgPrintEx(
            101,
            0,
            "This is usually the result of a memory copy to a local buffer or structure where the size is not properly ca"
            "lculated/checked.\n");
          DbgPrintEx(101, 0, "If this bug ends up in the shipping product, it could be a severe security hole.\n");
          DbgPrintEx(
            101,
            0,
            "The stack trace should show the guilty function (the function directly above __report_gsfailure).\n");
          break;
        default:
          DbgPrintEx(101, 0, "\n\n *** Unhandled exception 0x%08lx, hit in %ws:%s\n\n", *v7, Buffer, v5, Buffer);
          break;
      }
    }
    DbgPrintEx(101, 0, " *** enter .exr %p for the exception record\n", *a1);
    if ( *(_DWORD *)*a1 != -1073740791 )
      DbgPrintEx(101, 0, " ***  enter .cxr %p for the context\n", a1[1]);
    DbgPrintEx(101, 0, " *** then kb to get the faulting stack\n\n");
    __debugbreak();
  }
  if ( *(_DWORD *)*a1 == -1073740791 )
    RtlReportException(*a1, a1[1], 0LL);
  LOBYTE(v2) = *(_DWORD *)*a1 != -1073741420;
  return (unsigned int)(v2 - 1);
}
