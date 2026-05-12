/*
 * XREFs of sub_140114444 @ 0x140114444
 * Callers:
 *     sub_140113EA8 @ 0x140113EA8 (sub_140113EA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140114444(int a1, char a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  *(_DWORD *)(a3 + 44) |= 4u;
  *(_BYTE *)a3 = 9;
  *(_DWORD *)(a3 + 4) = a1;
  *(_BYTE *)(a3 + 40) = a2 - 1;
  if ( a4 )
  {
    result = *a4;
    *(_QWORD *)(a3 + 24) = *a4;
  }
  return result;
}
