/*
 * XREFs of sub_14000BCAC @ 0x14000BCAC
 * Callers:
 *     sub_14000AC80 @ 0x14000AC80 (sub_14000AC80.c)
 *     sub_14000B4E0 @ 0x14000B4E0 (sub_14000B4E0.c)
 *     sub_14000B920 @ 0x14000B920 (sub_14000B920.c)
 *     sub_14000BAE0 @ 0x14000BAE0 (sub_14000BAE0.c)
 *     sub_14000BC30 @ 0x14000BC30 (sub_14000BC30.c)
 *     sub_140040510 @ 0x140040510 (sub_140040510.c)
 *     sub_1400437BC @ 0x1400437BC (sub_1400437BC.c)
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 *     sub_14006C668 @ 0x14006C668 (sub_14006C668.c)
 *     sub_14006CBC0 @ 0x14006CBC0 (sub_14006CBC0.c)
 *     sub_1401A7A14 @ 0x1401A7A14 (sub_1401A7A14.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_14000BCAC(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_DWORD **)(a1 + 64);
    if ( *v2 == 1094997074 )
      return v2;
  }
  return result;
}
