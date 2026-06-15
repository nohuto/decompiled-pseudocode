/*
 * XREFs of sub_14005D620 @ 0x14005D620
 * Callers:
 *     sub_14005D680 @ 0x14005D680 (sub_14005D680.c)
 * Callees:
 *     sub_1400178AC @ 0x1400178AC (sub_1400178AC.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14005D620(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_1400178AC((volatile signed __int32 *)(a1 + 20));
  if ( !v1 )
  {
    if ( v2 )
      sub_1400B6010(v2);
    if ( qword_1400E84B8 )
      sub_1400B6010(qword_1400E84B8);
  }
  return v1;
}
