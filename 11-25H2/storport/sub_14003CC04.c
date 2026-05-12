/*
 * XREFs of sub_14003CC04 @ 0x14003CC04
 * Callers:
 *     sub_14003B050 @ 0x14003B050 (sub_14003B050.c)
 *     sub_140045574 @ 0x140045574 (sub_140045574.c)
 *     sub_1400C9020 @ 0x1400C9020 (sub_1400C9020.c)
 *     sub_1400D1430 @ 0x1400D1430 (sub_1400D1430.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall sub_14003CC04(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbx
  PSLIST_ENTRY result; // rax

  v1 = a1 + 5;
  while ( 1 )
  {
    result = ExpInterlockedPopEntrySList(v1);
    if ( !result )
      break;
    ExFreePoolWithTag(result, 0x66446152u);
  }
  return result;
}
