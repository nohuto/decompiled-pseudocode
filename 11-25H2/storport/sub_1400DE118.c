/*
 * XREFs of sub_1400DE118 @ 0x1400DE118
 * Callers:
 *     sub_1400F9A20 @ 0x1400F9A20 (sub_1400F9A20.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1400DE118(__int64 a1, unsigned int a2, void *a3)
{
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 128) + 400LL) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
    ExFreePoolWithTag(a3, 0x52436152u);
  else
    MmFreeContiguousMemorySpecifyCache(a3, a2, MmCached);
}
