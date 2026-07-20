/*
 * XREFs of FindLFNorSFN_U @ 0x14001C750
 * Callers:
 *     GetLongPathNameW @ 0x14001C804 (GetLongPathNameW.c)
 * Callees:
 *     IsLongName_U @ 0x14001CC34 (IsLongName_U.c)
 */

__int64 __fastcall FindLFNorSFN_U(__int16 *a1, _QWORD *a2, __int16 **a3)
{
  __int16 v6; // ax
  __int64 result; // rax
  __int16 *i; // rbx
  __int16 v9; // ax
  __int64 v10; // r11

  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *a1;
      if ( !*a1 || v6 != 92 && v6 != 47 )
        break;
      ++a1;
    }
    result = 0LL;
    if ( !*a1 )
      break;
    for ( i = a1 + 1; ; ++i )
    {
      v9 = *i;
      if ( !*i || v9 == 92 || v9 == 47 )
        break;
    }
    if ( !(unsigned int)IsLongName_U(a1, i - a1) )
    {
      result = 1LL;
      if ( a2 )
      {
        if ( a3 )
        {
          *a2 = v10;
          *a3 = i;
        }
      }
      return result;
    }
    result = 0LL;
    if ( !*i )
      return result;
    a1 = i + 1;
  }
  return result;
}
