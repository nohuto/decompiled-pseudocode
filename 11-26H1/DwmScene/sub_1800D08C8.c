/*
 * XREFs of sub_1800D08C8 @ 0x1800D08C8
 * Callers:
 *     sub_1800D2570 @ 0x1800D2570 (sub_1800D2570.c)
 * Callees:
 *     sub_180041860 @ 0x180041860 (sub_180041860.c)
 *     sub_1800D2658 @ 0x1800D2658 (sub_1800D2658.c)
 *     sub_1800D27A4 @ 0x1800D27A4 (sub_1800D27A4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800D08C8(__int64 a1, __int64 a2)
{
  _QWORD **v4; // rdi
  _QWORD *i; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_1800D27A4(a1 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  sub_180041860(a1 + 24, (__int64)(*(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24)) >> 3, *(_QWORD *)(a1 + 8));
  v4 = *(_QWORD ***)(a2 + 8);
  for ( i = *v4; i != v4; i = (_QWORD *)*i )
    sub_1800D2658(a1, v7, i + 2);
  return a1;
}
