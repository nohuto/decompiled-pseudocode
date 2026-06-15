/*
 * XREFs of sub_14000DA94 @ 0x14000DA94
 * Callers:
 *     sub_14000D9B8 @ 0x14000D9B8 (sub_14000D9B8.c)
 *     sub_14000E63C @ 0x14000E63C (sub_14000E63C.c)
 *     sub_14000E920 @ 0x14000E920 (sub_14000E920.c)
 *     sub_14000EF40 @ 0x14000EF40 (sub_14000EF40.c)
 *     sub_14001765C @ 0x14001765C (sub_14001765C.c)
 *     sub_14003B000 @ 0x14003B000 (sub_14003B000.c)
 *     sub_140044F74 @ 0x140044F74 (sub_140044F74.c)
 *     sub_14004505C @ 0x14004505C (sub_14004505C.c)
 *     sub_140062DC0 @ 0x140062DC0 (sub_140062DC0.c)
 *     sub_140096888 @ 0x140096888 (sub_140096888.c)
 *     sub_140096938 @ 0x140096938 (sub_140096938.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 * Callees:
 *     sub_14000EE40 @ 0x14000EE40 (sub_14000EE40.c)
 */

__int64 __fastcall sub_14000DA94(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  __int64 result; // rax

  v3 = a2;
  if ( byte_1400E9750 )
    return j_j__o_free(a1, a2);
  result = 2147500037LL;
  if ( a2 && a1 )
    result = RtlFreeMemoryBlockLookaside(a2, a1);
  if ( (byte_1400E8401 & 4) != 0 )
    return sub_14000EE40(a1, a2, a3, 6, v3, 0, 0, 0);
  return result;
}
