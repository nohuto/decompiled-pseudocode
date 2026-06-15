/*
 * XREFs of sub_140019100 @ 0x140019100
 * Callers:
 *     sub_140047E70 @ 0x140047E70 (sub_140047E70.c)
 * Callees:
 *     sub_1400182D4 @ 0x1400182D4 (sub_1400182D4.c)
 *     sub_140044584 @ 0x140044584 (sub_140044584.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_140019100(__int64 a1)
{
  _QWORD *v2; // rax

  sub_1400182D4((_QWORD *)a1);
  *(_QWORD *)a1 = off_1400B8740;
  *(_QWORD *)(a1 + 16) = 3LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 48), 0, 0);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v2 = (_QWORD *)sub_140044584(24LL);
  *v2 = v2;
  v2[1] = v2;
  *(_QWORD *)(a1 + 88) = v2;
  *(_BYTE *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  return a1;
}
