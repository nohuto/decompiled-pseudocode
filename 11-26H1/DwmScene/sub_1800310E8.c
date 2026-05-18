/*
 * XREFs of sub_1800310E8 @ 0x1800310E8
 * Callers:
 *     sub_180030CF0 @ 0x180030CF0 (sub_180030CF0.c)
 *     sub_1800378CC @ 0x1800378CC (sub_1800378CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800310E8(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1LL;
  *(_BYTE *)(a1 + 28) = 1;
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)(a1 + 80) = 1LL;
  result = a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 40960;
  *(_QWORD *)(a1 + 72) = 45312LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 3;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  return result;
}
