/*
 * XREFs of sub_1400036C0 @ 0x1400036C0
 * Callers:
 *     sub_14000370C @ 0x14000370C (sub_14000370C.c)
 *     sub_14006B8B0 @ 0x14006B8B0 (sub_14006B8B0.c)
 * Callees:
 *     sub_140003424 @ 0x140003424 (sub_140003424.c)
 */

__int64 __fastcall sub_1400036C0(__int64 a1)
{
  *(_DWORD *)(a1 + 336) = 0;
  *(_OWORD *)(a1 + 344) = 0LL;
  *(_OWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_BYTE *)(a1 + 384) = 0;
  sub_140003424(a1 + 16);
  return a1;
}
