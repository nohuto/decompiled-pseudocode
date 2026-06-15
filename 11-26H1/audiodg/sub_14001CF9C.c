/*
 * XREFs of sub_14001CF9C @ 0x14001CF9C
 * Callers:
 *     sub_14001CF60 @ 0x14001CF60 (sub_14001CF60.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140016F3C @ 0x140016F3C (sub_140016F3C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14001CF9C(__int64 *a1)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  __int64 *v4; // rdi

  *a1 = (__int64)&off_1400B8AE8;
  a1[1] = (__int64)off_1400B8B88;
  a1[2] = (__int64)off_1400B8B40;
  v2 = a1 + 8;
  v3 = a1[8];
  if ( v3 )
  {
    sub_1400B6010(v3);
    v4 = a1 + 9;
    sub_1400B6010(a1[9]);
  }
  else
  {
    v4 = a1 + 9;
  }
  sub_140016F3C(a1 + 10);
  sub_140003238(v4);
  sub_140003238(v2);
  return sub_140016EDC((__int64)a1);
}
