/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x140353358
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x140353268 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     RtlpCSparseBitmapPageCommit @ 0x140353424 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapUnlock @ 0x140353ACC (RtlpCSparseBitmapUnlock.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  unsigned __int64 v4; // rdx
  void *v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2 << v3;
  *(_QWORD *)((char *)&v8 + 1) = 0LL;
  v6 = (void *)(v4 + *(_QWORD *)(a1 + 24));
  *(_QWORD *)&v8 = 0LL;
  v9 = 0LL;
  if ( (int)RtlpCSparseBitmapPageCommit(a1 + 16, (v4 >> 12) & 0x1FFFFFFFFFFFFLL, &v9, &v8) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(&v9);
  if ( *(_BYTE *)(*((_QWORD *)&v8 + 1) + 48LL) )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    __writecr8((unsigned __int8)v8);
  }
  else
  {
    KeLeaveGuardedRegion();
  }
  return v6;
}
