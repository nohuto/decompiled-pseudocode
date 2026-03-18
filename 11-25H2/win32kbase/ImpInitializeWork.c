/*
 * XREFs of ImpInitializeWork @ 0x14013882C
 * Callers:
 *     ImSessionStart @ 0x140138500 (ImSessionStart.c)
 * Callees:
 *     ImpAcquireLock @ 0x140088964 (ImpAcquireLock.c)
 *     ImpReleaseLock @ 0x1400889B8 (ImpReleaseLock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ImpRpcAsyncInit @ 0x140138B2C (ImpRpcAsyncInit.c)
 *     ImpInitializeLock @ 0x140138C58 (ImpInitializeLock.c)
 *     ImpRpcAsyncUnInit @ 0x14014DC74 (ImpRpcAsyncUnInit.c)
 *     ImpCleanupLock @ 0x140152118 (ImpCleanupLock.c)
 */

__int64 __fastcall ImpInitializeWork(PVOID Object, struct _KEVENT **a2)
{
  char v3; // r12
  char v4; // r15
  struct _KEVENT *v5; // rsi
  __int64 InputMonitorSessionState; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KEVENT *Pool2; // r14
  NTSTATUS v10; // ebx
  NTSTATUS v11; // eax
  PVOID v12; // r15
  PVOID v14; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  char v16; // [rsp+D0h] [rbp+67h]
  void *ThreadHandle; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE ProcessHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  ProcessHandle = 0LL;
  ThreadHandle = 0LL;
  v3 = 0;
  memset(&ObjectAttributes, 0, 44);
  v4 = 0;
  v5 = 0LL;
  InputMonitorSessionState = W32GetInputMonitorSessionState();
  if ( !InputMonitorSessionState )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  *(_QWORD *)(InputMonitorSessionState + 64) = InputMonitorSessionState + 56;
  *(_QWORD *)(InputMonitorSessionState + 56) = InputMonitorSessionState + 56;
  if ( !Object )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1836084809LL);
  if ( Pool2 && (v5 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1836084809LL)) != 0LL )
  {
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
    KeInitializeEvent(v5, SynchronizationEvent, 0);
    v10 = ObOpenObjectByPointer(Object, 0, 0LL, 2u, 0LL, 0, &ProcessHandle);
    if ( v10 >= 0 )
    {
      v10 = ImpInitializeLock(InputMonitorSessionState + 72);
      if ( v10 >= 0 )
      {
        v4 = 1;
        v16 = 1;
        v10 = ImpRpcAsyncInit();
        if ( v10 >= 0 )
        {
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = 1;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 512;
          ImpAcquireLock(InputMonitorSessionState + 72);
          v10 = PsCreateSystemThread(
                  &ThreadHandle,
                  0x1FFFFFu,
                  &ObjectAttributes,
                  ProcessHandle,
                  0LL,
                  (PKSTART_ROUTINE)ImpWorkerRoutine,
                  Pool2);
          if ( v10 >= 0 )
          {
            v14 = 0LL;
            v11 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &v14, 0LL);
            v12 = v14;
            v10 = v11;
            if ( v11 >= 0 )
            {
              *(_QWORD *)(InputMonitorSessionState + 24) = v5;
              *(_BYTE *)(InputMonitorSessionState + 48) = 1;
              v5 = 0LL;
              v3 = 0;
              *(_QWORD *)(InputMonitorSessionState + 32) = ThreadHandle;
              *(_QWORD *)(InputMonitorSessionState + 40) = v12;
              ThreadHandle = 0LL;
              v16 = 0;
              *a2 = Pool2;
              ImpReleaseLock(InputMonitorSessionState + 72, v7, v8);
              Pool2 = 0LL;
            }
            if ( v12 )
              ObfDereferenceObject(v12);
            v4 = v16;
          }
        }
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  if ( ThreadHandle )
    ZwClose(ThreadHandle);
  if ( ProcessHandle )
    ZwClose(ProcessHandle);
  if ( v3 )
    ImpReleaseLock(InputMonitorSessionState + 72, v7, v8);
  if ( v4 )
    ImpCleanupLock(InputMonitorSessionState + 72);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v3 )
    ImpRpcAsyncUnInit();
  return (unsigned int)v10;
}
