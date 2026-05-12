/*
 * XREFs of sub_14009E2A8 @ 0x14009E2A8
 * Callers:
 *     sub_14017BF84 @ 0x14017BF84 (sub_14017BF84.c)
 *     sub_1401B1388 @ 0x1401B1388 (sub_1401B1388.c)
 * Callees:
 *     sub_140031D4C @ 0x140031D4C (sub_140031D4C.c)
 *     sub_14005E0AC @ 0x14005E0AC (sub_14005E0AC.c)
 */

void __fastcall sub_14009E2A8(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 504) & 0x20) != 0 )
  {
    sub_14005E0AC(*(_QWORD *)(a1 + 24), a1);
    sub_140031D4C(*(_QWORD *)(a1 + 24), (_QWORD *)a1);
  }
}
