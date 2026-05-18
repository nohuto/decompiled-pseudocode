/*
 * XREFs of sub_18001D260 @ 0x18001D260
 * Callers:
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_18001D19C @ 0x18001D19C (sub_18001D19C.c)
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_18001F61C @ 0x18001F61C (sub_18001F61C.c)
 *     sub_18002CE5C @ 0x18002CE5C (sub_18002CE5C.c)
 *     sub_18002FB30 @ 0x18002FB30 (sub_18002FB30.c)
 *     sub_180036258 @ 0x180036258 (sub_180036258.c)
 *     sub_180043A88 @ 0x180043A88 (sub_180043A88.c)
 *     sub_180043AC0 @ 0x180043AC0 (sub_180043AC0.c)
 *     sub_180043B50 @ 0x180043B50 (sub_180043B50.c)
 *     sub_180043BE0 @ 0x180043BE0 (sub_180043BE0.c)
 *     sub_180043CD0 @ 0x180043CD0 (sub_180043CD0.c)
 *     sub_180043D5C @ 0x180043D5C (sub_180043D5C.c)
 *     sub_18004C72C @ 0x18004C72C (sub_18004C72C.c)
 *     sub_18004C82C @ 0x18004C82C (sub_18004C82C.c)
 *     sub_18007B300 @ 0x18007B300 (sub_18007B300.c)
 *     sub_180097AA0 @ 0x180097AA0 (sub_180097AA0.c)
 *     sub_180099C30 @ 0x180099C30 (sub_180099C30.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 * Callees:
 *     sub_18001BCDC @ 0x18001BCDC (sub_18001BCDC.c)
 */

__int64 __fastcall sub_18001D260(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  sub_18001BCDC((_OWORD *)a1, a2);
  return v2;
}
