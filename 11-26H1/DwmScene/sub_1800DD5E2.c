/*
 * XREFs of sub_1800DD5E2 @ 0x1800DD5E2
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018500 @ 0x180018500 (sub_180018500.c)
 */

__int64 __fastcall sub_1800DD5E2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_180018500();
  }
  return result;
}
