/*
 * XREFs of sub_180036410 @ 0x180036410
 * Callers:
 *     sub_1800364D0 @ 0x1800364D0 (sub_1800364D0.c)
 * Callees:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_1800328D8 @ 0x1800328D8 (sub_1800328D8.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 *     sub_18003608C @ 0x18003608C (sub_18003608C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180036410(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  sub_180029DD4(a1 + 8, (__int64)v7);
  sub_180029DD4(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_180033EEC(a1); ++i )
  {
    v3 = sub_180033E4C(a1, &v5, i);
    sub_18003608C(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_QWORD *)(a1 + 1372) = 2139095039LL;
  *(_QWORD *)(a1 + 1384) = 0LL;
  sub_1800328D8((__int64 ***)(a1 + 1424));
  sub_180029B0C((__int64)v6);
  return sub_180029B0C((__int64)v7);
}
