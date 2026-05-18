/*
 * XREFs of sub_18003BDF4 @ 0x18003BDF4
 * Callers:
 *     sub_180093040 @ 0x180093040 (sub_180093040.c)
 * Callees:
 *     sub_18003BCCC @ 0x18003BCCC (sub_18003BCCC.c)
 *     sub_18003BEEC @ 0x18003BEEC (sub_18003BEEC.c)
 *     sub_18003D718 @ 0x18003D718 (sub_18003D718.c)
 */

__int64 __fastcall sub_18003BDF4(__int64 a1, __int64 a2)
{
  _OWORD v5[4]; // [rsp+20h] [rbp-48h] BYREF

  sub_18003D718(a1);
  sub_18003BCCC(a1, v5);
  *(_QWORD *)a2 = 1065353216LL;
  *(_QWORD *)(a2 + 20) = 1065353216LL;
  *(_QWORD *)(a2 + 40) = 1065353216LL;
  *(_DWORD *)(a2 + 60) = 1065353216;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 28) = 0LL;
  *(_DWORD *)(a2 + 36) = 0;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  sub_18003BEEC(v5, a2);
  return a2;
}
