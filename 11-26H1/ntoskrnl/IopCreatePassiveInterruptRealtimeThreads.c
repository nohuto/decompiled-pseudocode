/*
 * XREFs of IopCreatePassiveInterruptRealtimeThreads @ 0x1407A65D8
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall IopCreatePassiveInterruptRealtimeThreads(void *a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  __int64 v4; // r8
  _QWORD v5[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v6; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+90h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  Object = a1;
  v5[0] = 48LL;
  Handle = 0LL;
  v5[1] = 0LL;
  v1 = 0;
  v5[2] = 0LL;
  v6 = 0LL;
  v5[3] = 512LL;
  while ( v1 < (unsigned __int8)PassiveInterruptRealtimeWorkerCount )
  {
    result = PsCreateSystemThreadEx(
               &Handle,
               0x1FFFFFLL,
               v5,
               0LL,
               0LL,
               IopPassiveInterruptRealtimeWorker,
               &PassiveInterruptRealtimeWorkQueue,
               0LL,
               0LL);
    if ( (int)result < 0 )
      return result;
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
    ZwClose(Handle);
    if ( v3 >= 0 )
    {
      KeSetActualBasePriorityThread((__int64)Object, (unsigned __int8)PassiveInterruptRealtimeWorkerPriority, v4);
      ObfDereferenceObject(Object);
    }
    ++v1;
  }
  return 0LL;
}
