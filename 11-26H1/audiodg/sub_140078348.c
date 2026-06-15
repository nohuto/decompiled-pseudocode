/*
 * XREFs of sub_140078348 @ 0x140078348
 * Callers:
 *     sub_140076248 @ 0x140076248 (sub_140076248.c)
 *     sub_1400768B4 @ 0x1400768B4 (sub_1400768B4.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall sub_140078348(_QWORD **a1)
{
  _DWORD **result; // rax
  __int64 v2; // r9
  _DWORD *v3; // rdx

  result = (_DWORD **)*a1;
  v2 = 0LL;
  v3 = (_DWORD *)**a1;
  if ( *v3 )
  {
    do
    {
      *(_QWORD *)(*a1[1] + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = (_DWORD **)*a1;
      v3 = (_DWORD *)**a1;
    }
    while ( (unsigned int)v2 < *v3 );
  }
  *v3 = 0;
  return result;
}
