/*
 * XREFs of sub_180028E60 @ 0x180028E60
 * Callers:
 *     sub_180028BD0 @ 0x180028BD0 (sub_180028BD0.c)
 *     sub_18003F270 @ 0x18003F270 (sub_18003F270.c)
 *     sub_180042664 @ 0x180042664 (sub_180042664.c)
 *     sub_18007D680 @ 0x18007D680 (sub_18007D680.c)
 *     sub_180097F14 @ 0x180097F14 (sub_180097F14.c)
 *     sub_1800D9220 @ 0x1800D9220 (sub_1800D9220.c)
 *     sub_1800DA950 @ 0x1800DA950 (sub_1800DA950.c)
 *     sub_1800DD633 @ 0x1800DD633 (sub_1800DD633.c)
 *     sub_1800DE646 @ 0x1800DE646 (sub_1800DE646.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_180028E60(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x28uLL);
  return result;
}
