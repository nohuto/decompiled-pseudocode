/*
 * XREFs of sub_14005ED60 @ 0x14005ED60
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400444D0 @ 0x1400444D0 (sub_1400444D0.c)
 *     sub_14005E0E8 @ 0x14005E0E8 (sub_14005E0E8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005ED60(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400444D0((volatile signed __int32 *)(a1 + 8));
  if ( v1 )
  {
    if ( v1 == 1 )
      sub_1400B6010(qword_1400E8490);
  }
  else if ( v2 )
  {
    sub_14005E0E8(v2);
  }
  return v1;
}
