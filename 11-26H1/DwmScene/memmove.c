/*
 * XREFs of memmove @ 0x18000D92D
 * Callers:
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_180017A18 @ 0x180017A18 (sub_180017A18.c)
 *     sub_180017A50 @ 0x180017A50 (sub_180017A50.c)
 *     sub_18001D290 @ 0x18001D290 (sub_18001D290.c)
 *     sub_18001DFB0 @ 0x18001DFB0 (sub_18001DFB0.c)
 *     sub_18001E068 @ 0x18001E068 (sub_18001E068.c)
 *     sub_18001E8A8 @ 0x18001E8A8 (sub_18001E8A8.c)
 *     sub_18001F950 @ 0x18001F950 (sub_18001F950.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_18001FA78 @ 0x18001FA78 (sub_18001FA78.c)
 *     sub_1800307B8 @ 0x1800307B8 (sub_1800307B8.c)
 *     sub_18006FA14 @ 0x18006FA14 (sub_18006FA14.c)
 *     sub_18007B100 @ 0x18007B100 (sub_18007B100.c)
 *     sub_18007D898 @ 0x18007D898 (sub_18007D898.c)
 *     sub_180087AAC @ 0x180087AAC (sub_180087AAC.c)
 *     sub_18008C5BC @ 0x18008C5BC (sub_18008C5BC.c)
 *     sub_18008C6C0 @ 0x18008C6C0 (sub_18008C6C0.c)
 *     sub_18008C9EC @ 0x18008C9EC (sub_18008C9EC.c)
 *     sub_18008CEF4 @ 0x18008CEF4 (sub_18008CEF4.c)
 *     sub_18008CFCC @ 0x18008CFCC (sub_18008CFCC.c)
 *     sub_18008D0A4 @ 0x18008D0A4 (sub_18008D0A4.c)
 *     sub_18008D140 @ 0x18008D140 (sub_18008D140.c)
 *     sub_18008D1E4 @ 0x18008D1E4 (sub_18008D1E4.c)
 *     sub_18008D270 @ 0x18008D270 (sub_18008D270.c)
 *     sub_180098E88 @ 0x180098E88 (sub_180098E88.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  return __imp_memmove(a1, Src, Size);
}
