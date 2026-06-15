/*
 * XREFs of sub_1400866C4 @ 0x1400866C4
 * Callers:
 *     sub_14008670C @ 0x14008670C (sub_14008670C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1400866C4(__int64 a1, __int64 *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  v2 = *a2;
  v5 = 0LL;
  v3 = (unsigned int)sub_140026F50(v2, (__int64)&stru_1400C6598, &v5) >> 31;
  sub_140003238(&v5);
  return v3;
}
