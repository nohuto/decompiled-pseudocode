/*
 * XREFs of sub_1400329B8 @ 0x1400329B8
 * Callers:
 *     sub_140032884 @ 0x140032884 (sub_140032884.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400329B8(__int64 a1)
{
  LARGE_INTEGER *v2; // rcx

  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v2 = (LARGE_INTEGER *)(a1 + 8);
  v2->QuadPart = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  QueryPerformanceFrequency(v2);
  return a1;
}
