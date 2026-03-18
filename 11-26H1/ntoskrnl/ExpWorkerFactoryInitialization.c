/*
 * XREFs of ExpWorkerFactoryInitialization @ 0x140CE7508
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     KeInitializeQueue @ 0x1404CBEC0 (KeInitializeQueue.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 *     PsCreateSystemThread @ 0x140A03420 (PsCreateSystemThread.c)
 */

__int64 ExpWorkerFactoryInitialization()
{
  int v0; // eax
  int v1; // ebx
  __int16 v3; // [rsp+40h] [rbp-29h] BYREF
  int v4; // [rsp+48h] [rbp-21h]
  __int128 v5; // [rsp+4Ch] [rbp-1Dh]
  int v6; // [rsp+5Ch] [rbp-Dh]
  int v7; // [rsp+64h] [rbp-5h]
  int v8; // [rsp+6Ch] [rbp+3h]
  __int64 (__fastcall *v9)(__int64, ULONG_PTR, __int64, __int64); // [rsp+80h] [rbp+17h]
  void (__fastcall *v10)(PVOID *); // [rsp+88h] [rbp+1Fh]
  HANDLE ThreadHandle; // [rsp+D0h] [rbp+67h] BYREF

  v0 = ExpWorkerFactoryThreadCreationTimeoutInSeconds;
  ThreadHandle = 0LL;
  if ( ExpWorkerFactoryThreadCreationTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadCreationTimeoutInSeconds > 0x258 )
    {
      v0 = 600;
      ExpWorkerFactoryThreadCreationTimeoutInSeconds = 600;
    }
  }
  else
  {
    v0 = 1;
    ExpWorkerFactoryThreadCreationTimeoutInSeconds = 1;
  }
  if ( ExpWorkerFactoryThreadIdleTimeoutInSeconds )
  {
    if ( (unsigned int)ExpWorkerFactoryThreadIdleTimeoutInSeconds > 0x258 )
      ExpWorkerFactoryThreadIdleTimeoutInSeconds = 600;
  }
  else
  {
    ExpWorkerFactoryThreadIdleTimeoutInSeconds = 1;
  }
  WheapConfigTableLock.WaitBlock[1].SparePtr = (PVOID)-1200000LL;
  WheapConfigTableLock.WaitBlock[1].Object = (PVOID)(-10000000LL * v0);
  WheapConfigTableLock.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)-300000LL;
  if ( ((unsigned __int8)&ExpWorkerFactoryThreadCreationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ExpWorkerFactoryThreadCreationList = 0LL;
  KeInitializeQueue((PRKQUEUE)&WheapConfigTableLock.Affinity, 0);
  WheapConfigTableLock.WaitBlock[2].Object = (PVOID)9;
  WheapConfigTableLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)&WheapConfigTableLock.WaitBlockFill11[136];
  WheapConfigTableLock.WaitBlock[2].SparePtr = &WheapConfigTableLock.WaitBlockFill11[136];
  WheapConfigTableLock.WaitBlock[3].WaitListEntry.Blink = 0LL;
  HIDWORD(WheapConfigTableLock.LastXStateSaveDebugInfo) = 0;
  LOWORD(WheapConfigTableLock.LastXStateSaveDebugInfo) = 0;
  BYTE3(WheapConfigTableLock.LastXStateSaveDebugInfo) = 0;
  KeRegisterObjectNotification(
    (__int64)&WheapConfigTableLock.WaitBlock[2].Object,
    (__int64)&WheapConfigTableLock.Affinity,
    (__int64)&WheapConfigTableLock.512);
  *(_DWORD *)&WheapConfigTableLock.SavedApcStateFill[40] = 0;
  memset_0(&v3, 0, 0x78uLL);
  v3 = 120;
  v9 = ExpCloseWorkerFactory;
  v4 = 256;
  v10 = ExpDeleteWorkerFactory;
  v7 = 512;
  v8 = 672;
  v5 = ExpWorkerFactoryMapping;
  v6 = 983295;
  v1 = ObCreateObjectType((const UNICODE_STRING *)&qword_140D15930, &v3, 0LL, (__int64)&ExpWorkerFactoryObjectType);
  if ( v1 >= 0 )
  {
    v1 = PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           0LL,
           0LL,
           0LL,
           (PKSTART_ROUTINE)ExpWorkerFactoryManagerThread,
           0LL);
    if ( v1 >= 0 )
      ZwClose(ThreadHandle);
  }
  return (unsigned int)v1;
}
