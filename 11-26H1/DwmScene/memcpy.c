/*
 * XREFs of memcpy @ 0x18000CED0
 * Callers:
 *     sub_18000B790 @ 0x18000B790 (sub_18000B790.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_180011840 @ 0x180011840 (sub_180011840.c)
 *     sub_180012FD0 @ 0x180012FD0 (sub_180012FD0.c)
 *     sub_1800142EC @ 0x1800142EC (sub_1800142EC.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180017894 @ 0x180017894 (sub_180017894.c)
 *     sub_18001CD80 @ 0x18001CD80 (sub_18001CD80.c)
 *     sub_18001CE78 @ 0x18001CE78 (sub_18001CE78.c)
 *     sub_18001D290 @ 0x18001D290 (sub_18001D290.c)
 *     sub_18001E068 @ 0x18001E068 (sub_18001E068.c)
 *     sub_18001E17C @ 0x18001E17C (sub_18001E17C.c)
 *     sub_18001E4B0 @ 0x18001E4B0 (sub_18001E4B0.c)
 *     sub_18001EBB8 @ 0x18001EBB8 (sub_18001EBB8.c)
 *     sub_18001EC60 @ 0x18001EC60 (sub_18001EC60.c)
 *     sub_18001ED64 @ 0x18001ED64 (sub_18001ED64.c)
 *     sub_18001EF20 @ 0x18001EF20 (sub_18001EF20.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_18001FA78 @ 0x18001FA78 (sub_18001FA78.c)
 *     sub_180020BC0 @ 0x180020BC0 (sub_180020BC0.c)
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 *     sub_1800307B8 @ 0x1800307B8 (sub_1800307B8.c)
 *     sub_180038320 @ 0x180038320 (sub_180038320.c)
 *     sub_18004F094 @ 0x18004F094 (sub_18004F094.c)
 *     sub_18004F21C @ 0x18004F21C (sub_18004F21C.c)
 *     sub_180050218 @ 0x180050218 (sub_180050218.c)
 *     sub_18007ECA8 @ 0x18007ECA8 (sub_18007ECA8.c)
 *     sub_18007F20C @ 0x18007F20C (sub_18007F20C.c)
 *     sub_1800BB650 @ 0x1800BB650 (sub_1800BB650.c)
 *     sub_1800BB9A0 @ 0x1800BB9A0 (sub_1800BB9A0.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800CD8D4 @ 0x1800CD8D4 (sub_1800CD8D4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  return __imp_memcpy(a1, Src, Size);
}
