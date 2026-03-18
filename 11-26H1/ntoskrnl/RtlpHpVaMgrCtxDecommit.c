/*
 * XREFs of RtlpHpVaMgrCtxDecommit @ 0x140638E44
 * Callers:
 *     RtlpHpFreeVA @ 0x1403501D8 (RtlpHpFreeVA.c)
 * Callees:
 *     RtlSparseArrayElementAllocated @ 0x1403505B8 (RtlSparseArrayElementAllocated.c)
 *     RtlpHpVaMgrRangeDecommit @ 0x140638F80 (RtlpHpVaMgrRangeDecommit.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxDecommit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = RtlSparseArrayElementAllocated(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  v8[0] = a2;
  v8[1] = a3;
  return RtlpHpVaMgrRangeDecommit(a1 + 48 * (*(unsigned __int8 *)(v6 + 1) + 45LL), v6, v8);
}
