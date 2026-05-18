/*
 * XREFs of sub_180056DC0 @ 0x180056DC0
 * Callers:
 *     sub_1800579C0 @ 0x1800579C0 (sub_1800579C0.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180056DC0(__int64 a1)
{
  sub_18000D81C(a1, 16LL, 12LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C(a1 + 192, 16LL, 16LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  sub_18000D81C(a1 + 448, 16LL, 16LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  *(_QWORD *)(a1 + 704) = 0LL;
  *(_QWORD *)(a1 + 712) = 0LL;
  *(_QWORD *)(a1 + 720) = 0LL;
  *(_QWORD *)(a1 + 728) = 0LL;
  *(_QWORD *)(a1 + 736) = 0LL;
  *(_QWORD *)(a1 + 744) = 0LL;
  *(_DWORD *)(a1 + 752) = 0;
  sub_18000D81C(a1 + 760, 16LL, 15LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_QWORD *)(a1 + 1128) = 0LL;
  *(_QWORD *)(a1 + 1136) = 0LL;
  *(_QWORD *)(a1 + 1144) = 0LL;
  *(_QWORD *)(a1 + 1152) = 0LL;
  *(_QWORD *)(a1 + 1160) = 0LL;
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_DWORD *)(a1 + 1176) = 0;
  sub_18000D81C(a1 + 1184, 16LL, 8LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  *(_QWORD *)(a1 + 1312) = 0LL;
  *(_QWORD *)(a1 + 1320) = 0LL;
  if ( a1 + 1000 <= (unsigned __int64)(a1 + 1060) )
    memset((void *)(a1 + 1000), 0, 4LL * (a1 + 1060 >= (unsigned __int64)(a1 + 1000) ? 0xF : 0));
  if ( a1 + 1060 <= (unsigned __int64)(a1 + 1120) )
    memset((void *)(a1 + 1060), 0, 4LL * (a1 + 1120 >= (unsigned __int64)(a1 + 1060) ? 0xF : 0));
  return a1;
}
