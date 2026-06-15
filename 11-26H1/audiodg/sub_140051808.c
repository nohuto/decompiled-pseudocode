/*
 * XREFs of sub_140051808 @ 0x140051808
 * Callers:
 *     sub_140052008 @ 0x140052008 (sub_140052008.c)
 * Callees:
 *     sub_140020C34 @ 0x140020C34 (sub_140020C34.c)
 *     sub_1400518C0 @ 0x1400518C0 (sub_1400518C0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140051808(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax

  sub_140020C34(a1 + 5, a2);
  v4 = a1[7];
  v5 = 0;
  a1[7] = 0LL;
  if ( v4 )
    sub_1400B6010(v4);
  v6 = a1[8];
  a1[8] = 0LL;
  if ( v6 )
    sub_1400B6010(v6);
  v7 = a1[6];
  a1[6] = 0LL;
  if ( v7 )
    sub_1400B6010(v7);
  v8 = sub_1400518C0(a2, a1 + 6, a1 + 8, a1 + 7);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v5;
}
