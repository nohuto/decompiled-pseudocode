/*
 * XREFs of sub_1400119BC @ 0x1400119BC
 * Callers:
 *     sub_140012C9C @ 0x140012C9C (sub_140012C9C.c)
 *     sub_140024E3C @ 0x140024E3C (sub_140024E3C.c)
 * Callees:
 *     sub_140007FAC @ 0x140007FAC (sub_140007FAC.c)
 */

__int64 __fastcall sub_1400119BC(__int64 a1, __int64 a2, float a3, float a4, int a5)
{
  __int64 v5; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 17;
  *(_QWORD *)(a1 + 32) = 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 10;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = a5;
  sub_140007FAC(a1);
  return v5;
}
