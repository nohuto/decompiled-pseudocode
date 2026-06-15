/*
 * XREFs of sub_1400755E4 @ 0x1400755E4
 * Callers:
 *     sub_140075568 @ 0x140075568 (sub_140075568.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400755E4(__int64 a1)
{
  __int64 result; // rax

  EnterCriticalSection(*(LPCRITICAL_SECTION *)a1);
  result = 0LL;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
