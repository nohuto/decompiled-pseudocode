/*
 * XREFs of sub_14001826C @ 0x14001826C
 * Callers:
 *     sub_1400180E8 @ 0x1400180E8 (sub_1400180E8.c)
 * Callees:
 *     sub_1400182D4 @ 0x1400182D4 (sub_1400182D4.c)
 */

__int64 __fastcall sub_14001826C(__int64 a1)
{
  __int64 result; // rax

  sub_1400182D4(a1);
  *(_QWORD *)a1 = off_1400B8700;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 40), 0, 0);
  result = a1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  return result;
}
