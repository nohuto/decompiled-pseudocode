/*
 * XREFs of sub_14006B21C @ 0x14006B21C
 * Callers:
 *     sub_14003B050 @ 0x14003B050 (sub_14003B050.c)
 *     sub_140054FB0 @ 0x140054FB0 (sub_140054FB0.c)
 *     sub_1400CB5C0 @ 0x1400CB5C0 (sub_1400CB5C0.c)
 *     sub_1400D1430 @ 0x1400D1430 (sub_1400D1430.c)
 * Callees:
 *     sub_14003A52C @ 0x14003A52C (sub_14003A52C.c)
 */

__int64 __fastcall sub_14006B21C(__int64 a1, void *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  if ( a4 < 0x20 )
    return 3221225714LL;
  *(_QWORD *)(a1 + 112) = a5;
  *(_WORD *)(a1 + 2) = a4;
  KeInitializeDpc((PRKDPC)(a1 + 8), (PKDEFERRED_ROUTINE)sub_140027950, a2);
  return sub_14003A52C((union _SLIST_HEADER *)a1);
}
