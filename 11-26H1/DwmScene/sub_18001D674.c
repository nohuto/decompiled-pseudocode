/*
 * XREFs of sub_18001D674 @ 0x18001D674
 * Callers:
 *     sub_18001CFE8 @ 0x18001CFE8 (sub_18001CFE8.c)
 *     sub_18002A494 @ 0x18002A494 (sub_18002A494.c)
 *     sub_18002DE54 @ 0x18002DE54 (sub_18002DE54.c)
 *     sub_18002F750 @ 0x18002F750 (sub_18002F750.c)
 *     sub_18004C514 @ 0x18004C514 (sub_18004C514.c)
 *     sub_18004C620 @ 0x18004C620 (sub_18004C620.c)
 * Callees:
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 */

__int64 __fastcall sub_18001D674(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    sub_1800129D0(v2 + 32);
  return sub_18001D5C8(a1);
}
