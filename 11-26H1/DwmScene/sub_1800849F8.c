/*
 * XREFs of sub_1800849F8 @ 0x1800849F8
 * Callers:
 *     sub_18008465C @ 0x18008465C (sub_18008465C.c)
 * Callees:
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 */

__int64 __fastcall sub_1800849F8(__int64 a1, __int64 a2)
{
  sub_1800143E4(a1, a2);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  return a1;
}
