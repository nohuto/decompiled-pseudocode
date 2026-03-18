/*
 * XREFs of MiVadBitToUserVa @ 0x140A59C50
 * Callers:
 *     MiClearVadCellBits @ 0x140442760 (MiClearVadCellBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadBitToUserVa(__int64 a1, __int64 a2)
{
  return (a2 + 8 * (*(_QWORD *)(a1 + 8) - qword_140E2DE48)) << 16;
}
