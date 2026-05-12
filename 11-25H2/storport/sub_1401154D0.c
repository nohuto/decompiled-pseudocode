/*
 * XREFs of sub_1401154D0 @ 0x1401154D0
 * Callers:
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400F16A4 @ 0x1400F16A4 (sub_1400F16A4.c)
 *     sub_14011DA00 @ 0x14011DA00 (sub_14011DA00.c)
 *     sub_14011F570 @ 0x14011F570 (sub_14011F570.c)
 * Callees:
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

PSLIST_ENTRY __fastcall sub_1401154D0(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v5; // rdi

  v3 = *(_DWORD *)(a3 + 32);
  v5 = a2;
  if ( v3 )
  {
    memset_0(*(void **)(a3 + 16), 0, 8LL * v3);
    *(_DWORD *)(a3 + 32) = 0;
  }
  return ExpInterlockedPushEntrySList(*(PSLIST_HEADER *)(*(_QWORD *)(a1 + 880) + 8 * v5), (PSLIST_ENTRY)a3);
}
