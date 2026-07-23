/*
 * XREFs of strpbrk @ 0x18012C930
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

char *__cdecl strpbrk(const char *Str, const char *Control)
{
  _OWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF

  memset(v4, 0, sizeof(v4));
  while ( *Control )
    _bittestandset((signed __int32 *)v4, *(unsigned __int8 *)Control++);
  while ( 1 )
  {
    if ( !*Str )
      return 0LL;
    if ( ((*((_BYTE *)v4 + ((unsigned __int64)*(unsigned __int8 *)Str >> 3)) >> (*Str & 7)) & 1) != 0 )
      break;
    ++Str;
  }
  return (char *)Str;
}
