/*
 * XREFs of sub_140025EA4 @ 0x140025EA4
 * Callers:
 *     sub_14001C940 @ 0x14001C940 (sub_14001C940.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140025EA4(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a1 )
  {
    result = 2147942487LL;
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
  result = v3 == 0 ? 0x80070057 : 0;
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
