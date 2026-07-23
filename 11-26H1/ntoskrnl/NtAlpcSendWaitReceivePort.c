/*
 * XREFs of NtAlpcSendWaitReceivePort @ 0x140929090
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14037E9F0 (NtWaitForWorkViaWorkerFactory.c)
 *     DifNtAlpcSendWaitReceivePortWrapper @ 0x140671240 (DifNtAlpcSendWaitReceivePortWrapper.c)
 * Callees:
 *     AlpcpSignal @ 0x140263E5C (AlpcpSignal.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpSendMessage @ 0x14098E2D0 (AlpcpSendMessage.c)
 */

NTSTATUS __cdecl NtAlpcSendWaitReceivePort(
        HANDLE PortHandle,
        ULONG Flags,
        PPORT_MESSAGE SendMessageA,
        PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
        PPORT_MESSAGE ReceiveMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG v11; // ebx
  unsigned __int8 PreviousMode; // r15
  NTSTATUS v13; // edi
  struct _KLOCK_ENTRIES *v14; // r9
  PVOID v15; // rsi
  signed __int32 v16; // ebp
  signed __int8 v17; // cf
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // rcx
  struct _KEVENT *v22; // rcx
  PVOID Object; // [rsp+50h] [rbp-78h] BYREF
  __int128 v24; // [rsp+60h] [rbp-68h] BYREF
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+80h] [rbp-48h]
  __int128 v27; // [rsp+90h] [rbp-38h] BYREF

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = Flags & 0xFFFF0000;
  Object = 0LL;
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v13 = ObReferenceObjectByHandle(PortHandle, 1u, AlpcPortObjectType, PreviousMode, &Object, 0LL);
  if ( v13 >= 0 )
  {
    v15 = Object;
    if ( (v11 & 0x40000) != 0 )
    {
      v16 = _InterlockedIncrement((volatile signed __int32 *)Object + 101);
      if ( *((_QWORD *)v15 + 51) )
      {
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)v15 + 352, 0LL, 0LL, v14);
        v17 = _interlockedbittestandset64((volatile signed __int32 *)v15 + 88, 0LL);
        v21 = v19;
        Object = v19;
        if ( v17 )
        {
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v15 + 44, v19, (__int64)v15 + 352);
          v21 = (AutoBoost *)Object;
        }
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
            AutoBoost::KiAbpPostAcquire(v21, v20);
          else
            *((_BYTE *)v21 + 10) = 1;
        }
        v22 = (struct _KEVENT *)*((_QWORD *)v15 + 51);
        if ( v22 && v16 == v22[1].Header.LockNV )
          KeSetEvent(v22, 0, 0);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v15 + 44);
        KeAbPostRelease((unsigned __int64)v15 + 352);
      }
    }
    if ( (v11 & 0x20000) != 0 )
    {
      if ( SendMessageA && (v11 & 0x10000) == 0 && (v11 & 0x1000000) == 0 )
      {
        if ( ReceiveMessage )
          v13 = AlpcpProcessSynchronousRequest(
                  v15,
                  v11,
                  (ULONG_PTR)SendMessageA,
                  (struct _KLOCK_ENTRIES *)SendMessageAttributes,
                  (char *)ReceiveMessage,
                  (__int64 *)BufferLength,
                  (unsigned __int64)ReceiveMessageAttributes,
                  Timeout,
                  PreviousMode);
        else
          v13 = -1073740027;
        goto LABEL_16;
      }
    }
    else
    {
      *(_QWORD *)&v24 = v15;
      LODWORD(v27) = v11;
      if ( !SendMessageA )
      {
LABEL_6:
        if ( ReceiveMessage )
          v13 = AlpcpReceiveMessage(
                  (__int64)&v24,
                  (unsigned __int64)ReceiveMessage,
                  BufferLength,
                  (unsigned int *)ReceiveMessageAttributes,
                  Timeout);
        v17 = _bittestandreset((signed __int32 *)&v27, 2u);
        if ( v17 )
        {
          AlpcpSignal((__int64)&v24, 0, (v27 & 0x400000) != 0, (char)v14);
          if ( (_QWORD)v26 )
            ObfDereferenceObject((PVOID)v26);
        }
        goto LABEL_16;
      }
      if ( (v11 & 0x1000000) == 0 )
      {
        v26 = 0uLL;
        LODWORD(v27) = v11 | 4;
        *((_QWORD *)&v25 + 1) = 0LL;
        v13 = AlpcpSendMessage(&v24, SendMessageA, SendMessageAttributes, PreviousMode);
        if ( v13 >= 0 )
          goto LABEL_6;
LABEL_16:
        ObfDereferenceObject(v15);
        goto LABEL_17;
      }
    }
    v13 = -1073741584;
    goto LABEL_16;
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v13;
}
