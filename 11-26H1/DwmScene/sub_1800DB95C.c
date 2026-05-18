/*
 * XREFs of sub_1800DB95C @ 0x1800DB95C
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004D1C8 @ 0x18004D1C8 (sub_18004D1C8.c)
 */

__int64 __fastcall sub_1800DB95C(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18004D1C8(*(void ***)(a2 + 40));
  }
  return result;
}
