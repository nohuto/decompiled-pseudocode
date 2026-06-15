/*
 * XREFs of sub_1400B4022 @ 0x1400B4022
 * Callers:
 *     <none>
 * Callees:
 *     sub_140056130 @ 0x140056130 (sub_140056130.c)
 */

__int64 __fastcall sub_1400B4022(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_140056130(*(__int64 **)(a2 + 64));
  }
  return result;
}
