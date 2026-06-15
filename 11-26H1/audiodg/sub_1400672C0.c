/*
 * XREFs of sub_1400672C0 @ 0x1400672C0
 * Callers:
 *     sub_140085790 @ 0x140085790 (sub_140085790.c)
 *     sub_140086650 @ 0x140086650 (sub_140086650.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400672C0(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v3 = 0LL;
  if ( (int)sub_1400B6010(v1) >= 0 )
    sub_1400B6010(v3);
  return sub_140003238(&v3);
}
