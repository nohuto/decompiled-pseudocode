/*
 * XREFs of EtwpOpenLogger @ 0x1402181E4
 * Callers:
 *     EtwTraceEvent @ 0x140216BB0 (EtwTraceEvent.c)
 *     EtwpLogKernelEvent @ 0x14032CDC0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x140411E40 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x14041297C (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceRaw @ 0x140516B78 (EtwTraceRaw.c)
 *     EtwSendTraceBuffer @ 0x1406C6570 (EtwSendTraceBuffer.c)
 *     EtwpKernelTraceRundown @ 0x140A70518 (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218100 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x140218150 (EtwpCloseLogger.c)
 *     KeGetEffectiveIrql @ 0x1402642B0 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall EtwpOpenLogger(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rbp
  __int64 result; // rax

  v4 = (unsigned int)a1;
  *a4 = 0;
  if ( (_BYTE)a3 == 1 || (unsigned __int8)KeGetEffectiveIrql(a1, a2, a3) < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = v4;
    --CurrentThread->KernelApcDisable;
    if ( !ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a2 + 704) + 8 * v4), 1u) )
    {
      KeLeaveCriticalRegion();
      return 0LL;
    }
    *a4 = 1;
  }
  else
  {
    v8 = v4;
  }
  result = *(_QWORD *)(*(_QWORD *)(a2 + 712) + 8 * v8);
  if ( (result & 1) == 0 )
    return result;
  EtwpCloseLogger(v4, a2, *a4);
  return 0LL;
}
