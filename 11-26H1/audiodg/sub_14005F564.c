/*
 * XREFs of sub_14005F564 @ 0x14005F564
 * Callers:
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14005F564(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  __int64 v5; // rcx

  v3 = sub_1400B6010(a1);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v3 = sub_1400B6010(0LL);
  if ( v3 < 0 )
    return (unsigned int)v3;
  v5 = *a2;
  *a2 = 0LL;
  if ( v5 )
    sub_1400B6010(v5);
  return 0LL;
}
