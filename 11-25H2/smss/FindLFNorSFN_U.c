/*
 * XREFs of FindLFNorSFN_U @ 0x14001CC10
 * Callers:
 *     GetLongPathNameW @ 0x14001CCE0 (GetLongPathNameW.c)
 * Callees:
 *     IsLongName_U @ 0x14001D13C (IsLongName_U.c)
 */

__int64 __fastcall FindLFNorSFN_U(__int16 *a1, __int16 **a2, _QWORD *a3)
{
  __int64 result; // rax
  __int16 v7; // cx
  __int16 v8; // r9
  __int16 *i; // r11
  __int16 v10; // ax
  _WORD *v11; // r11

  result = 0LL;
  while ( *a1 )
  {
    v7 = *a1;
    do
    {
      if ( v7 != 92 )
      {
        v8 = v7;
        if ( v7 != 47 )
          break;
      }
      v8 = *++a1;
      v7 = *a1;
    }
    while ( *a1 );
    if ( !v8 )
      break;
    for ( i = a1 + 1; ; ++i )
    {
      v10 = *i;
      if ( !*i || v10 == 92 || v10 == 47 )
        break;
    }
    if ( !(unsigned int)IsLongName_U(a1, i - a1) )
    {
      result = 1LL;
      if ( a2 )
      {
        if ( a3 )
        {
          *a2 = a1;
          *a3 = v11;
        }
      }
      return result;
    }
    result = 0LL;
    if ( !*v11 )
      return result;
    a1 = v11 + 1;
  }
  return result;
}
