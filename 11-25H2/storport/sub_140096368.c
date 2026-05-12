/*
 * XREFs of sub_140096368 @ 0x140096368
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 * Callees:
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_140090500 @ 0x140090500 (sub_140090500.c)
 */

__int64 __fastcall sub_140096368(__int64 a1, __int64 a2)
{
  if ( (byte_1401694F4 & 1) != 0 )
    sub_140090500(
      a1,
      *(_QWORD *)(a1 + 24) + 5064LL,
      a1 + 177,
      *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4720LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
      *(_QWORD *)(a1 + 24) + 5064LL,
      *(_BYTE *)(a1 + 104),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      *(_BYTE *)(a1 + 506) & 1,
      1);
  return sub_140007BD8(a1, a2);
}
