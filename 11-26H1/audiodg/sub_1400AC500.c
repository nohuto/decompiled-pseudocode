/*
 * XREFs of sub_1400AC500 @ 0x1400AC500
 * Callers:
 *     sub_14003FD7C @ 0x14003FD7C (sub_14003FD7C.c)
 *     sub_1400A6B70 @ 0x1400A6B70 (sub_1400A6B70.c)
 *     sub_1400A6BF0 @ 0x1400A6BF0 (sub_1400A6BF0.c)
 *     sub_1400A6C70 @ 0x1400A6C70 (sub_1400A6C70.c)
 *     sub_1400A6D40 @ 0x1400A6D40 (sub_1400A6D40.c)
 *     sub_1400A6EB4 @ 0x1400A6EB4 (sub_1400A6EB4.c)
 *     sub_1400A6FCC @ 0x1400A6FCC (sub_1400A6FCC.c)
 *     sub_1400A7170 @ 0x1400A7170 (sub_1400A7170.c)
 *     sub_1400A7640 @ 0x1400A7640 (sub_1400A7640.c)
 *     sub_1400A7B44 @ 0x1400A7B44 (sub_1400A7B44.c)
 *     sub_1400A7BE8 @ 0x1400A7BE8 (sub_1400A7BE8.c)
 *     sub_1400A7C90 @ 0x1400A7C90 (sub_1400A7C90.c)
 *     sub_1400A7D40 @ 0x1400A7D40 (sub_1400A7D40.c)
 *     sub_1400A7DF0 @ 0x1400A7DF0 (sub_1400A7DF0.c)
 *     sub_1400A7EA0 @ 0x1400A7EA0 (sub_1400A7EA0.c)
 *     sub_1400A7F90 @ 0x1400A7F90 (sub_1400A7F90.c)
 *     sub_1400A8030 @ 0x1400A8030 (sub_1400A8030.c)
 *     sub_1400A80E0 @ 0x1400A80E0 (sub_1400A80E0.c)
 *     sub_1400A8120 @ 0x1400A8120 (sub_1400A8120.c)
 *     sub_1400A87A0 @ 0x1400A87A0 (sub_1400A87A0.c)
 *     sub_1400A89D0 @ 0x1400A89D0 (sub_1400A89D0.c)
 *     sub_1400A9C90 @ 0x1400A9C90 (sub_1400A9C90.c)
 *     sub_1400A9CF0 @ 0x1400A9CF0 (sub_1400A9CF0.c)
 *     sub_1400A9D50 @ 0x1400A9D50 (sub_1400A9D50.c)
 *     sub_1400A9DE0 @ 0x1400A9DE0 (sub_1400A9DE0.c)
 *     sub_1400A9E70 @ 0x1400A9E70 (sub_1400A9E70.c)
 *     sub_1400A9EC0 @ 0x1400A9EC0 (sub_1400A9EC0.c)
 *     sub_1400A9F10 @ 0x1400A9F10 (sub_1400A9F10.c)
 *     sub_1400A9F60 @ 0x1400A9F60 (sub_1400A9F60.c)
 *     sub_1400AB180 @ 0x1400AB180 (sub_1400AB180.c)
 *     sub_1400AB210 @ 0x1400AB210 (sub_1400AB210.c)
 *     sub_1400AB354 @ 0x1400AB354 (sub_1400AB354.c)
 *     sub_1400AB3D8 @ 0x1400AB3D8 (sub_1400AB3D8.c)
 *     sub_1400AD420 @ 0x1400AD420 (sub_1400AD420.c)
 *     sub_1400AD490 @ 0x1400AD490 (sub_1400AD490.c)
 * Callees:
 *     sub_140002688 @ 0x140002688 (sub_140002688.c)
 */

__int64 __fastcall sub_1400AC500(void *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+40h] [rbp-18h] BYREF
  void *v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1400E7460 > 2 )
  {
    v5 = a2;
    v6 = a1;
    v7 = a3;
    return sub_140002688((__int64)&dword_1400E7460, (__int64)&unk_1400D43E1, a3, a4, &v6, (__int64)&v5, (__int64)&v7);
  }
  return result;
}
