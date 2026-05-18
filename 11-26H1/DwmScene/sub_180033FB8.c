/*
 * XREFs of sub_180033FB8 @ 0x180033FB8
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029DD4 @ 0x180029DD4 (sub_180029DD4.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180033FB8(__int64 a1, _QWORD *a2)
{
  unsigned int i; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_180029DD4(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_180033EEC(a1); ++i )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * i) == *a2 )
      goto LABEL_6;
  }
  i = -1;
LABEL_6:
  sub_180029B0C((__int64)v6);
  return i;
}
