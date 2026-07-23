/*
 * XREFs of IopDestroyActiveConnectBlock @ 0x140A9CECC
 * Callers:
 *     IoDisconnectInterrupt @ 0x140A9C840 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x140A9CA10 (IopConnectInterrupt.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     KeInitializeEvent @ 0x140460680 (KeInitializeEvent.c)
 */

void __fastcall IopDestroyActiveConnectBlock(volatile signed __int32 *a1)
{
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *v5; // rdi
  char v6; // r14
  signed __int32 v7; // eax
  __int64 v8; // rdx
  volatile signed __int32 **v9; // rax
  struct _KTHREAD *v10; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( *((_QWORD *)a1 + 3) )
  {
    v2 = *((_QWORD *)a1 + 4);
    v3 = a1 + 16;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    CurrentThread = KeGetCurrentThread();
    v5 = 0LL;
    v6 = 0;
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(&ActiveConnectListLock, Executive, 0, 0, 0LL);
    v7 = _InterlockedDecrement((volatile signed __int32 *)v2);
    if ( (volatile signed __int32 *)v2 == v3 )
    {
      if ( v7 )
      {
        v6 = 1;
        *((_QWORD *)a1 + 9) = &Event;
      }
    }
    else
    {
      if ( !v7 )
        v5 = *(struct _KEVENT **)(v2 + 8);
      _InterlockedAdd(v3, 0xFFFFFFFF);
    }
    v8 = *(_QWORD *)a1;
    if ( *(volatile signed __int32 **)(*(_QWORD *)a1 + 8LL) != a1
      || (v9 = (volatile signed __int32 **)*((_QWORD *)a1 + 1), *v9 != a1) )
    {
      __fastfail(3u);
    }
    *v9 = (volatile signed __int32 *)v8;
    *(_QWORD *)(v8 + 8) = v9;
    KeSetEvent(&ActiveConnectListLock, 0, 0);
    KeLeaveCriticalRegion();
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    if ( v6 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    }
    else if ( v5 )
    {
      KeSetEvent(v5, 0, 0);
    }
    KeLeaveCriticalRegion();
  }
}
