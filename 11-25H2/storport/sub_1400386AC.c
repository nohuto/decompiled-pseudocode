/*
 * XREFs of sub_1400386AC @ 0x1400386AC
 * Callers:
 *     sub_140185144 @ 0x140185144 (sub_140185144.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400386AC(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 104) = a2;
  *(_WORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 100) = 4;
  *(_WORD *)(a1 + 98) = *(_WORD *)(result + 56);
  return result;
}
