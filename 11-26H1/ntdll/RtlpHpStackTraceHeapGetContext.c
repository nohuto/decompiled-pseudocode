/*
 * XREFs of RtlpHpStackTraceHeapGetContext @ 0x18006F9E8
 * Callers:
 *     RtlpHpStackTraceRemoveStack @ 0x18002BA50 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x18014FC20 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000EC60 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x18006EED0 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapGetContext(__int64 a1, int a2, _QWORD *a3)
{
  bool v3; // zf
  __int64 v5; // rax
  volatile signed __int64 *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 16) == -571548178;
  v8 = 0LL;
  v5 = 112LL;
  if ( !v3 )
    v5 = 368LL;
  v6 = (volatile signed __int64 *)(a1 + v5);
  if ( a2 )
    result = RtlRunOnceExecuteOnce(
               v6,
               (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpPerHeapStackTraceInitialize,
               0LL,
               &v8);
  else
    result = RtlRunOnceBeginInitialize(v6, 1, &v8);
  if ( (int)result >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  return result;
}
