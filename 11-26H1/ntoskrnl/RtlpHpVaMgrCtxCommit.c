/*
 * XREFs of RtlpHpVaMgrCtxCommit @ 0x1405259B0
 * Callers:
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x140352638 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeCommit @ 0x140525A2C (RtlpHpVaMgrRangeCommit.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxCommit(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v10[0] = a2;
  v10[1] = a3;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))RtlpHpVaMgrRangeCommit)(
           a1 + 48 * (*(unsigned __int8 *)(v8 + 1) + 45LL),
           v8,
           v10,
           a4);
}
