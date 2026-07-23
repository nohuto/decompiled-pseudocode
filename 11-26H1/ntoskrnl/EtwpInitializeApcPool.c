/*
 * XREFs of EtwpInitializeApcPool @ 0x140492A38
 * Callers:
 *     EtwpUpdateContextRegisterTraceEvents @ 0x14082D51C (EtwpUpdateContextRegisterTraceEvents.c)
 *     EtwpInitLoggerContext @ 0x140AB20E0 (EtwpInitLoggerContext.c)
 * Callees:
 *     InitializeSListHead @ 0x140492D50 (InitializeSListHead.c)
 */

void (__fastcall *__fastcall EtwpInitializeApcPool(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4))(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *result)(__int64, __int64, __int64); // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 16));
  InitializeSListHead((PSLIST_HEADER)(a1 + 32));
  *(_DWORD *)(a1 + 168) = a3;
  result = EtwpApcPoolDpc;
  *(_DWORD *)(a1 + 172) = a4;
  *(_QWORD *)(a1 + 120) = EtwpApcPoolDpc;
  *(_DWORD *)(a1 + 96) = 531;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)a1 = a2;
  return result;
}
