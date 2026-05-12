/*
 * XREFs of sub_1401A9954 @ 0x1401A9954
 * Callers:
 *     sub_140134094 @ 0x140134094 (sub_140134094.c)
 *     sub_1401AAA18 @ 0x1401AAA18 (sub_1401AAA18.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1401A9954(__int64 a1, __int64 a2, char a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  _QWORD *result; // rax

  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( !a3 )
      v6 += *(_QWORD *)(a2 + 24);
  }
  else
  {
    v6 = 0LL;
  }
  *a4 = v6;
  if ( *(_DWORD *)(a1 + 36) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( a3 )
      v5 = v7;
    else
      v5 = v7 + *(_QWORD *)(a2 + 24);
  }
  result = a5;
  *a5 = v5;
  return result;
}
