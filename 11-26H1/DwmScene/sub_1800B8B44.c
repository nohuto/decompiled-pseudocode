/*
 * XREFs of sub_1800B8B44 @ 0x1800B8B44
 * Callers:
 *     sub_1800BEDF0 @ 0x1800BEDF0 (sub_1800BEDF0.c)
 * Callees:
 *     sub_18001E17C @ 0x18001E17C (sub_18001E17C.c)
 */

__int64 __fastcall sub_1800B8B44(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a2 == a3 )
  {
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  else
  {
    sub_18001E17C((char **)a1, a2, (a3 - a2) >> 1);
  }
  return a1;
}
