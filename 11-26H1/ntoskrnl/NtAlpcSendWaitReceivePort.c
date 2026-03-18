/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x1408F9100
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     DifNtAlpcSendWaitReceivePortWrapper @ 0x14066D660 (DifNtAlpcSendWaitReceivePortWrapper.c)
 * Callees:
 *     AlpcpSignal @ 0x1402648EC (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     AlpcpProcessSynchronousRequest @ 0x1408F7730 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1408F806C (AlpcpReceiveMessage.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x1409BD2F0 (AlpcpSendMessage.c)
 */

__int64 __fastcall NtAlpcSendWaitReceivePort(
        void *a1,
        int a2,
        ULONG_PTR a3,
        struct _KLOCK_ENTRIES *a4,
        char *Address,
        __int64 *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v11; // ebx
  unsigned __int8 PreviousMode; // r15
  __int64 v13; // rdx
  int v14; // edi
  __int64 v15; // r8
  struct _KLOCK_ENTRIES *v16; // r9
  PVOID v17; // rsi
  signed __int32 v18; // ebp
  signed __int8 v19; // cf
  AutoBoost *v21; // rax
  void *v22; // rdx
  AutoBoost *v23; // rcx
  struct _KEVENT *v24; // rcx
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  __int128 v26; // [rsp+60h] [rbp-68h] BYREF
  __int128 v27; // [rsp+70h] [rbp-58h]
  __int128 v28; // [rsp+80h] [rbp-48h]
  __int128 v29; // [rsp+90h] [rbp-38h] BYREF

  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = a2 & 0xFFFF0000;
  Object = 0LL;
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v14 = ObReferenceObjectByHandle(a1, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v17 = Object;
    if ( (v11 & 0x40000) != 0 )
    {
      v18 = _InterlockedIncrement((volatile signed __int32 *)Object + 101);
      if ( *((_QWORD *)v17 + 51) )
      {
        v21 = (AutoBoost *)KeAbPreAcquire((__int64)v17 + 352, 0LL, 0LL, v16);
        v19 = _interlockedbittestandset64((volatile signed __int32 *)v17 + 88, 0LL);
        v23 = v21;
        Object = v21;
        if ( v19 )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v17 + 44, v21, (__int64)v17 + 352);
          v23 = (AutoBoost *)Object;
        }
        if ( v23 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v23, v22);
          else
            *((_BYTE *)v23 + 10) = 1;
        }
        v24 = (struct _KEVENT *)*((_QWORD *)v17 + 51);
        if ( v24 && v18 == v24[1].Header.LockNV )
          KeSetEvent(v24, 0, 0);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v17 + 44);
        KeAbPostRelease((unsigned __int64)v17 + 352);
      }
    }
    if ( (v11 & 0x20000) != 0 )
    {
      if ( a3 && (v11 & 0x10000) == 0 && (v11 & 0x1000000) == 0 )
      {
        if ( Address )
          v14 = AlpcpProcessSynchronousRequest(v17, v11, a3, a4, Address, a6, (unsigned __int64)a7, a8, PreviousMode);
        else
          v14 = -1073740027;
        goto LABEL_16;
      }
    }
    else
    {
      *(_QWORD *)&v26 = v17;
      LODWORD(v29) = v11;
      if ( !a3 )
      {
LABEL_6:
        if ( Address )
          v14 = AlpcpReceiveMessage((__int64)&v26, (unsigned __int64)Address, a6, a7, a8);
        v19 = _bittestandreset((signed __int32 *)&v29, 2u);
        if ( v19 )
        {
          AlpcpSignal((__int64)&v26, 0, (v29 & 0x400000) != 0, (char)v16);
          if ( (_QWORD)v28 )
            ObfDereferenceObject((PVOID)v28);
        }
        goto LABEL_16;
      }
      if ( (v11 & 0x1000000) == 0 )
      {
        v28 = 0uLL;
        LODWORD(v29) = v11 | 4;
        *((_QWORD *)&v27 + 1) = 0LL;
        v14 = AlpcpSendMessage(&v26, a3, a4, PreviousMode);
        if ( v14 >= 0 )
          goto LABEL_6;
LABEL_16:
        ObfDereferenceObject(v17);
        goto LABEL_17;
      }
    }
    v14 = -1073741584;
    goto LABEL_16;
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v15);
  return (unsigned int)v14;
}
