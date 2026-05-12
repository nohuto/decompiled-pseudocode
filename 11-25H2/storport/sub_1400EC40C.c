/*
 * XREFs of sub_1400EC40C @ 0x1400EC40C
 * Callers:
 *     sub_1400BCF34 @ 0x1400BCF34 (sub_1400BCF34.c)
 *     sub_1400DCCE0 @ 0x1400DCCE0 (sub_1400DCCE0.c)
 *     sub_1400E00D0 @ 0x1400E00D0 (sub_1400E00D0.c)
 *     sub_1400E5964 @ 0x1400E5964 (sub_1400E5964.c)
 *     sub_1400E74D0 @ 0x1400E74D0 (sub_1400E74D0.c)
 *     sub_1400F16A4 @ 0x1400F16A4 (sub_1400F16A4.c)
 *     sub_1400F6320 @ 0x1400F6320 (sub_1400F6320.c)
 *     sub_1400F6568 @ 0x1400F6568 (sub_1400F6568.c)
 * Callees:
 *     sub_1400327F0 @ 0x1400327F0 (sub_1400327F0.c)
 */

__int64 __fastcall sub_1400EC40C(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v4 = 0LL;
  if ( !a2 )
    return 0LL;
  if ( (int)sub_1400327F0(a1 + 664, a2, &v4) >= 0 )
    return v4 - 40;
  return v2;
}
