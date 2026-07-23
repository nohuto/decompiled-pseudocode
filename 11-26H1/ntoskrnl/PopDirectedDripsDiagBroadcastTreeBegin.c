/*
 * XREFs of PopDirectedDripsDiagBroadcastTreeBegin @ 0x140B0DD88
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x1407E7900 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PopDirectedDripsDiagGetDeviceActiveStamp @ 0x1405002D8 (PopDirectedDripsDiagGetDeviceActiveStamp.c)
 *     PopDirectedDripsDiagGetOrCreateDeviceDiagnostic @ 0x140B0DFFC (PopDirectedDripsDiagGetOrCreateDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall PopDirectedDripsDiagBroadcastTreeBegin(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 *a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v7; // rax
  void *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rbx
  __int64 DeviceDiagnostic; // rax
  __int64 v12; // rdi
  int v13; // esi
  void **SListFaultAddress; // rax
  __int64 Pool2; // rax
  unsigned __int64 v16; // rbx
  _QWORD *QuantumTarget; // rax
  int v18; // eax

  *a3 = 0LL;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&PopDirectedDripsDiagLock, v7, (__int64)&PopDirectedDripsDiagLock);
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
      *(_DWORD *)(DeviceDiagnostic + 148) = (*(_DWORD *)&PopDirectedDripsDiagLock.SavedApcStateFill[4])++;
    v13 = *(_DWORD *)(DeviceDiagnostic + 148);
    SListFaultAddress = (void **)PopDirectedDripsDiagLock.SListFaultAddress;
    if ( PopDirectedDripsDiagLock.SListFaultAddress == &PopDirectedDripsDiagLock.SListFaultAddress )
      goto LABEL_10;
    do
    {
      v16 = (unsigned __int64)SListFaultAddress;
      if ( *((_DWORD *)SListFaultAddress + 8) == v13 )
        break;
      SListFaultAddress = (void **)*SListFaultAddress;
      v16 = 0LL;
    }
    while ( SListFaultAddress != &PopDirectedDripsDiagLock.SListFaultAddress );
    if ( !v16 )
    {
LABEL_10:
      Pool2 = ExAllocatePool2(0x100uLL);
      v16 = Pool2;
      if ( !Pool2 )
        goto LABEL_16;
      *(_DWORD *)(Pool2 + 32) = v13;
      *(_QWORD *)(Pool2 + 16) = v12;
      QuantumTarget = (_QWORD *)PopDirectedDripsDiagLock.QuantumTarget;
      if ( *(struct _KTHREAD **)PopDirectedDripsDiagLock.QuantumTarget != (struct _KTHREAD *)&PopDirectedDripsDiagLock.SListFaultAddress )
        __fastfail(3u);
      *(_QWORD *)v16 = &PopDirectedDripsDiagLock.SListFaultAddress;
      *(_QWORD *)(v16 + 8) = QuantumTarget;
      *QuantumTarget = v16;
      PopDirectedDripsDiagLock.QuantumTarget = v16;
    }
    *(_QWORD *)(v16 + 48) = PopDirectedDripsDiagGetDeviceActiveStamp(*(_QWORD *)(a1 + 80));
    *(_DWORD *)(v16 + 36) = *(_DWORD *)&PopDirectedDripsDiagLock.SavedApcStateFill[8];
    v18 = *(_DWORD *)(v16 + 40);
    *a3 = v16;
    *(_DWORD *)(v16 + 40) = v18 ^ (a2 ^ (unsigned __int8)v18) & 0xF;
    *(_DWORD *)(v12 + 152) |= 0x60000u;
  }
LABEL_16:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
}
