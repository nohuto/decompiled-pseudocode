/*
 * XREFs of sub_14006B3A4 @ 0x14006B3A4
 * Callers:
 *     sub_14006C334 @ 0x14006C334 (sub_14006C334.c)
 *     sub_14006C420 @ 0x14006C420 (sub_14006C420.c)
 *     sub_14006C668 @ 0x14006C668 (sub_14006C668.c)
 *     sub_14006CBC0 @ 0x14006CBC0 (sub_14006CBC0.c)
 *     sub_1400D34A0 @ 0x1400D34A0 (sub_1400D34A0.c)
 *     sub_1400D8C60 @ 0x1400D8C60 (sub_1400D8C60.c)
 *     sub_1401284F0 @ 0x1401284F0 (sub_1401284F0.c)
 *     sub_140128E40 @ 0x140128E40 (sub_140128E40.c)
 *     sub_1401295D0 @ 0x1401295D0 (sub_1401295D0.c)
 *     sub_140129D80 @ 0x140129D80 (sub_140129D80.c)
 *     sub_14012A360 @ 0x14012A360 (sub_14012A360.c)
 *     sub_14012ACA0 @ 0x14012ACA0 (sub_14012ACA0.c)
 *     sub_14012AED0 @ 0x14012AED0 (sub_14012AED0.c)
 *     sub_14012F9F4 @ 0x14012F9F4 (sub_14012F9F4.c)
 *     sub_1401A7A14 @ 0x1401A7A14 (sub_1401A7A14.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_14006B3A4(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v2 = *(_DWORD **)(a1 + 64);
    if ( *v2 == 1314275652 )
      return v2;
  }
  return result;
}
