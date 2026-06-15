/*
 * XREFs of sub_14004D37C @ 0x14004D37C
 * Callers:
 *     sub_140080C8C @ 0x140080C8C (sub_140080C8C.c)
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 *     sub_14008C1A0 @ 0x14008C1A0 (sub_14008C1A0.c)
 *     sub_1400A9290 @ 0x1400A9290 (sub_1400A9290.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14004D37C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a3 )
  {
    v3 = a3;
    do
    {
      result = sub_1400B6010(a1);
      a1 += a2;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
