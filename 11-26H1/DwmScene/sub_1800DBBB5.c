/*
 * XREFs of sub_1800DBBB5 @ 0x1800DBBB5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004F798 @ 0x18004F798 (sub_18004F798.c)
 */

__int64 __fastcall sub_1800DBBB5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return sub_18004F798();
  }
  return result;
}
