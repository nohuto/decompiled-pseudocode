/*
 * XREFs of IopCancelIrpsInThreadListForCurrentProcess @ 0x14094A5DC
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1405CE320 (IopCheckHandleForRevocation.c)
 *     IopCancelIoFile @ 0x14094A544 (IopCancelIoFile.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     PspUnlockProcessShared @ 0x14027C520 (PspUnlockProcessShared.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 *     IopCancelApcRequired @ 0x14052CFC4 (IopCancelApcRequired.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopCancelIrpsInThreadList @ 0x14094A788 (IopCancelIrpsInThreadList.c)
 *     PsGetNextProcessThread @ 0x14094ADD0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall IopCancelIrpsInThreadListForCurrentProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  unsigned int v4; // ebp
  _KPROCESS *Process; // rsi
  _QWORD *i; // rbx
  struct _KLOCK_ENTRIES *v7; // r9
  void **v8; // r12
  int v9; // r15d
  void *v10; // rdx
  LegacyAutoBoost *v11; // rdi
  void **j; // rdi
  bool v13; // cf
  _BYTE v15[88]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+78h] [rbp-80h]
  __int64 v17; // [rsp+80h] [rbp-78h]
  struct _KEVENT Event; // [rsp+88h] [rbp-70h] BYREF
  char v19; // [rsp+A0h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+110h] [rbp+18h]

  v2 = a2;
  v3 = a1;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  memset_0(v15, 0, 0x88uLL);
  v16 = v3;
  v17 = v2;
  v19 = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  for ( i = (_QWORD *)PsGetNextProcessThread(Process, 0LL); i; i = (_QWORD *)((unsigned __int64)v8 & -(__int64)v13) )
  {
    if ( (unsigned int)IopCancelApcRequired((__int64)i, v3, v2) )
      v4 |= IopCancelIrpsInThreadList(i, v15);
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    v9 = 0;
    --CurrentThread->KernelApcDisable;
    v11 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&Process[1], 0LL, 0LL, v7);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&Process[1].Header.Lock, 0, v11, (struct _KTHREAD *)&Process[1]);
    if ( v11 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v11, v10);
      else
        *((_BYTE *)v11 + 10) = 1;
    }
    for ( j = (void **)i[175]; j != &Process[1].UserCetLogging; j = (void **)*j )
    {
      v8 = j - 175;
      if ( ObReferenceObjectSafeWithTag((__int64)(j - 175), 0x6E457350u) )
      {
        v9 = 1;
        break;
      }
    }
    PspUnlockProcessShared((__int64)Process, (__int64)CurrentThread);
    ObfDereferenceObjectWithTag(i, 0x6E457350u);
    v2 = a2;
    v13 = v9 != 0;
    v3 = a1;
  }
  return v4;
}
