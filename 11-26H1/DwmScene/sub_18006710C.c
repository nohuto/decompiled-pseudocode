/*
 * XREFs of sub_18006710C @ 0x18006710C
 * Callers:
 *     sub_1800648C4 @ 0x1800648C4 (sub_1800648C4.c)
 *     sub_180068050 @ 0x180068050 (sub_180068050.c)
 * Callees:
 *     _o_sqrtf @ 0x18000CEA0 (_o_sqrtf.c)
 *     _o_tanf @ 0x18000CEAC (_o_tanf.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18007F1B0 @ 0x18007F1B0 (sub_18007F1B0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006710C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        __int64 a14,
        _QWORD *a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 result; // rax
  __int64 v20; // rcx

  o_tanf();
  o_sqrtf();
  sub_18007F1B0(*a15, a19);
  sub_18007F1B0(*a15, a16);
  sub_18007F1B0(*a15, a17);
  sub_18007F1B0(*a15, a18);
  result = a14;
  v20 = *(_QWORD *)(a14 + 8);
  if ( v20 )
    return sub_180010EC8(v20);
  return result;
}
