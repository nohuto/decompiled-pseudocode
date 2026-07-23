/*
 * XREFs of RtlUserThreadStart @ 0x18007DCC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlDecodePointer @ 0x180037B50 (RtlDecodePointer.c)
 *     RtlExitUserThread @ 0x18007DD10 (RtlExitUserThread.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F0A0 (RtlUnhandledExceptionFilter2.c)
 *     ZwTerminateProcess @ 0x18015F3C0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS v2; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    v2 = ((__int64 (__fastcall *)(PVOID))Function)(Parameter);
    RtlExitUserThread(v2);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID, PTHREAD_START_ROUTINE))Kernel32ThreadInitThunkFunction)(
    0LL,
    Function,
    Parameter,
    Function);
}
