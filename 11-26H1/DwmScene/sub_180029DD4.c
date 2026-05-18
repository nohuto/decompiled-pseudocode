/*
 * XREFs of sub_180029DD4 @ 0x180029DD4
 * Callers:
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_180033E4C @ 0x180033E4C (sub_180033E4C.c)
 *     sub_180033EEC @ 0x180033EEC (sub_180033EEC.c)
 *     sub_180033F34 @ 0x180033F34 (sub_180033F34.c)
 *     sub_180033FB8 @ 0x180033FB8 (sub_180033FB8.c)
 *     sub_18003412C @ 0x18003412C (sub_18003412C.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_180036040 @ 0x180036040 (sub_180036040.c)
 *     sub_18003608C @ 0x18003608C (sub_18003608C.c)
 *     sub_180036410 @ 0x180036410 (sub_180036410.c)
 * Callees:
 *     sub_180029B0C @ 0x180029B0C (sub_180029B0C.c)
 *     sub_180029B2C @ 0x180029B2C (sub_180029B2C.c)
 *     sub_180029DAC @ 0x180029DAC (sub_180029DAC.c)
 *     sub_18002A070 @ 0x18002A070 (sub_18002A070.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029DD4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 *v5; // rax
  _BYTE v7[32]; // [rsp+28h] [rbp-20h] BYREF

  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_18002A070(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_18002A070(a1, v4) )
    {
      v5 = (__int64 *)sub_180029DAC(a1, (__int64)v7);
      sub_180029B2C((__int64 *)a2, v5);
      sub_180029B0C((__int64)v7);
    }
  }
  return a2;
}
