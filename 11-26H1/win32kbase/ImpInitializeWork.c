/*
 * XREFs of ImpInitializeWork @ 0x1400BE40C
 * Callers:
 *     ImSessionStart @ 0x1400BDFF8 (ImSessionStart.c)
 * Callees:
 *     ImpCleanupLock @ 0x1400BD1D4 (ImpCleanupLock.c)
 *     ImpReleaseLock @ 0x1400BF30C (ImpReleaseLock.c)
 *     ImpAcquireLock @ 0x1400BF35C (ImpAcquireLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcAsyncUnInit @ 0x1400C0264 (ImpRpcAsyncUnInit.c)
 *     ImpInitializeLock @ 0x1400C0380 (ImpInitializeLock.c)
 *     ImpRpcAsyncInit @ 0x1400C0414 (ImpRpcAsyncInit.c)
 */

__int64 __fastcall ImpInitializeWork(PVOID Object, struct _KEVENT **a2)
{
  char v3; // si
  char v4; // r12
  struct _KEVENT *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 InputMonitorSessionState; // rdi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  struct _KEVENT *Pool2; // r15
  NTSTATUS v13; // ebx
  NTSTATUS v14; // eax
  PVOID v15; // r13
  struct _KEVENT **v16; // rax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+C0h] [rbp+48h] BYREF
  struct _KEVENT **v20; // [rsp+C8h] [rbp+50h]
  HANDLE ProcessHandle; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Objecta; // [rsp+D8h] [rbp+60h] BYREF

  v20 = a2;
  memset(&ObjectAttributes, 0, 44);
  v3 = 0;
  ProcessHandle = 0LL;
  v4 = 0;
  ThreadHandle = 0LL;
  v5 = 0LL;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  *(_QWORD *)(InputMonitorSessionState + 64) = InputMonitorSessionState + 56;
  *(_QWORD *)(InputMonitorSessionState + 56) = InputMonitorSessionState + 56;
  if ( !Object )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9);
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1836084809LL);
  if ( Pool2 && (v5 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1836084809LL)) != 0LL )
  {
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
    KeInitializeEvent(v5, SynchronizationEvent, 0);
    v13 = ObOpenObjectByPointer(Object, 0, 0LL, 2u, 0LL, 0, &ProcessHandle);
    if ( v13 >= 0 )
    {
      v13 = ImpInitializeLock(InputMonitorSessionState + 72);
      if ( v13 >= 0 )
      {
        v4 = 1;
        v13 = ImpRpcAsyncInit();
        if ( v13 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = 1;
          ObjectAttributes.Attributes = 512;
          ObjectAttributes.ObjectName = 0LL;
          ImpAcquireLock(InputMonitorSessionState + 72);
          v13 = PsCreateSystemThread(
                  &ThreadHandle,
                  0x1FFFFFu,
                  &ObjectAttributes,
                  ProcessHandle,
                  0LL,
                  ImpWorkerRoutine,
                  Pool2);
          if ( v13 >= 0 )
          {
            Objecta = 0LL;
            v14 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Objecta, 0LL);
            v15 = Objecta;
            v13 = v14;
            if ( v14 >= 0 )
            {
              *(_QWORD *)(InputMonitorSessionState + 24) = v5;
              *(_BYTE *)(InputMonitorSessionState + 48) = 1;
              v5 = 0LL;
              v3 = 0;
              *(_QWORD *)(InputMonitorSessionState + 32) = ThreadHandle;
              v16 = v20;
              *(_QWORD *)(InputMonitorSessionState + 40) = v15;
              ThreadHandle = 0LL;
              *v16 = Pool2;
              ImpReleaseLock(InputMonitorSessionState + 72);
              Pool2 = 0LL;
            }
            v4 = v3;
            if ( v15 )
              ObfDereferenceObject(v15);
          }
        }
      }
    }
  }
  else
  {
    v13 = -1073741670;
  }
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v3 )
    ImpReleaseLock(InputMonitorSessionState + 72);
  if ( v4 )
    ImpCleanupLock((PERESOURCE *)(InputMonitorSessionState + 72), v10, v11);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ImpRpcAsyncUnInit();
  return (unsigned int)v13;
}
