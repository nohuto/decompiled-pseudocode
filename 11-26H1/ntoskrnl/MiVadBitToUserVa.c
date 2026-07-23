/*
 * XREFs of MiVadBitToUserVa @ 0x140A66BC0
 * Callers:
 *     MiClearVadCellBits @ 0x14043B270 (MiClearVadCellBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadBitToUserVa(__int64 a1, __int64 a2)
{
  return (a2 + 8 * (*(_QWORD *)(a1 + 8) - qword_140E2DFC8)) << 16;
}
