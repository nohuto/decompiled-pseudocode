/*
 * XREFs of sub_18007EB24 @ 0x18007EB24
 * Callers:
 *     sub_18007EAEC @ 0x18007EAEC (sub_18007EAEC.c)
 * Callees:
 *     sub_18007E978 @ 0x18007E978 (sub_18007E978.c)
 */

_DWORD *__fastcall sub_18007EB24(__int64 a1, unsigned __int16 a2, char a3)
{
  int v4; // edi
  _DWORD *result; // rax

  v4 = -(a3 != 0);
  result = (_DWORD *)sub_18007E978(a1, a2, 0);
  if ( *result != v4 )
  {
    *result = v4;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
