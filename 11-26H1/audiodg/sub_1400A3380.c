/*
 * XREFs of sub_1400A3380 @ 0x1400A3380
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A3380(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 - 424;
  _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(v1 + 88) + 24LL), 0LL, 0LL);
  sub_1400B6010(v1);
  return 0LL;
}
