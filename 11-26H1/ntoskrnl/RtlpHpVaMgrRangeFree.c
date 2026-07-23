/*
 * XREFs of RtlpHpVaMgrRangeFree @ 0x140352980
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140351F7C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlpHpVaMgrRangeCleanup @ 0x140351D54 (RtlpHpVaMgrRangeCleanup.c)
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeFree(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)
     + ((unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL)) >> *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) << 20);
  if ( (*(_BYTE *)a2 & 4) != 0 )
    v3 = *(_QWORD *)(a2 + 24);
  else
    v3 = *(unsigned __int16 *)(a2 + 24);
  RtlpHpVaMgrRangeCleanup(a1, (char *)a2);
  v6 = (v2 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  result = (v3 << 20) - v6 + v2;
  v5 = result;
  if ( result )
    return MmFreePoolMemory(&v6, (ULONG_PTR *)&v5, 0x8000u);
  return result;
}
