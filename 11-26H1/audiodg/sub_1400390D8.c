/*
 * XREFs of sub_1400390D8 @ 0x1400390D8
 * Callers:
 *     sub_1400390A4 @ 0x1400390A4 (sub_1400390A4.c)
 *     sub_1400390B4 @ 0x1400390B4 (sub_1400390B4.c)
 *     sub_14004505C @ 0x14004505C (sub_14004505C.c)
 *     sub_140096888 @ 0x140096888 (sub_140096888.c)
 *     sub_140096938 @ 0x140096938 (sub_140096938.c)
 *     sub_1400A29A8 @ 0x1400A29A8 (sub_1400A29A8.c)
 *     sub_1400A60D0 @ 0x1400A60D0 (sub_1400A60D0.c)
 *     sub_1400A61CC @ 0x1400A61CC (sub_1400A61CC.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400390D8(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return sub_1400B6010(v2);
  return result;
}
