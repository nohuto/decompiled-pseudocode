/*
 * XREFs of sub_18003A8C8 @ 0x18003A8C8
 * Callers:
 *     sub_18003A374 @ 0x18003A374 (sub_18003A374.c)
 *     sub_180060724 @ 0x180060724 (sub_180060724.c)
 *     sub_18008D758 @ 0x18008D758 (sub_18008D758.c)
 *     sub_18008D824 @ 0x18008D824 (sub_18008D824.c)
 *     sub_1800DA5A0 @ 0x1800DA5A0 (sub_1800DA5A0.c)
 * Callees:
 *     sub_18001C574 @ 0x18001C574 (sub_18001C574.c)
 */

void __fastcall sub_18003A8C8(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 8) > 0x100uLL )
    sub_18001C574(*(LPVOID *)a1);
}
