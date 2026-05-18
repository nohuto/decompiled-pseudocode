/*
 * XREFs of sub_18001DF88 @ 0x18001DF88
 * Callers:
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_18004EE08 @ 0x18004EE08 (sub_18004EE08.c)
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 *     sub_1800C4B58 @ 0x1800C4B58 (sub_1800C4B58.c)
 *     sub_1800C9978 @ 0x1800C9978 (sub_1800C9978.c)
 * Callees:
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 */

__int64 __fastcall sub_18001DF88(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r9

  v2 = sub_1800148EC(a2);
  return sub_18001DFB0(v3, v2);
}
