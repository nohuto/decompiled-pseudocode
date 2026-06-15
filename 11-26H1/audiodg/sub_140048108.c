/*
 * XREFs of sub_140048108 @ 0x140048108
 * Callers:
 *     sub_14001E8BC @ 0x14001E8BC (sub_14001E8BC.c)
 *     sub_1400443F8 @ 0x1400443F8 (sub_1400443F8.c)
 *     sub_140097200 @ 0x140097200 (sub_140097200.c)
 *     sub_140097700 @ 0x140097700 (sub_140097700.c)
 *     sub_140098810 @ 0x140098810 (sub_140098810.c)
 *     sub_140099670 @ 0x140099670 (sub_140099670.c)
 *     sub_1400997E0 @ 0x1400997E0 (sub_1400997E0.c)
 *     sub_14009AB10 @ 0x14009AB10 (sub_14009AB10.c)
 *     sub_14009BE40 @ 0x14009BE40 (sub_14009BE40.c)
 *     sub_14009D7C0 @ 0x14009D7C0 (sub_14009D7C0.c)
 *     sub_14009E010 @ 0x14009E010 (sub_14009E010.c)
 *     sub_14009E4F0 @ 0x14009E4F0 (sub_14009E4F0.c)
 *     sub_14009E630 @ 0x14009E630 (sub_14009E630.c)
 *     sub_14009E814 @ 0x14009E814 (sub_14009E814.c)
 *     sub_14009E960 @ 0x14009E960 (sub_14009E960.c)
 *     sub_14009E9C0 @ 0x14009E9C0 (sub_14009E9C0.c)
 *     sub_14009EA20 @ 0x14009EA20 (sub_14009EA20.c)
 *     sub_14009EA80 @ 0x14009EA80 (sub_14009EA80.c)
 *     sub_14009EAD0 @ 0x14009EAD0 (sub_14009EAD0.c)
 *     sub_14009EB20 @ 0x14009EB20 (sub_14009EB20.c)
 *     sub_14009EB70 @ 0x14009EB70 (sub_14009EB70.c)
 *     sub_14009EBE0 @ 0x14009EBE0 (sub_14009EBE0.c)
 *     sub_14009EC30 @ 0x14009EC30 (sub_14009EC30.c)
 *     sub_14009EC80 @ 0x14009EC80 (sub_14009EC80.c)
 *     sub_14009ECD0 @ 0x14009ECD0 (sub_14009ECD0.c)
 *     sub_14009EE00 @ 0x14009EE00 (sub_14009EE00.c)
 *     sub_1400A20F4 @ 0x1400A20F4 (sub_1400A20F4.c)
 *     sub_1400A25E0 @ 0x1400A25E0 (sub_1400A25E0.c)
 *     sub_1400A2730 @ 0x1400A2730 (sub_1400A2730.c)
 *     sub_1400A2870 @ 0x1400A2870 (sub_1400A2870.c)
 *     sub_1400A2AB0 @ 0x1400A2AB0 (sub_1400A2AB0.c)
 *     sub_1400A3730 @ 0x1400A3730 (sub_1400A3730.c)
 *     sub_1400A3810 @ 0x1400A3810 (sub_1400A3810.c)
 *     sub_1400A3A70 @ 0x1400A3A70 (sub_1400A3A70.c)
 *     sub_1400A3BB0 @ 0x1400A3BB0 (sub_1400A3BB0.c)
 *     sub_1400A3D50 @ 0x1400A3D50 (sub_1400A3D50.c)
 *     sub_1400A3F60 @ 0x1400A3F60 (sub_1400A3F60.c)
 *     sub_1400A41C0 @ 0x1400A41C0 (sub_1400A41C0.c)
 *     sub_1400A4438 @ 0x1400A4438 (sub_1400A4438.c)
 *     sub_1400A47BC @ 0x1400A47BC (sub_1400A47BC.c)
 *     sub_1400A4B50 @ 0x1400A4B50 (sub_1400A4B50.c)
 * Callees:
 *     sub_140002688 @ 0x140002688 (sub_140002688.c)
 *     sub_14002813C @ 0x14002813C (sub_14002813C.c)
 */

void sub_140048108()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  void *v4; // r11
  int v5; // [rsp+40h] [rbp-18h] BYREF
  void *v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1400E7428 > 2 )
  {
    if ( sub_14002813C((__int64)&dword_1400E7428, 1LL) )
    {
      v7 = v2;
      v5 = v3;
      v6 = v4;
      sub_140002688(v0, (__int64)&unk_1400D3F30, v1, v2, &v6, (__int64)&v5, (__int64)&v7);
    }
  }
}
