/*
 * XREFs of sub_140004C44 @ 0x140004C44
 * Callers:
 *     sub_1400041F8 @ 0x1400041F8 (sub_1400041F8.c)
 * Callees:
 *     sub_140004C9C @ 0x140004C9C (sub_140004C9C.c)
 */

__int64 __fastcall sub_140004C44(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rcx

  v7 = (_QWORD *)(a1 + 48);
  *v7 = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = a6;
  *(_QWORD *)a1 = 1LL;
  *(_DWORD *)(a1 + 16) = a4;
  sub_140004C9C(v7, a3);
  return a1;
}
