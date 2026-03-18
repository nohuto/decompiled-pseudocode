/*
 * XREFs of sub_140029AF8 @ 0x140029AF8
 * Callers:
 *     sub_140029900 @ 0x140029900 (sub_140029900.c)
 * Callees:
 *     sub_140008130 @ 0x140008130 (sub_140008130.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_140020894 @ 0x140020894 (sub_140020894.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140029AF8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // r8d
  __int64 v8; // r8
  int v10; // [rsp+28h] [rbp-30h]

  sub_140032C80(a2, 0LL, 512LL);
  sub_140009580(a1, a1 + 1008);
  v6 = *(_QWORD *)(a1 + 1072);
  LOBYTE(v7) = 8;
  *(_BYTE *)(v6 + 4225) |= 3u;
  *(_WORD *)(v6 + 4212) = 0;
  sub_140020894(a1, v6, v7, 0x200u, *a3, v10, 0LL, 1, 1u);
  *(_BYTE *)(v6 + 4225) |= 4u;
  *(_QWORD *)(v6 + 4160) = a2;
  *(_QWORD *)(v6 + 4168) = *a3;
  *(_DWORD *)(v6 + 4208) = 512;
  sub_1400092F0(a1, a1 + 1016);
  LOBYTE(v8) = 1;
  sub_140008130(a1, a1 + 1016, v8);
  return *(_BYTE *)(a1 + 1019) != 1 ? 0xC1000001 : 0;
}
