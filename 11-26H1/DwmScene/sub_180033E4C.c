/*
 * XREFs of sub_180033E4C @ 0x180033E4C
 * Callers:
 *     sub_180019170 @ 0x180019170 (sub_180019170.c)
 *     sub_18001A000 @ 0x18001A000 (sub_18001A000.c)
 *     sub_180033900 @ 0x180033900 (sub_180033900.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_180034E70 @ 0x180034E70 (sub_180034E70.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180033E4C(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // rsi
  __int64 v6; // rdx
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  sub_180029DD4(a1 + 112, (__int64)v8);
  if ( (unsigned int)v3 >= (unsigned int)sub_180033EEC(a1) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = (unsigned int)v3;
    if ( (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4 <= v3 )
    {
      std::_Xout_of_range("invalid vector subscript");
      __debugbreak();
    }
    sub_180012C40(a2, (_QWORD *)(*(_QWORD *)(a1 + 88) + 16 * v6));
  }
  sub_180029B0C((__int64)v8);
  return a2;
}
