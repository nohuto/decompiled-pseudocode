/*
 * XREFs of sub_14004E2C8 @ 0x14004E2C8
 * Callers:
 *     sub_14002B8B0 @ 0x14002B8B0 (sub_14002B8B0.c)
 *     sub_14002BB98 @ 0x14002BB98 (sub_14002BB98.c)
 *     sub_140032480 @ 0x140032480 (sub_140032480.c)
 *     sub_14004BAC0 @ 0x14004BAC0 (sub_14004BAC0.c)
 *     sub_140050638 @ 0x140050638 (sub_140050638.c)
 *     sub_140052558 @ 0x140052558 (sub_140052558.c)
 *     sub_140052648 @ 0x140052648 (sub_140052648.c)
 *     sub_1400825E0 @ 0x1400825E0 (sub_1400825E0.c)
 *     sub_1400842D8 @ 0x1400842D8 (sub_1400842D8.c)
 *     sub_140085590 @ 0x140085590 (sub_140085590.c)
 * Callees:
 *     sub_14004BF90 @ 0x14004BF90 (sub_14004BF90.c)
 */

__int64 __fastcall sub_14004E2C8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+20h] [rbp-48h]
  __int64 retaddr; // [rsp+68h] [rbp+0h]

  v4 = a4;
  sub_14004BF90(a1, a2, a3, a4, v6, retaddr, a4);
  return v4;
}
