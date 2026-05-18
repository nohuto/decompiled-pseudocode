/*
 * XREFs of sub_18008A170 @ 0x18008A170
 * Callers:
 *     sub_180089CE8 @ 0x180089CE8 (sub_180089CE8.c)
 * Callees:
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_18008A244 @ 0x18008A244 (sub_18008A244.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008A170(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  sub_180012C40((_QWORD *)a1, (_QWORD *)a2);
  sub_180012C40((_QWORD *)(v5 + 16), (_QWORD *)(v4 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  sub_18008A244(a1 + 56, a2 + 56);
  sub_18001D3F0(a1 + 120, a2 + 120);
  return a1;
}
