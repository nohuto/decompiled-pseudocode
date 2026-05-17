/*
 * XREFs of RtlpHpCustomVaCallbacksEncodedComparison @ 0x180157F14
 * Callers:
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x18008D4B8 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlpHpCustomVaCallbacksEncodedComparison(_QWORD *a1, unsigned __int64 a2)
{
  return (a1[2] ^ RtlpHpHeapGlobals ^ (unsigned __int64)(a1 + 2)) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a2)
      && (RtlpHpHeapGlobals ^ a1[3] ^ (unsigned __int64)(a1 + 2)) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 8))
      && (RtlpHpHeapGlobals ^ a1[4] ^ (unsigned __int64)(a1 + 2)) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 16))
      && (RtlpHpHeapGlobals ^ a1[5] ^ (unsigned __int64)(a1 + 2)) == (a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 24));
}
