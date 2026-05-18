/*
 * XREFs of sub_1800DD5B5 @ 0x1800DD5B5
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018500 @ 0x180018500 (sub_180018500.c)
 */

__int64 __fastcall sub_1800DD5B5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return sub_180018500();
  }
  return result;
}
