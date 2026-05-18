/*
 * XREFs of sub_18003B5C4 @ 0x18003B5C4
 * Callers:
 *     sub_18003B678 @ 0x18003B678 (sub_18003B678.c)
 *     sub_18006382C @ 0x18006382C (sub_18006382C.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

_QWORD *__fastcall sub_18003B5C4(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rdx

  sub_18003D718(a1);
  v4 = *(_QWORD **)(a1 + 32);
  if ( v4 == *(_QWORD **)(a1 + 40) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012C40(a2, v4);
  }
  return a2;
}
