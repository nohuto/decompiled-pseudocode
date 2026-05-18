/*
 * XREFs of sub_1800840DC @ 0x1800840DC
 * Callers:
 *     sub_180050EA0 @ 0x180050EA0 (sub_180050EA0.c)
 *     sub_180050EF0 @ 0x180050EF0 (sub_180050EF0.c)
 *     sub_1800BADBC @ 0x1800BADBC (sub_1800BADBC.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 * Callees:
 *     sub_180038A48 @ 0x180038A48 (sub_180038A48.c)
 */

__int64 __fastcall sub_1800840DC(_QWORD *a1)
{
  *a1 = &Spectre::Engine::DeviceArrayBuffer::`vftable';
  sub_180038A48(a1 + 12);
  return sub_180027BC8((__int64)a1);
}
