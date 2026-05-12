/*
 * XREFs of sub_140066B78 @ 0x140066B78
 * Callers:
 *     sub_1401AD7BC @ 0x1401AD7BC (sub_1401AD7BC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140066B78(unsigned __int16 *a1, _WORD *a2)
{
  unsigned __int16 v2; // r9
  unsigned __int16 v4; // r8
  __int64 result; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  __int16 v9; // cx
  __int64 v10; // rbx

  v2 = *a1;
  if ( (*a1 & 1) != 0 )
    return 3221225485LL;
  v4 = a1[1];
  if ( (v4 & 1) != 0 )
    return 3221225485LL;
  if ( v2 > v4 )
    return 3221225485LL;
  if ( v4 == 0xFFFF )
    return 3221225485LL;
  result = 0LL;
  if ( !*((_QWORD *)a1 + 1) && (v2 || v4) )
    return 3221225485LL;
  v6 = 0x7FFFLL;
  v7 = (unsigned __int64)a1[1] >> 1;
  v8 = *((_QWORD *)a1 + 1);
  v9 = 0;
  if ( v7 )
  {
    v10 = v8 - (_QWORD)a2;
    while ( v6 )
    {
      if ( *a2 )
      {
        *(_WORD *)((char *)a2 + v10) = *a2;
        --v6;
        ++a2;
        ++v9;
        if ( --v7 )
          continue;
      }
      if ( v7 || !v6 )
        break;
      goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    if ( *a2 )
      result = 2147483653LL;
  }
  *a1 = 2 * v9;
  return result;
}
