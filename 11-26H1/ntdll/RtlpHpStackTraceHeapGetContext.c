/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x18008FE38
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x180016B50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FAD0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18005A390 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x18008F320 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, PVOID *a3)
{
  bool v3; // zf
  __int64 v5; // rax
  _RTL_RUN_ONCE *v6; // rcx
  NTSTATUS result; // eax
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 16) == -571548178;
  Context = 0LL;
  v5 = 112LL;
  if ( !v3 )
    v5 = 368LL;
  v6 = (_RTL_RUN_ONCE *)(a1 + v5);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(v6, RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  else
    result = RtlRunOnceBeginInitialize(v6, 1u, &Context);
  if ( result >= 0 )
  {
    *a3 = Context;
    return 0;
  }
  return result;
}
