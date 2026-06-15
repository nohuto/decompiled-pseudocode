/*
 * XREFs of sub_14000FFE4 @ 0x14000FFE4
 * Callers:
 *     sub_14000FFD8 @ 0x14000FFD8 (sub_14000FFD8.c)
 *     sub_1400100C4 @ 0x1400100C4 (sub_1400100C4.c)
 *     sub_1400101A8 @ 0x1400101A8 (sub_1400101A8.c)
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_140018504 @ 0x140018504 (sub_140018504.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     sub_14004229C @ 0x14004229C (sub_14004229C.c)
 *     sub_140043088 @ 0x140043088 (sub_140043088.c)
 *     sub_140069748 @ 0x140069748 (sub_140069748.c)
 *     sub_14006D4A0 @ 0x14006D4A0 (sub_14006D4A0.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 * Callees:
 *     sub_140010010 @ 0x140010010 (sub_140010010.c)
 */

__int64 __fastcall sub_14000FFE4(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = sub_140010010();
  *a1 = 0LL;
  return result;
}
