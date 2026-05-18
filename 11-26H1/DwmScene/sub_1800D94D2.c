/*
 * XREFs of sub_1800D94D2 @ 0x1800D94D2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B41C @ 0x18002B41C (sub_18002B41C.c)
 */

__int64 __fastcall sub_1800D94D2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_18002B41C();
  }
  return result;
}
