/*
 * XREFs of sub_14009E2E0 @ 0x14009E2E0
 * Callers:
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 * Callees:
 *     sub_140031FD4 @ 0x140031FD4 (sub_140031FD4.c)
 *     sub_14005B0D0 @ 0x14005B0D0 (sub_14005B0D0.c)
 */

void __fastcall sub_14009E2E0(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 504) & 0x20) == 0 )
  {
    sub_140031FD4(*(_QWORD *)(a1 + 24), a1);
    sub_14005B0D0(*(_QWORD *)(a1 + 24), a1);
  }
}
