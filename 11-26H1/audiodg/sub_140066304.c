/*
 * XREFs of sub_140066304 @ 0x140066304
 * Callers:
 *     sub_140084E2C @ 0x140084E2C (sub_140084E2C.c)
 * Callees:
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140066304(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0LL;
  v4 = 0LL;
  if ( (int)sub_1400B6010(v1) >= 0 )
    v2 = sub_1400B6010(v4);
  sub_140056130(&v4);
  return v2;
}
