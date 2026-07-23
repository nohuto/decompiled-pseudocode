/*
 * XREFs of PfSnTraceTimerRoutine @ 0x1404B38C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     PfSnTraceGetLogEntry @ 0x140265840 (PfSnTraceGetLogEntry.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 */

void __fastcall PfSnTraceTimerRoutine(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  bool v4; // zf
  int v6; // r8d
  int v7; // eax
  unsigned __int64 *v8; // rcx
  unsigned __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_DWORD *)DeferredContext + 100) == 0;
  v9 = 0LL;
  if ( v4 )
  {
    v6 = *((_DWORD *)DeferredContext + 85);
    if ( *((_DWORD *)DeferredContext + 83) <= v6 )
      v6 = *((_DWORD *)DeferredContext + 83);
    v7 = *((_DWORD *)DeferredContext + 81);
    if ( v7 > v6 )
      v7 = v6;
    *(_DWORD *)&DeferredContext[4 * (*((_DWORD *)DeferredContext + 82))++ + 284] = v6 - v7;
    *((_DWORD *)DeferredContext + 81) = v6;
    if ( (int)PfSnTraceGetLogEntry((__int64)DeferredContext, 1u, &v9) < 0 )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 10, 0) )
        goto LABEL_10;
      goto LABEL_9;
    }
    v8 = v9;
    *v9 &= 0xFuLL;
    v8[1] = 0LL;
    *v8 = *v8 & 0xFFFFFFFFFFFFFFF0uLL | 4;
    if ( *((_DWORD *)DeferredContext + 82) < *(int *)&stru_140E66D40.KeReferenceCount )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 34);
      if ( !*((_DWORD *)DeferredContext + 100) && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45) )
        KiSetTimerEx(
          (__int64)(DeferredContext + 136),
          *((_QWORD *)DeferredContext + 25),
          0,
          0,
          (__int64)(DeferredContext + 208));
      KxReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 34);
    }
    else if ( !_InterlockedCompareExchange((volatile signed __int32 *)DeferredContext + 100, 4, 0) )
    {
LABEL_9:
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(DeferredContext + 368), DelayedWorkQueue);
    }
  }
LABEL_10:
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)DeferredContext + 45);
}
