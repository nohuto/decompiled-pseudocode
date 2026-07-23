/*
 * XREFs of AlpcpAssociateIoCompletionPort @ 0x140A9232C
 * Callers:
 *     NtAlpcSetInformation @ 0x140A91EC0 (NtAlpcSetInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1404A459C (AlpcpFreeCompletionPacketLookaside.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140A925D0 (AlpcpAllocateCompletionPacketLookaside.c)
 */

__int64 __fastcall AlpcpAssociateIoCompletionPort(_QWORD *a1, void *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v7; // rdi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  NTSTATUS v11; // eax
  _BYTE *v12; // rdx
  unsigned int v13; // ebp
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 CompletionPacketLookaside; // rax
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // r14
  _QWORD *i; // r14
  unsigned int v24; // ebx
  void *v25; // rcx
  KSPIN_LOCK *v26; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 3221225485LL;
  v7 = a1 + 44;
  v8 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 44), 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  if ( a1[4] )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    v24 = -1073741752;
    goto LABEL_36;
  }
  if ( a1[45] )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    v24 = -1073741637;
LABEL_36:
    KeAbPostRelease((unsigned __int64)v7);
    return v24;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(a2, 2u, IoCompletionObjectType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  v12 = Object;
  a1[4] = Object;
  v13 = v11;
  if ( v11 < 0 )
  {
LABEL_42:
    v25 = (void *)a1[4];
    if ( v25 )
    {
      ObfDereferenceObject(v25);
      a1[4] = 0LL;
    }
    v26 = (KSPIN_LOCK *)a1[6];
    if ( v26 )
    {
      AlpcpFreeCompletionPacketLookaside(v26);
      a1[6] = 0LL;
    }
    goto LABEL_26;
  }
  v14 = a1[45];
  a1[5] = a3;
  if ( v14 )
  {
    v16 = *(_QWORD *)(v14 + 96) >> 3;
  }
  else
  {
    v15 = 664LL;
    if ( (*v12 & 0x7F) != 0x15 )
      v15 = 44LL;
    v16 = *(unsigned int *)&v12[v15];
    if ( (unsigned int)v16 > 4 )
      v16 = 4LL;
  }
  CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v16, v12, a3);
  a1[6] = CompletionPacketLookaside;
  if ( !CompletionPacketLookaside )
  {
    v13 = -1073741670;
    goto LABEL_42;
  }
  v19 = (AutoBoost *)KeAbPreAcquire((__int64)(a1 + 17), 0LL, 0LL, v18);
  v21 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 34, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 17, v19, (__int64)(a1 + 17));
  if ( v21 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v21, v20);
    else
      *((_BYTE *)v21 + 10) = 1;
  }
  for ( i = (_QWORD *)a1[18]; i != a1 + 18; i = (_QWORD *)*i )
    AlpcpQueueIoCompletionPort((__int64)a1, 0, 0LL, 0, 0);
  if ( (_InterlockedExchangeAdd64(a1 + 17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 17);
  KeAbPostRelease((unsigned __int64)(a1 + 17));
  v13 = 0;
LABEL_26:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((unsigned __int64)v7);
  return v13;
}
