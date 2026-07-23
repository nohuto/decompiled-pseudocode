/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1403DF3CC
 * Callers:
 *     IopCloseIoCompletion @ 0x140ABE010 (IopCloseIoCompletion.c)
 *     IopDeleteIoCompletion @ 0x140ADBC50 (IopDeleteIoCompletion.c)
 * Callees:
 *     IopFreeWaitCompletionPacket @ 0x140268D80 (IopFreeWaitCompletionPacket.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x1403DF4A8 (KeRundownQueueEx.c)
 *     IopFreeCompletionListPackets @ 0x140A824B4 (IopFreeCompletionListPackets.c)
 */

void __fastcall IopDeleteIoCompletionInternal(ULONG_PTR a1, __int64 a2)
{
  char v2; // bp
  __int64 v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  ULONG_PTR v8; // rcx
  _QWORD *v9; // r8
  bool v10; // zf
  __int64 v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 64), &LockHandle);
    *(_BYTE *)(a1 + 72) = 1;
  }
  LOBYTE(a2) = v2 == 0;
  v4 = KeRundownQueueEx(a1, a2);
  v5 = (_QWORD *)v4;
  if ( v4 )
  {
    v6 = (_QWORD *)v4;
    **(_QWORD **)(v4 + 8) = 0LL;
    do
    {
      v7 = v6;
      v8 = (ULONG_PTR)v6;
      v9 = v6;
      v6 = (_QWORD *)*v6;
      v10 = *((_BYTE *)v7 + 16) == 2;
      *v7 = 0LL;
      if ( v10 )
      {
        v11 = v7[1];
        if ( v6 )
          v6[1] = v11;
        else
          v5[1] = v11;
        if ( v5 == v9 )
          v5 = v6;
        IopFreeWaitCompletionPacket(v8, a1);
      }
    }
    while ( v6 );
  }
  if ( v2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v5 )
    IopFreeCompletionListPackets(v5);
}
