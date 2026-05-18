/*
 * XREFs of sub_1800DCC9E @ 0x1800DCC9E
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800141F0 @ 0x1800141F0 (sub_1800141F0.c)
 */

__int64 __fastcall sub_1800DCC9E(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    return sub_1800141F0(*(_QWORD *)(a2 + 88));
  }
  return result;
}
