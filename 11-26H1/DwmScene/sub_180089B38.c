/*
 * XREFs of sub_180089B38 @ 0x180089B38
 * Callers:
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 * Callees:
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_180030794 @ 0x180030794 (sub_180030794.c)
 *     sub_18008A244 @ 0x18008A244 (sub_18008A244.c)
 *     sub_18008A398 @ 0x18008A398 (sub_18008A398.c)
 *     sub_18008A458 @ 0x18008A458 (sub_18008A458.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180089B38(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax

  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 32) = 0LL;
  sub_18008A244(a1 + 40, a2 + 56);
  sub_18001D3F0(a1 + 104, a2 + 120);
  sub_180030794((_BYTE *)(a1 + 168), 0);
  sub_18008A398(a2);
  sub_18008A458(a3);
  return a1;
}
