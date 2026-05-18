/*
 * XREFs of sub_18004F174 @ 0x18004F174
 * Callers:
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_18004E514 @ 0x18004E514 (sub_18004E514.c)
 *     sub_1800C8EA0 @ 0x1800C8EA0 (sub_1800C8EA0.c)
 *     sub_1800CA8B0 @ 0x1800CA8B0 (sub_1800CA8B0.c)
 *     sub_1800CC5F0 @ 0x1800CC5F0 (sub_1800CC5F0.c)
 *     sub_1800CC850 @ 0x1800CC850 (sub_1800CC850.c)
 *     sub_1800CCAB0 @ 0x1800CCAB0 (sub_1800CCAB0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18004F174(__int64 a1)
{
  return *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) && *(_DWORD *)(a1 + 32) == *(_DWORD *)(a1 + 24);
}
