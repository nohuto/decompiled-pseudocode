/*
 * XREFs of KscpMemmoveUserToUser @ 0x140C64FA0
 * Callers:
 *     KscpMemmoveUserToUserSmap @ 0x140C65060 (KscpMemmoveUserToUserSmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KscpMemmoveUserToUser(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r11
  __int64 result; // rax
  unsigned __int64 v5; // rcx

  v3 = a2 + a3;
  if ( a2 < a1 && v3 > a1 )
  {
    v5 = a3 + a1;
    if ( a3 < 8 )
      goto LABEL_22;
    do
    {
      v5 -= 8LL;
      v3 -= 8LL;
      if ( v3 > 0x7FFFFFFF0000LL )
        v3 = 0x7FFFFFFF0000LL;
      result = 0x7FFFFFFF0000LL;
      if ( v5 > 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v5 = *(_QWORD *)v3;
      a3 -= 8LL;
    }
    while ( a3 >= 8 );
    if ( a3 )
    {
LABEL_22:
      do
      {
        --v5;
        if ( --v3 > 0x7FFFFFFF0000LL )
          v3 = 0x7FFFFFFF0000LL;
        result = 0x7FFFFFFF0000LL;
        if ( v5 > 0x7FFFFFFF0000LL )
          v5 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v5 = *(_BYTE *)v3;
        --a3;
      }
      while ( a3 );
    }
  }
  else
  {
    if ( a2 > 0x7FFFFFFF0000LL )
      a2 = 0x7FFFFFFF0000LL;
    if ( a1 > 0x7FFFFFFF0000LL )
      a1 = 0x7FFFFFFF0000LL;
    return (__int64)KscpMemcpy((_OWORD *)a1, (char *)a2, a3);
  }
  return result;
}
