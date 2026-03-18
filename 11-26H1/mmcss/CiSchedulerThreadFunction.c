/*
 * XREFs of CiSchedulerThreadFunction @ 0x140001520
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerSetPriority @ 0x1400017E0 (CiSchedulerSetPriority.c)
 *     CiSchedulerWait @ 0x140001990 (CiSchedulerWait.c)
 *     CiSchedulerDeepSleep @ 0x1400021C0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerRemoveDeadline @ 0x1400026A0 (CiSchedulerRemoveDeadline.c)
 *     CiLogSchedulerWakeup @ 0x140003F70 (CiLogSchedulerWakeup.c)
 *     WPP_SF_ @ 0x1400043B0 (WPP_SF_.c)
 */

void __fastcall CiSchedulerThreadFunction(struct _KEVENT *StartContext)
{
  PVOID *p_Reserved; // rbp
  struct _KTHREAD *CurrentThread; // rax
  char v4; // di
  int v5; // r14d
  unsigned __int64 v6; // rcx
  unsigned int v7; // r15d
  struct _DEVICE_OBJECT *SystemArgument1; // rbx
  struct _DEVICE_OBJECT *NextDevice; // rsi
  __int64 i; // rdi
  char v11; // bl
  unsigned __int8 v12; // al
  bool v13; // zf
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 **v18; // rdx
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  p_Reserved = 0LL;
  if ( byte_14000A0F0 )
    CiLogSchedulerWakeup(1LL);
  CurrentThread = KeGetCurrentThread();
  v4 = 1;
  CiThreadsMovedUp = 1;
  CiSchedulerThread = CurrentThread;
  CiSchedulerInLazyMode = 0;
  KeSetActualBasePriorityThread(CurrentThread, 27LL);
  KeSetEvent(StartContext, 0, 0);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 15LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  v19 = 0;
  do
  {
    v5 = 0;
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    v7 = 0;
    SystemArgument1 = (struct _DEVICE_OBJECT *)WPP_MAIN_CB.Dpc.SystemArgument1;
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( CiThreadsMovedUp = v4;
          SystemArgument1 != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.SystemArgument1;
          SystemArgument1 = *(struct _DEVICE_OBJECT **)&SystemArgument1->Type )
    {
      p_Reserved = &SystemArgument1[-1].Reserved;
      NextDevice = SystemArgument1->NextDevice;
      for ( i = (__int64)&SystemArgument1->NextDevice; NextDevice != (struct _DEVICE_OBJECT *)i; v7 = v15 )
      {
        v12 = CiSchedulerSetPriority(&NextDevice[-1].Dpc.DpcData);
        NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
        v6 = v12;
        v13 = v12 == 0;
        v14 = v5 + 1;
        if ( v13 )
          v14 = v5;
        v5 = v14;
        v15 = v7 + 1;
        if ( v13 )
          v15 = v7;
      }
    }
    if ( CiThreadsMovedUp && v7 > 1 )
    {
      v16 = (unsigned __int64 *)p_Reserved[4];
      v6 = (unsigned __int64)(p_Reserved + 4);
      if ( (PVOID *)v16[1] != p_Reserved + 4
        || (v17 = *v16, *(unsigned __int64 **)(*v16 + 8) != v16)
        || (*(_QWORD *)v6 = v17,
            *(_QWORD *)(v17 + 8) = v6,
            v18 = (unsigned __int64 **)p_Reserved[5],
            *v18 != (unsigned __int64 *)v6) )
      {
        __fastfail(3u);
      }
      *v16 = v6;
      v16[1] = (unsigned __int64)v18;
      *v18 = v16;
      p_Reserved[5] = v16;
    }
    if ( v5 )
    {
      v4 = CiSchedulerWait(v6, &v19);
    }
    else
    {
      v4 = 1;
      CiThreadsMovedUp = 1;
      CiSchedulerInLazyMode = 1;
      CiSchedulerRemoveDeadline(&WPP_MAIN_CB.Reserved);
      WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
      CiSchedulerDeepSleep(&v19);
    }
    v11 = v19;
    if ( byte_14000A0F0 )
      CiLogSchedulerWakeup(v19);
  }
  while ( (v11 & 8) == 0 );
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_e00c2d44edf236fb41cafbc4576a8546_Traceguids);
  PsTerminateSystemThread(0);
}
