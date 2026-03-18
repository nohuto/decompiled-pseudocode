/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeBegin @ 0x140B0C394
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1407E2870 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagGetDeviceActiveStamp @ 0x140506A28 (PopDirectedDripsDiagGetDeviceActiveStamp.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x140B0C608 (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

void __fastcall PopDirectedDripsDiagBroadcastTreeBegin(
        __int64 a1,
        unsigned __int8 a2,
        __int64 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  __int64 DeviceDiagnostic; // rax
  __int64 v12; // rdi
  int v13; // esi
  struct _LIST_ENTRY *Blink; // rax
  __int64 Pool2; // rax
  __int64 v16; // rbx
  _KPROCESS *Process; // rax
  int v18; // eax

  *a3 = 0LL;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
      v7,
      (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v8);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  DeviceDiagnostic = PopDirectedDripsDiagGetOrCreateDeviceDiagnostic(a1);
  v12 = DeviceDiagnostic;
  if ( DeviceDiagnostic )
  {
    if ( *(_DWORD *)(DeviceDiagnostic + 148) == -1 )
      *(_DWORD *)(DeviceDiagnostic + 148) = HIDWORD(PopDirectedDripsUmLock.SuspendEvent.Header.WaitListHead.Blink)++;
    v13 = *(_DWORD *)(DeviceDiagnostic + 148);
    Blink = PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
    if ( (unsigned __int8 *)PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink == &PopDirectedDripsUmLock.ApcStateFill[24] )
      goto LABEL_10;
    do
    {
      v16 = (__int64)Blink;
      if ( LODWORD(Blink[2].Flink) == v13 )
        break;
      Blink = Blink->Flink;
      v16 = 0LL;
    }
    while ( Blink != (struct _LIST_ENTRY *)&PopDirectedDripsUmLock.ApcStateFill[24] );
    if ( !v16 )
    {
LABEL_10:
      Pool2 = ExAllocatePool2(0x100uLL);
      v16 = Pool2;
      if ( !Pool2 )
        goto LABEL_16;
      *(_DWORD *)(Pool2 + 32) = v13;
      *(_QWORD *)(Pool2 + 16) = v12;
      Process = PopDirectedDripsUmLock.ApcState.Process;
      if ( *(struct _KTHREAD **)PopDirectedDripsUmLock.ApcState.Process != (struct _KTHREAD *)&PopDirectedDripsUmLock.ApcStateFill[24] )
        __fastfail(3u);
      *(_QWORD *)v16 = &PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
      *(_QWORD *)(v16 + 8) = Process;
      *(_QWORD *)&Process->Header.Lock = v16;
      PopDirectedDripsUmLock.ApcState.Process = (_KPROCESS *)v16;
    }
    *(_QWORD *)(v16 + 48) = PopDirectedDripsDiagGetDeviceActiveStamp(*(_QWORD *)(a1 + 80));
    *(_DWORD *)(v16 + 36) = PopDirectedDripsUmLock.ThreadListEntry.Flink;
    v18 = *(_DWORD *)(v16 + 40);
    *a3 = v16;
    *(_DWORD *)(v16 + 40) = v18 ^ (a2 ^ (unsigned __int8)v18) & 0xF;
    *(_DWORD *)(v12 + 152) |= 0x60000u;
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
}
