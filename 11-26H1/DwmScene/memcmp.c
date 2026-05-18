/*
 * XREFs of memcmp @ 0x18000CEC4
 * Callers:
 *     sub_18000B790 @ 0x18000B790 (sub_18000B790.c)
 *     sub_18001CF60 @ 0x18001CF60 (sub_18001CF60.c)
 *     sub_18001CFB0 @ 0x18001CFB0 (sub_18001CFB0.c)
 *     sub_180024190 @ 0x180024190 (sub_180024190.c)
 *     sub_18007EC28 @ 0x18007EC28 (sub_18007EC28.c)
 *     sub_18007ECA8 @ 0x18007ECA8 (sub_18007ECA8.c)
 *     sub_18007F20C @ 0x18007F20C (sub_18007F20C.c)
 *     sub_1800948B0 @ 0x1800948B0 (sub_1800948B0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return __imp_memcmp(Buf1, Buf2, Size);
}
