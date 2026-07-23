/*
 * XREFs of EtwpOpenLogger @ 0x140218514
 * Callers:
 *     EtwTraceEvent @ 0x140216EE0 (EtwTraceEvent.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     NtTraceEvent @ 0x1404067D0 (NtTraceEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwSendTraceBuffer @ 0x1406CA270 (EtwSendTraceBuffer.c)
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140218430 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpCloseLogger @ 0x140218480 (EtwpCloseLogger.c)
 *     KeGetEffectiveIrql @ 0x140263820 (KeGetEffectiveIrql.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
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
