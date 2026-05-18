/*
 * XREFs of sub_18007EBF0 @ 0x18007EBF0
 * Callers:
 *     sub_18007EBB8 @ 0x18007EBB8 (sub_18007EBB8.c)
 * Callees:
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

_DWORD *__fastcall sub_18007EBF0(__int64 a1, unsigned __int16 a2, int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)sub_18007E978(a1, a2, 1);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
