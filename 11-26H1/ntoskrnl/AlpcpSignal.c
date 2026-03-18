/*
 * XREFs of AlpcpSignal @ 0x1402648EC
 * Callers:
 *     AlpcpSignalAndWait @ 0x140264830 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14037CC40 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAlpcSendWaitReceivePort @ 0x1408F9100 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140A78190 (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     AlpcpReleaseDirectAttribute @ 0x1405FFB08 (AlpcpReleaseDirectAttribute.c)
 */

int __fastcall AlpcpSignal(__int64 a1, BOOLEAN a2, unsigned __int8 a3, char a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // ecx
  unsigned __int64 v8; // rcx

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    if ( *(_BYTE *)(a1 + 56) )
      LODWORD(v6) = AlpcpQueueIoCompletionPort(v5, *(_BYTE *)(a1 + 57), 1, a2, a3);
    else
      LODWORD(v6) = KeReleaseSemaphore(*(PRKSEMAPHORE *)(v5 + 248), 1, 1, a2);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = v6 + 1304;
      if ( a2 )
        LODWORD(v6) = KeReleaseSemaphoreEx(v7, 1, 1, a4, a3 != 0 ? 1 : 5, 0LL);
      else
        LODWORD(v6) = KeReleaseSemaphoreEx(v7, 1, 1, a4, 2, 0LL);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( (v8 & 1) != 0 )
      {
        if ( v8 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v8 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          LODWORD(v6) = AlpcpReleaseDirectAttribute(*(_QWORD *)(a1 + 40));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
  return v6;
}
