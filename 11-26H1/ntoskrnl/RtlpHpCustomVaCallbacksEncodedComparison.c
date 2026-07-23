/*
 * XREFs of RtlpHpCustomVaCallbacksEncodedComparison @ 0x14063AA78
 * Callers:
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x14063AAF4 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpCustomVaCallbacksEncodedComparison(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[2] ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ (unsigned __int64)(a1 + 2)) == (a2 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)a2)
      && (*(_QWORD *)&PspTlsContext.Timer.Processor ^ a1[3] ^ (unsigned __int64)(a1 + 2)) == (a2 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(a2 + 8))
      && (*(_QWORD *)&PspTlsContext.Timer.Processor ^ a1[4] ^ (unsigned __int64)(a1 + 2)) == (a2 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(a2 + 16))
      && (*(_QWORD *)&PspTlsContext.Timer.Processor ^ a1[5] ^ (unsigned __int64)(a1 + 2)) == (a2 ^ *(_QWORD *)&PspTlsContext.Timer.Processor ^ *(_QWORD *)(a2 + 24));
}
