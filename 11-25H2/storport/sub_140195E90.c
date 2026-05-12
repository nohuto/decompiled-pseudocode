/*
 * XREFs of sub_140195E90 @ 0x140195E90
 * Callers:
 *     sub_140195A38 @ 0x140195A38 (sub_140195A38.c)
 *     sub_140195FA4 @ 0x140195FA4 (sub_140195FA4.c)
 *     sub_140196430 @ 0x140196430 (sub_140196430.c)
 *     sub_140197274 @ 0x140197274 (sub_140197274.c)
 *     sub_1401973B0 @ 0x1401973B0 (sub_1401973B0.c)
 * Callees:
 *     sub_140195E44 @ 0x140195E44 (sub_140195E44.c)
 */

void __fastcall sub_140195E90(PVOID *a1)
{
  PVOID *v2; // rcx

  v2 = (PVOID *)((char *)*a1 + 48);
  if ( *v2 )
    sub_140195E44(v2);
  ExFreePoolWithTag(*a1, 0x44436152u);
  *a1 = 0LL;
}
