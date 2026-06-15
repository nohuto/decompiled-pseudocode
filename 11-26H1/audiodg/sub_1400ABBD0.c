/*
 * XREFs of sub_1400ABBD0 @ 0x1400ABBD0
 * Callers:
 *     sub_1400AB48C @ 0x1400AB48C (sub_1400AB48C.c)
 *     sub_1400AB544 @ 0x1400AB544 (sub_1400AB544.c)
 * Callees:
 *     sub_1400ABB40 @ 0x1400ABB40 (sub_1400ABB40.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1400ABBD0(__int64 a1)
{
  ULONGLONG TickCount64; // rax

  TickCount64 = GetTickCount64();
  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 64) = TickCount64;
  *(_QWORD *)(a1 + 72) = TickCount64;
  *(_QWORD *)(a1 + 88) = TickCount64;
  sub_1400ABB40(a1);
}
