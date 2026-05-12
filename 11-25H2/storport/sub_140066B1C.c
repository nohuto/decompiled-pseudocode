/*
 * XREFs of sub_140066B1C @ 0x140066B1C
 * Callers:
 *     sub_14008F228 @ 0x14008F228 (sub_14008F228.c)
 *     sub_1401AD7BC @ 0x1401AD7BC (sub_1401AD7BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140066B1C(_WORD *a1, __int64 a2, _QWORD *a3)
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
