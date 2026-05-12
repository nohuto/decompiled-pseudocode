/*
 * XREFs of sub_140066AC0 @ 0x140066AC0
 * Callers:
 *     sub_140190904 @ 0x140190904 (sub_140190904.c)
 *     sub_1401AD7BC @ 0x1401AD7BC (sub_1401AD7BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140066AC0(_BYTE *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a1 )
  {
    result = 3221225485LL;
LABEL_12:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  v3 = a2;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = a2 - v3;
    else
      *a3 = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
