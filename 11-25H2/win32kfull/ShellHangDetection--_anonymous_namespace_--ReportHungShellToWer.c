/*
 * XREFs of ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer @ 0x14026C1C0
 * Callers:
 *     ?Execute@ShellHangDetection@@YAXXZ @ 0x14026C150 (-Execute@ShellHangDetection@@YAXXZ.c)
 * Callees:
 *     IsShellProcess @ 0x1401A7FD8 (IsShellProcess.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ShellHangDetection::_anonymous_namespace_::ReportHungShellToWer(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *StartContext; // rbx
  unsigned int ThreadId; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+80h] [rbp+8h] BYREF

  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(a1 + 464)) )
  {
    LODWORD(ThreadHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2396LL);
  }
  v2 = (_DWORD *)Win32AllocPoolNonPagedZInit(12LL, 1163359061LL);
  StartContext = v2;
  if ( v2 )
  {
    *v2 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 56LL);
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
    StartContext[2] = 1024;
    StartContext[1] = ThreadId;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ThreadHandle = 0LL;
    memset(&ObjectAttributes.RootDirectory, 0, 40);
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           0LL,
           lambda_ee4856d16542b31eb6609ee4cd7f16f7_::_lambda_invoker_cdecl_,
           StartContext) < 0 )
      Win32FreePool(StartContext);
    else
      ZwClose(ThreadHandle);
  }
}
