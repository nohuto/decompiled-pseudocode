/*
 * XREFs of sub_18001CF60 @ 0x18001CF60
 * Callers:
 *     sub_18001CC6C @ 0x18001CC6C (sub_18001CC6C.c)
 *     sub_18001CD34 @ 0x18001CD34 (sub_18001CD34.c)
 *     sub_18002A494 @ 0x18002A494 (sub_18002A494.c)
 *     sub_18002E5CC @ 0x18002E5CC (sub_18002E5CC.c)
 *     sub_18002E884 @ 0x18002E884 (sub_18002E884.c)
 *     sub_180055F5C @ 0x180055F5C (sub_180055F5C.c)
 *     sub_180099B94 @ 0x180099B94 (sub_180099B94.c)
 * Callees:
 *     memcmp @ 0x18000CEC4 (memcmp.c)
 */

char __fastcall sub_18001CF60(const void *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v5; // r8
  int v8; // ecx

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v8 = memcmp(a1, a3, v5);
  if ( v8 )
    return v8;
  if ( a2 >= a4 )
    return a2 > a4;
  return -1;
}
