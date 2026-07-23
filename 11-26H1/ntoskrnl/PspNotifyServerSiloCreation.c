/*
 * XREFs of PspNotifyServerSiloCreation @ 0x140801B0C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PspAcquirePushLockShared @ 0x1404FD828 (PspAcquirePushLockShared.c)
 *     PspReleasePushLockShared @ 0x1405053B4 (PspReleasePushLockShared.c)
 *     PspGetServerSiloStatePointer @ 0x14052B9B8 (PspGetServerSiloStatePointer.c)
 *     PspGetNextMonitor @ 0x140801A20 (PspGetNextMonitor.c)
 *     PspInvokeCreateCallback @ 0x140801A48 (PspInvokeCreateCallback.c)
 *     EtwTraceJobServerSiloStateChange @ 0x14082DA38 (EtwTraceJobServerSiloStateChange.c)
 */

__int64 __fastcall PspNotifyServerSiloCreation(__int64 a1)
{
  unsigned int v1; // ebx
  char v3; // si
  _DWORD *ServerSiloStatePointer; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KTHREAD *NextMonitor; // rdi

  v1 = 0;
  v3 = 0;
  ServerSiloStatePointer = (_DWORD *)PspGetServerSiloStatePointer(a1);
  PspAcquirePushLockShared(v6, v5, v7, v8);
  if ( *ServerSiloStatePointer )
    __fastfail(5u);
  NextMonitor = PspGetNextMonitor(0LL);
  if ( !NextMonitor )
    goto LABEL_10;
  do
  {
    if ( NextMonitor->SListFaultAddress && (int)PspInvokeCreateCallback(a1, (__int64)NextMonitor) < 0 )
      v3 = 1;
    NextMonitor = PspGetNextMonitor((struct _KTHREAD **)NextMonitor);
  }
  while ( NextMonitor );
  if ( v3 )
  {
    v1 = -1073741248;
  }
  else
  {
LABEL_10:
    *ServerSiloStatePointer = 1;
    EtwTraceJobServerSiloStateChange(a1);
  }
  PspReleasePushLockShared();
  return v1;
}
