/*
 * XREFs of sub_140032B30 @ 0x140032B30
 * Callers:
 *     sub_140032A70 @ 0x140032A70 (sub_140032A70.c)
 * Callees:
 *     sub_140032B80 @ 0x140032B80 (sub_140032B80.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140032B30(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = TickCount64;
  *(_QWORD *)(a1 + 72) = TickCount64;
  *(_QWORD *)(a1 + 88) = TickCount64;
  return sub_140032B80(a1);
}
