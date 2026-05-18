/*
 * XREFs of sub_18005C180 @ 0x18005C180
 * Callers:
 *     sub_18005E490 @ 0x18005E490 (sub_18005E490.c)
 *     sub_180090114 @ 0x180090114 (sub_180090114.c)
 *     sub_180090704 @ 0x180090704 (sub_180090704.c)
 * Callees:
 *     sub_180043DE0 @ 0x180043DE0 (sub_180043DE0.c)
 */

__int64 __fastcall sub_18005C180(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = sub_180043DE0(v3);
      v3 += 64LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
