/*
 * XREFs of sub_1401223BC @ 0x1401223BC
 * Callers:
 *     sub_1400CD79C @ 0x1400CD79C (sub_1400CD79C.c)
 *     sub_1400EA590 @ 0x1400EA590 (sub_1400EA590.c)
 * Callees:
 *     sub_1401222E8 @ 0x1401222E8 (sub_1401222E8.c)
 */

__int64 __fastcall sub_1401223BC(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rdi
  PHYSICAL_ADDRESS *v3; // rax

  v1 = a1 + 71;
  InitializeSListHead(a1 + 71);
  InitializeSListHead(a1 + 72);
  v3 = sub_1401222E8((__int64)a1);
  if ( !v3 )
    return 3221225626LL;
  ExpInterlockedPushEntrySList(v1, (PSLIST_ENTRY)&v3[2]);
  return 0LL;
}
