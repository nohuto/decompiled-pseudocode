/*
 * XREFs of sub_1400B0D5B @ 0x1400B0D5B
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 */

__int64 __fastcall sub_1400B0D5B(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_140003238(*(__int64 **)(a2 + 64));
  }
  return result;
}
