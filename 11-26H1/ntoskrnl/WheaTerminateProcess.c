/*
 * XREFs of WheaTerminateProcess @ 0x14084E8F0
 * Callers:
 *     KiMcheckAlternateReturn @ 0x1405FF7C0 (KiMcheckAlternateReturn.c)
 * Callees:
 *     PsGetProcessId @ 0x140460330 (PsGetProcessId.c)
 *     WheaGetCurrentProcessName @ 0x1406D9DD0 (WheaGetCurrentProcessName.c)
 *     WheapLogProcessTerminateEvent @ 0x1406DB58C (WheapLogProcessTerminateEvent.c)
 *     PsTerminateProcess @ 0x14094A334 (PsTerminateProcess.c)
 */

__int64 WheaTerminateProcess()
{
  struct _KPROCESS *Process; // rdi
  int v1; // ebx
  int ProcessId; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  WheaGetCurrentProcessName((void **)&v5, (unsigned int *)&v4);
  v1 = PsTerminateProcess(Process, 3221227283LL);
  if ( v1 >= 0 )
  {
    ProcessId = (unsigned int)PsGetProcessId(Process);
    WheapLogProcessTerminateEvent(ProcessId, v5, v4);
  }
  return (unsigned int)v1;
}
