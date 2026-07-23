/*
 * XREFs of ExpWorkerFactoryInitialization @ 0x140CED3E0
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     KeInitializeQueue @ 0x1404C58F0 (KeInitializeQueue.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     PsCreateSystemThread @ 0x140A78D90 (PsCreateSystemThread.c)
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
  WheapConfigTableLock.SavedApcState.Process = (_KPROCESS *)-1200000LL;
  WheapConfigTableLock.SavedApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)(-10000000LL * v0);
  *(_QWORD *)&WheapConfigTableLock.WaitBlockFill11[160] = -300000LL;
  if ( ((unsigned __int8)&ExpWorkerFactoryThreadCreationList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  ExpWorkerFactoryThreadCreationList = 0LL;
  KeInitializeQueue((PRKQUEUE)&WheapConfigTableLock.SavedApcStateFill[40], 0);
  *(_QWORD *)&WheapConfigTableLock.ThreadFlags2 = 9LL;
  WheapConfigTableLock.QueueListEntry.Blink = &WheapConfigTableLock.QueueListEntry;
  WheapConfigTableLock.QueueListEntry.Flink = &WheapConfigTableLock.QueueListEntry;
  *(_QWORD *)&WheapConfigTableLock.NextProcessor = 0LL;
  HIDWORD(WheapConfigTableLock.AffinityVersion) = 0;
  LOWORD(WheapConfigTableLock.AffinityVersion) = 0;
  BYTE3(WheapConfigTableLock.AffinityVersion) = 0;
  KeRegisterObjectNotification(
    (__int64)&WheapConfigTableLock.512,
    (__int64)&WheapConfigTableLock.SavedApcStateFill[40],
    (__int64)&WheapConfigTableLock.Affinity);
  *(_DWORD *)&WheapConfigTableLock.SchedulerApcFill5[56] = 0;
  memset_0(&v3, 0, 0x78uLL);
  v3 = 120;
  v9 = ExpCloseWorkerFactory;
  v4 = 256;
  v10 = ExpDeleteWorkerFactory;
  v7 = 512;
  v8 = 672;
  v5 = ExpWorkerFactoryMapping;
  v6 = 983295;
  v1 = ObCreateObjectType((const UNICODE_STRING *)&qword_140D1BB10, &v3, 0LL, (__int64)&ExpWorkerFactoryObjectType);
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
