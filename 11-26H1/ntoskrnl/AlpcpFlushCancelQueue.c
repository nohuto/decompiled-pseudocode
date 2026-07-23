/*
 * XREFs of AlpcpFlushCancelQueue @ 0x140A9F650
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1408F1310 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 *     AlpcpRemoveMessageCanceledQueue @ 0x140A9F750 (AlpcpRemoveMessageCanceledQueue.c)
 */

void __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  _QWORD **v7; // rsi
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rdi
  _QWORD *v11; // rdi
  _QWORD *v12; // r11
  ULONG_PTR v13; // r11

  v4 = (unsigned __int64 *)(a1 + 136);
  v7 = (_QWORD **)(a1 + 384);
  v8 = (AutoBoost *)KeAbPreAcquire(a1 + 136, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v10, v9);
    else
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = *v7;
  while ( v11 != v7 )
  {
    v12 = v11 - 10;
    v11 = (_QWORD *)*v11;
    if ( !a2 || v12[7] == a2 )
    {
      AlpcpRemoveMessageCanceledQueue(a1, v12);
      *(_QWORD *)(v13 + 56) = 0LL;
      *(_QWORD *)(v13 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v13, 1);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
}
