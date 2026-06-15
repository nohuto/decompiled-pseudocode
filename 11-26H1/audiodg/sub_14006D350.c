/*
 * XREFs of sub_14006D350 @ 0x14006D350
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002644C @ 0x14002644C (sub_14002644C.c)
 */

__int64 __fastcall sub_14006D350(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx

  *a2 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
    sub_14002644C(v2, (__int64)&xmmword_1400C6628, 0LL, 0LL, a2);
  return 0LL;
}
