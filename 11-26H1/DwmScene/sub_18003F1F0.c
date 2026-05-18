/*
 * XREFs of sub_18003F1F0 @ 0x18003F1F0
 * Callers:
 *     sub_18003F324 @ 0x18003F324 (sub_18003F324.c)
 *     sub_18003F354 @ 0x18003F354 (sub_18003F354.c)
 *     sub_18004D208 @ 0x18004D208 (sub_18004D208.c)
 *     sub_1800DA98E @ 0x1800DA98E (sub_1800DA98E.c)
 *     sub_1800DB706 @ 0x1800DB706 (sub_1800DB706.c)
 * Callees:
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 */

__int64 __fastcall sub_18003F1F0(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_18000E26C(v1, 0x50uLL);
  return result;
}
