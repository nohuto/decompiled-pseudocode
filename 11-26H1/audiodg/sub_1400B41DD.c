/*
 * XREFs of sub_1400B41DD @ 0x1400B41DD
 * Callers:
 *     <none>
 * Callees:
 *     sub_140007258 @ 0x140007258 (sub_140007258.c)
 */

__int64 __fastcall sub_1400B41DD(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_140007258(*(_QWORD *)(a2 + 80));
  }
  return result;
}
