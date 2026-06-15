/*
 * XREFs of sub_140008824 @ 0x140008824
 * Callers:
 *     sub_140008AB0 @ 0x140008AB0 (sub_140008AB0.c)
 *     sub_140085904 @ 0x140085904 (sub_140085904.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_14009F2B0 @ 0x14009F2B0 (sub_14009F2B0.c)
 *     sub_1400A01A0 @ 0x1400A01A0 (sub_1400A01A0.c)
 *     sub_1400A10D0 @ 0x1400A10D0 (sub_1400A10D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140008824(_WORD *a1)
{
  if ( *a1 == 0xFFFE )
    return (unsigned __int16)a1[9];
  else
    return (unsigned __int16)a1[7];
}
