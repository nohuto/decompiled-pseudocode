/*
 * XREFs of sub_18003EFE4 @ 0x18003EFE4
 * Callers:
 *     sub_18003FAF4 @ 0x18003FAF4 (sub_18003FAF4.c)
 * Callees:
 *     sub_180029AC0 @ 0x180029AC0 (sub_180029AC0.c)
 *     sub_1800309F0 @ 0x1800309F0 (sub_1800309F0.c)
 *     sub_18003EF1C @ 0x18003EF1C (sub_18003EF1C.c)
 *     sub_18003EF40 @ 0x18003EF40 (sub_18003EF40.c)
 *     sub_18003EF6C @ 0x18003EF6C (sub_18003EF6C.c)
 *     sub_18003EFB4 @ 0x18003EFB4 (sub_18003EFB4.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18003EFE4(__int64 a1, __int64 a2)
{
  int v4; // edx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2 )
    v4 = *(_DWORD *)(a2 + 32);
  else
    v4 = 1;
  sub_180029AC0(a1 + 16, v4);
  sub_18003EF40((_QWORD *)(a1 + 72));
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_18003EF6C((__int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  sub_18003EFB4(a1 + 120);
  sub_1800D5364(a1 + 184);
  sub_18003EF1C((_DWORD *)(a1 + 192), 0);
  sub_1800309F0((__int64 *)(a1 + 200));
  return a1;
}
