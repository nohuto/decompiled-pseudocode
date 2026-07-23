/*
 * XREFs of wcstok_s @ 0x14053F224
 * Callers:
 *     GetOperatorIndexByName @ 0x140A6FAC4 (GetOperatorIndexByName.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

wchar_t *__cdecl wcstok_s(wchar_t *Str, const wchar_t *Delim, wchar_t **Context)
{
  wchar_t v5; // ax
  wchar_t v6; // r11
  const wchar_t *v7; // rdx
  wchar_t v8; // r8
  wchar_t *v9; // rdi
  wchar_t *result; // rax
  const wchar_t *v11; // r8
  wchar_t v12; // dx
  wchar_t *v13; // rdx

  if ( !Context || !Delim )
    goto LABEL_26;
  if ( !Str )
  {
    if ( *Context )
    {
      Str = *Context;
      goto LABEL_6;
    }
LABEL_26:
    xHalTimerWatchdogStop();
    return 0LL;
  }
LABEL_6:
  v5 = *Str;
  if ( *Str )
  {
    v6 = *Delim;
    do
    {
      v7 = Delim;
      if ( v6 )
      {
        v8 = v6;
        do
        {
          if ( v8 == v5 )
            break;
          v8 = *++v7;
        }
        while ( *v7 );
      }
      if ( !*v7 )
        break;
      v5 = *++Str;
    }
    while ( *Str );
  }
  v9 = Str;
  result = Str;
  if ( *Str )
  {
    while ( 1 )
    {
      v11 = Delim;
      if ( *Delim )
      {
        v12 = *Delim;
        do
        {
          if ( v12 == *Str )
            break;
          v12 = *++v11;
        }
        while ( *v11 );
      }
      v13 = Str + 1;
      if ( *v11 )
        break;
      ++Str;
      if ( !*v13 )
        goto LABEL_23;
    }
    *Str++ = 0;
  }
LABEL_23:
  *Context = Str;
  if ( v9 == Str )
    return 0LL;
  return result;
}
