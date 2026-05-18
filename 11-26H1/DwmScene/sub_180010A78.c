/*
 * XREFs of sub_180010A78 @ 0x180010A78
 * Callers:
 *     sub_18001086C @ 0x18001086C (sub_18001086C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010A78(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = 260LL;
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
      *a3 = 260 - v3;
    else
      *a3 = 0LL;
  }
  return result;
}
