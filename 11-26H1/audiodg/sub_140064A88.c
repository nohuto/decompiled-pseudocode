/*
 * XREFs of sub_140064A88 @ 0x140064A88
 * Callers:
 *     sub_140040B58 @ 0x140040B58 (sub_140040B58.c)
 *     sub_1400646D0 @ 0x1400646D0 (sub_1400646D0.c)
 *     sub_14006C91C @ 0x14006C91C (sub_14006C91C.c)
 *     sub_14006C9F4 @ 0x14006C9F4 (sub_14006C9F4.c)
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 *     sub_140086F60 @ 0x140086F60 (sub_140086F60.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_140064A88(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx

  v3 = *a2;
  *a1 = *a2;
  if ( v3 )
    sub_1400B6010(v3);
  return a1;
}
