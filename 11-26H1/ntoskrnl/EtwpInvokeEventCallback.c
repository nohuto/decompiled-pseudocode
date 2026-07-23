/*
 * XREFs of EtwpInvokeEventCallback @ 0x1404A2A54
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwTraceEvent @ 0x140216EE0 (EtwTraceEvent.c)
 *     EtwpTraceMessageVa @ 0x1402179E0 (EtwpTraceMessageVa.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpLogSystemEventUnsafe @ 0x140406FB0 (EtwpLogSystemEventUnsafe.c)
 *     EtwTraceRaw @ 0x1405105E8 (EtwTraceRaw.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KeIsTraceCallbackAllowed @ 0x1404A2AE4 (KeIsTraceCallbackAllowed.c)
 *     EtwpGetNextEventOffsetType @ 0x1404A2B38 (EtwpGetNextEventOffsetType.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall EtwpInvokeEventCallback(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  char v6; // r10
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  v3 = *((unsigned int *)a2 + 4);
  v7 = 0;
  result = EtwpGetNextEventOffsetType(v2, (unsigned int)v3, &v7);
  if ( (_DWORD)result )
  {
    LOBYTE(v5) = v6;
    result = KeIsTraceCallbackAllowed(v5);
    if ( (_DWORD)result )
      return guard_dispatch_icall_no_overrides(v2 + v3, v7);
  }
  return result;
}
