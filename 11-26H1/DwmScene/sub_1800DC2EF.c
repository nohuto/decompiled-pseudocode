/*
 * XREFs of sub_1800DC2EF @ 0x1800DC2EF
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038048 @ 0x180038048 (sub_180038048.c)
 */

__int64 __fastcall sub_1800DC2EF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180038048(*(_QWORD *)(a2 + 80));
  }
  return result;
}
