/*
 * XREFs of sub_140025084 @ 0x140025084
 * Callers:
 *     sub_140023484 @ 0x140023484 (sub_140023484.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140025084(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 2LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 76) = 0;
  result = a1;
  *(_DWORD *)(a1 + 72) = -1;
  return result;
}
