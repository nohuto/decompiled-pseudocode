/*
 * XREFs of sub_18007B538 @ 0x18007B538
 * Callers:
 *     sub_18004BD9C @ 0x18004BD9C (sub_18004BD9C.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_18007B3D4 @ 0x18007B3D4 (sub_18007B3D4.c)
 */

__int64 __fastcall sub_18007B538(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 v6; // r8

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_1800143C0(a1 + 16);
  *(_DWORD *)(a1 + 48) = a3;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  sub_180012C40((_QWORD *)(a1 + 1152), a2);
  *(_QWORD *)(a1 + 1168) = 0LL;
  *(_QWORD *)(a1 + 1176) = 0LL;
  *(_QWORD *)(a1 + 1184) = 0LL;
  *(_QWORD *)(a1 + 1192) = 0LL;
  *(_QWORD *)(a1 + 1200) = 0LL;
  *(_QWORD *)(a1 + 1208) = 0LL;
  *(_QWORD *)(a1 + 1216) = 0LL;
  *(_QWORD *)(a1 + 1224) = 0LL;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_WORD *)(a1 + 1240) = 0;
  *(_BYTE *)(a1 + 1242) = 0;
  sub_18007B3D4((char *)(a1 + 128), v6);
  return a1;
}
