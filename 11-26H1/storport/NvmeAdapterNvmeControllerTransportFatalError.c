/*
 * XREFs of NvmeAdapterNvmeControllerTransportFatalError @ 0x1400EB5C0
 * Callers:
 *     NvmeAdapterProcessNvmeofNotification @ 0x1400DB140 (NvmeAdapterProcessNvmeofNotification.c)
 * Callees:
 *     NvmeDbgLogCriticalEvent @ 0x1400FB97C (NvmeDbgLogCriticalEvent.c)
 */

void __fastcall NvmeAdapterNvmeControllerTransportFatalError(PVOID Context, int a2, __int64 a3)
{
  bool v6; // zf
  __int64 v7; // rcx

  if ( *((_DWORD *)Context + 142) == 2 && _interlockedbittestandset((volatile signed __int32 *)Context + 268, 5u) != 1 )
  {
    v6 = (*((_BYTE *)Context + 1360) & 0x20) == 0;
    *((_DWORD *)Context + 142) = 4;
    *((_DWORD *)Context + 298) = 35;
    if ( !v6 )
      NvmeDbgLogCriticalEvent((_DWORD)Context, 2, a2, 0, 0LL, 0LL);
    **((_DWORD **)Context + 13) = a2;
    v7 = *((_QWORD *)Context + 13);
    *(_OWORD *)(v7 + 4) = *(_OWORD *)a3;
    *(_OWORD *)(v7 + 20) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(v7 + 36) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(v7 + 52) = *(_OWORD *)(a3 + 48);
    *(_WORD *)(v7 + 68) = *(_WORD *)(a3 + 64);
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 21),
      (PIO_WORKITEM_ROUTINE)NvmeAdapterNvmeControllerTransportErrorWork,
      DelayedWorkQueue,
      Context);
  }
}
