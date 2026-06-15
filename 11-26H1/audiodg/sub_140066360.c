/*
 * XREFs of sub_140066360 @ 0x140066360
 * Callers:
 *     <none>
 * Callees:
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140066360(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  sub_1400B6010(*(_QWORD *)(a1 + 40));
  v1 = sub_1400B6010(v3);
  sub_140056130(&v3);
  return v1;
}
