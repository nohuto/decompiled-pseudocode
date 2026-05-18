/*
 * XREFs of sub_180017A18 @ 0x180017A18
 * Callers:
 *     sub_180017D60 @ 0x180017D60 (sub_180017D60.c)
 *     sub_180018204 @ 0x180018204 (sub_180018204.c)
 *     sub_18001F0E8 @ 0x18001F0E8 (sub_18001F0E8.c)
 *     sub_180029634 @ 0x180029634 (sub_180029634.c)
 *     sub_1800439F0 @ 0x1800439F0 (sub_1800439F0.c)
 *     sub_18004CEF4 @ 0x18004CEF4 (sub_18004CEF4.c)
 *     sub_180052AC8 @ 0x180052AC8 (sub_180052AC8.c)
 *     sub_180076280 @ 0x180076280 (sub_180076280.c)
 *     sub_180076378 @ 0x180076378 (sub_180076378.c)
 *     sub_18007B494 @ 0x18007B494 (sub_18007B494.c)
 *     sub_18007D810 @ 0x18007D810 (sub_18007D810.c)
 *     sub_180085644 @ 0x180085644 (sub_180085644.c)
 *     sub_180087C40 @ 0x180087C40 (sub_180087C40.c)
 *     sub_18008C9EC @ 0x18008C9EC (sub_18008C9EC.c)
 *     sub_18008CB04 @ 0x18008CB04 (sub_18008CB04.c)
 *     sub_18008CB8C @ 0x18008CB8C (sub_18008CB8C.c)
 *     sub_18008CD8C @ 0x18008CD8C (sub_18008CD8C.c)
 *     sub_18008CE40 @ 0x18008CE40 (sub_18008CE40.c)
 *     sub_18008CEF4 @ 0x18008CEF4 (sub_18008CEF4.c)
 *     sub_18008CFCC @ 0x18008CFCC (sub_18008CFCC.c)
 *     sub_18008D2FC @ 0x18008D2FC (sub_18008D2FC.c)
 *     sub_18008D524 @ 0x18008D524 (sub_18008D524.c)
 *     sub_18008D604 @ 0x18008D604 (sub_18008D604.c)
 *     sub_1800C29D0 @ 0x1800C29D0 (sub_1800C29D0.c)
 * Callees:
 *     memmove @ 0x18000D92D (memmove.c)
 */

__int64 __fastcall sub_180017A18(void *Src, __int64 a2, void *a3)
{
  __int64 v4; // rbx

  v4 = a2 - (_QWORD)Src;
  memmove(a3, Src, a2 - (_QWORD)Src);
  return (__int64)a3 + v4;
}
