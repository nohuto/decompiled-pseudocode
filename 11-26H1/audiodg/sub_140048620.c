/*
 * XREFs of sub_140048620 @ 0x140048620
 * Callers:
 *     sub_140039A68 @ 0x140039A68 (sub_140039A68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140048620(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = off_1400BB1C0;
  result = a1;
  *(_DWORD *)(a1 + 16) = 1;
  return result;
}
