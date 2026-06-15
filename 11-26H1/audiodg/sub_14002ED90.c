/*
 * XREFs of sub_14002ED90 @ 0x14002ED90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_14004D1AC @ 0x14004D1AC (sub_14004D1AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14002ED90(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // r10
  unsigned int v3; // ebx

  v1 = sub_1400444D0(a1 + 8);
  v3 = v1;
  if ( v1 )
  {
    if ( v1 == 1 )
      sub_1400B6010(qword_1400E8490);
  }
  else if ( v2 )
  {
    sub_14004D1AC(v2);
  }
  return v3;
}
